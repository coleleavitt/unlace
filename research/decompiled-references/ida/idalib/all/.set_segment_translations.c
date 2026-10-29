// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC830
// Name:            .set_segment_translations
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC830 jmp     cs:off_2C7BC00
//
// Resolved target: set_segment_translations
// Target address:  0x685790
// GOT/IAT slot:    0x2C7BC00
// Slot symbol:     off_2C7BC00
// Target type:     <no type info>
// ============================================================

void .set_segment_translations(/* see target signature */)
{
    // Tail-call to set_segment_translations via GOT/IAT indirection
    return set_segment_translations(/* forwarded args */);
}

