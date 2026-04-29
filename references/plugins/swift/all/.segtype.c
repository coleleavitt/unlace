// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4840
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4840 jmp     cs:off_28408
//
// Resolved target: segtype
// Target address:  0x29DC0
// GOT/IAT slot:    0x28408
// Slot symbol:     off_28408
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

