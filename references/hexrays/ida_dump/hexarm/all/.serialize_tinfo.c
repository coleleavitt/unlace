// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D840
// Name:            .serialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D840 jmp     cs:off_4E9408
//
// Resolved target: serialize_tinfo
// Target address:  0x4EBDF8
// GOT/IAT slot:    0x4E9408
// Slot symbol:     off_4E9408
// Target type:     <no type info>
// ============================================================

void .serialize_tinfo(/* see target signature */)
{
    // Tail-call to serialize_tinfo via GOT/IAT indirection
    return serialize_tinfo(/* forwarded args */);
}

