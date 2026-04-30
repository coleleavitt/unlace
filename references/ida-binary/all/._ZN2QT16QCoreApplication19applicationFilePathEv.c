// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1136B0
// Name:            ._ZN2QT16QCoreApplication19applicationFilePathEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1136B0 jmp     cs:_ZN2QT16QCoreApplication19applicationFilePathEv_ptr
//
// Resolved target: _ZN2QT16QCoreApplication19applicationFilePathEv
// Target address:  0x8D4968
// GOT/IAT slot:    0x8A07F8
// Slot symbol:     _ZN2QT16QCoreApplication19applicationFilePathEv_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication19applicationFilePathEv(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication19applicationFilePathEv via GOT/IAT indirection
    return _ZN2QT16QCoreApplication19applicationFilePathEv(/* forwarded args */);
}

