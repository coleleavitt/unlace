// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC870
// Name:            .new_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC870 jmp     cs:off_2C7BC20
//
// Resolved target: new_til
// Target address:  0x64CBA0
// GOT/IAT slot:    0x2C7BC20
// Slot symbol:     off_2C7BC20
// Target type:     <no type info>
// ============================================================

void .new_til(/* see target signature */)
{
    // Tail-call to new_til via GOT/IAT indirection
    return new_til(/* forwarded args */);
}

