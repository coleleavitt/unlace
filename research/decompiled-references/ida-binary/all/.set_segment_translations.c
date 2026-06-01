// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E70
// Name:            .set_segment_translations
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E70 jmp     cs:set_segment_translations_ptr
//
// Resolved target: set_segment_translations
// Target address:  0x8D8AF0
// GOT/IAT slot:    0x8A3BD8
// Slot symbol:     set_segment_translations_ptr
// Target type:     <no type info>
// ============================================================

void .set_segment_translations(/* see target signature */)
{
    // Tail-call to set_segment_translations via GOT/IAT indirection
    return set_segment_translations(/* forwarded args */);
}

