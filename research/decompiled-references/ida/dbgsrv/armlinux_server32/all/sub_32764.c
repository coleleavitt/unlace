/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32764
// Address: 0x00032764

//----- (00032764) --------------------------------------------------------
int __fastcall sub_32764(int a1, int a2, unsigned int a3)
{
  if ( !*(_BYTE *)(a1 + 136) )
    sub_14960();
  if ( a3 < *(_DWORD *)(a1 + 20) )
    return sub_3266C(a1, a2, (unsigned int *)(*(_DWORD *)(a1 + 16) + (a3 << 6)));
  else
    return 0;
}
