// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117800
// Name:            ._ZNK2QT11QMainWindow9statusBarEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117800 jmp     cs:_ZNK2QT11QMainWindow9statusBarEv_ptr
//
// Resolved target: _ZNK2QT11QMainWindow9statusBarEv
// Target address:  0x8D72F8
// GOT/IAT slot:    0x8A28A0
// Slot symbol:     _ZNK2QT11QMainWindow9statusBarEv_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QMainWindow9statusBarEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMainWindow9statusBarEv via GOT/IAT indirection
    return _ZNK2QT11QMainWindow9statusBarEv(/* forwarded args */);
}

