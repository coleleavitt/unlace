// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115510
// Name:            ._ZNK2QT6QColor3rgbEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115510 jmp     cs:_ZNK2QT6QColor3rgbEv_ptr
//
// Resolved target: _ZNK2QT6QColor3rgbEv
// Target address:  0x8D5D00
// GOT/IAT slot:    0x8A1728
// Slot symbol:     _ZNK2QT6QColor3rgbEv_ptr
// Target type:     _QWORD(QT::QColor *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT6QColor3rgbEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT6QColor3rgbEv via GOT/IAT indirection
    return _ZNK2QT6QColor3rgbEv(/* forwarded args */);
}

