// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FEE40
// Name:            j_.vcred_process_switch
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FEE40 jmp     _vcred_process_switch
//
// Resolved target: .vcred_process_switch
// Target address:  0x11A650
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.vcred_process_switch(/* see target signature */)
{
    // Tail-call to .vcred_process_switch via direct jump indirection
    return .vcred_process_switch(/* forwarded args */);
}

