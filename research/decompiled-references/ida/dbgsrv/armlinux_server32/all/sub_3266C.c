/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3266C
// Address: 0x0003266C

//----- (0003266C) --------------------------------------------------------
int __fastcall sub_3266C(int a1, int a2, unsigned int *a3)
{
  if ( !a3 )
    return 0;
  if ( *(__int64 *)(a1 + 144) >= 1 && *(_QWORD *)(a1 + 160) )
    return sub_325D8(*(_DWORD *)(a1 + 132), a2, (__int64 *)(a1 + 144), *a3);
  return 0;
}
