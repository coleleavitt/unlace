// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A740
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A740 jmp     cs:off_4B9B88
//
// Resolved target: pack_dw
// Target address:  0x4BC598
// GOT/IAT slot:    0x4B9B88
// Slot symbol:     off_4B9B88
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

