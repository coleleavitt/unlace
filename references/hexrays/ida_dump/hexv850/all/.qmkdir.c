// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE40
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE40 jmp     cs:off_4C0F08
//
// Resolved target: qmkdir
// Target address:  0x4C3F30
// GOT/IAT slot:    0x4C0F08
// Slot symbol:     off_4C0F08
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

