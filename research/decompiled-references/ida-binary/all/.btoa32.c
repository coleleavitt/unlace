// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117BE0
// Name:            .btoa32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117BE0 jmp     cs:btoa32_ptr
//
// Resolved target: btoa32
// Target address:  0x8D7558
// GOT/IAT slot:    0x8A2A90
// Slot symbol:     btoa32_ptr
// Target type:     <no type info>
// ============================================================

void .btoa32(/* see target signature */)
{
    // Tail-call to btoa32 via GOT/IAT indirection
    return btoa32(/* forwarded args */);
}

