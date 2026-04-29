// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA160
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA160 jmp     cs:off_CA098
//
// Resolved target: invoke_callbacks
// Target address:  0xD09C0
// GOT/IAT slot:    0xCA098
// Slot symbol:     off_CA098
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

