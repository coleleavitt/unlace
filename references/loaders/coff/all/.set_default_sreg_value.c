// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4190
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4190 jmp     cs:off_230B0
//
// Resolved target: set_default_sreg_value
// Target address:  0x234D0
// GOT/IAT slot:    0x230B0
// Slot symbol:     off_230B0
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}

