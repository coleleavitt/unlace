// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7980
// Name:            .serialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7980 jmp     cs:off_2C794A8
//
// Resolved target: serialize_tinfo
// Target address:  0x548080
// GOT/IAT slot:    0x2C794A8
// Slot symbol:     off_2C794A8
// Target type:     <no type info>
// ============================================================

void .serialize_tinfo(/* see target signature */)
{
    // Tail-call to serialize_tinfo via GOT/IAT indirection
    return serialize_tinfo(/* forwarded args */);
}

