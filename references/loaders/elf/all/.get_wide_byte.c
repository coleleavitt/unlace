// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92C0
// Name:            .get_wide_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92C0 jmp     cs:off_89148
//
// Resolved target: get_wide_byte
// Target address:  0x8C448
// GOT/IAT slot:    0x89148
// Slot symbol:     off_89148
// Target type:     <no type info>
// ============================================================

void .get_wide_byte(/* see target signature */)
{
    // Tail-call to get_wide_byte via GOT/IAT indirection
    return get_wide_byte(/* forwarded args */);
}

