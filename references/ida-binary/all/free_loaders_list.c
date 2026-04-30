// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8D4720
// Name:     free_loaders_list
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to free_loaders_list are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void free_loaders_list(/* see import library declaration */);

