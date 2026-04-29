// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A880
// Name:            .idaplace_t__compare2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A880 jmp     cs:off_4B9C28
//
// Resolved target: idaplace_t__compare2
// Target address:  0x4BC640
// GOT/IAT slot:    0x4B9C28
// Slot symbol:     off_4B9C28
// Target type:     <no type info>
// ============================================================

void .idaplace_t__compare2(/* see target signature */)
{
    // Tail-call to idaplace_t__compare2 via GOT/IAT indirection
    return idaplace_t__compare2(/* forwarded args */);
}

