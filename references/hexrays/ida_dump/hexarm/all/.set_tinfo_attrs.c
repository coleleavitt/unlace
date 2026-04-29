// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E900
// Name:            .set_tinfo_attrs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E900 jmp     cs:off_4E9C68
//
// Resolved target: set_tinfo_attrs
// Target address:  0x4EC6A0
// GOT/IAT slot:    0x4E9C68
// Slot symbol:     off_4E9C68
// Target type:     <no type info>
// ============================================================

void .set_tinfo_attrs(/* see target signature */)
{
    // Tail-call to set_tinfo_attrs via GOT/IAT indirection
    return set_tinfo_attrs(/* forwarded args */);
}

