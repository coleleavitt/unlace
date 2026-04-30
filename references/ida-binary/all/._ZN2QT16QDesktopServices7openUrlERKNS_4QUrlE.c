// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1163A0
// Name:            ._ZN2QT16QDesktopServices7openUrlERKNS_4QUrlE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1163A0 jmp     cs:_ZN2QT16QDesktopServices7openUrlERKNS_4QUrlE_ptr
//
// Resolved target: _ZN2QT16QDesktopServices7openUrlERKNS_4QUrlE
// Target address:  0x8D6610
// GOT/IAT slot:    0x8A1E70
// Slot symbol:     _ZN2QT16QDesktopServices7openUrlERKNS_4QUrlE_ptr
// Target type:     _QWORD(QT::QDesktopServices *__hidden this, const QT::QUrl *)
// ============================================================

/* see target sig */ ._ZN2QT16QDesktopServices7openUrlERKNS_4QUrlE(/* see target signature */)
{
    // Tail-call to _ZN2QT16QDesktopServices7openUrlERKNS_4QUrlE via GOT/IAT indirection
    return _ZN2QT16QDesktopServices7openUrlERKNS_4QUrlE(/* forwarded args */);
}

