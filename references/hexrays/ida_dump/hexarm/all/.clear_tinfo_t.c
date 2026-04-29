// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D990
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D990 jmp     cs:off_4E94B0
//
// Resolved target: clear_tinfo_t
// Target address:  0x4EBEB8
// GOT/IAT slot:    0x4E94B0
// Slot symbol:     off_4E94B0
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

