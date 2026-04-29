// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61C0
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61C0 jmp     cs:off_240C8
//
// Resolved target: set_default_sreg_value
// Target address:  0x25E98
// GOT/IAT slot:    0x240C8
// Slot symbol:     off_240C8
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}

