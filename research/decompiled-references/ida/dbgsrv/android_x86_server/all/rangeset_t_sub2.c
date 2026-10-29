/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_sub2
// Address: 0x000B7C60

//----- (000B7C60) --------------------------------------------------------
char __cdecl rangeset_t_sub2(char **a1, int a2)
{
  unsigned int *v2; // edi
  char *v3; // ecx
  bool v4; // zf
  char *v5; // eax
  char *v7; // [esp+8h] [ebp-14h]

  if ( (*(_DWORD *)(a2 + 4) & 0x1FFFFFFF) == 0 )
    return 0;
  v2 = *(unsigned int **)a2;
  v3 = nullptr;
  do
  {
    v7 = v3;
    v5 = rangeset_t_sub(a1, v2);
    v4 = (_BYTE)v5 == 0;
    LOBYTE(v5) = 1;
    if ( v4 )
      v5 = v7;
    v2 += 2;
    v3 = v5;
  }
  while ( v2 != (unsigned int *)(*(_DWORD *)a2 + 8 * *(_DWORD *)(a2 + 4)) );
  return (unsigned __int8)v5 & 1;
}
