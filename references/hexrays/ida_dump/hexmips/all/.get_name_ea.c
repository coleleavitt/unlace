// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BBA0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BBA0 jmp     cs:off_4CDDB8
//
// Resolved target: get_name_ea
// Target address:  0x4D07F8
// GOT/IAT slot:    0x4CDDB8
// Slot symbol:     off_4CDDB8
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

