// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6100
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6100 jmp     cs:off_24068
//
// Resolved target: invoke_callbacks
// Target address:  0x25E38
// GOT/IAT slot:    0x24068
// Slot symbol:     off_24068
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

