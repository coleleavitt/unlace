// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF00
// Name:            .is_manual
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF00 jmp     cs:off_4B9F68
//
// Resolved target: is_manual
// Target address:  0x4BC998
// GOT/IAT slot:    0x4B9F68
// Slot symbol:     off_4B9F68
// Target type:     <no type info>
// ============================================================

void .is_manual(/* see target signature */)
{
    // Tail-call to is_manual via GOT/IAT indirection
    return is_manual(/* forwarded args */);
}

