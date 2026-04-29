// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA330
// Name:            .serialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA330 jmp     cs:off_CA180
//
// Resolved target: serialize_tinfo
// Target address:  0xD0AB0
// GOT/IAT slot:    0xCA180
// Slot symbol:     off_CA180
// Target type:     <no type info>
// ============================================================

void .serialize_tinfo(/* see target signature */)
{
    // Tail-call to serialize_tinfo via GOT/IAT indirection
    return serialize_tinfo(/* forwarded args */);
}

