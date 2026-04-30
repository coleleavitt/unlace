// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114620
// Name:            ._ZN2QT7QObject10timerEventEPNS_11QTimerEventE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114620 jmp     cs:_ZN2QT7QObject10timerEventEPNS_11QTimerEventE_ptr
//
// Resolved target: _ZN2QT7QObject10timerEventEPNS_11QTimerEventE
// Target address:  0x8D5350
// GOT/IAT slot:    0x8A0FB0
// Slot symbol:     _ZN2QT7QObject10timerEventEPNS_11QTimerEventE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QObject10timerEventEPNS_11QTimerEventE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QObject10timerEventEPNS_11QTimerEventE via GOT/IAT indirection
    return _ZN2QT7QObject10timerEventEPNS_11QTimerEventE(/* forwarded args */);
}

