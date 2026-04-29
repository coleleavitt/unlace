// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A970
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A970 jmp     cs:off_4DA4A0
//
// Resolved target: clear_tinfo_t
// Target address:  0x4DCE88
// GOT/IAT slot:    0x4DA4A0
// Slot symbol:     off_4DA4A0
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

