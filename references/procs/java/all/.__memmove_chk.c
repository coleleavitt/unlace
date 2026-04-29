// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6390
// Name:            .__memmove_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6390 jmp     cs:off_2D1B0
//
// Resolved target: __memmove_chk
// Target address:  0x2D6B0
// GOT/IAT slot:    0x2D1B0
// Slot symbol:     off_2D1B0
// Target type:     <no type info>
// ============================================================

void .__memmove_chk(/* see target signature */)
{
    // Tail-call to __memmove_chk via GOT/IAT indirection
    return __memmove_chk(/* forwarded args */);
}

