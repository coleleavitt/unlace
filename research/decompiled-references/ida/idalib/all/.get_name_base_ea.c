// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA510
// Name:            .get_name_base_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA510 jmp     cs:off_2C7AA70
//
// Resolved target: get_name_base_ea
// Target address:  0x4CA820
// GOT/IAT slot:    0x2C7AA70
// Slot symbol:     off_2C7AA70
// Target type:     <no type info>
// ============================================================

void .get_name_base_ea(/* see target signature */)
{
    // Tail-call to get_name_base_ea via GOT/IAT indirection
    return get_name_base_ea(/* forwarded args */);
}

