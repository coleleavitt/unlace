// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66C0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66C0 jmp     cs:off_2D348
//
// Resolved target: get_name_ea
// Target address:  0x2D858
// GOT/IAT slot:    0x2D348
// Slot symbol:     off_2D348
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

