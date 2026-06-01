// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114690
// Name:            .qfsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114690 jmp     cs:qfsize_ptr
//
// Resolved target: qfsize
// Target address:  0x8D5390
// GOT/IAT slot:    0x8A0FE8
// Slot symbol:     qfsize_ptr
// Target type:     <no type info>
// ============================================================

void .qfsize(/* see target signature */)
{
    // Tail-call to qfsize via GOT/IAT indirection
    return qfsize(/* forwarded args */);
}

