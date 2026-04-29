// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43A0
// Name:            .Z3_mk_sub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43A0 jmp     cs:off_4E1B8
//
// Resolved target: Z3_mk_sub
// Target address:  0x4F7C0
// GOT/IAT slot:    0x4E1B8
// Slot symbol:     off_4E1B8
// Target type:     <no type info>
// ============================================================

void .Z3_mk_sub(/* see target signature */)
{
    // Tail-call to Z3_mk_sub via GOT/IAT indirection
    return Z3_mk_sub(/* forwarded args */);
}

