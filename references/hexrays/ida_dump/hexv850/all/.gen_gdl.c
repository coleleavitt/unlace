// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD40
// Name:            .gen_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD40 jmp     cs:off_4C0E88
//
// Resolved target: gen_gdl
// Target address:  0x4C3EB0
// GOT/IAT slot:    0x4C0E88
// Slot symbol:     off_4C0E88
// Target type:     <no type info>
// ============================================================

void .gen_gdl(/* see target signature */)
{
    // Tail-call to gen_gdl via GOT/IAT indirection
    return gen_gdl(/* forwarded args */);
}

