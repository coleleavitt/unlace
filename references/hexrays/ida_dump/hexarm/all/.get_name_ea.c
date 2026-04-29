// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EBD0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EBD0 jmp     cs:off_4E9DD0
//
// Resolved target: get_name_ea
// Target address:  0x4EC810
// GOT/IAT slot:    0x4E9DD0
// Slot symbol:     off_4E9DD0
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

