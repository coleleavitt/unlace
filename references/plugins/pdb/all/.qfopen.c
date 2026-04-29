// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D9A0
// Name:            .qfopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D9A0 jmp     cs:off_B34B8
//
// Resolved target: qfopen
// Target address:  0xB3C70
// GOT/IAT slot:    0xB34B8
// Slot symbol:     off_B34B8
// Target type:     <no type info>
// ============================================================

void .qfopen(/* see target signature */)
{
    // Tail-call to qfopen via GOT/IAT indirection
    return qfopen(/* forwarded args */);
}

