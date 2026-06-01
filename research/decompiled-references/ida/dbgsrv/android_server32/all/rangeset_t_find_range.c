/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_find_range
// Address: 0x000835C0

//----- (000835C0) --------------------------------------------------------
unsigned int *__fastcall rangeset_t_find_range(int a1, unsigned int a2)
{
  unsigned int *v2; // r2
  unsigned int *v3; // r3
  unsigned int v4; // r5
  unsigned int v5; // r7
  unsigned int *v6; // r6
  int v8; // [sp+0h] [bp-4h]

  v2 = *(unsigned int **)(a1 + 12);
  if ( !v2 || *v2 > a2 || v2[1] <= a2 )
  {
    v8 = 8 * *(_DWORD *)(a1 + 4);
    v3 = *(unsigned int **)a1;
    if ( v8 )
    {
      v4 = v8 >> 3;
      v3 = *(unsigned int **)a1;
      do
      {
        while ( 1 )
        {
          v5 = v4 >> 1;
          v6 = &v3[2 * (v4 >> 1)];
          if ( v6[1] <= a2 )
            break;
          v4 >>= 1;
          if ( !v5 )
            goto LABEL_10;
        }
        v4 += ~v5;
        v3 = v6 + 2;
      }
      while ( v4 );
    }
LABEL_10:
    v2 = nullptr;
    if ( v3 != (unsigned int *)(*(_DWORD *)a1 + v8) && *v3 <= a2 && v3[1] > a2 )
    {
      *(_DWORD *)(a1 + 12) = v3;
      return v3;
    }
  }
  return v2;
}
