// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112460
// Name:            ._ZN2QT9QLineEdit6insertERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112460 jmp     cs:_ZN2QT9QLineEdit6insertERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT9QLineEdit6insertERKNS_7QStringE
// Target address:  0x8D3D98
// GOT/IAT slot:    0x89FED0
// Slot symbol:     _ZN2QT9QLineEdit6insertERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QLineEdit *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT9QLineEdit6insertERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT9QLineEdit6insertERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT9QLineEdit6insertERKNS_7QStringE(/* forwarded args */);
}

