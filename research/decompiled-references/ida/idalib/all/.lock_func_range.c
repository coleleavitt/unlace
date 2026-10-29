// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7890
// Name:            .lock_func_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7890 jmp     cs:off_2C79430
//
// Resolved target: lock_func_range
// Target address:  0x5C7210
// GOT/IAT slot:    0x2C79430
// Slot symbol:     off_2C79430
// Target type:     <no type info>
// ============================================================

void .lock_func_range(/* see target signature */)
{
    // Tail-call to lock_func_range via GOT/IAT indirection
    return lock_func_range(/* forwarded args */);
}

