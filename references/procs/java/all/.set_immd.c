// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6600
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6600 jmp     cs:off_2D2E8
//
// Resolved target: set_immd
// Target address:  0x2D7F8
// GOT/IAT slot:    0x2D2E8
// Slot symbol:     off_2D2E8
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

