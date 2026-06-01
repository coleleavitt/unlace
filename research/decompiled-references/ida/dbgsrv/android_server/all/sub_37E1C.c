/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_37E1C
// Address: 0x0000000000037E1C

//----- (0000000000037E1C) ----------------------------------------------------
__int64 __fastcall sub_37E1C(__int64 a1, int a2, _DWORD *a3)
{
  *a3 = ps_getpid(*(unsigned int **)(a1 + 8));
  a3[1] = a2;
  return 0;
}
