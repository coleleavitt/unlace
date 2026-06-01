// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118210
// Name:            .set_regvar_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118210 jmp     cs:set_regvar_cmt_ptr
//
// Resolved target: set_regvar_cmt
// Target address:  0x8D7958
// GOT/IAT slot:    0x8A2DA8
// Slot symbol:     set_regvar_cmt_ptr
// Target type:     <no type info>
// ============================================================

void .set_regvar_cmt(/* see target signature */)
{
    // Tail-call to set_regvar_cmt via GOT/IAT indirection
    return set_regvar_cmt(/* forwarded args */);
}

