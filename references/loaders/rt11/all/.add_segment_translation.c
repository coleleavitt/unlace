// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10C0
// Name:            .add_segment_translation
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10C0 jmp     cs:off_5048
//
// Resolved target: add_segment_translation
// Target address:  0x51C8
// GOT/IAT slot:    0x5048
// Slot symbol:     off_5048
// Target type:     <no type info>
// ============================================================

void .add_segment_translation(/* see target signature */)
{
    // Tail-call to add_segment_translation via GOT/IAT indirection
    return add_segment_translation(/* forwarded args */);
}

