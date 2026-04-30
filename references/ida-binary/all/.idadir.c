// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118670
// Name:            .idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118670 jmp     cs:idadir_ptr
//
// Resolved target: idadir
// Target address:  0x8D7C00
// GOT/IAT slot:    0x8A2FD8
// Slot symbol:     idadir_ptr
// Target type:     <no type info>
// ============================================================

void .idadir(/* see target signature */)
{
    // Tail-call to idadir via GOT/IAT indirection
    return idadir(/* forwarded args */);
}

