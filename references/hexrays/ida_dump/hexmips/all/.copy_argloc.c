// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD10
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD10 jmp     cs:off_4CD670
//
// Resolved target: copy_argloc
// Target address:  0x4D0088
// GOT/IAT slot:    0x4CD670
// Slot symbol:     off_4CD670
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

