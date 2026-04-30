// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2FEE50
// Name:            j_.lcred_process_switch
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2FEE50 jmp     _lcred_process_switch
//
// Resolved target: .lcred_process_switch
// Target address:  0x112850
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.lcred_process_switch(/* see target signature */)
{
    // Tail-call to .lcred_process_switch via direct jump indirection
    return .lcred_process_switch(/* forwarded args */);
}

