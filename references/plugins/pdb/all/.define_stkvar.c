// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D070
// Name:            .define_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D070 jmp     cs:off_B3020
//
// Resolved target: define_stkvar
// Target address:  0xB3790
// GOT/IAT slot:    0xB3020
// Slot symbol:     off_B3020
// Target type:     <no type info>
// ============================================================

void .define_stkvar(/* see target signature */)
{
    // Tail-call to define_stkvar via GOT/IAT indirection
    return define_stkvar(/* forwarded args */);
}

