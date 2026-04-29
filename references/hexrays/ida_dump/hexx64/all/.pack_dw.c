// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C830
// Name:            .pack_dw
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C830 jmp     cs:off_4EDC00
//
// Resolved target: pack_dw
// Target address:  0x4F1F38
// GOT/IAT slot:    0x4EDC00
// Slot symbol:     off_4EDC00
// Target type:     <no type info>
// ============================================================

void .pack_dw(/* see target signature */)
{
    // Tail-call to pack_dw via GOT/IAT indirection
    return pack_dw(/* forwarded args */);
}

