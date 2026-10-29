// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9100
// Name:            .set_dummy_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9100 jmp     cs:off_2C7A068
//
// Resolved target: set_dummy_name
// Target address:  0x4D9A80
// GOT/IAT slot:    0x2C7A068
// Slot symbol:     off_2C7A068
// Target type:     <no type info>
// ============================================================

void .set_dummy_name(/* see target signature */)
{
    // Tail-call to set_dummy_name via GOT/IAT indirection
    return set_dummy_name(/* forwarded args */);
}

