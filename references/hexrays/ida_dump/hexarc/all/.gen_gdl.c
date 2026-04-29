// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD10
// Name:            .gen_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD10 jmp     cs:off_4B9E70
//
// Resolved target: gen_gdl
// Target address:  0x4BC8A0
// GOT/IAT slot:    0x4B9E70
// Slot symbol:     off_4B9E70
// Target type:     <no type info>
// ============================================================

void .gen_gdl(/* see target signature */)
{
    // Tail-call to gen_gdl via GOT/IAT indirection
    return gen_gdl(/* forwarded args */);
}

