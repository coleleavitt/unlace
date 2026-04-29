// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_4098
//
// Resolved target: get_byte
// Target address:  0x4178
// GOT/IAT slot:    0x4098
// Slot symbol:     off_4098
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

