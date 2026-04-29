// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB80
// Name:            .idaplace_t__name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB80 jmp     cs:off_4B9DA8
//
// Resolved target: idaplace_t__name
// Target address:  0x4BC7C8
// GOT/IAT slot:    0x4B9DA8
// Slot symbol:     off_4B9DA8
// Target type:     <no type info>
// ============================================================

void .idaplace_t__name(/* see target signature */)
{
    // Tail-call to idaplace_t__name via GOT/IAT indirection
    return idaplace_t__name(/* forwarded args */);
}

