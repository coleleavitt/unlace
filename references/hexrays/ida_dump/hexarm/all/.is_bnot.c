// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E550
// Name:            .is_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E550 jmp     cs:off_4E9A90
//
// Resolved target: is_bnot
// Target address:  0x4EC4B0
// GOT/IAT slot:    0x4E9A90
// Slot symbol:     off_4E9A90
// Target type:     <no type info>
// ============================================================

void .is_bnot(/* see target signature */)
{
    // Tail-call to is_bnot via GOT/IAT indirection
    return is_bnot(/* forwarded args */);
}

