// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66D0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66D0 jmp     cs:off_1D350
//
// Resolved target: get_byte
// Target address:  0x1D858
// GOT/IAT slot:    0x1D350
// Slot symbol:     off_1D350
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

