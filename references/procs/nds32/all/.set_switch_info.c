// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8440
// Name:            .set_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8440 jmp     cs:off_2A208
//
// Resolved target: set_switch_info
// Target address:  0x2A778
// GOT/IAT slot:    0x2A208
// Slot symbol:     off_2A208
// Target type:     <no type info>
// ============================================================

void .set_switch_info(/* see target signature */)
{
    // Tail-call to set_switch_info via GOT/IAT indirection
    return set_switch_info(/* forwarded args */);
}

