/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add2
// Address: 0x000B7BF0

//----- (000B7BF0) --------------------------------------------------------
char __cdecl rangeset_t_add2(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // ecx
  bool v4; // zf
  int v5; // eax
  int v7; // [esp+8h] [ebp-14h]

  if ( (*(_DWORD *)(a2 + 4) & 0x1FFFFFFF) == 0 )
    return 0;
  v2 = *(_DWORD **)a2;
  v3 = 0;
  do
  {
    v7 = v3;
    v5 = rangeset_t_add(a1, v2);
    v4 = (_BYTE)v5 == 0;
    LOBYTE(v5) = 1;
    if ( v4 )
      v5 = v7;
    v2 += 2;
    v3 = v5;
  }
  while ( v2 != (_DWORD *)(*(_DWORD *)a2 + 8 * *(_DWORD *)(a2 + 4)) );
  return v5 & 1;
}
