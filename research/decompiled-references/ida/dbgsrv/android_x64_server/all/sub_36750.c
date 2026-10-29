/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36750
// Address: 0x0000000000036750

//----- (0000000000036750) ----------------------------------------------------
__int64 __fastcall sub_36750(__int64 a1, int a2, _DWORD *a3)
{
  *a3 = ps_getpid(*(unsigned int **)(a1 + 8));
  a3[1] = a2;
  return 0;
}
