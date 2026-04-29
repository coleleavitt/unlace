// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10290
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10290 jmp     cs:off_2E130
//
// Resolved target: set_immd
// Target address:  0x36DB8
// GOT/IAT slot:    0x2E130
// Slot symbol:     off_2E130
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

