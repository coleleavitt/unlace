// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B6E0
// Name:            .qstrftime64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B6E0 jmp     cs:off_4DAB58
//
// Resolved target: qstrftime64
// Target address:  0x4DD560
// GOT/IAT slot:    0x4DAB58
// Slot symbol:     off_4DAB58
// Target type:     <no type info>
// ============================================================

void .qstrftime64(/* see target signature */)
{
    // Tail-call to qstrftime64 via GOT/IAT indirection
    return qstrftime64(/* forwarded args */);
}

