// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16280
// Name:            ._ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16280 jmp     cs:off_4F128
//
// Resolved target: _ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE
// Target address:  0x4FFC8
// GOT/IAT slot:    0x4F128
// Slot symbol:     off_4F128
// Target type:     <no type info>
// ============================================================

void ._ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE via GOT/IAT indirection
    return _ZN2QT7QWidget8setFocusENS_2Qt11FocusReasonE(/* forwarded args */);
}

