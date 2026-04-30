// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D70
// Name:            ._ZN2QT5qHashENS_11QStringViewEm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D70 jmp     cs:_ZN2QT5qHashENS_11QStringViewEm_ptr
//
// Resolved target: _ZN2QT5qHashENS_11QStringViewEm
// Target address:  0x8D6C40
// GOT/IAT slot:    0x8A2358
// Slot symbol:     _ZN2QT5qHashENS_11QStringViewEm_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT5qHashENS_11QStringViewEm(/* see target signature */)
{
    // Tail-call to _ZN2QT5qHashENS_11QStringViewEm via GOT/IAT indirection
    return _ZN2QT5qHashENS_11QStringViewEm(/* forwarded args */);
}

