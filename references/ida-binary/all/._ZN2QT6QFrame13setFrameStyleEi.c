// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1162C0
// Name:            ._ZN2QT6QFrame13setFrameStyleEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1162C0 jmp     cs:_ZN2QT6QFrame13setFrameStyleEi_ptr
//
// Resolved target: _ZN2QT6QFrame13setFrameStyleEi
// Target address:  0x8D6578
// GOT/IAT slot:    0x8A1E00
// Slot symbol:     _ZN2QT6QFrame13setFrameStyleEi_ptr
// Target type:     _QWORD(QT::QFrame *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT6QFrame13setFrameStyleEi(/* see target signature */)
{
    // Tail-call to _ZN2QT6QFrame13setFrameStyleEi via GOT/IAT indirection
    return _ZN2QT6QFrame13setFrameStyleEi(/* forwarded args */);
}

