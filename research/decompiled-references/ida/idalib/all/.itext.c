// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7CA0
// Name:            .itext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7CA0 jmp     cs:off_2C79638
//
// Resolved target: itext
// Target address:  0x3953C0
// GOT/IAT slot:    0x2C79638
// Slot symbol:     off_2C79638
// Target type:     <no type info>
// ============================================================

void .itext(/* see target signature */)
{
    // Tail-call to itext via GOT/IAT indirection
    return itext(/* forwarded args */);
}

