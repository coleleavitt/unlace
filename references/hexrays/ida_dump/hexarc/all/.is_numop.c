// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A290
// Name:            .is_numop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A290 jmp     cs:off_4B9930
//
// Resolved target: is_numop
// Target address:  0x4BC330
// GOT/IAT slot:    0x4B9930
// Slot symbol:     off_4B9930
// Target type:     <no type info>
// ============================================================

void .is_numop(/* see target signature */)
{
    // Tail-call to is_numop via GOT/IAT indirection
    return is_numop(/* forwarded args */);
}

