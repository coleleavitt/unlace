// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD10
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD10 jmp     cs:off_4C0670
//
// Resolved target: copy_argloc
// Target address:  0x4C3660
// GOT/IAT slot:    0x4C0670
// Slot symbol:     off_4C0670
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

