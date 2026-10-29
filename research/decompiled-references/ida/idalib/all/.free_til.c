// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA130
// Name:            .free_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA130 jmp     cs:off_2C7A880
//
// Resolved target: free_til
// Target address:  0x651F60
// GOT/IAT slot:    0x2C7A880
// Slot symbol:     off_2C7A880
// Target type:     <no type info>
// ============================================================

void .free_til(/* see target signature */)
{
    // Tail-call to free_til via GOT/IAT indirection
    return free_til(/* forwarded args */);
}

