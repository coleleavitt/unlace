// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9270
// Name:            .vcred_do_load_proxy_password
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9270 jmp     cs:off_2C7A120
//
// Resolved target: vcred_do_load_proxy_password
// Target address:  0x7C9A70
// GOT/IAT slot:    0x2C7A120
// Slot symbol:     off_2C7A120
// Target type:     <no type info>
// ============================================================

void .vcred_do_load_proxy_password(/* see target signature */)
{
    // Tail-call to vcred_do_load_proxy_password via GOT/IAT indirection
    return vcred_do_load_proxy_password(/* forwarded args */);
}

