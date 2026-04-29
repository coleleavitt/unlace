// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29830
// Name:            .serialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29830 jmp     cs:off_4B9400
//
// Resolved target: serialize_tinfo
// Target address:  0x4BBDD0
// GOT/IAT slot:    0x4B9400
// Slot symbol:     off_4B9400
// Target type:     <no type info>
// ============================================================

void .serialize_tinfo(/* see target signature */)
{
    // Tail-call to serialize_tinfo via GOT/IAT indirection
    return serialize_tinfo(/* forwarded args */);
}

