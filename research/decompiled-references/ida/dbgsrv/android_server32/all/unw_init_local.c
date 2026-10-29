/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unw_init_local
// Address: 0x00099898

//----- (00099898) --------------------------------------------------------
int __fastcall unw_init_local(int a1, const void *a2)
{
  *(_WORD *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 74) = 0;
  *(_DWORD *)a1 = &off_DCA10;
  *(_DWORD *)(a1 + 4) = &dword_E07C8;
  qmemcpy((void *)(a1 + 8), a2, 0x40u);
  memset((void *)(a1 + 80), 0, 0x132u);
  sub_99B2C((int *)a1, 0);
  return 0;
}
// DCA10: using guessed type _UNKNOWN *off_DCA10;
// E07C8: using guessed type int dword_E07C8;
