// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82C0
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82C0 jmp     cs:off_2A148
//
// Resolved target: copy_argloc
// Target address:  0x2A6B8
// GOT/IAT slot:    0x2A148
// Slot symbol:     off_2A148
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

