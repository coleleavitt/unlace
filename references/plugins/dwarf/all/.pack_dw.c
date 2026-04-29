// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA950
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA950 jmp     cs:off_CA490
//
// Resolved target: pack_dw
// Target address:  0xD0DD8
// GOT/IAT slot:    0xCA490
// Slot symbol:     off_CA490
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

