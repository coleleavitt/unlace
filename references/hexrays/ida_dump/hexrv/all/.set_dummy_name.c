// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C0A0
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C0A0 jmp     cs:off_4C0038
//
// Resolved target: set_dummy_name
// Target address:  0x4C3560
// GOT/IAT slot:    0x4C0038
// Slot symbol:     off_4C0038
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}

