// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5FB5C0
// Name:            j_.lcred_process_switch
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5FB5C0 jmp     _lcred_process_switch
//
// Resolved target: .lcred_process_switch
// Target address:  0x2A7F50
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.lcred_process_switch(/* see target signature */)
{
    // Tail-call to .lcred_process_switch via direct jump indirection
    return .lcred_process_switch(/* forwarded args */);
}

