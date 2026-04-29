// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x160B0
// Name:            ._ZN2QTlsENS_6QDebugERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x160B0 jmp     cs:off_4F040
//
// Resolved target: _ZN2QTlsENS_6QDebugERKNS_6QColorE
// Target address:  0x4FE68
// GOT/IAT slot:    0x4F040
// Slot symbol:     off_4F040
// Target type:     <no type info>
// ============================================================

void ._ZN2QTlsENS_6QDebugERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QTlsENS_6QDebugERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QTlsENS_6QDebugERKNS_6QColorE(/* forwarded args */);
}

