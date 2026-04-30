// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1194C0
// Name:            .take_memory_snapshot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1194C0 jmp     cs:take_memory_snapshot_ptr
//
// Resolved target: take_memory_snapshot
// Target address:  0x8D84D0
// GOT/IAT slot:    0x8A3700
// Slot symbol:     take_memory_snapshot_ptr
// Target type:     <no type info>
// ============================================================

void .take_memory_snapshot(/* see target signature */)
{
    // Tail-call to take_memory_snapshot via GOT/IAT indirection
    return take_memory_snapshot(/* forwarded args */);
}

