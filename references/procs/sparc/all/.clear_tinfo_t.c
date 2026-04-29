// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7200
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7200 jmp     cs:off_190E8
//
// Resolved target: clear_tinfo_t
// Target address:  0x19618
// GOT/IAT slot:    0x190E8
// Slot symbol:     off_190E8
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

