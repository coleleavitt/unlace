// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCC0
// Name:            .qstrftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCC0 jmp     cs:off_4CDE48
//
// Resolved target: qstrftime
// Target address:  0x4D0898
// GOT/IAT slot:    0x4CDE48
// Slot symbol:     off_4CDE48
// Target type:     <no type info>
// ============================================================

void .qstrftime(/* see target signature */)
{
    // Tail-call to qstrftime via GOT/IAT indirection
    return qstrftime(/* forwarded args */);
}

