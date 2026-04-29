// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61A0
// Name:            .freadbytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61A0 jmp     cs:off_2D0B8
//
// Resolved target: freadbytes
// Target address:  0x2D5B8
// GOT/IAT slot:    0x2D0B8
// Slot symbol:     off_2D0B8
// Target type:     <no type info>
// ============================================================

void .freadbytes(/* see target signature */)
{
    // Tail-call to freadbytes via GOT/IAT indirection
    return freadbytes(/* forwarded args */);
}

