// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22E0
// Name:            .qfread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22E0 jmp     cs:off_A158
//
// Resolved target: qfread
// Target address:  0xA398
// GOT/IAT slot:    0xA158
// Slot symbol:     off_A158
// Target type:     <no type info>
// ============================================================

void .qfread(/* see target signature */)
{
    // Tail-call to qfread via GOT/IAT indirection
    return qfread(/* forwarded args */);
}

