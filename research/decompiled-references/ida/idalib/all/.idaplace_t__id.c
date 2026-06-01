// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9810
// Name:            .idaplace_t__id
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9810 jmp     cs:off_2C7A3F0
//
// Resolved target: idaplace_t__id
// Target address:  0x42AB40
// GOT/IAT slot:    0x2C7A3F0
// Slot symbol:     off_2C7A3F0
// Target type:     __int64 __fastcall(int, double)
// ============================================================

/* see target sig */ .idaplace_t__id(/* see target signature */)
{
    // Tail-call to idaplace_t__id via GOT/IAT indirection
    return idaplace_t__id(/* forwarded args */);
}

