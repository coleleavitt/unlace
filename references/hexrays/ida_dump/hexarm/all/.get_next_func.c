// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DA80
// Name:            .get_next_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DA80 jmp     cs:off_4E9528
//
// Resolved target: get_next_func
// Target address:  0x4EBF30
// GOT/IAT slot:    0x4E9528
// Slot symbol:     off_4E9528
// Target type:     <no type info>
// ============================================================

void .get_next_func(/* see target signature */)
{
    // Tail-call to get_next_func via GOT/IAT indirection
    return get_next_func(/* forwarded args */);
}

