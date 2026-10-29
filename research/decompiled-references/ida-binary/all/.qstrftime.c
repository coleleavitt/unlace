// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112170
// Name:            .qstrftime
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112170 jmp     cs:qstrftime_ptr
//
// Resolved target: qstrftime
// Target address:  0x8D3BB0
// GOT/IAT slot:    0x89FD58
// Slot symbol:     qstrftime_ptr
// Target type:     <no type info>
// ============================================================

void .qstrftime(/* see target signature */)
{
    // Tail-call to qstrftime via GOT/IAT indirection
    return qstrftime(/* forwarded args */);
}

