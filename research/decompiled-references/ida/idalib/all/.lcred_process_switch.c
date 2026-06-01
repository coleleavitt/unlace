// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7F50
// Name:            .lcred_process_switch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7F50 jmp     cs:off_2C79790
//
// Resolved target: lcred_process_switch
// Target address:  0x7C8710
// GOT/IAT slot:    0x2C79790
// Slot symbol:     off_2C79790
// Target type:     <no type info>
// ============================================================

void .lcred_process_switch(/* see target signature */)
{
    // Tail-call to lcred_process_switch via GOT/IAT indirection
    return lcred_process_switch(/* forwarded args */);
}

