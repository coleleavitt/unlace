// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF20
// Name:            .is_manual
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF20 jmp     cs:off_4BFF78
//
// Resolved target: is_manual
// Target address:  0x4C34A0
// GOT/IAT slot:    0x4BFF78
// Slot symbol:     off_4BFF78
// Target type:     <no type info>
// ============================================================

void .is_manual(/* see target signature */)
{
    // Tail-call to is_manual via GOT/IAT indirection
    return is_manual(/* forwarded args */);
}

