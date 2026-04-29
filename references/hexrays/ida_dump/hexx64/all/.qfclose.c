// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C850
// Name:            .qfclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C850 jmp     cs:off_4EDC10
//
// Resolved target: qfclose
// Target address:  0x4F1F48
// GOT/IAT slot:    0x4EDC10
// Slot symbol:     off_4EDC10
// Target type:     <no type info>
// ============================================================

void .qfclose(/* see target signature */)
{
    // Tail-call to qfclose via GOT/IAT indirection
    return qfclose(/* forwarded args */);
}

