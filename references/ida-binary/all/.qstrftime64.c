// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114640
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114640 jmp     cs:qstrftime64_ptr
//
// Resolved target: qstrftime64
// Target address:  0x8D5360
// GOT/IAT slot:    0x8A0FC0
// Slot symbol:     qstrftime64_ptr
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

