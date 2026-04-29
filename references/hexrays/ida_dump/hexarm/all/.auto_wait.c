// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F0D0
// Name:            .auto_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F0D0 jmp     cs:off_4EA050
//
// Resolved target: auto_wait
// Target address:  0x4ECAA0
// GOT/IAT slot:    0x4EA050
// Slot symbol:     off_4EA050
// Target type:     <no type info>
// ============================================================

void .auto_wait(/* see target signature */)
{
    // Tail-call to auto_wait via GOT/IAT indirection
    return auto_wait(/* forwarded args */);
}

