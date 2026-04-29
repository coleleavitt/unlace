// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB90
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB90 jmp     cs:off_4DADB0
//
// Resolved target: get_name_ea
// Target address:  0x4DD7D0
// GOT/IAT slot:    0x4DADB0
// Slot symbol:     off_4DADB0
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

