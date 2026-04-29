// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D3A0
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D3A0 jmp     cs:off_4EE1B8
//
// Resolved target: deserialize_tinfo
// Target address:  0x4F2518
// GOT/IAT slot:    0x4EE1B8
// Slot symbol:     off_4EE1B8
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

