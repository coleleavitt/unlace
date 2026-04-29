// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7310
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7310 jmp     cs:off_26170
//
// Resolved target: set_immd
// Target address:  0x26438
// GOT/IAT slot:    0x26170
// Slot symbol:     off_26170
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

