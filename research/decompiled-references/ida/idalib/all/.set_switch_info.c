// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD030
// Name:            .set_switch_info
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD030 jmp     cs:off_2C7C000
//
// Resolved target: set_switch_info
// Target address:  0x59D8C0
// GOT/IAT slot:    0x2C7C000
// Slot symbol:     off_2C7C000
// Target type:     <no type info>
// ============================================================

void .set_switch_info(/* see target signature */)
{
    // Tail-call to set_switch_info via GOT/IAT indirection
    return set_switch_info(/* forwarded args */);
}

