// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5FB5A0
// Name:            j_.vcred_do_load_password
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5FB5A0 jmp     _vcred_do_load_password
//
// Resolved target: .vcred_do_load_password
// Target address:  0x2AB530
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.vcred_do_load_password(/* see target signature */)
{
    // Tail-call to .vcred_do_load_password via direct jump indirection
    return .vcred_do_load_password(/* forwarded args */);
}

