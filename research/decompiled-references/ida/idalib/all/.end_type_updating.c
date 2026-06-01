// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9FA0
// Name:            .end_type_updating
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9FA0 jmp     cs:off_2C7A7B8
//
// Resolved target: end_type_updating
// Target address:  0x60CC50
// GOT/IAT slot:    0x2C7A7B8
// Slot symbol:     off_2C7A7B8
// Target type:     <no type info>
// ============================================================

void .end_type_updating(/* see target signature */)
{
    // Tail-call to end_type_updating via GOT/IAT indirection
    return end_type_updating(/* forwarded args */);
}

