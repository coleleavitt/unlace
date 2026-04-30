// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1197C0
// Name:            ._ZN2QT12QTableWidget13clearContentsEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1197C0 jmp     cs:_ZN2QT12QTableWidget13clearContentsEv_ptr
//
// Resolved target: _ZN2QT12QTableWidget13clearContentsEv
// Target address:  0x8D86F8
// GOT/IAT slot:    0x8A3880
// Slot symbol:     _ZN2QT12QTableWidget13clearContentsEv_ptr
// Target type:     _QWORD(QT::QTableWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT12QTableWidget13clearContentsEv(/* see target signature */)
{
    // Tail-call to _ZN2QT12QTableWidget13clearContentsEv via GOT/IAT indirection
    return _ZN2QT12QTableWidget13clearContentsEv(/* forwarded args */);
}

