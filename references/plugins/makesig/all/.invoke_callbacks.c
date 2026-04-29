// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30D0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30D0 jmp     cs:off_20050
//
// Resolved target: invoke_callbacks
// Target address:  0x21960
// GOT/IAT slot:    0x20050
// Slot symbol:     off_20050
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

