// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112400
// Name:            ._ZN2QT9QSplitterD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112400 jmp     cs:_ZN2QT9QSplitterD2Ev_ptr
//
// Resolved target: _ZN2QT9QSplitterD2Ev
// Target address:  0x8D3D58
// GOT/IAT slot:    0x89FEA0
// Slot symbol:     _ZN2QT9QSplitterD2Ev_ptr
// Target type:     void(QT::QSplitter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QSplitterD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSplitterD2Ev via GOT/IAT indirection
    return _ZN2QT9QSplitterD2Ev(/* forwarded args */);
}

