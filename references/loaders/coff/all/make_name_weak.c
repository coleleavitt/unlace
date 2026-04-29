// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x23520
// Name:     make_name_weak
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to make_name_weak are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void make_name_weak(/* see import library declaration */);

