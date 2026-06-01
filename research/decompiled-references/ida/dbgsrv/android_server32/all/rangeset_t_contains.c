/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_contains
// Address: 0x00082F00

//----- (00082F00) --------------------------------------------------------
int __fastcall rangeset_t_contains(int a1, int a2)
{
  unsigned int *v2; // r2
  int v3; // r0
  int v4; // r1
  unsigned int v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r7
  unsigned int *v8; // r3
  unsigned int v9; // r4
  unsigned int v10; // r5
  unsigned int v11; // r3
  unsigned int *v13; // [sp+4h] [bp-8h]

  v2 = *(unsigned int **)a2;
  v3 = 8 * *(_DWORD *)(a2 + 4);
  v13 = (unsigned int *)(*(_DWORD *)a2 + v3);
  v4 = 1;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = *v2;
      v6 = v2[1];
      if ( v6 > *v2 )
      {
        v7 = *(_DWORD *)(a1 + 4);
        v4 = 0;
        if ( !v7 )
          break;
        v8 = *(unsigned int **)a1;
        v9 = 0;
        while ( 1 )
        {
          v10 = v8[1];
          if ( v10 >= v5 )
            break;
          v8 += 2;
          ++v9;
          v4 = 0;
          if ( v9 >= v7 )
            return v4;
        }
        v11 = *v8;
        v4 = 0;
        if ( v10 == v11 || v5 < v11 || v6 - 1 > v10 - 1 )
          break;
      }
      v2 += 2;
      if ( v2 == v13 )
        return 1;
    }
  }
  return v4;
}
