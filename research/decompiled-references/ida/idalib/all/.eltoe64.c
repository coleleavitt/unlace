// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB200
// Name:            .eltoe64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB200 jmp     cs:off_2C7B0E8
//
// Resolved target: eltoe64
// Target address:  0x8319B0
// GOT/IAT slot:    0x2C7B0E8
// Slot symbol:     off_2C7B0E8
// Target type:     <no type info>
// ============================================================

void .eltoe64(/* see target signature */)
{
    // Tail-call to eltoe64 via GOT/IAT indirection
    return eltoe64(/* forwarded args */);
}

