// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B3A0
// Name:            .invoke_callbacks
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B3A0 jmp     cs:off_4ED1B8
//
// Resolved target: invoke_callbacks
// Target address:  0x4F14B0
// GOT/IAT slot:    0x4ED1B8
// Slot symbol:     off_4ED1B8
// Target type:     <no type info>
// ============================================================

void .invoke_callbacks(/* see target signature */)
{
    // Tail-call to invoke_callbacks via GOT/IAT indirection
    return invoke_callbacks(/* forwarded args */);
}

