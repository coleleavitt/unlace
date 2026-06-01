// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1142E0
// Name:            .cfg_get_cc_parm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1142E0 jmp     cs:cfg_get_cc_parm_ptr
//
// Resolved target: cfg_get_cc_parm
// Target address:  0x8D5128
// GOT/IAT slot:    0x8A0E10
// Slot symbol:     cfg_get_cc_parm_ptr
// Target type:     <no type info>
// ============================================================

void .cfg_get_cc_parm(/* see target signature */)
{
    // Tail-call to cfg_get_cc_parm via GOT/IAT indirection
    return cfg_get_cc_parm(/* forwarded args */);
}

