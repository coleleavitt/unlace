// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112850
// Name:            .lcred_process_switch
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112850 jmp     cs:lcred_process_switch_ptr
//
// Resolved target: lcred_process_switch
// Target address:  0x8D4028
// GOT/IAT slot:    0x8A00C8
// Slot symbol:     lcred_process_switch_ptr
// Target type:     <no type info>
// ============================================================

void .lcred_process_switch(/* see target signature */)
{
    // Tail-call to lcred_process_switch via GOT/IAT indirection
    return lcred_process_switch(/* forwarded args */);
}

