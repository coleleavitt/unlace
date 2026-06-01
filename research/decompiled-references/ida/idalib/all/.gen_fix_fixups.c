// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC5A0
// Name:            .gen_fix_fixups
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC5A0 jmp     cs:off_2C7BAB8
//
// Resolved target: gen_fix_fixups
// Target address:  0x41DB60
// GOT/IAT slot:    0x2C7BAB8
// Slot symbol:     off_2C7BAB8
// Target type:     <no type info>
// ============================================================

void .gen_fix_fixups(/* see target signature */)
{
    // Tail-call to gen_fix_fixups via GOT/IAT indirection
    return gen_fix_fixups(/* forwarded args */);
}

