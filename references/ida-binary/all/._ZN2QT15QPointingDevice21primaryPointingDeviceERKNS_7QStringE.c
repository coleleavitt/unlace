// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111A80
// Name:            ._ZN2QT15QPointingDevice21primaryPointingDeviceERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111A80 jmp     cs:_ZN2QT15QPointingDevice21primaryPointingDeviceERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT15QPointingDevice21primaryPointingDeviceERKNS_7QStringE
// Target address:  0x8D3758
// GOT/IAT slot:    0x89F9E0
// Slot symbol:     _ZN2QT15QPointingDevice21primaryPointingDeviceERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QPointingDevice *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT15QPointingDevice21primaryPointingDeviceERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QPointingDevice21primaryPointingDeviceERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT15QPointingDevice21primaryPointingDeviceERKNS_7QStringE(/* forwarded args */);
}

