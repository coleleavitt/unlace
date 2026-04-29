// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D130
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D130 jmp     cs:off_B3080
//
// Resolved target: invoke_callbacks
// Target address:  0xB3800
// GOT/IAT slot:    0xB3080
// Slot symbol:     off_B3080
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

