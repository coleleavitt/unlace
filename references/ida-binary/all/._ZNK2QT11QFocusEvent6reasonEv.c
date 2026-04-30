// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116D50
// Name:            ._ZNK2QT11QFocusEvent6reasonEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116D50 jmp     cs:_ZNK2QT11QFocusEvent6reasonEv_ptr
//
// Resolved target: _ZNK2QT11QFocusEvent6reasonEv
// Target address:  0x8D6C30
// GOT/IAT slot:    0x8A2348
// Slot symbol:     _ZNK2QT11QFocusEvent6reasonEv_ptr
// Target type:     _QWORD(QT::QFocusEvent *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT11QFocusEvent6reasonEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT11QFocusEvent6reasonEv via GOT/IAT indirection
    return _ZNK2QT11QFocusEvent6reasonEv(/* forwarded args */);
}

