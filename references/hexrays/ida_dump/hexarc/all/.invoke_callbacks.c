// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29390
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29390 jmp     cs:off_4B91B0
//
// Resolved target: invoke_callbacks
// Target address:  0x4BBB80
// GOT/IAT slot:    0x4B91B0
// Slot symbol:     off_4B91B0
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

