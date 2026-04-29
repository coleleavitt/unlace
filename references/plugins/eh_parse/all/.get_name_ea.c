// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6820
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6820 jmp     cs:off_2F3F8
//
// Resolved target: get_name_ea
// Target address:  0x2FA78
// GOT/IAT slot:    0x2F3F8
// Slot symbol:     off_2F3F8
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

