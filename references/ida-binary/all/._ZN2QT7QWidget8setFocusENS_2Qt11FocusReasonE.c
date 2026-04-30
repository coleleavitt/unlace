// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E60
// Name:            ._ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E60 jmp     cs:_ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE_ptr
//
// Resolved target: _ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE
// Target address:  0x8D39D0
// GOT/IAT slot:    0x89FBD0
// Slot symbol:     _ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE via GOT/IAT indirection
    return _ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE(/* forwarded args */);
}

