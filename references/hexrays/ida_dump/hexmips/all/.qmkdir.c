// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE40
// Name:            .qmkdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE40 jmp     cs:off_4CDF08
//
// Resolved target: qmkdir
// Target address:  0x4D0958
// GOT/IAT slot:    0x4CDF08
// Slot symbol:     off_4CDF08
// Target type:     <no type info>
// ============================================================

void .qmkdir(/* see target signature */)
{
    // Tail-call to qmkdir via GOT/IAT indirection
    return qmkdir(/* forwarded args */);
}

