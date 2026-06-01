// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117F30
// Name:            .vcred_do_load_password
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117F30 jmp     cs:vcred_do_load_password_ptr
//
// Resolved target: vcred_do_load_password
// Target address:  0x8D7798
// GOT/IAT slot:    0x8A2C38
// Slot symbol:     vcred_do_load_password_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_do_load_password(/* see target signature */)
{
    // Tail-call to vcred_do_load_password via GOT/IAT indirection
    return vcred_do_load_password(/* forwarded args */);
}

