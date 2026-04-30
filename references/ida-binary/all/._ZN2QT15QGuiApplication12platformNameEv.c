// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112560
// Name:            ._ZN2QT15QGuiApplication12platformNameEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112560 jmp     cs:_ZN2QT15QGuiApplication12platformNameEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication12platformNameEv
// Target address:  0x8D3E50
// GOT/IAT slot:    0x89FF50
// Slot symbol:     _ZN2QT15QGuiApplication12platformNameEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication12platformNameEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication12platformNameEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication12platformNameEv(/* forwarded args */);
}

