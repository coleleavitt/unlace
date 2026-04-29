// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A520
// Name:            .qstrdup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A520 jmp     cs:off_4DA278
//
// Resolved target: qstrdup
// Target address:  0x4DCC48
// GOT/IAT slot:    0x4DA278
// Slot symbol:     off_4DA278
// Target type:     <no type info>
// ============================================================

void .qstrdup(/* see target signature */)
{
    // Tail-call to qstrdup via GOT/IAT indirection
    return qstrdup(/* forwarded args */);
}

