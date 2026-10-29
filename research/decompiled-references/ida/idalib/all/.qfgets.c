// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADB40
// Name:            .qfgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADB40 jmp     cs:off_2C7C588
//
// Resolved target: qfgets
// Target address:  0x83F890
// GOT/IAT slot:    0x2C7C588
// Slot symbol:     off_2C7C588
// Target type:     <no type info>
// ============================================================

void .qfgets(/* see target signature */)
{
    // Tail-call to qfgets via GOT/IAT indirection
    return qfgets(/* forwarded args */);
}

