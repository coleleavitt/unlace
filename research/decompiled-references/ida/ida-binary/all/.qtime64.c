// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118E00
// Name:            .qtime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118E00 jmp     cs:qtime64_ptr
//
// Resolved target: qtime64
// Target address:  0x8D8070
// GOT/IAT slot:    0x8A33A0
// Slot symbol:     qtime64_ptr
// Target type:     <no type info>
// ============================================================

void .qtime64(/* see target signature */)
{
    // Tail-call to qtime64 via GOT/IAT indirection
    return qtime64(/* forwarded args */);
}

