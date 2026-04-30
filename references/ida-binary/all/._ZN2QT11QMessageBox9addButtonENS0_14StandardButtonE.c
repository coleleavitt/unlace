// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119780
// Name:            ._ZN2QT11QMessageBox9addButtonENS0_14StandardButtonE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119780 jmp     cs:_ZN2QT11QMessageBox9addButtonENS0_14StandardButtonE_ptr
//
// Resolved target: _ZN2QT11QMessageBox9addButtonENS0_14StandardButtonE
// Target address:  0x8D86D8
// GOT/IAT slot:    0x8A3860
// Slot symbol:     _ZN2QT11QMessageBox9addButtonENS0_14StandardButtonE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZN2QT11QMessageBox9addButtonENS0_14StandardButtonE(/* see target signature */)
{
    // Tail-call to _ZN2QT11QMessageBox9addButtonENS0_14StandardButtonE via GOT/IAT indirection
    return _ZN2QT11QMessageBox9addButtonENS0_14StandardButtonE(/* forwarded args */);
}

