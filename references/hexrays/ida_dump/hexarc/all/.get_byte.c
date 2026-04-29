// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B060
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B060 jmp     cs:off_4BA018
//
// Resolved target: get_byte
// Target address:  0x4BCA48
// GOT/IAT slot:    0x4BA018
// Slot symbol:     off_4BA018
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

