// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1173B0
// Name:            ._ZN2QT12QApplication17startDragDistanceEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1173B0 jmp     cs:_ZN2QT12QApplication17startDragDistanceEv_ptr
//
// Resolved target: _ZN2QT12QApplication17startDragDistanceEv
// Target address:  0x8D7048
// GOT/IAT slot:    0x8A2678
// Slot symbol:     _ZN2QT12QApplication17startDragDistanceEv_ptr
// Target type:     _QWORD(QT::QApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QApplication17startDragDistanceEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QApplication17startDragDistanceEv via GOT/IAT indirection
    return _ZN2QT12QApplication17startDragDistanceEv(/* forwarded args */);
}

