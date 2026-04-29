// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C220
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C220 jmp     cs:off_4DB0F8
//
// Resolved target: deserialize_tinfo
// Target address:  0x4DDB38
// GOT/IAT slot:    0x4DB0F8
// Slot symbol:     off_4DB0F8
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

