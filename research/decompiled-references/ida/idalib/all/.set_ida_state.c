// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABAE0
// Name:            .set_ida_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABAE0 jmp     cs:off_2C7B558
//
// Resolved target: set_ida_state
// Target address:  0x3A2560
// GOT/IAT slot:    0x2C7B558
// Slot symbol:     off_2C7B558
// Target type:     <no type info>
// ============================================================

void .set_ida_state(/* see target signature */)
{
    // Tail-call to set_ida_state via GOT/IAT indirection
    return set_ida_state(/* forwarded args */);
}

