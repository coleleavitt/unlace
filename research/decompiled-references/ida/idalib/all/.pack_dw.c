// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7760
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7760 jmp     cs:off_2C79398
//
// Resolved target: pack_dw
// Target address:  0x83B830
// GOT/IAT slot:    0x2C79398
// Slot symbol:     off_2C79398
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

