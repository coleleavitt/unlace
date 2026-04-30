// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119BC0
// Name:            ._ZN2QT9QLineEdit25createStandardContextMenuEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119BC0 jmp     cs:_ZN2QT9QLineEdit25createStandardContextMenuEv_ptr
//
// Resolved target: _ZN2QT9QLineEdit25createStandardContextMenuEv
// Target address:  0x8D8960
// GOT/IAT slot:    0x8A3A80
// Slot symbol:     _ZN2QT9QLineEdit25createStandardContextMenuEv_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit25createStandardContextMenuEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit25createStandardContextMenuEv via GOT/IAT indirection
    return _ZN2QT9QLineEdit25createStandardContextMenuEv(/* forwarded args */);
}

