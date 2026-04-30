// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116290
// Name:            ._ZN2QT15QGuiApplication18setDesktopFileNameERKNS_7QStringE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116290 jmp     cs:_ZN2QT15QGuiApplication18setDesktopFileNameERKNS_7QStringE_ptr
//
// Resolved target: _ZN2QT15QGuiApplication18setDesktopFileNameERKNS_7QStringE
// Target address:  0x8D6560
// GOT/IAT slot:    0x8A1DE8
// Slot symbol:     _ZN2QT15QGuiApplication18setDesktopFileNameERKNS_7QStringE_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this, const QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication18setDesktopFileNameERKNS_7QStringE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication18setDesktopFileNameERKNS_7QStringE via GOT/IAT indirection
    return _ZN2QT15QGuiApplication18setDesktopFileNameERKNS_7QStringE(/* forwarded args */);
}

