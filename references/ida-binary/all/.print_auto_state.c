// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116360
// Name:            .print_auto_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116360 jmp     cs:print_auto_state_ptr
//
// Resolved target: print_auto_state
// Target address:  0x8D65E0
// GOT/IAT slot:    0x8A1E50
// Slot symbol:     print_auto_state_ptr
// Target type:     <no type info>
// ============================================================

void .print_auto_state(/* see target signature */)
{
    // Tail-call to print_auto_state via GOT/IAT indirection
    return print_auto_state(/* forwarded args */);
}

