// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B200
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B200 jmp     cs:off_4BA0E8
//
// Resolved target: deserialize_tinfo
// Target address:  0x4BCB28
// GOT/IAT slot:    0x4BA0E8
// Slot symbol:     off_4BA0E8
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

