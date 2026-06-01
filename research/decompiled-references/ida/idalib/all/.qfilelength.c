// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9800
// Name:            .qfilelength
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9800 jmp     cs:off_2C7A3E8
//
// Resolved target: qfilelength
// Target address:  0x83EED0
// GOT/IAT slot:    0x2C7A3E8
// Slot symbol:     off_2C7A3E8
// Target type:     <no type info>
// ============================================================

void .qfilelength(/* see target signature */)
{
    // Tail-call to qfilelength via GOT/IAT indirection
    return qfilelength(/* forwarded args */);
}

