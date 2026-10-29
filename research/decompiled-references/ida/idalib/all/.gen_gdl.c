// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E00
// Name:            .gen_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E00 jmp     cs:off_2C796E8
//
// Resolved target: gen_gdl
// Target address:  0x5DAAB0
// GOT/IAT slot:    0x2C796E8
// Slot symbol:     off_2C796E8
// Target type:     <no type info>
// ============================================================

void .gen_gdl(/* see target signature */)
{
    // Tail-call to gen_gdl via GOT/IAT indirection
    return gen_gdl(/* forwarded args */);
}

