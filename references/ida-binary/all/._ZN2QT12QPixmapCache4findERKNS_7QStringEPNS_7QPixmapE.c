// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113D20
// Name:            ._ZN2QT12QPixmapCache4findERKNS_7QStringEPNS_7QPixmapE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113D20 jmp     cs:_ZN2QT12QPixmapCache4findERKNS_7QStringEPNS_7QPixmapE_ptr
//
// Resolved target: _ZN2QT12QPixmapCache4findERKNS_7QStringEPNS_7QPixmapE
// Target address:  0x8D4D98
// GOT/IAT slot:    0x8A0B30
// Slot symbol:     _ZN2QT12QPixmapCache4findERKNS_7QStringEPNS_7QPixmapE_ptr
// Target type:     _QWORD(QT::QPixmapCache *__hidden this, const QT::QString *, QT::QPixmap *)
// ============================================================

/* see target sig */ ._ZN2QT12QPixmapCache4findERKNS_7QStringEPNS_7QPixmapE(/* see target signature */)
{
    // Tail-call to _ZN2QT12QPixmapCache4findERKNS_7QStringEPNS_7QPixmapE via GOT/IAT indirection
    return _ZN2QT12QPixmapCache4findERKNS_7QStringEPNS_7QPixmapE(/* forwarded args */);
}

