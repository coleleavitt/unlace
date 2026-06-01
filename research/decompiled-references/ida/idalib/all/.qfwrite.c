// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9A20
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9A20 jmp     cs:off_2C7A4F8
//
// Resolved target: qfwrite
// Target address:  0x83F0B0
// GOT/IAT slot:    0x2C7A4F8
// Slot symbol:     off_2C7A4F8
// Target type:     __int64 __fastcall(FILE *s, void *ptr)
// ============================================================

/* see target sig */ .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

