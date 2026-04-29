// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97D0
// Name:            .fwritebytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97D0 jmp     cs:off_893D0
//
// Resolved target: fwritebytes
// Target address:  0x8C6E8
// GOT/IAT slot:    0x893D0
// Slot symbol:     off_893D0
// Target type:     <no type info>
// ============================================================

void .fwritebytes(/* see target signature */)
{
    // Tail-call to fwritebytes via GOT/IAT indirection
    return fwritebytes(/* forwarded args */);
}

