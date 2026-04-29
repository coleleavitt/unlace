// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B910
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B910 jmp     cs:off_4BFC70
//
// Resolved target: get_switch_info
// Target address:  0x4C3180
// GOT/IAT slot:    0x4BFC70
// Slot symbol:     off_4BFC70
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}

