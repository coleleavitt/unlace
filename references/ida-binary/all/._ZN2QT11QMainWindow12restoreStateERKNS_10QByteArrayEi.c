// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119B80
// Name:            ._ZN2QT11QMainWindow12restoreStateERKNS_10QByteArrayEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119B80 jmp     cs:_ZN2QT11QMainWindow12restoreStateERKNS_10QByteArrayEi_ptr
//
// Resolved target: _ZN2QT11QMainWindow12restoreStateERKNS_10QByteArrayEi
// Target address:  0x8D8938
// GOT/IAT slot:    0x8A3A60
// Slot symbol:     _ZN2QT11QMainWindow12restoreStateERKNS_10QByteArrayEi_ptr
// Target type:     _QWORD(QT::QMainWindow *__hidden this, const QT::QByteArray *, int)
// ============================================================

/* see target sig */ ._ZN2QT11QMainWindow12restoreStateERKNS_10QByteArrayEi(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMainWindow12restoreStateERKNS_10QByteArrayEi via GOT/IAT indirection
    return _ZN2QT11QMainWindow12restoreStateERKNS_10QByteArrayEi(/* forwarded args */);
}

