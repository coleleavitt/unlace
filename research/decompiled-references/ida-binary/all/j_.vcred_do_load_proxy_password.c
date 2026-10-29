// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FEE20
// Name:            j_.vcred_do_load_proxy_password
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FEE20 jmp     _vcred_do_load_proxy_password
//
// Resolved target: .vcred_do_load_proxy_password
// Target address:  0x114460
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.vcred_do_load_proxy_password(/* see target signature */)
{
    // Tail-call to .vcred_do_load_proxy_password via direct jump indirection
    return .vcred_do_load_proxy_password(/* forwarded args */);
}

