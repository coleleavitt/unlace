// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1117E0
// Name:            ._ZN2QT11QHeaderView20setHighlightSectionsEb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1117E0 jmp     cs:_ZN2QT11QHeaderView20setHighlightSectionsEb_ptr
//
// Resolved target: _ZN2QT11QHeaderView20setHighlightSectionsEb
// Target address:  0x8D35C0
// GOT/IAT slot:    0x89F890
// Slot symbol:     _ZN2QT11QHeaderView20setHighlightSectionsEb_ptr
// Target type:     _QWORD(QT::QHeaderView *__hidden this, bool)
// ============================================================

/* see target sig */ ._ZN2QT11QHeaderView20setHighlightSectionsEb(/* see target signature */)
{
    // Tail-call to _ZN2QT11QHeaderView20setHighlightSectionsEb via GOT/IAT indirection
    return _ZN2QT11QHeaderView20setHighlightSectionsEb(/* forwarded args */);
}

