// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C090
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C090 jmp     cs:off_4CE030
//
// Resolved target: get_byte
// Target address:  0x4D0A80
// GOT/IAT slot:    0x4CE030
// Slot symbol:     off_4CE030
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

