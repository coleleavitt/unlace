// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB9D0
// Name:            .idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB9D0 jmp     cs:off_2C7B4D0
//
// Resolved target: idadir
// Target address:  0x8340F0
// GOT/IAT slot:    0x2C7B4D0
// Slot symbol:     off_2C7B4D0
// Target type:     <no type info>
// ============================================================

void .idadir(/* see target signature */)
{
    // Tail-call to idadir via GOT/IAT indirection
    return idadir(/* forwarded args */);
}

