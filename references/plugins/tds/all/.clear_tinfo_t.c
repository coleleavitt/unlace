// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_A0A0
//
// Resolved target: clear_tinfo_t
// Target address:  0xA2D0
// GOT/IAT slot:    0xA0A0
// Slot symbol:     off_A0A0
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

