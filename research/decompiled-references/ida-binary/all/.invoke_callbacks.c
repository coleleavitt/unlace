// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119070
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119070 jmp     cs:invoke_callbacks_ptr
//
// Resolved target: invoke_callbacks
// Target address:  0x8D8210
// GOT/IAT slot:    0x8A34D8
// Slot symbol:     invoke_callbacks_ptr
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

