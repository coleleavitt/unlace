// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA3D0
// Name:            .visit_borrowed_licenses
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA3D0 jmp     cs:off_2C7A9D0
//
// Resolved target: visit_borrowed_licenses
// Target address:  0x8A58C0
// GOT/IAT slot:    0x2C7A9D0
// Slot symbol:     off_2C7A9D0
// Target type:     <no type info>
// ============================================================

void .visit_borrowed_licenses(/* see target signature */)
{
    // Tail-call to visit_borrowed_licenses via GOT/IAT indirection
    return visit_borrowed_licenses(/* forwarded args */);
}

