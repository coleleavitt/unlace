// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1131D0
// Name:            ._ZNK2QT11QPageLayout14fullRectPixelsEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1131D0 jmp     cs:_ZNK2QT11QPageLayout14fullRectPixelsEi_ptr
//
// Resolved target: _ZNK2QT11QPageLayout14fullRectPixelsEi
// Target address:  0x8D4650
// GOT/IAT slot:    0x8A0588
// Slot symbol:     _ZNK2QT11QPageLayout14fullRectPixelsEi_ptr
// Target type:     _QWORD(QT::QPageLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QPageLayout14fullRectPixelsEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QPageLayout14fullRectPixelsEi via GOT/IAT indirection
    return _ZNK2QT11QPageLayout14fullRectPixelsEi(/* forwarded args */);
}

