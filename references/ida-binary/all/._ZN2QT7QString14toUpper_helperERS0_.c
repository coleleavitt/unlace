// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1118E0
// Name:            ._ZN2QT7QString14toUpper_helperERS0_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1118E0 jmp     cs:_ZN2QT7QString14toUpper_helperERS0__ptr
//
// Resolved target: _ZN2QT7QString14toUpper_helperERS0_
// Target address:  0x8D3650
// GOT/IAT slot:    0x89F910
// Slot symbol:     _ZN2QT7QString14toUpper_helperERS0__ptr
// Target type:     _QWORD(QT::QString *__hidden this, QT::QString *)
// ============================================================

/* see target sig */ ._ZN2QT7QString14toUpper_helperERS0_(/* see target signature */)
{
    // Tail-call to _ZN2QT7QString14toUpper_helperERS0_ via GOT/IAT indirection
    return _ZN2QT7QString14toUpper_helperERS0_(/* forwarded args */);
}

