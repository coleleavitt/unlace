// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD40
// Name:            .gen_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD40 jmp     cs:off_4CDE88
//
// Resolved target: gen_gdl
// Target address:  0x4D08D8
// GOT/IAT slot:    0x4CDE88
// Slot symbol:     off_4CDE88
// Target type:     <no type info>
// ============================================================

void .gen_gdl(/* see target signature */)
{
    // Tail-call to gen_gdl via GOT/IAT indirection
    return gen_gdl(/* forwarded args */);
}

