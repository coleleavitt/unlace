// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119AB0
// Name:            .is_debugger_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119AB0 jmp     cs:is_debugger_on_ptr
//
// Resolved target: is_debugger_on
// Target address:  0x8D88B8
// GOT/IAT slot:    0x8A39F8
// Slot symbol:     is_debugger_on_ptr
// Target type:     <no type info>
// ============================================================

void .is_debugger_on(/* see target signature */)
{
    // Tail-call to is_debugger_on via GOT/IAT indirection
    return is_debugger_on(/* forwarded args */);
}

