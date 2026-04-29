// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1F0
// Name:            .auto_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1F0 jmp     cs:off_4EE0E0
//
// Resolved target: auto_wait
// Target address:  0x4F2430
// GOT/IAT slot:    0x4EE0E0
// Slot symbol:     off_4EE0E0
// Target type:     <no type info>
// ============================================================

void .auto_wait(/* see target signature */)
{
    // Tail-call to auto_wait via GOT/IAT indirection
    return auto_wait(/* forwarded args */);
}

