// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x49C0
// Name:            .Z3_mk_context_rc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x49C0 jmp     cs:off_4E4C8
//
// Resolved target: Z3_mk_context_rc
// Target address:  0x4FB00
// GOT/IAT slot:    0x4E4C8
// Slot symbol:     off_4E4C8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_context_rc(/* see target signature */)
{
    // Tail-call to Z3_mk_context_rc via GOT/IAT indirection
    return Z3_mk_context_rc(/* forwarded args */);
}

