// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9730
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9730 jmp     cs:off_2E380
//
// Resolved target: get_switch_info
// Target address:  0x2E9F8
// GOT/IAT slot:    0x2E380
// Slot symbol:     off_2E380
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}

