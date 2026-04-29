// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB00
// Name:            .get_encoding_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB00 jmp     cs:off_4C0D68
//
// Resolved target: get_encoding_name
// Target address:  0x4C3D80
// GOT/IAT slot:    0x4C0D68
// Slot symbol:     off_4C0D68
// Target type:     <no type info>
// ============================================================

void .get_encoding_name(/* see target signature */)
{
    // Tail-call to get_encoding_name via GOT/IAT indirection
    return get_encoding_name(/* forwarded args */);
}

