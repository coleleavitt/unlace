// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x208D0
// Name:            .set_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x208D0 jmp     cs:off_95450
//
// Resolved target: set_switch_info
// Target address:  0x95E88
// GOT/IAT slot:    0x95450
// Slot symbol:     off_95450
// Target type:     <no type info>
// ============================================================

void .set_switch_info(/* see target signature */)
{
    // Tail-call to set_switch_info via GOT/IAT indirection
    return set_switch_info(/* forwarded args */);
}

