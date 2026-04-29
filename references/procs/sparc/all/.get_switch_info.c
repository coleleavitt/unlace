// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x75A0
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x75A0 jmp     cs:off_192B8
//
// Resolved target: get_switch_info
// Target address:  0x197F0
// GOT/IAT slot:    0x192B8
// Slot symbol:     off_192B8
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}

