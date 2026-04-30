// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118BF0
// Name:            ._ZN2QT15QGuiApplication21restoreOverrideCursorEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118BF0 jmp     cs:_ZN2QT15QGuiApplication21restoreOverrideCursorEv_ptr
//
// Resolved target: _ZN2QT15QGuiApplication21restoreOverrideCursorEv
// Target address:  0x8D7F40
// GOT/IAT slot:    0x8A3298
// Slot symbol:     _ZN2QT15QGuiApplication21restoreOverrideCursorEv_ptr
// Target type:     _QWORD(QT::QGuiApplication *__hidden this)
// ============================================================

/* see target sig */ ._ZN2QT15QGuiApplication21restoreOverrideCursorEv(/* see target signature */)
{
    // Tail-call to _ZN2QT15QGuiApplication21restoreOverrideCursorEv via GOT/IAT indirection
    return _ZN2QT15QGuiApplication21restoreOverrideCursorEv(/* forwarded args */);
}

