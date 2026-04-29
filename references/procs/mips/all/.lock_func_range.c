// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19800
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19800 jmp     cs:off_753E8
//
// Resolved target: lock_func_range
// Target address:  0x75C38
// GOT/IAT slot:    0x753E8
// Slot symbol:     off_753E8
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

