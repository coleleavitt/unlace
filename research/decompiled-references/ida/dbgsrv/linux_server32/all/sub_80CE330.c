/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CE330
// Address: 0x080CE330

//----- (080CE330) --------------------------------------------------------
int __cdecl sub_80CE330(int a1)
{
  int v1; // eax

  do
  {
    v1 = *(_DWORD *)(a1 + 8224);
    if ( v1 >= *(_DWORD *)(a1 + 8228) )
      return -1;
    *(_DWORD *)(a1 + 8224) = v1 + 1;
  }
  while ( sub_80CE1B0(a1 + 4112, (_DWORD *)(a1 + 4100), (char *)(*(_DWORD *)(*(_DWORD *)(a1 + 8220) + 4 * v1) + 19)) );
  *(_DWORD *)a1 = *(_DWORD *)(a1 + 4112);
  sub_80C74C0((_BYTE *)(a1 + 4), (char *)(a1 + 4116), 4096);
  *(_DWORD *)(a1 + 4108) = *(_DWORD *)(a1 + 8216);
  return 0;
}
