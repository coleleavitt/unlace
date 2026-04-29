// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B920
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B920 jmp     cs:off_4CDC78
//
// Resolved target: get_switch_info
// Target address:  0x4D06B0
// GOT/IAT slot:    0x4CDC78
// Slot symbol:     off_4CDC78
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}

