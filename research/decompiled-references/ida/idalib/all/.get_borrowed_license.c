// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A80C0
// Name:            .get_borrowed_license
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A80C0 jmp     cs:off_2C79848
//
// Resolved target: get_borrowed_license
// Target address:  0x8A5080
// GOT/IAT slot:    0x2C79848
// Slot symbol:     off_2C79848
// Target type:     <no type info>
// ============================================================

void .get_borrowed_license(/* see target signature */)
{
    // Tail-call to get_borrowed_license via GOT/IAT indirection
    return get_borrowed_license(/* forwarded args */);
}

