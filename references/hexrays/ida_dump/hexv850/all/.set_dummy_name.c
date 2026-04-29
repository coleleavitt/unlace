// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0B0
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0B0 jmp     cs:off_4C1040
//
// Resolved target: set_dummy_name
// Target address:  0x4C4068
// GOT/IAT slot:    0x4C1040
// Slot symbol:     off_4C1040
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}

