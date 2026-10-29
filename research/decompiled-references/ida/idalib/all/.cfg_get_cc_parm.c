// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9180
// Name:            .cfg_get_cc_parm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9180 jmp     cs:off_2C7A0A8
//
// Resolved target: cfg_get_cc_parm
// Target address:  0x5FFD20
// GOT/IAT slot:    0x2C7A0A8
// Slot symbol:     off_2C7A0A8
// Target type:     <no type info>
// ============================================================

void .cfg_get_cc_parm(/* see target signature */)
{
    // Tail-call to cfg_get_cc_parm via GOT/IAT indirection
    return cfg_get_cc_parm(/* forwarded args */);
}

