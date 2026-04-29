// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C090
// Name:            .auto_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C090 jmp     cs:off_4C0030
//
// Resolved target: auto_wait
// Target address:  0x4C3558
// GOT/IAT slot:    0x4C0030
// Slot symbol:     off_4C0030
// Target type:     <no type info>
// ============================================================

void .auto_wait(/* see target signature */)
{
    // Tail-call to auto_wait via GOT/IAT indirection
    return auto_wait(/* forwarded args */);
}

