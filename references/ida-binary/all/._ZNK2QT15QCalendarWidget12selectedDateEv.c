// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115F40
// Name:            ._ZNK2QT15QCalendarWidget12selectedDateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115F40 jmp     cs:_ZNK2QT15QCalendarWidget12selectedDateEv_ptr
//
// Resolved target: _ZNK2QT15QCalendarWidget12selectedDateEv
// Target address:  0x8D6358
// GOT/IAT slot:    0x8A1C40
// Slot symbol:     _ZNK2QT15QCalendarWidget12selectedDateEv_ptr
// Target type:     _QWORD(QT::QCalendarWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT15QCalendarWidget12selectedDateEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT15QCalendarWidget12selectedDateEv via GOT/IAT indirection
    return _ZNK2QT15QCalendarWidget12selectedDateEv(/* forwarded args */);
}

