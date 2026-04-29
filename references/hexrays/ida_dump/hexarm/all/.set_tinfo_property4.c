// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E7B0
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E7B0 jmp     cs:off_4E9BC0
//
// Resolved target: set_tinfo_property4
// Target address:  0x4EC5F0
// GOT/IAT slot:    0x4E9BC0
// Slot symbol:     off_4E9BC0
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

