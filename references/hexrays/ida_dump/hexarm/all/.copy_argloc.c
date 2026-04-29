// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD30
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD30 jmp     cs:off_4E9680
//
// Resolved target: copy_argloc
// Target address:  0x4EC098
// GOT/IAT slot:    0x4E9680
// Slot symbol:     off_4E9680
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

