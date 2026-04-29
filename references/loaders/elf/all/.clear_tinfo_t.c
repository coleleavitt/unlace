// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9340
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9340 jmp     cs:off_89188
//
// Resolved target: clear_tinfo_t
// Target address:  0x8C488
// GOT/IAT slot:    0x89188
// Slot symbol:     off_89188
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

