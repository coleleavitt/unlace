// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3250
// Name:            .__memmove_chk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3250 jmp     cs:off_13110
//
// Resolved target: __memmove_chk
// Target address:  0x13800
// GOT/IAT slot:    0x13110
// Slot symbol:     off_13110
// Target type:     <no type info>
// ============================================================

void .__memmove_chk(/* see target signature */)
{
    // Tail-call to __memmove_chk via GOT/IAT indirection
    return __memmove_chk(/* forwarded args */);
}

