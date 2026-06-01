// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1129B0
// Name:            .qfputs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1129B0 jmp     cs:qfputs_ptr
//
// Resolved target: qfputs
// Target address:  0x8D4100
// GOT/IAT slot:    0x8A0178
// Slot symbol:     qfputs_ptr
// Target type:     <no type info>
// ============================================================

void .qfputs(/* see target signature */)
{
    // Tail-call to qfputs via GOT/IAT indirection
    return qfputs(/* forwarded args */);
}

