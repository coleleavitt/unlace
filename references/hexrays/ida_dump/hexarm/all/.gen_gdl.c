// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED70
// Name:            .gen_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED70 jmp     cs:off_4E9EA0
//
// Resolved target: gen_gdl
// Target address:  0x4EC8F0
// GOT/IAT slot:    0x4E9EA0
// Slot symbol:     off_4E9EA0
// Target type:     <no type info>
// ============================================================

void .gen_gdl(/* see target signature */)
{
    // Tail-call to gen_gdl via GOT/IAT indirection
    return gen_gdl(/* forwarded args */);
}

