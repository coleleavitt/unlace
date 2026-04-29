// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_4010
//
// Resolved target: invoke_callbacks
// Target address:  0x4128
// GOT/IAT slot:    0x4010
// Slot symbol:     off_4010
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

