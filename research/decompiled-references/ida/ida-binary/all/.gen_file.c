// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1136C0
// Name:            .gen_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1136C0 jmp     cs:gen_file_ptr
//
// Resolved target: gen_file
// Target address:  0x8D4970
// GOT/IAT slot:    0x8A0800
// Slot symbol:     gen_file_ptr
// Target type:     <no type info>
// ============================================================

void .gen_file(/* see target signature */)
{
    // Tail-call to gen_file via GOT/IAT indirection
    return gen_file(/* forwarded args */);
}

