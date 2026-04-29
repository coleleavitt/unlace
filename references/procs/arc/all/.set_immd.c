// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x86D0
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x86D0 jmp     cs:off_2A350
//
// Resolved target: set_immd
// Target address:  0x2BD70
// GOT/IAT slot:    0x2A350
// Slot symbol:     off_2A350
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

