/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_contains
// Address: 0x000B7DD0

//----- (000B7DD0) --------------------------------------------------------
char __cdecl rangeset_t_contains(int *a1, int a2)
{
  int v2; // ecx
  int *v3; // edi
  unsigned int *v4; // edx
  int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int v8; // eax
  int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // esi
  bool v12; // cc
  int v14; // [esp+4h] [ebp-14h]

  v2 = *(_DWORD *)(a2 + 4);
  if ( 8 * v2 )
  {
    v3 = a1;
    v4 = *(unsigned int **)a2;
    v5 = *(_DWORD *)a2 + 8 * v2;
    v14 = v5;
    while ( 1 )
    {
      v6 = *v4;
      if ( v4[1] > *v4 )
        break;
LABEL_12:
      v4 += 2;
      if ( v4 == (unsigned int *)v5 )
        goto LABEL_13;
    }
    v7 = v3[1];
    v8 = 0;
    if ( v7 )
    {
      v9 = *v3;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8 * v8 + 4);
        if ( v10 >= v6 )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_14;
      }
      v11 = *(_DWORD *)(v9 + 8 * v8);
      LOBYTE(v8) = 0;
      if ( v10 != v11 && v6 >= v11 )
      {
        v12 = v4[1] - 1 <= v10 - 1;
        v3 = a1;
        v5 = v14;
        if ( v12 )
          goto LABEL_12;
LABEL_14:
        LOBYTE(v8) = 0;
      }
    }
  }
  else
  {
LABEL_13:
    LOBYTE(v8) = 1;
  }
  return v8;
}
