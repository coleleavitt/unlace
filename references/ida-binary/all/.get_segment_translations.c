// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A870
// Name:            .get_segment_translations
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A870 jmp     cs:get_segment_translations_ptr
//
// Resolved target: get_segment_translations
// Target address:  0x8D9198
// GOT/IAT slot:    0x8A40D8
// Slot symbol:     get_segment_translations_ptr
// Target type:     <no type info>
// ============================================================

void .get_segment_translations(/* see target signature */)
{
    // Tail-call to get_segment_translations via GOT/IAT indirection
    return get_segment_translations(/* forwarded args */);
}

