// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A650
// Name:            .vcred_process_switch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A650 jmp     cs:vcred_process_switch_ptr
//
// Resolved target: vcred_process_switch
// Target address:  0x8D9010
// GOT/IAT slot:    0x8A3FC8
// Slot symbol:     vcred_process_switch_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_process_switch(/* see target signature */)
{
    // Tail-call to vcred_process_switch via GOT/IAT indirection
    return vcred_process_switch(/* forwarded args */);
}

