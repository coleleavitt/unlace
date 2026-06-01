/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_has_common2
// Address: 0x000B7D40

//----- (000B7D40) --------------------------------------------------------
char __cdecl rangeset_t_has_common2(_DWORD *a1, int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  unsigned int *v5; // ecx
  int v6; // edx
  unsigned int v7; // edi
  int v8; // esi

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 )
    return 0;
  v4 = (_DWORD *)*a1;
  v5 = *(unsigned int **)a2;
  v6 = *(_DWORD *)a2 + 8 * v3;
  v7 = *(_DWORD *)(*a1 + 4);
  v8 = *a1 + 8 * v2 - 8;
  while ( *v5 >= v7 || *v4 >= v5[1] )
  {
    while ( v7 <= *v5 )
    {
      if ( (_DWORD *)v8 == v4 )
        return 0;
      v7 = v4[3];
      v4 += 2;
    }
    while ( v5[1] <= *v4 )
    {
      v5 += 2;
      if ( (unsigned int *)v6 == v5 )
        return 0;
    }
  }
  return 1;
}
