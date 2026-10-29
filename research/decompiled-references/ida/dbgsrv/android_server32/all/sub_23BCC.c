/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23BCC
// Address: 0x00023BCC

//----- (00023BCC) --------------------------------------------------------
int __fastcall sub_23BCC(int a1, int a2)
{
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 1065353216;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)a1 = &off_D62A0;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  memset((void *)(a1 + 48), 0, 0x48u);
  memset((void *)(a1 + 120), 0, 0x108u);
  *(_WORD *)(a1 + 384) = 0;
  sub_23C7C(*(_DWORD **)(a1 + 4), (const void **)off_DD694, 1);
  return a1;
}
// D62A0: using guessed type _UNKNOWN *off_D62A0;
// DD694: using guessed type char *off_DD694[3];
