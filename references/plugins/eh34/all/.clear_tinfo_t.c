// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6240
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6240 jmp     cs:off_8D108
//
// Resolved target: clear_tinfo_t
// Target address:  0x8D698
// GOT/IAT slot:    0x8D108
// Slot symbol:     off_8D108
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

