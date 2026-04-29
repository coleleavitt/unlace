// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E2F0
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E2F0 jmp     cs:off_4E9960
//
// Resolved target: lock_func_range
// Target address:  0x4EC380
// GOT/IAT slot:    0x4E9960
// Slot symbol:     off_4E9960
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

