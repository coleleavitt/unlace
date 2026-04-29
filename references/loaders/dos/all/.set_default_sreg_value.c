// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_B088
//
// Resolved target: set_default_sreg_value
// Target address:  0xB520
// GOT/IAT slot:    0xB088
// Slot symbol:     off_B088
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}

