// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112880
// Name:            ._ZN2QT7QWidget13showMaximizedEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112880 jmp     cs:_ZN2QT7QWidget13showMaximizedEv_ptr
//
// Resolved target: _ZN2QT7QWidget13showMaximizedEv
// Target address:  0x8D4048
// GOT/IAT slot:    0x8A00E0
// Slot symbol:     _ZN2QT7QWidget13showMaximizedEv_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget13showMaximizedEv(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget13showMaximizedEv via GOT/IAT indirection
    return _ZN2QT7QWidget13showMaximizedEv(/* forwarded args */);
}

