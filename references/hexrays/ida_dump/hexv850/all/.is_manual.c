// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF30
// Name:            .is_manual
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF30 jmp     cs:off_4C0F80
//
// Resolved target: is_manual
// Target address:  0x4C3FA8
// GOT/IAT slot:    0x4C0F80
// Slot symbol:     off_4C0F80
// Target type:     <no type info>
// ============================================================

void .is_manual(/* see target signature */)
{
    // Tail-call to is_manual via GOT/IAT indirection
    return is_manual(/* forwarded args */);
}

