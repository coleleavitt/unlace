// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_8038
//
// Resolved target: qdirname
// Target address:  0x81F8
// GOT/IAT slot:    0x8038
// Slot symbol:     off_8038
// Target type:     <no type info>
// ============================================================

void .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

