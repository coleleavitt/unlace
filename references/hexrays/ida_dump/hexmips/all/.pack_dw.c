// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B770
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B770 jmp     cs:off_4CDBA0
//
// Resolved target: pack_dw
// Target address:  0x4D05D0
// GOT/IAT slot:    0x4CDBA0
// Slot symbol:     off_4CDBA0
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

