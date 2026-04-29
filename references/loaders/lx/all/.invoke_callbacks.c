// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20A0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20A0 jmp     cs:off_B038
//
// Resolved target: invoke_callbacks
// Target address:  0xB2E0
// GOT/IAT slot:    0xB038
// Slot symbol:     off_B038
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

