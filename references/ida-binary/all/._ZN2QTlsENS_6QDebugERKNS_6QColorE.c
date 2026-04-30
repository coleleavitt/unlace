// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1111C0
// Name:            ._ZN2QTlsENS_6QDebugERKNS_6QColorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1111C0 jmp     cs:_ZN2QTlsENS_6QDebugERKNS_6QColorE_ptr
//
// Resolved target: _ZN2QTlsENS_6QDebugERKNS_6QColorE
// Target address:  0x8D3188
// GOT/IAT slot:    0x89F580
// Slot symbol:     _ZN2QTlsENS_6QDebugERKNS_6QColorE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QTlsENS_6QDebugERKNS_6QColorE(/* see target signature */)
{
    // Tail-call to _ZN2QTlsENS_6QDebugERKNS_6QColorE via GOT/IAT indirection
    return _ZN2QTlsENS_6QDebugERKNS_6QColorE(/* forwarded args */);
}

