// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB530
// Name:            .vcred_do_load_password
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB530 jmp     cs:off_2C7B280
//
// Resolved target: vcred_do_load_password
// Target address:  0x7CB430
// GOT/IAT slot:    0x2C7B280
// Slot symbol:     off_2C7B280
// Target type:     <no type info>
// ============================================================

void .vcred_do_load_password(/* see target signature */)
{
    // Tail-call to vcred_do_load_password via GOT/IAT indirection
    return vcred_do_load_password(/* forwarded args */);
}

