// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46B0
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46B0 jmp     cs:off_28340
//
// Resolved target: get_name_ea
// Target address:  0x29CE8
// GOT/IAT slot:    0x28340
// Slot symbol:     off_28340
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

