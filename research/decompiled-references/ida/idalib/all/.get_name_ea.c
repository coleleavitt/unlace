// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7A10
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7A10 jmp     cs:off_2C794F0
//
// Resolved target: get_name_ea
// Target address:  0x4D42A0
// GOT/IAT slot:    0x2C794F0
// Slot symbol:     off_2C794F0
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

