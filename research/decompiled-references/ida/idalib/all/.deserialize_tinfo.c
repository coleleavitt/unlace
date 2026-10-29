// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A85A0
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A85A0 jmp     cs:off_2C79AB8
//
// Resolved target: deserialize_tinfo
// Target address:  0x54BBC0
// GOT/IAT slot:    0x2C79AB8
// Slot symbol:     off_2C79AB8
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

