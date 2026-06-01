// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE80
// Name:            .is_debugger_memory
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE80 jmp     cs:off_2C7B728
//
// Resolved target: is_debugger_memory
// Target address:  0x3FD2E0
// GOT/IAT slot:    0x2C7B728
// Slot symbol:     off_2C7B728
// Target type:     <no type info>
// ============================================================

void .is_debugger_memory(/* see target signature */)
{
    // Tail-call to is_debugger_memory via GOT/IAT indirection
    return is_debugger_memory(/* forwarded args */);
}

