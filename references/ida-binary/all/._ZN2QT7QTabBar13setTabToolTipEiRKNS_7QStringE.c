// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B5E0
// Name:            ._ZN2QT7QTabBar13setTabToolTipEiRKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B5E0 jmp     cs:_ZN2QT7QTabBar13setTabToolTipEiRKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT7QTabBar13setTabToolTipEiRKNS_7QStringE
// Target address:  0x8D99F0
// GOT/IAT slot:    0x8A4790
// Slot symbol:     _ZN2QT7QTabBar13setTabToolTipEiRKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar13setTabToolTipEiRKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar13setTabToolTipEiRKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT7QTabBar13setTabToolTipEiRKNS_7QStringE(/* forwarded args */);
}

