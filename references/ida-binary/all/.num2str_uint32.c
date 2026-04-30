// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1120C0
// Name:            .num2str_uint32
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1120C0 jmp     cs:num2str_uint32_ptr
//
// Resolved target: num2str_uint32
// Target address:  0x8D3B40
// GOT/IAT slot:    0x89FD00
// Slot symbol:     num2str_uint32_ptr
// Target type:     <no type info>
// ============================================================

void .num2str_uint32(/* see target signature */)
{
    // Tail-call to num2str_uint32 via GOT/IAT indirection
    return num2str_uint32(/* forwarded args */);
}

