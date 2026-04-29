// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B760
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B760 jmp     cs:off_4BFB98
//
// Resolved target: pack_dw
// Target address:  0x4C30A0
// GOT/IAT slot:    0x4BFB98
// Slot symbol:     off_4BFB98
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

