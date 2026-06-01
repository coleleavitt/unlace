// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC00
// Name:            .qchsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC00 jmp     cs:off_2C7ADE8
//
// Resolved target: qchsize
// Target address:  0x83E8D0
// GOT/IAT slot:    0x2C7ADE8
// Slot symbol:     off_2C7ADE8
// Target type:     <no type info>
// ============================================================

void .qchsize(/* see target signature */)
{
    // Tail-call to qchsize via GOT/IAT indirection
    return qchsize(/* forwarded args */);
}

