// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118DD0
// Name:            .is_debugger_memory
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118DD0 jmp     cs:is_debugger_memory_ptr
//
// Resolved target: is_debugger_memory
// Target address:  0x8D8058
// GOT/IAT slot:    0x8A3388
// Slot symbol:     is_debugger_memory_ptr
// Target type:     <no type info>
// ============================================================

void .is_debugger_memory(/* see target signature */)
{
    // Tail-call to is_debugger_memory via GOT/IAT indirection
    return is_debugger_memory(/* forwarded args */);
}

