// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9150
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9150 jmp     cs:off_89090
//
// Resolved target: invoke_callbacks
// Target address:  0x8C390
// GOT/IAT slot:    0x89090
// Slot symbol:     off_89090
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

