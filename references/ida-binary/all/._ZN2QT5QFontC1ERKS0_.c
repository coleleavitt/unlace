// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B800
// Name:            ._ZN2QT5QFontC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B800 jmp     cs:_ZN2QT5QFontC1ERKS0__ptr
//
// Resolved target: _ZN2QT5QFontC1ERKS0_
// Target address:  0x8D9B40
// GOT/IAT slot:    0x8A48A0
// Slot symbol:     _ZN2QT5QFontC1ERKS0__ptr
// Target type:     _QWORD(QT::QFont *__hidden this, const QT::QFont *)
// ============================================================

/* see target sig */ ._ZN2QT5QFontC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFontC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT5QFontC1ERKS0_(/* forwarded args */);
}

