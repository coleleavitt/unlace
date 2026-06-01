// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7BF0
// Name:            .load_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7BF0 jmp     cs:off_2C795E0
//
// Resolved target: load_til
// Target address:  0x655E90
// GOT/IAT slot:    0x2C795E0
// Slot symbol:     off_2C795E0
// Target type:     <no type info>
// ============================================================

void .load_til(/* see target signature */)
{
    // Tail-call to load_til via GOT/IAT indirection
    return load_til(/* forwarded args */);
}

