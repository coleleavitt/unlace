// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A240
// Name:            ._ZN2QT5QIconC1ERKS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A240 jmp     cs:_ZN2QT5QIconC1ERKS0__ptr
//
// Resolved target: _ZN2QT5QIconC1ERKS0_
// Target address:  0x8D8D68
// GOT/IAT slot:    0x8A3DC0
// Slot symbol:     _ZN2QT5QIconC1ERKS0__ptr
// Target type:     _QWORD(QT::QIcon *__hidden this, const QT::QIcon *)
// ============================================================

/* see target sig */ ._ZN2QT5QIconC1ERKS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT5QIconC1ERKS0_ via GOT/IAT indirection
    return _ZN2QT5QIconC1ERKS0_(/* forwarded args */);
}

