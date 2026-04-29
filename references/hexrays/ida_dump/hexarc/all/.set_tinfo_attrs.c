// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A0
// Name:            .set_tinfo_attrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A0 jmp     cs:off_4B9C38
//
// Resolved target: set_tinfo_attrs
// Target address:  0x4BC650
// GOT/IAT slot:    0x4B9C38
// Slot symbol:     off_4B9C38
// Target type:     <no type info>
// ============================================================

void .set_tinfo_attrs(/* see target signature */)
{
    // Tail-call to set_tinfo_attrs via GOT/IAT indirection
    return set_tinfo_attrs(/* forwarded args */);
}

