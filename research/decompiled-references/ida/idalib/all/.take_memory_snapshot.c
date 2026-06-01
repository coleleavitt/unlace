// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC380
// Name:            .take_memory_snapshot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC380 jmp     cs:off_2C7B9A8
//
// Resolved target: take_memory_snapshot
// Target address:  0x510A90
// GOT/IAT slot:    0x2C7B9A8
// Slot symbol:     off_2C7B9A8
// Target type:     <no type info>
// ============================================================

void .take_memory_snapshot(/* see target signature */)
{
    // Tail-call to take_memory_snapshot via GOT/IAT indirection
    return take_memory_snapshot(/* forwarded args */);
}

