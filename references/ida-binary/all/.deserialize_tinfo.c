// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113130
// Name:            .deserialize_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113130 jmp     cs:deserialize_tinfo_ptr
//
// Resolved target: deserialize_tinfo
// Target address:  0x8D45E0
// GOT/IAT slot:    0x8A0538
// Slot symbol:     deserialize_tinfo_ptr
// Target type:     <no type info>
// ============================================================

void .deserialize_tinfo(/* see target signature */)
{
    // Tail-call to deserialize_tinfo via GOT/IAT indirection
    return deserialize_tinfo(/* forwarded args */);
}

