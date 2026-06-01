// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8620
// Name:            .qtell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8620 jmp     cs:off_2C79AF8
//
// Resolved target: qtell
// Target address:  0x83E870
// GOT/IAT slot:    0x2C79AF8
// Slot symbol:     off_2C79AF8
// Target type:     <no type info>
// ============================================================

void .qtell(/* see target signature */)
{
    // Tail-call to qtell via GOT/IAT indirection
    return qtell(/* forwarded args */);
}

