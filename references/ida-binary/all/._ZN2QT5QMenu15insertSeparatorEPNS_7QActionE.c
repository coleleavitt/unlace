// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116200
// Name:            ._ZN2QT5QMenu15insertSeparatorEPNS_7QActionE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116200 jmp     cs:_ZN2QT5QMenu15insertSeparatorEPNS_7QActionE_ptr
//
// Resolved target: _ZN2QT5QMenu15insertSeparatorEPNS_7QActionE
// Target address:  0x8D6518
// GOT/IAT slot:    0x8A1DA0
// Slot symbol:     _ZN2QT5QMenu15insertSeparatorEPNS_7QActionE_ptr
// Target type:     _QWORD(QT::QMenu *__hidden this, QT::QAction *)
// ============================================================

/* see target sig */ ._ZN2QT5QMenu15insertSeparatorEPNS_7QActionE(/* see target signature */)
{
    // Tail-call to _ZN2QT5QMenu15insertSeparatorEPNS_7QActionE via GOT/IAT indirection
    return _ZN2QT5QMenu15insertSeparatorEPNS_7QActionE(/* forwarded args */);
}

