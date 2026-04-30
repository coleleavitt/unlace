// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116430
// Name:            ._ZNK2QT11QPageLayout15paintRectPixelsEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116430 jmp     cs:_ZNK2QT11QPageLayout15paintRectPixelsEi_ptr
//
// Resolved target: _ZNK2QT11QPageLayout15paintRectPixelsEi
// Target address:  0x8D6668
// GOT/IAT slot:    0x8A1EB8
// Slot symbol:     _ZNK2QT11QPageLayout15paintRectPixelsEi_ptr
// Target type:     _QWORD(QT::QPageLayout *__hidden this, int)
// ============================================================

/* see target sig */ ._ZNK2QT11QPageLayout15paintRectPixelsEi(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QPageLayout15paintRectPixelsEi via GOT/IAT indirection
    return _ZNK2QT11QPageLayout15paintRectPixelsEi(/* forwarded args */);
}

