// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x4ECA10
// Name:     first_named_type
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to first_named_type are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void first_named_type(/* see import library declaration */);

