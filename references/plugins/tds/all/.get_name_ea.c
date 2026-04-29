// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_A160
//
// Resolved target: get_name_ea
// Target address:  0xA3A0
// GOT/IAT slot:    0xA160
// Slot symbol:     off_A160
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

