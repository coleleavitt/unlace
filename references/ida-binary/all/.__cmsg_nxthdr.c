// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112C50
// Name:            .__cmsg_nxthdr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112C50 jmp     cs:__cmsg_nxthdr_ptr
//
// Resolved target: __cmsg_nxthdr
// Target address:  0x8D42B0
// GOT/IAT slot:    0x8A02C8
// Slot symbol:     __cmsg_nxthdr_ptr
// Target type:     struct cmsghdr *(struct msghdr *mhdr, struct cmsghdr *cmsg)
// ============================================================

/* see target sig */ .__cmsg_nxthdr(/* see target signature */)
{
    // Tail-call to __cmsg_nxthdr via GOT/IAT indirection
    return __cmsg_nxthdr(/* forwarded args */);
}

