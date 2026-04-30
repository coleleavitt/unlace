// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115D40
// Name:            ._ZN2QT10QTabWidget10setTabTextEiRKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115D40 jmp     cs:_ZN2QT10QTabWidget10setTabTextEiRKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT10QTabWidget10setTabTextEiRKNS_7QStringE
// Target address:  0x8D6208
// GOT/IAT slot:    0x8A1B40
// Slot symbol:     _ZN2QT10QTabWidget10setTabTextEiRKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QTabWidget *__hidden this, int, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT10QTabWidget10setTabTextEiRKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT10QTabWidget10setTabTextEiRKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT10QTabWidget10setTabTextEiRKNS_7QStringE(/* forwarded args */);
}

