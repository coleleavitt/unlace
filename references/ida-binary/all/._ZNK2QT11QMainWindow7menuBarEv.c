// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114FC0
// Name:            ._ZNK2QT11QMainWindow7menuBarEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114FC0 jmp     cs:_ZNK2QT11QMainWindow7menuBarEv_ptr
//
// Resolved target: _ZNK2QT11QMainWindow7menuBarEv
// Target address:  0x8D59A0
// GOT/IAT slot:    0x8A1480
// Slot symbol:     _ZNK2QT11QMainWindow7menuBarEv_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QMainWindow7menuBarEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QMainWindow7menuBarEv via GOT/IAT indirection
    return _ZNK2QT11QMainWindow7menuBarEv(/* forwarded args */);
}

