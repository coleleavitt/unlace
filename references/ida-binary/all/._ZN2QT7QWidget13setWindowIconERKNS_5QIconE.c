// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118590
// Name:            ._ZN2QT7QWidget13setWindowIconERKNS_5QIconE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118590 jmp     cs:_ZN2QT7QWidget13setWindowIconERKNS_5QIconE_ptr
//
// Resolved target: _ZN2QT7QWidget13setWindowIconERKNS_5QIconE
// Target address:  0x8D7B80
// GOT/IAT slot:    0x8A2F68
// Slot symbol:     _ZN2QT7QWidget13setWindowIconERKNS_5QIconE_ptr
// Target type:     _QWORD(QT::QWidget *__hidden this, const QT::QIcon *)
// ============================================================

/* see target sig */ ._ZN2QT7QWidget13setWindowIconERKNS_5QIconE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QWidget13setWindowIconERKNS_5QIconE via GOT/IAT indirection
    return _ZN2QT7QWidget13setWindowIconERKNS_5QIconE(/* forwarded args */);
}

