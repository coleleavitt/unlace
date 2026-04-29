// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9B20
// Name:            .add_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9B20 jmp     cs:off_89578
//
// Resolved target: add_til
// Target address:  0x8C8B0
// GOT/IAT slot:    0x89578
// Slot symbol:     off_89578
// Target type:     <no type info>
// ============================================================

void .add_til(/* see target signature */)
{
    // Tail-call to add_til via GOT/IAT indirection
    return add_til(/* forwarded args */);
}

