// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9170
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9170 jmp     cs:off_890A0
//
// Resolved target: qdirname
// Target address:  0x8C3A0
// GOT/IAT slot:    0x890A0
// Slot symbol:     off_890A0
// Target type:     <no type info>
// ============================================================

void .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

