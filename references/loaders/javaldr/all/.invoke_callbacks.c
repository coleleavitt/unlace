// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1030
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1030 jmp     cs:off_4000
//
// Resolved target: invoke_callbacks
// Target address:  0x4098
// GOT/IAT slot:    0x4000
// Slot symbol:     off_4000
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

