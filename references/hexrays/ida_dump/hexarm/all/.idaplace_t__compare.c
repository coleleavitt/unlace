// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DF90
// Name:            .idaplace_t__compare
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DF90 jmp     cs:off_4E97B0
//
// Resolved target: idaplace_t__compare
// Target address:  0x4EC1C8
// GOT/IAT slot:    0x4E97B0
// Slot symbol:     off_4E97B0
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare(/* see target signature */)
{
    // Tail-call to idaplace_t__compare via GOT/IAT indirection
    return idaplace_t__compare(/* forwarded args */);
}

