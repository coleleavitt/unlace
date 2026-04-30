// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114850
// Name:            ._ZNK2QT9QSplitter6widgetEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114850 jmp     cs:_ZNK2QT9QSplitter6widgetEi_ptr
//
// Resolved target: _ZNK2QT9QSplitter6widgetEi
// Target address:  0x8D54C8
// GOT/IAT slot:    0x8A10C8
// Slot symbol:     _ZNK2QT9QSplitter6widgetEi_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT9QSplitter6widgetEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT9QSplitter6widgetEi via GOT/IAT indirection
    return _ZNK2QT9QSplitter6widgetEi(/* forwarded args */);
}

