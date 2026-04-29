// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA2D0
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA2D0 jmp     cs:off_35150
//
// Resolved target: clear_tinfo_t
// Target address:  0x357A0
// GOT/IAT slot:    0x35150
// Slot symbol:     off_35150
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

