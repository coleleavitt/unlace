// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA720
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA720 jmp     cs:off_35378
//
// Resolved target: pack_dw
// Target address:  0x359D0
// GOT/IAT slot:    0x35378
// Slot symbol:     off_35378
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

