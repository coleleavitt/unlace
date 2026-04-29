// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_A028
//
// Resolved target: invoke_callbacks
// Target address:  0xA2D8
// GOT/IAT slot:    0xA028
// Slot symbol:     off_A028
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

