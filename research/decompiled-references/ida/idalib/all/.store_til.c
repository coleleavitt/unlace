// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9250
// Name:            .store_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9250 jmp     cs:off_2C7A110
//
// Resolved target: store_til
// Target address:  0x64D5C0
// GOT/IAT slot:    0x2C7A110
// Slot symbol:     off_2C7A110
// Target type:     <no type info>
// ============================================================

void .store_til(/* see target signature */)
{
    // Tail-call to store_til via GOT/IAT indirection
    return store_til(/* forwarded args */);
}

