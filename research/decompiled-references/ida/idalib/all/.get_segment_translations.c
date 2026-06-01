// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACF30
// Name:            .get_segment_translations
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACF30 jmp     cs:off_2C7BF80
//
// Resolved target: get_segment_translations
// Target address:  0x685950
// GOT/IAT slot:    0x2C7BF80
// Slot symbol:     off_2C7BF80
// Target type:     <no type info>
// ============================================================

void .get_segment_translations(/* see target signature */)
{
    // Tail-call to get_segment_translations via GOT/IAT indirection
    return get_segment_translations(/* forwarded args */);
}

