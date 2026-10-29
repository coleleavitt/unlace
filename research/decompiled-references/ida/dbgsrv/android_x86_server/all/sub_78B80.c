/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78B80
// Address: 0x00078B80

//----- (00078B80) --------------------------------------------------------
int __cdecl sub_78B80(int a1, int a2, void *dest, _DWORD *a4)
{
  size_t v4; // edi
  int v5; // esi

  v4 = *(_DWORD *)(a2 + 8);
  if ( qlread(__SPAIR64__((unsigned int)dest, a1), v4) == v4 )
  {
    v5 = 0;
    if ( dword_13BE90 && *(_BYTE *)(dword_13BE90 + 96) )
      sub_1C900();
  }
  else
  {
    if ( dword_13BE90 && *(_BYTE *)(dword_13BE90 + 96) )
      sub_1C900();
    *a4 = 10;
    return 1;
  }
  return v5;
}
// 13BE90: using guessed type int dword_13BE90;
