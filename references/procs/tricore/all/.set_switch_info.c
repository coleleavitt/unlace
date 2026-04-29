// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64D0
// Name:            .set_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64D0 jmp     cs:off_24250
//
// Resolved target: set_switch_info
// Target address:  0x26020
// GOT/IAT slot:    0x24250
// Slot symbol:     off_24250
// Target type:     <no type info>
// ============================================================

void .set_switch_info(/* see target signature */)
{
    // Tail-call to set_switch_info via GOT/IAT indirection
    return set_switch_info(/* forwarded args */);
}

