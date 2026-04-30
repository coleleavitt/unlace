// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A990
// Name:            ._ZN2QT11QTextStreamC1EPNS_9QIODeviceE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A990 jmp     cs:_ZN2QT11QTextStreamC1EPNS_9QIODeviceE_ptr
//
// Resolved target: _ZN2QT11QTextStreamC1EPNS_9QIODeviceE
// Target address:  0x8D9250
// GOT/IAT slot:    0x8A4168
// Slot symbol:     _ZN2QT11QTextStreamC1EPNS_9QIODeviceE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QTextStreamC1EPNS_9QIODeviceE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QTextStreamC1EPNS_9QIODeviceE via GOT/IAT indirection
    return _ZN2QT11QTextStreamC1EPNS_9QIODeviceE(/* forwarded args */);
}

