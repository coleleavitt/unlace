// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD40
// Name:            .idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD40 jmp     cs:off_CA688
//
// Resolved target: idadir
// Target address:  0xD0FE8
// GOT/IAT slot:    0xCA688
// Slot symbol:     off_CA688
// Target type:     <no type info>
// ============================================================

void .idadir(/* see target signature */)
{
    // Tail-call to idadir via GOT/IAT indirection
    return idadir(/* forwarded args */);
}

