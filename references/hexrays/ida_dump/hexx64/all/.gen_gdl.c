// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE60
// Name:            .gen_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE60 jmp     cs:off_4EDF18
//
// Resolved target: gen_gdl
// Target address:  0x4F2268
// GOT/IAT slot:    0x4EDF18
// Slot symbol:     off_4EDF18
// Target type:     <no type info>
// ============================================================

void .gen_gdl(/* see target signature */)
{
    // Tail-call to gen_gdl via GOT/IAT indirection
    return gen_gdl(/* forwarded args */);
}

