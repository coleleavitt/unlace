// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ECF0
// Name:            .qstrftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ECF0 jmp     cs:off_4E9E60
//
// Resolved target: qstrftime
// Target address:  0x4EC8B0
// GOT/IAT slot:    0x4E9E60
// Slot symbol:     off_4E9E60
// Target type:     <no type info>
// ============================================================

void .qstrftime(/* see target signature */)
{
    // Tail-call to qstrftime via GOT/IAT indirection
    return qstrftime(/* forwarded args */);
}

