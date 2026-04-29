// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7080
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7080 jmp     cs:off_26028
//
// Resolved target: invoke_callbacks
// Target address:  0x262E0
// GOT/IAT slot:    0x26028
// Slot symbol:     off_26028
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

