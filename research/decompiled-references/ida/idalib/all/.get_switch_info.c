// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7210
// Name:            .get_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7210 jmp     cs:off_2C790F0
//
// Resolved target: get_switch_info
// Target address:  0x59D620
// GOT/IAT slot:    0x2C790F0
// Slot symbol:     off_2C790F0
// Target type:     <no type info>
// ============================================================

void .get_switch_info(/* see target signature */)
{
    // Tail-call to get_switch_info via GOT/IAT indirection
    return get_switch_info(/* forwarded args */);
}

