// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABC70
// Name:            .find_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABC70 jmp     cs:off_2C7B620
//
// Resolved target: find_data
// Target address:  0x6766A0
// GOT/IAT slot:    0x2C7B620
// Slot symbol:     off_2C7B620
// Target type:     <no type info>
// ============================================================

void .find_data(/* see target signature */)
{
    // Tail-call to find_data via GOT/IAT indirection
    return find_data(/* forwarded args */);
}

