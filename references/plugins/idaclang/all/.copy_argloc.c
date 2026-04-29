// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3250
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3250 jmp     cs:off_29110
//
// Resolved target: copy_argloc
// Target address:  0x294C0
// GOT/IAT slot:    0x29110
// Slot symbol:     off_29110
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

