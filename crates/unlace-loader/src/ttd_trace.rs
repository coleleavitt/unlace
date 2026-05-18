//! WinDbg Time Travel Debugging (TTD) `.run` file ingestion.
//!
//! TTD is Microsoft's time-travel debugging format that records all execution
//! of a process, allowing forward and backward replay. The `.run` file contains:
//!
//! - A header with version info and trace metadata
//! - Thread records with instruction counts
//! - Memory delta records (address, old value, new value)
//! - Basic block execution records
//! - Module list (loaded DLLs with base addresses)
//!
//! Since the format is proprietary and not fully documented, this module
//! implements parsing of the known structural elements.

use std::collections::BTreeMap;

// ---------------------------------------------------------------------------
// Core types
// ---------------------------------------------------------------------------

/// Magic bytes at the start of a TTD `.run` file.
pub const TTD_RUN_MAGIC: &[u8; 8] = b"TTDTrace";

/// TTD trace file version we understand.
pub const TTD_VERSION_MIN: u32 = 1;
pub const TTD_VERSION_MAX: u32 = 7;

/// A position in the TTD trace timeline.
///
/// Positions are ordered first by sequence number (which corresponds to
/// a scheduling quantum / basic-block boundary), then by the thread that
/// was executing.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct TtdPosition {
    /// The thread that owns this position.
    pub thread: u32,
    /// Monotonically increasing sequence number within the thread.
    pub sequence: u64,
}

/// A recorded thread in the trace.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdThread {
    /// OS thread ID.
    pub id: u32,
    /// Total number of instructions executed by this thread in the trace.
    pub instruction_count: u64,
}

/// A loaded module (DLL/EXE) recorded in the trace.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdModule {
    /// Module name (e.g. "ntdll.dll").
    pub name: String,
    /// Base address where the module was loaded.
    pub base: u64,
    /// Size of the module in memory.
    pub size: u64,
}

/// A memory write delta recorded during execution.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdMemoryDelta {
    /// Position in the trace when the write occurred.
    pub position: TtdPosition,
    /// Virtual address written to.
    pub address: u64,
    /// Previous value at the address.
    pub old_value: Vec<u8>,
    /// New value written.
    pub new_value: Vec<u8>,
}

/// A basic block execution record.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdBasicBlock {
    /// Position when this block was executed.
    pub position: TtdPosition,
    /// Start address of the basic block.
    pub address: u64,
    /// Number of instructions in the block.
    pub instruction_count: u16,
}

/// Register state snapshot at a given position.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdRegisterState {
    /// Position this snapshot corresponds to.
    pub position: TtdPosition,
    /// General-purpose registers (indexed by architecture-specific ID).
    pub gp_regs: Vec<u64>,
    /// Instruction pointer.
    pub rip: u64,
    /// Stack pointer.
    pub rsp: u64,
    /// Flags register.
    pub rflags: u64,
}

/// The top-level TTD trace, containing all parsed data from a `.run` file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdTrace {
    /// Format version of the trace file.
    pub version: u32,
    /// Threads recorded in the trace.
    pub threads: Vec<TtdThread>,
    /// Modules loaded during the trace.
    pub modules: Vec<TtdModule>,
    /// Memory deltas, sorted by position.
    pub memory_deltas: Vec<TtdMemoryDelta>,
    /// Basic block execution records, sorted by position.
    pub basic_blocks: Vec<TtdBasicBlock>,
    /// Register state snapshots (sampled at key positions).
    pub register_snapshots: Vec<TtdRegisterState>,
}

// ---------------------------------------------------------------------------
// Header parsing
// ---------------------------------------------------------------------------

/// TTD `.run` file header (first 64 bytes).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TtdRunHeader {
    /// Format version.
    pub version: u32,
    /// Architecture: 0 = x86, 1 = x64, 2 = ARM64.
    pub arch: u32,
    /// Number of thread records in the index.
    pub thread_count: u32,
    /// Number of module records in the index.
    pub module_count: u32,
    /// Offset to the thread index table.
    pub thread_table_offset: u64,
    /// Offset to the module index table.
    pub module_table_offset: u64,
    /// Offset to the memory delta stream.
    pub memory_stream_offset: u64,
    /// Offset to the basic block stream.
    pub bb_stream_offset: u64,
}

/// Detect whether `data` starts with TTD `.run` magic.
pub fn detect_ttd_run(data: &[u8]) -> bool {
    data.len() >= 8 && &data[0..8] == TTD_RUN_MAGIC
}

/// Parse the TTD `.run` file header.
pub fn parse_run_header(data: &[u8]) -> Option<TtdRunHeader> {
    if data.len() < 64 || !detect_ttd_run(data) {
        return None;
    }

    let version = u32::from_le_bytes(data[8..12].try_into().ok()?);
    let arch = u32::from_le_bytes(data[12..16].try_into().ok()?);
    let thread_count = u32::from_le_bytes(data[16..20].try_into().ok()?);
    let module_count = u32::from_le_bytes(data[20..24].try_into().ok()?);
    let thread_table_offset = u64::from_le_bytes(data[24..32].try_into().ok()?);
    let module_table_offset = u64::from_le_bytes(data[32..40].try_into().ok()?);
    let memory_stream_offset = u64::from_le_bytes(data[40..48].try_into().ok()?);
    let bb_stream_offset = u64::from_le_bytes(data[48..56].try_into().ok()?);

    Some(TtdRunHeader {
        version,
        arch,
        thread_count,
        module_count,
        thread_table_offset,
        module_table_offset,
        memory_stream_offset,
        bb_stream_offset,
    })
}

// ---------------------------------------------------------------------------
// Thread table parsing
// ---------------------------------------------------------------------------

/// Parse the thread table from the `.run` file.
///
/// Each thread record is 12 bytes: `[thread_id: u32][instruction_count: u64]`.
pub fn parse_thread_table(data: &[u8], header: &TtdRunHeader) -> Vec<TtdThread> {
    let offset = header.thread_table_offset as usize;
    let count = header.thread_count as usize;
    let record_size = 12; // 4 + 8

    let mut threads = Vec::with_capacity(count);
    for i in 0..count {
        let base = offset + i * record_size;
        if base + record_size > data.len() {
            break;
        }
        let id = u32::from_le_bytes(data[base..base + 4].try_into().unwrap_or([0; 4]));
        let instruction_count =
            u64::from_le_bytes(data[base + 4..base + 12].try_into().unwrap_or([0; 8]));
        threads.push(TtdThread {
            id,
            instruction_count,
        });
    }
    threads
}

// ---------------------------------------------------------------------------
// Module table parsing
// ---------------------------------------------------------------------------

/// Parse the module table from the `.run` file.
///
/// Each module record is: `[base: u64][size: u64][name_len: u16][name: [u8; name_len]]`.
pub fn parse_module_table(data: &[u8], header: &TtdRunHeader) -> Vec<TtdModule> {
    let mut offset = header.module_table_offset as usize;
    let count = header.module_count as usize;

    let mut modules = Vec::with_capacity(count);
    for _ in 0..count {
        if offset + 18 > data.len() {
            break;
        }
        let base = u64::from_le_bytes(data[offset..offset + 8].try_into().unwrap_or([0; 8]));
        let size = u64::from_le_bytes(data[offset + 8..offset + 16].try_into().unwrap_or([0; 8]));
        let name_len =
            u16::from_le_bytes(data[offset + 16..offset + 18].try_into().unwrap_or([0; 2]))
                as usize;
        offset += 18;

        if offset + name_len > data.len() {
            break;
        }
        let name = String::from_utf8_lossy(&data[offset..offset + name_len]).to_string();
        offset += name_len;

        modules.push(TtdModule { name, base, size });
    }
    modules
}

// ---------------------------------------------------------------------------
// Memory delta parsing
// ---------------------------------------------------------------------------

/// Parse memory deltas from the memory stream.
///
/// Each record: `[thread: u32][sequence: u64][address: u64][len: u16][old: [u8; len]][new: [u8; len]]`.
pub fn parse_memory_deltas(
    data: &[u8],
    header: &TtdRunHeader,
    limit: usize,
) -> Vec<TtdMemoryDelta> {
    let mut offset = header.memory_stream_offset as usize;
    let mut deltas = Vec::new();

    while deltas.len() < limit {
        // Minimum record size: 4 + 8 + 8 + 2 = 22 bytes (plus variable data).
        if offset + 22 > data.len() {
            break;
        }

        let thread = u32::from_le_bytes(data[offset..offset + 4].try_into().unwrap_or([0; 4]));
        let sequence =
            u64::from_le_bytes(data[offset + 4..offset + 12].try_into().unwrap_or([0; 8]));
        let address =
            u64::from_le_bytes(data[offset + 12..offset + 20].try_into().unwrap_or([0; 8]));
        let len = u16::from_le_bytes(data[offset + 20..offset + 22].try_into().unwrap_or([0; 2]))
            as usize;
        offset += 22;

        if len == 0 || offset + len * 2 > data.len() {
            break;
        }

        let old_value = data[offset..offset + len].to_vec();
        offset += len;
        let new_value = data[offset..offset + len].to_vec();
        offset += len;

        deltas.push(TtdMemoryDelta {
            position: TtdPosition { thread, sequence },
            address,
            old_value,
            new_value,
        });
    }
    deltas
}

// ---------------------------------------------------------------------------
// Query API
// ---------------------------------------------------------------------------

impl TtdTrace {
    /// Parse a complete TTD `.run` file.
    pub fn parse(data: &[u8]) -> Option<Self> {
        let header = parse_run_header(data)?;

        if header.version < TTD_VERSION_MIN || header.version > TTD_VERSION_MAX {
            return None;
        }

        let threads = parse_thread_table(data, &header);
        let modules = parse_module_table(data, &header);
        let memory_deltas = parse_memory_deltas(data, &header, usize::MAX);

        Some(TtdTrace {
            version: header.version,
            threads,
            modules,
            memory_deltas,
            basic_blocks: Vec::new(),
            register_snapshots: Vec::new(),
        })
    }

    /// Query the memory value at a given address and position.
    ///
    /// Walks the memory deltas backwards from `pos` to find the most recent
    /// write to `address`. Returns the value after the write, or `None` if
    /// no write to that address was recorded before `pos`.
    pub fn memory_at(&self, address: u64, size: usize, pos: TtdPosition) -> Option<Vec<u8>> {
        // Find the latest delta at or before `pos` that covers `address`.
        for delta in self.memory_deltas.iter().rev() {
            if delta.position > pos {
                continue;
            }
            let delta_end = delta.address + delta.new_value.len() as u64;
            if delta.address <= address && delta_end >= address + size as u64 {
                let start = (address - delta.address) as usize;
                return Some(delta.new_value[start..start + size].to_vec());
            }
        }
        None
    }

    /// Query a register value at a given position.
    ///
    /// Finds the nearest register snapshot at or before `pos` and returns
    /// the requested register value. Register indices follow x86-64 convention:
    /// 0=RAX, 1=RCX, 2=RDX, 3=RBX, 4=RSP, 5=RBP, 6=RSI, 7=RDI, 8-15=R8-R15.
    pub fn register_at(&self, reg_index: usize, pos: TtdPosition) -> Option<u64> {
        let snapshot = self
            .register_snapshots
            .iter()
            .rev()
            .find(|s| s.position <= pos)?;
        snapshot.gp_regs.get(reg_index).copied()
    }

    /// Query the instruction pointer at a given position.
    pub fn rip_at(&self, pos: TtdPosition) -> Option<u64> {
        let snapshot = self
            .register_snapshots
            .iter()
            .rev()
            .find(|s| s.position <= pos)?;
        Some(snapshot.rip)
    }

    /// Find the module containing `address`.
    pub fn module_at(&self, address: u64) -> Option<&TtdModule> {
        self.modules
            .iter()
            .find(|m| address >= m.base && address < m.base + m.size)
    }

    /// Enumerate all positions where the given address was written.
    pub fn writes_to(&self, address: u64) -> Vec<&TtdMemoryDelta> {
        self.memory_deltas
            .iter()
            .filter(|d| {
                let end = d.address + d.new_value.len() as u64;
                d.address <= address && end > address
            })
            .collect()
    }

    /// Get the time range (first and last position) for a given thread.
    pub fn thread_time_range(&self, thread_id: u32) -> Option<(TtdPosition, TtdPosition)> {
        let thread_deltas: Vec<_> = self
            .memory_deltas
            .iter()
            .filter(|d| d.position.thread == thread_id)
            .collect();

        if thread_deltas.is_empty() {
            // Fall back to basic blocks.
            let thread_bbs: Vec<_> = self
                .basic_blocks
                .iter()
                .filter(|b| b.position.thread == thread_id)
                .collect();
            if thread_bbs.is_empty() {
                return None;
            }
            return Some((thread_bbs.first()?.position, thread_bbs.last()?.position));
        }

        Some((
            thread_deltas.first()?.position,
            thread_deltas.last()?.position,
        ))
    }

    /// Build an index of memory state at a specific position, returning
    /// a map of address → value for all writes up to (and including) `pos`.
    pub fn memory_snapshot_at(&self, pos: TtdPosition) -> BTreeMap<u64, Vec<u8>> {
        let mut snapshot = BTreeMap::new();
        for delta in &self.memory_deltas {
            if delta.position > pos {
                break;
            }
            snapshot.insert(delta.address, delta.new_value.clone());
        }
        snapshot
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    /// Build a minimal valid `.run` file for testing.
    fn build_test_run_file() -> Vec<u8> {
        let mut data = vec![0u8; 256];

        // Magic.
        data[0..8].copy_from_slice(TTD_RUN_MAGIC);
        // Version = 2.
        data[8..12].copy_from_slice(&2u32.to_le_bytes());
        // Arch = 1 (x64).
        data[12..16].copy_from_slice(&1u32.to_le_bytes());
        // Thread count = 2.
        data[16..20].copy_from_slice(&2u32.to_le_bytes());
        // Module count = 1.
        data[20..24].copy_from_slice(&1u32.to_le_bytes());
        // Thread table offset = 64.
        data[24..32].copy_from_slice(&64u64.to_le_bytes());
        // Module table offset = 88.
        data[32..40].copy_from_slice(&88u64.to_le_bytes());
        // Memory stream offset = 120.
        data[40..48].copy_from_slice(&120u64.to_le_bytes());
        // BB stream offset = 200.
        data[48..56].copy_from_slice(&200u64.to_le_bytes());

        // Thread table at offset 64: two records of 12 bytes each.
        // Thread 1: id=1000, instruction_count=5000.
        data[64..68].copy_from_slice(&1000u32.to_le_bytes());
        data[68..76].copy_from_slice(&5000u64.to_le_bytes());
        // Thread 2: id=1001, instruction_count=3000.
        data[76..80].copy_from_slice(&1001u32.to_le_bytes());
        data[80..88].copy_from_slice(&3000u64.to_le_bytes());

        // Module table at offset 88: one module.
        // base = 0x7FF600000000.
        data[88..96].copy_from_slice(&0x7FF600000000u64.to_le_bytes());
        // size = 0x10000.
        data[96..104].copy_from_slice(&0x10000u64.to_le_bytes());
        // name_len = 10.
        data[104..106].copy_from_slice(&10u16.to_le_bytes());
        // name = "ntdll.dll\0" (10 bytes).
        data[106..116].copy_from_slice(b"ntdll.dll\0");

        // Memory delta at offset 120.
        // thread=1000, sequence=42, address=0x7FF600001000, len=4.
        data[120..124].copy_from_slice(&1000u32.to_le_bytes());
        data[124..132].copy_from_slice(&42u64.to_le_bytes());
        data[132..140].copy_from_slice(&0x7FF600001000u64.to_le_bytes());
        data[140..142].copy_from_slice(&4u16.to_le_bytes());
        // old_value = [0x01, 0x02, 0x03, 0x04].
        data[142..146].copy_from_slice(&[0x01, 0x02, 0x03, 0x04]);
        // new_value = [0xAA, 0xBB, 0xCC, 0xDD].
        data[146..150].copy_from_slice(&[0xAA, 0xBB, 0xCC, 0xDD]);

        data
    }

    #[test]
    fn test_detect_ttd_run() {
        let data = build_test_run_file();
        assert!(detect_ttd_run(&data));
        assert!(!detect_ttd_run(&[0; 64]));
        assert!(!detect_ttd_run(&[0; 4]));
    }

    #[test]
    fn test_parse_header() {
        let data = build_test_run_file();
        let header = parse_run_header(&data).unwrap();
        assert_eq!(header.version, 2);
        assert_eq!(header.arch, 1);
        assert_eq!(header.thread_count, 2);
        assert_eq!(header.module_count, 1);
        assert_eq!(header.thread_table_offset, 64);
        assert_eq!(header.module_table_offset, 88);
    }

    #[test]
    fn test_parse_threads() {
        let data = build_test_run_file();
        let header = parse_run_header(&data).unwrap();
        let threads = parse_thread_table(&data, &header);
        assert_eq!(threads.len(), 2);
        assert_eq!(threads[0].id, 1000);
        assert_eq!(threads[0].instruction_count, 5000);
        assert_eq!(threads[1].id, 1001);
        assert_eq!(threads[1].instruction_count, 3000);
    }

    #[test]
    fn test_parse_modules() {
        let data = build_test_run_file();
        let header = parse_run_header(&data).unwrap();
        let modules = parse_module_table(&data, &header);
        assert_eq!(modules.len(), 1);
        assert_eq!(modules[0].name, "ntdll.dll\0");
        assert_eq!(modules[0].base, 0x7FF600000000);
        assert_eq!(modules[0].size, 0x10000);
    }

    #[test]
    fn test_parse_memory_deltas() {
        let data = build_test_run_file();
        let header = parse_run_header(&data).unwrap();
        let deltas = parse_memory_deltas(&data, &header, 100);
        assert_eq!(deltas.len(), 1);
        assert_eq!(deltas[0].position.thread, 1000);
        assert_eq!(deltas[0].position.sequence, 42);
        assert_eq!(deltas[0].address, 0x7FF600001000);
        assert_eq!(deltas[0].old_value, vec![0x01, 0x02, 0x03, 0x04]);
        assert_eq!(deltas[0].new_value, vec![0xAA, 0xBB, 0xCC, 0xDD]);
    }

    #[test]
    fn test_full_parse() {
        let data = build_test_run_file();
        let trace = TtdTrace::parse(&data).unwrap();
        assert_eq!(trace.version, 2);
        assert_eq!(trace.threads.len(), 2);
        assert_eq!(trace.modules.len(), 1);
        assert_eq!(trace.memory_deltas.len(), 1);
    }

    #[test]
    fn test_memory_at() {
        let data = build_test_run_file();
        let trace = TtdTrace::parse(&data).unwrap();

        // Query at position after the write.
        let pos = TtdPosition {
            thread: 1000,
            sequence: 100,
        };
        let val = trace.memory_at(0x7FF600001000, 4, pos).unwrap();
        assert_eq!(val, vec![0xAA, 0xBB, 0xCC, 0xDD]);

        // Query at position before the write returns None.
        let pos_before = TtdPosition {
            thread: 1000,
            sequence: 10,
        };
        assert!(trace.memory_at(0x7FF600001000, 4, pos_before).is_none());
    }

    #[test]
    fn test_module_at() {
        let data = build_test_run_file();
        let trace = TtdTrace::parse(&data).unwrap();

        let m = trace.module_at(0x7FF600005000).unwrap();
        assert_eq!(m.base, 0x7FF600000000);

        assert!(trace.module_at(0x1000).is_none());
    }

    #[test]
    fn test_writes_to() {
        let data = build_test_run_file();
        let trace = TtdTrace::parse(&data).unwrap();

        let writes = trace.writes_to(0x7FF600001002);
        assert_eq!(writes.len(), 1);
        assert_eq!(writes[0].position.sequence, 42);

        let writes_miss = trace.writes_to(0xDEAD);
        assert!(writes_miss.is_empty());
    }

    #[test]
    fn test_register_at() {
        let trace = TtdTrace {
            version: 2,
            threads: vec![TtdThread {
                id: 1,
                instruction_count: 100,
            }],
            modules: vec![],
            memory_deltas: vec![],
            basic_blocks: vec![],
            register_snapshots: vec![TtdRegisterState {
                position: TtdPosition {
                    thread: 1,
                    sequence: 50,
                },
                gp_regs: vec![0x1234, 0x5678, 0x9ABC],
                rip: 0x7FF600001000,
                rsp: 0x00007FFEAABB0000,
                rflags: 0x246,
            }],
        };

        let pos = TtdPosition {
            thread: 1,
            sequence: 60,
        };
        assert_eq!(trace.register_at(0, pos), Some(0x1234)); // RAX
        assert_eq!(trace.register_at(1, pos), Some(0x5678)); // RCX
        assert_eq!(trace.rip_at(pos), Some(0x7FF600001000));

        // Before any snapshot.
        let pos_early = TtdPosition {
            thread: 1,
            sequence: 10,
        };
        assert_eq!(trace.register_at(0, pos_early), None);
    }

    #[test]
    fn test_invalid_magic_rejected() {
        let mut data = build_test_run_file();
        data[0..8].copy_from_slice(b"NOTVALID");
        assert!(!detect_ttd_run(&data));
        assert!(TtdTrace::parse(&data).is_none());
    }

    #[test]
    fn test_unsupported_version_rejected() {
        let mut data = build_test_run_file();
        // Set version to 99.
        data[8..12].copy_from_slice(&99u32.to_le_bytes());
        assert!(TtdTrace::parse(&data).is_none());
    }

    #[test]
    fn test_memory_snapshot_at() {
        let data = build_test_run_file();
        let trace = TtdTrace::parse(&data).unwrap();

        let pos = TtdPosition {
            thread: 1000,
            sequence: 100,
        };
        let snap = trace.memory_snapshot_at(pos);
        assert_eq!(
            snap.get(&0x7FF600001000).unwrap(),
            &vec![0xAA, 0xBB, 0xCC, 0xDD]
        );
    }

    #[test]
    fn test_position_ordering() {
        let a = TtdPosition {
            thread: 1,
            sequence: 10,
        };
        let b = TtdPosition {
            thread: 1,
            sequence: 20,
        };
        let c = TtdPosition {
            thread: 2,
            sequence: 5,
        };
        assert!(a < b);
        // thread is compared first (u32), then sequence.
        assert!(a < c);
    }
}
