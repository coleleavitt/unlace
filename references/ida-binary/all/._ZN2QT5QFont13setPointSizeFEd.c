// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116280
// Name:            ._ZN2QT5QFont13setPointSizeFEd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116280 jmp     cs:_ZN2QT5QFont13setPointSizeFEd_ptr
//
// Resolved target: _ZN2QT5QFont13setPointSizeFEd
// Target address:  0x8D6558
// GOT/IAT slot:    0x8A1DE0
// Slot symbol:     _ZN2QT5QFont13setPointSizeFEd_ptr
// Target type:     _QWORD(QT::QFont *__hidden this, double)
// ============================================================

/* see target sig */ ._ZN2QT5QFont13setPointSizeFEd(/* see target signature */)
{
    // Tail-call to _ZN2QT5QFont13setPointSizeFEd via GOT/IAT indirection
    return _ZN2QT5QFont13setPointSizeFEd(/* forwarded args */);
}

