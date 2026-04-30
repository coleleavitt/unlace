// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BD00
// Name:            ._ZN2QT11QProxyStyleC2EPNS_6QStyleE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BD00 jmp     cs:_ZN2QT11QProxyStyleC2EPNS_6QStyleE_ptr
//
// Resolved target: _ZN2QT11QProxyStyleC2EPNS_6QStyleE
// Target address:  0x8D9E50
// GOT/IAT slot:    0x8A4B20
// Slot symbol:     _ZN2QT11QProxyStyleC2EPNS_6QStyleE_ptr
// Target type:     _QWORD(QT::QProxyStyle *__hidden this, QT::QStyle *)
// ============================================================

/* see target sig */ ._ZN2QT11QProxyStyleC2EPNS_6QStyleE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QProxyStyleC2EPNS_6QStyleE via GOT/IAT indirection
    return _ZN2QT11QProxyStyleC2EPNS_6QStyleE(/* forwarded args */);
}

