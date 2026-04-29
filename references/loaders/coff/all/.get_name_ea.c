// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4680
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4680 jmp     cs:off_23328
//
// Resolved target: get_name_ea
// Target address:  0x23758
// GOT/IAT slot:    0x23328
// Slot symbol:     off_23328
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

