/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1A25C
// Address: 0x0001A25C

//----- (0001A25C) --------------------------------------------------------
int __fastcall sub_1A25C(int a1, int a2, int *a3)
{
  *a3 = ps_getpid(*(_DWORD *)(a1 + 4));
  a3[1] = a2;
  return 0;
}
