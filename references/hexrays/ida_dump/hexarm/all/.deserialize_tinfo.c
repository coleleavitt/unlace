// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F260
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F260 jmp     cs:off_4EA118
//
// Resolved target: deserialize_tinfo
// Target address:  0x4ECB78
// GOT/IAT slot:    0x4EA118
// Slot symbol:     off_4EA118
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

