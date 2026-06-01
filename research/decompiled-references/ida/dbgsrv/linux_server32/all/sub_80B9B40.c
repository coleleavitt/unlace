/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9B40
// Address: 0x080B9B40

//----- (080B9B40) --------------------------------------------------------
int __cdecl sub_80B9B40(int a1, char *s1, _DWORD *a3)
{
  int v3; // edi
  int v4; // ebp
  int v5; // esi

  v3 = *(_DWORD *)(a1 + 348);
  if ( !v3 )
    return -1;
  v4 = *(_DWORD *)(a1 + 344);
  v5 = 0;
  while ( strcasecmp(s1, *(const char **)v4) )
  {
    ++v5;
    v4 += 20;
    if ( v5 == v3 )
      return -1;
  }
  if ( a3 )
    *a3 = *(unsigned __int8 *)(v4 + 8);
  return v5;
}
