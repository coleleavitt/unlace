// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117630
// Name:            ._ZN2QT7QTabBar10setTabIconEiRKNS_5QIconE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117630 jmp     cs:_ZN2QT7QTabBar10setTabIconEiRKNS_5QIconE_ptr
//
// Resolved target: _ZN2QT7QTabBar10setTabIconEiRKNS_5QIconE
// Target address:  0x8D71E0
// GOT/IAT slot:    0x8A27B8
// Slot symbol:     _ZN2QT7QTabBar10setTabIconEiRKNS_5QIconE_ptr
// Target type:     _QWORD(QT::QTabBar *__hidden this, int, const QT::QIcon *)
// ============================================================

/* see target sig */ ._ZN2QT7QTabBar10setTabIconEiRKNS_5QIconE(/* see target signature */)
{
    // Tail-call to _ZN2QT7QTabBar10setTabIconEiRKNS_5QIconE via GOT/IAT indirection
    return _ZN2QT7QTabBar10setTabIconEiRKNS_5QIconE(/* forwarded args */);
}

