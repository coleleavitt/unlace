// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC0E0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC0E0 jmp     cs:off_2C7B858
//
// Resolved target: invoke_callbacks
// Target address:  0x4B4A70
// GOT/IAT slot:    0x2C7B858
// Slot symbol:     off_2C7B858
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

