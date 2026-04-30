// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111BA0
// Name:            ._ZN2QT11QProxyStyleD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111BA0 jmp     cs:_ZN2QT11QProxyStyleD2Ev_ptr
//
// Resolved target: _ZN2QT11QProxyStyleD2Ev
// Target address:  0x8D3808
// GOT/IAT slot:    0x89FA70
// Slot symbol:     _ZN2QT11QProxyStyleD2Ev_ptr
// Target type:     void(QT::QProxyStyle *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT11QProxyStyleD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT11QProxyStyleD2Ev via GOT/IAT indirection
    return _ZN2QT11QProxyStyleD2Ev(/* forwarded args */);
}

