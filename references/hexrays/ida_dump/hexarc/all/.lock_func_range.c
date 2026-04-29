// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A2B0
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A2B0 jmp     cs:off_4B9940
//
// Resolved target: lock_func_range
// Target address:  0x4BC340
// GOT/IAT slot:    0x4B9940
// Slot symbol:     off_4B9940
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

