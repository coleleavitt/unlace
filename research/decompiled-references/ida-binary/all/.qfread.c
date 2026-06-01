// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112750
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112750 jmp     cs:qfread_ptr
//
// Resolved target: qfread
// Target address:  0x8D3F90
// GOT/IAT slot:    0x8A0048
// Slot symbol:     qfread_ptr
// Target type:     <no type info>
// ============================================================

void .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}

