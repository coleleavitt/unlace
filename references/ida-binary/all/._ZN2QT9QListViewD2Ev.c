// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1148A0
// Name:            ._ZN2QT9QListViewD2Ev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1148A0 jmp     cs:_ZN2QT9QListViewD2Ev_ptr
//
// Resolved target: _ZN2QT9QListViewD2Ev
// Target address:  0x8D5508
// GOT/IAT slot:    0x8A10F0
// Slot symbol:     _ZN2QT9QListViewD2Ev_ptr
// Target type:     void(QT::QListView *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT9QListViewD2Ev(/* see target signature */)
{
    // Tail-call to _ZN2QT9QListViewD2Ev via GOT/IAT indirection
    return _ZN2QT9QListViewD2Ev(/* forwarded args */);
}

