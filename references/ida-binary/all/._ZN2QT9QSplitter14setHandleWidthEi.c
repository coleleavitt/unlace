// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1130A0
// Name:            ._ZN2QT9QSplitter14setHandleWidthEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1130A0 jmp     cs:_ZN2QT9QSplitter14setHandleWidthEi_ptr
//
// Resolved target: _ZN2QT9QSplitter14setHandleWidthEi
// Target address:  0x8D4590
// GOT/IAT slot:    0x8A04F0
// Slot symbol:     _ZN2QT9QSplitter14setHandleWidthEi_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this, int)
// ============================================================

/* see target sig */ ._ZN2QT9QSplitter14setHandleWidthEi(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSplitter14setHandleWidthEi via GOT/IAT indirection
    return _ZN2QT9QSplitter14setHandleWidthEi(/* forwarded args */);
}

