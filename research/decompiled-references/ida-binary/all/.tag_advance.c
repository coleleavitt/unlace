// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1147D0
// Name:            .tag_advance
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1147D0 jmp     cs:tag_advance_ptr
//
// Resolved target: tag_advance
// Target address:  0x8D5458
// GOT/IAT slot:    0x8A1088
// Slot symbol:     tag_advance_ptr
// Target type:     <no type info>
// ============================================================

void .tag_advance(/* see target signature */)
{
    // Tail-call to tag_advance via GOT/IAT indirection
    return tag_advance(/* forwarded args */);
}

