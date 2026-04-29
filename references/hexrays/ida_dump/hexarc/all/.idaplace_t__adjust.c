// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4F0
// Name:            .idaplace_t__adjust
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4F0 jmp     cs:off_4B9A60
//
// Resolved target: idaplace_t__adjust
// Target address:  0x4BC460
// GOT/IAT slot:    0x4B9A60
// Slot symbol:     off_4B9A60
// Target type:     <no type info>
// ============================================================

void .idaplace_t__adjust(/* see target signature */)
{
    // Tail-call to idaplace_t__adjust via GOT/IAT indirection
    return idaplace_t__adjust(/* forwarded args */);
}

