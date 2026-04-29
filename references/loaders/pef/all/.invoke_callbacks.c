// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_8020
//
// Resolved target: invoke_callbacks
// Target address:  0x8210
// GOT/IAT slot:    0x8020
// Slot symbol:     off_8020
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

