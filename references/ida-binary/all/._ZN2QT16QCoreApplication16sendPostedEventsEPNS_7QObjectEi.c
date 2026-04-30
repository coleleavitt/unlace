// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111980
// Name:            ._ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111980 jmp     cs:_ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi_ptr
//
// Resolved target: _ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi
// Target address:  0x8D36B8
// GOT/IAT slot:    0x89F960
// Slot symbol:     _ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi_ptr
// Target type:     _QWORD(QT::QCoreApplication *__hidden this, QT::QObject *, int)
// ============================================================

/* see target sig */ ._ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi(/* see target signature */)
{
    // Tail-call to _ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi via GOT/IAT indirection
    return _ZN2QT16QCoreApplication16sendPostedEventsEPNS_7QObjectEi(/* forwarded args */);
}

