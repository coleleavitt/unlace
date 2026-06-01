// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118800
// Name:            .set_ida_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118800 jmp     cs:set_ida_state_ptr
//
// Resolved target: set_ida_state
// Target address:  0x8D7CF8
// GOT/IAT slot:    0x8A30A0
// Slot symbol:     set_ida_state_ptr
// Target type:     <no type info>
// ============================================================

void .set_ida_state(/* see target signature */)
{
    // Tail-call to set_ida_state via GOT/IAT indirection
    return set_ida_state(/* forwarded args */);
}

