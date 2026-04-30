// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B160
// Name:            ._ZN2QT9QSplitter7refreshEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B160 jmp     cs:_ZN2QT9QSplitter7refreshEv_ptr
//
// Resolved target: _ZN2QT9QSplitter7refreshEv
// Target address:  0x8D96F0
// GOT/IAT slot:    0x8A4550
// Slot symbol:     _ZN2QT9QSplitter7refreshEv_ptr
// Target type:     _QWORD(QT::QSplitter *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QSplitter7refreshEv(/* see target signature */)
{
    // Tail-call to _ZN2QT9QSplitter7refreshEv via GOT/IAT indirection
    return _ZN2QT9QSplitter7refreshEv(/* forwarded args */);
}

