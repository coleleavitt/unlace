// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118B10
// Name:            ._ZN2QT19QAbstractScrollArea22setHorizontalScrollBarEPNS_10QScrollBarE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118B10 jmp     cs:_ZN2QT19QAbstractScrollArea22setHorizontalScrollBarEPNS_10QScrollBarE_ptr
//
// Resolved target: _ZN2QT19QAbstractScrollArea22setHorizontalScrollBarEPNS_10QScrollBarE
// Target address:  0x8D7EC8
// GOT/IAT slot:    0x8A3228
// Slot symbol:     _ZN2QT19QAbstractScrollArea22setHorizontalScrollBarEPNS_10QScrollBarE_ptr
// Target type:     _QWORD(QT::QAbstractScrollArea *__hidden this, QT::QScrollBar *)
// ============================================================

/* see target sig */ ._ZN2QT19QAbstractScrollArea22setHorizontalScrollBarEPNS_10QScrollBarE(/* see target signature */)
{
    // Tail-call to _ZN2QT19QAbstractScrollArea22setHorizontalScrollBarEPNS_10QScrollBarE via GOT/IAT indirection
    return _ZN2QT19QAbstractScrollArea22setHorizontalScrollBarEPNS_10QScrollBarE(/* forwarded args */);
}

