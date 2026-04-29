// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16680
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16680 jmp     cs:off_4F328
//
// Resolved target: get_func
// Target address:  0x50348
// GOT/IAT slot:    0x4F328
// Slot symbol:     off_4F328
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

