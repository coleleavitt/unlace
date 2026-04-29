// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1250
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1250 jmp     cs:off_5110
//
// Resolved target: add_til
// Target address:  0x5280
// GOT/IAT slot:    0x5110
// Slot symbol:     off_5110
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}

