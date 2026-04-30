// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112700
// Name:            ._ZNK2QT17QAccessibleWidget5stateEv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112700 jmp     cs:_ZNK2QT17QAccessibleWidget5stateEv_ptr
//
// Resolved target: _ZNK2QT17QAccessibleWidget5stateEv
// Target address:  0x8D3F58
// GOT/IAT slot:    0x8A0020
// Slot symbol:     _ZNK2QT17QAccessibleWidget5stateEv_ptr
// Target type:     _QWORD(QT::QAccessibleWidget *__hidden this)
// ============================================================

/* see target sig */ ._ZNK2QT17QAccessibleWidget5stateEv(/* see target signature */)
{
    // Tail-call to _ZNK2QT17QAccessibleWidget5stateEv via GOT/IAT indirection
    return _ZNK2QT17QAccessibleWidget5stateEv(/* forwarded args */);
}

