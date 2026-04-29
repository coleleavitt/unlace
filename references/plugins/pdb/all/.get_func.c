// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D510
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D510 jmp     cs:off_B3270
//
// Resolved target: get_func
// Target address:  0xB3A10
// GOT/IAT slot:    0xB3270
// Slot symbol:     off_B3270
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

