// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9860
// Name:            .get_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9860 jmp     cs:off_89418
//
// Resolved target: get_name_ea
// Target address:  0x8C738
// GOT/IAT slot:    0x89418
// Slot symbol:     off_89418
// Target type:     <no type info>
// ============================================================

void .get_name_ea(/* see target signature */)
{
    // Tail-call to get_name_ea via GOT/IAT indirection
    return get_name_ea(/* forwarded args */);
}

