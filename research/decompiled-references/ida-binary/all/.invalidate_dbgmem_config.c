// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A880
// Name:            .invalidate_dbgmem_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A880 jmp     cs:invalidate_dbgmem_config_ptr
//
// Resolved target: invalidate_dbgmem_config
// Target address:  0x8D91A0
// GOT/IAT slot:    0x8A40E0
// Slot symbol:     invalidate_dbgmem_config_ptr
// Target type:     <no type info>
// ============================================================

void .invalidate_dbgmem_config(/* see target signature */)
{
    // Tail-call to invalidate_dbgmem_config via GOT/IAT indirection
    return invalidate_dbgmem_config(/* forwarded args */);
}

