// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A390
// Name:            ._ZN2QT15QGuiApplication17setOverrideCursorERKNS_7QCursorE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A390 jmp     cs:_ZN2QT15QGuiApplication17setOverrideCursorERKNS_7QCursorE_ptr
//
// Resolved target: _ZN2QT15QGuiApplication17setOverrideCursorERKNS_7QCursorE
// Target address:  0x8D8E60
// GOT/IAT slot:    0x8A3E68
// Slot symbol:     _ZN2QT15QGuiApplication17setOverrideCursorERKNS_7QCursorE_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this, const QT::QCursor *)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication17setOverrideCursorERKNS_7QCursorE(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication17setOverrideCursorERKNS_7QCursorE via GOT/IAT indirection
    return _ZN2QT15QGuiApplication17setOverrideCursorERKNS_7QCursorE(/* forwarded args */);
}

