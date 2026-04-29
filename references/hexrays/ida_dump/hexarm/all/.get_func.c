// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DE70
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DE70 jmp     cs:off_4E9720
//
// Resolved target: get_func
// Target address:  0x4EC138
// GOT/IAT slot:    0x4E9720
// Slot symbol:     off_4E9720
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

