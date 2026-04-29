// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D390
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D390 jmp     cs:off_4E91B0
//
// Resolved target: invoke_callbacks
// Target address:  0x4EBBA0
// GOT/IAT slot:    0x4E91B0
// Slot symbol:     off_4E91B0
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

