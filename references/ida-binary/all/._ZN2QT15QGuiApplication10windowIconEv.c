// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1122A0
// Name:            ._ZN2QT15QGuiApplication10windowIconEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1122A0 jmp     cs:_ZN2QT15QGuiApplication10windowIconEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication10windowIconEv
// Target address:  0x8D3C60
// GOT/IAT slot:    0x89FDF0
// Slot symbol:     _ZN2QT15QGuiApplication10windowIconEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication10windowIconEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication10windowIconEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication10windowIconEv(/* forwarded args */);
}

