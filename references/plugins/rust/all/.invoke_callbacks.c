// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2060
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2060 jmp     cs:off_A018
//
// Resolved target: invoke_callbacks
// Target address:  0xB2E8
// GOT/IAT slot:    0xA018
// Slot symbol:     off_A018
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

