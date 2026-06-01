// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB440
// Name:            .qatexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB440 jmp     cs:off_2C7B208
//
// Resolved target: qatexit
// Target address:  0x840DE0
// GOT/IAT slot:    0x2C7B208
// Slot symbol:     off_2C7B208
// Target type:     <no type info>
// ============================================================

void .qatexit(/* see target signature */)
{
    // Tail-call to qatexit via GOT/IAT indirection
    return qatexit(/* forwarded args */);
}

