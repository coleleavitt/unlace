// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E2D0
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E2D0 jmp     cs:off_4E9950
//
// Resolved target: is_numop
// Target address:  0x4EC370
// GOT/IAT slot:    0x4E9950
// Slot symbol:     off_4E9950
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}

