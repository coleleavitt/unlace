// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB550
// Name:            .vshow_hex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB550 jmp     cs:off_2C7B290
//
// Resolved target: vshow_hex
// Target address:  0x826190
// GOT/IAT slot:    0x2C7B290
// Slot symbol:     off_2C7B290
// Target type:     <no type info>
// ============================================================

void .vshow_hex(/* see target signature */)
{
    // Tail-call to vshow_hex via GOT/IAT indirection
    return vshow_hex(/* forwarded args */);
}

