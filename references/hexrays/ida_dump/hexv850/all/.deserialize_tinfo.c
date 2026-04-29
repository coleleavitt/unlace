// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C230
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C230 jmp     cs:off_4C1100
//
// Resolved target: deserialize_tinfo
// Target address:  0x4C4138
// GOT/IAT slot:    0x4C1100
// Slot symbol:     off_4C1100
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

