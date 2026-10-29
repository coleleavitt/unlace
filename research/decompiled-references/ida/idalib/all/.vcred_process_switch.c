// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACDA0
// Name:            .vcred_process_switch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACDA0 jmp     cs:off_2C7BEB8
//
// Resolved target: vcred_process_switch
// Target address:  0x7C87F0
// GOT/IAT slot:    0x2C7BEB8
// Slot symbol:     off_2C7BEB8
// Target type:     <no type info>
// ============================================================

void .vcred_process_switch(/* see target signature */)
{
    // Tail-call to vcred_process_switch via GOT/IAT indirection
    return vcred_process_switch(/* forwarded args */);
}

