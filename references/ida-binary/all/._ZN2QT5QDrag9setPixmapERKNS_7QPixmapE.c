// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0F0
// Name:            ._ZN2QT5QDrag9setPixmapERKNS_7QPixmapE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0F0 jmp     cs:_ZN2QT5QDrag9setPixmapERKNS_7QPixmapE_ptr
//
// Resolved target: _ZN2QT5QDrag9setPixmapERKNS_7QPixmapE
// Target address:  0x8D96B0
// GOT/IAT slot:    0x8A4518
// Slot symbol:     _ZN2QT5QDrag9setPixmapERKNS_7QPixmapE_ptr
// Target type:     _QWORD(QT::QDrag *__hidden this, const QT::QPixmap *)
// ============================================================

/* see target sig */ ._ZN2QT5QDrag9setPixmapERKNS_7QPixmapE(/* see target signature */)
{
    // Tail-call to _ZN2QT5QDrag9setPixmapERKNS_7QPixmapE via GOT/IAT indirection
    return _ZN2QT5QDrag9setPixmapERKNS_7QPixmapE(/* forwarded args */);
}

