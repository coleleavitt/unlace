// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB620
// Name:            .is_manual
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB620 jmp     cs:off_2C7B2F8
//
// Resolved target: is_manual
// Target address:  0x3C50C0
// GOT/IAT slot:    0x2C7B2F8
// Slot symbol:     off_2C7B2F8
// Target type:     <no type info>
// ============================================================

void .is_manual(/* see target signature */)
{
    // Tail-call to is_manual via GOT/IAT indirection
    return is_manual(/* forwarded args */);
}

