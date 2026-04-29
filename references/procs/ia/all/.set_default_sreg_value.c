// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70F0
// Name:            .set_default_sreg_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70F0 jmp     cs:off_26060
//
// Resolved target: set_default_sreg_value
// Target address:  0x26318
// GOT/IAT slot:    0x26060
// Slot symbol:     off_26060
// Target type:     <no type info>
// ============================================================

void .set_default_sreg_value(/* see target signature */)
{
    // Tail-call to set_default_sreg_value via GOT/IAT indirection
    return set_default_sreg_value(/* forwarded args */);
}

