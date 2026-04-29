// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20610
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20610 jmp     cs:off_952F0
//
// Resolved target: copy_argloc
// Target address:  0x95D28
// GOT/IAT slot:    0x952F0
// Slot symbol:     off_952F0
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

