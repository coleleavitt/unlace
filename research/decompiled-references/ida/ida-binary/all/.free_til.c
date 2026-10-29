// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D80
// Name:            .free_til
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D80 jmp     cs:free_til_ptr
//
// Resolved target: free_til
// Target address:  0x8D6230
// GOT/IAT slot:    0x8A1B60
// Slot symbol:     free_til_ptr
// Target type:     <no type info>
// ============================================================

void .free_til(/* see target signature */)
{
    // Tail-call to free_til via GOT/IAT indirection
    return free_til(/* forwarded args */);
}

