// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AD80
// Name:            ._ZN2QT5QDrag11setMimeDataEPNS_9QMimeDataE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AD80 jmp     cs:_ZN2QT5QDrag11setMimeDataEPNS_9QMimeDataE_ptr
//
// Resolved target: _ZN2QT5QDrag11setMimeDataEPNS_9QMimeDataE
// Target address:  0x8D94B0
// GOT/IAT slot:    0x8A4360
// Slot symbol:     _ZN2QT5QDrag11setMimeDataEPNS_9QMimeDataE_ptr
// Target type:     _QWORD(QT::QDrag *__hidden this, QT::QMimeData *)
// ============================================================

/* see target sig */ ._ZN2QT5QDrag11setMimeDataEPNS_9QMimeDataE(/* see target signature */)
{
    // Tail-call to _ZN2QT5QDrag11setMimeDataEPNS_9QMimeDataE via GOT/IAT indirection
    return _ZN2QT5QDrag11setMimeDataEPNS_9QMimeDataE(/* forwarded args */);
}

