// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23E0
// Name:            .idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23E0 jmp     cs:off_A1D8
//
// Resolved target: idadir
// Target address:  0xB4C0
// GOT/IAT slot:    0xA1D8
// Slot symbol:     off_A1D8
// Target type:     <no type info>
// ============================================================

void .idadir(/* see target signature */)
{
    // Tail-call to idadir via GOT/IAT indirection
    return idadir(/* forwarded args */);
}

