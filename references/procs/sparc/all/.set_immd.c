// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x75B0
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x75B0 jmp     cs:off_192C0
//
// Resolved target: set_immd
// Target address:  0x19800
// GOT/IAT slot:    0x192C0
// Slot symbol:     off_192C0
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

