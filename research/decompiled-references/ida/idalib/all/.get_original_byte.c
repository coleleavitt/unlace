// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD710
// Name:            .get_original_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD710 jmp     cs:off_2C7C370
//
// Resolved target: get_original_byte
// Target address:  0x59A800
// GOT/IAT slot:    0x2C7C370
// Slot symbol:     off_2C7C370
// Target type:     <no type info>
// ============================================================

void .get_original_byte(/* see target signature */)
{
    // Tail-call to get_original_byte via GOT/IAT indirection
    return get_original_byte(/* forwarded args */);
}

