// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115860
// Name:            ._ZN2QT17qt_tlw_for_windowEPNS_7QWindowE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115860 jmp     cs:_ZN2QT17qt_tlw_for_windowEPNS_7QWindowE_ptr
//
// Resolved target: _ZN2QT17qt_tlw_for_windowEPNS_7QWindowE
// Target address:  0x8D5EE8
// GOT/IAT slot:    0x8A18D0
// Slot symbol:     _ZN2QT17qt_tlw_for_windowEPNS_7QWindowE_ptr
// Target type:     _QWORD(QT::QWindow *)
// ============================================================

/* see target sig */ ._ZN2QT17qt_tlw_for_windowEPNS_7QWindowE(/* see target signature */)
{
    // Tail-call to _ZN2QT17qt_tlw_for_windowEPNS_7QWindowE via GOT/IAT indirection
    return _ZN2QT17qt_tlw_for_windowEPNS_7QWindowE(/* forwarded args */);
}

