// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9130
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9130 jmp     cs:off_2E080
//
// Resolved target: invoke_callbacks
// Target address:  0x2E6F0
// GOT/IAT slot:    0x2E080
// Slot symbol:     off_2E080
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

