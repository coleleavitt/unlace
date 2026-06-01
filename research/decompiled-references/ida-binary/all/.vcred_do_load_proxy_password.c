// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114460
// Name:            .vcred_do_load_proxy_password
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114460 jmp     cs:vcred_do_load_proxy_password_ptr
//
// Resolved target: vcred_do_load_proxy_password
// Target address:  0x8D5208
// GOT/IAT slot:    0x8A0ED0
// Slot symbol:     vcred_do_load_proxy_password_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_do_load_proxy_password(/* see target signature */)
{
    // Tail-call to vcred_do_load_proxy_password via GOT/IAT indirection
    return vcred_do_load_proxy_password(/* forwarded args */);
}

