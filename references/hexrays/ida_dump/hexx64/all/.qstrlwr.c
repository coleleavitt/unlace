// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB30
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB30 jmp     cs:off_4ED580
//
// Resolved target: qstrlwr
// Target address:  0x4F1880
// GOT/IAT slot:    0x4ED580
// Slot symbol:     off_4ED580
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

