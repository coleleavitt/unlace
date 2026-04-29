// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33B0
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33B0 jmp     cs:off_201C0
//
// Resolved target: lock_func_range
// Target address:  0x21AE0
// GOT/IAT slot:    0x201C0
// Slot symbol:     off_201C0
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

