// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B890
// Name:            ._ZN2QT11QHeaderView20setSectionsClickableEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B890 jmp     cs:_ZN2QT11QHeaderView20setSectionsClickableEb_ptr
//
// Resolved target: _ZN2QT11QHeaderView20setSectionsClickableEb
// Target address:  0x8D9B90
// GOT/IAT slot:    0x8A48E8
// Slot symbol:     _ZN2QT11QHeaderView20setSectionsClickableEb_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView20setSectionsClickableEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView20setSectionsClickableEb via GOT/IAT indirection
    return _ZN2QT11QHeaderView20setSectionsClickableEb(/* forwarded args */);
}

