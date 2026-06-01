// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7310
// Name:            .find_defined
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7310 jmp     cs:off_2C79170
//
// Resolved target: find_defined
// Target address:  0x676400
// GOT/IAT slot:    0x2C79170
// Slot symbol:     off_2C79170
// Target type:     <no type info>
// ============================================================

void .find_defined(/* see target signature */)
{
    // Tail-call to find_defined via GOT/IAT indirection
    return find_defined(/* forwarded args */);
}

