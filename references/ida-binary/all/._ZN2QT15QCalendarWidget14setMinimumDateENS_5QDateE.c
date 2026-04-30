// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BC30
// Name:            ._ZN2QT15QCalendarWidget14setMinimumDateENS_5QDateE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BC30 jmp     cs:_ZN2QT15QCalendarWidget14setMinimumDateENS_5QDateE_ptr
//
// Resolved target: _ZN2QT15QCalendarWidget14setMinimumDateENS_5QDateE
// Target address:  0x8D9DD8
// GOT/IAT slot:    0x8A4AB8
// Slot symbol:     _ZN2QT15QCalendarWidget14setMinimumDateENS_5QDateE_ptr
// Target type:     _QWORD __high(QT::QDate)
// ============================================================

/* see target sig */ ._ZN2QT15QCalendarWidget14setMinimumDateENS_5QDateE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QCalendarWidget14setMinimumDateENS_5QDateE via GOT/IAT indirection
    return _ZN2QT15QCalendarWidget14setMinimumDateENS_5QDateE(/* forwarded args */);
}

