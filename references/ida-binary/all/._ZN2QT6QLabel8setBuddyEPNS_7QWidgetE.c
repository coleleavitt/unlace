// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119CD0
// Name:            ._ZN2QT6QLabel8setBuddyEPNS_7QWidgetE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119CD0 jmp     cs:_ZN2QT6QLabel8setBuddyEPNS_7QWidgetE_ptr
//
// Resolved target: _ZN2QT6QLabel8setBuddyEPNS_7QWidgetE
// Target address:  0x8D89F8
// GOT/IAT slot:    0x8A3B08
// Slot symbol:     _ZN2QT6QLabel8setBuddyEPNS_7QWidgetE_ptr
// Target type:     _QWORD(QT::QLabel *__hidden this, QT::QWidget *)
// ============================================================

/* see target sig */ ._ZN2QT6QLabel8setBuddyEPNS_7QWidgetE(/* see target signature */)
{
    // Tail-call to _ZN2QT6QLabel8setBuddyEPNS_7QWidgetE via GOT/IAT indirection
    return _ZN2QT6QLabel8setBuddyEPNS_7QWidgetE(/* forwarded args */);
}

