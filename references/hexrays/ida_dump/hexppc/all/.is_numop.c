// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B290
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B290 jmp     cs:off_4DA930
//
// Resolved target: is_numop
// Target address:  0x4DD330
// GOT/IAT slot:    0x4DA930
// Slot symbol:     off_4DA930
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}

