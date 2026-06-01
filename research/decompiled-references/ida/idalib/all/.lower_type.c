// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A81F0
// Name:            .lower_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A81F0 jmp     cs:off_2C798E0
//
// Resolved target: lower_type
// Target address:  0x6ABA80
// GOT/IAT slot:    0x2C798E0
// Slot symbol:     off_2C798E0
// Target type:     <no type info>
// ============================================================

void .lower_type(/* see target signature */)
{
    // Tail-call to lower_type via GOT/IAT indirection
    return lower_type(/* forwarded args */);
}

