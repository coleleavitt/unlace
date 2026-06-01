// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A89D0
// Name:            .freadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A89D0 jmp     cs:off_2C79CD0
//
// Resolved target: freadbytes
// Target address:  0x83F5A0
// GOT/IAT slot:    0x2C79CD0
// Slot symbol:     off_2C79CD0
// Target type:     <no type info>
// ============================================================

void .freadbytes(/* see target signature */)
{
    // Tail-call to freadbytes via GOT/IAT indirection
    return freadbytes(/* forwarded args */);
}

