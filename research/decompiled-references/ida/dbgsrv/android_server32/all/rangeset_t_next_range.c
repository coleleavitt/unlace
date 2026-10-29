/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_range
// Address: 0x0008372C

//----- (0008372C) --------------------------------------------------------
int __fastcall rangeset_t_next_range(int **a1, unsigned int a2)
{
  int *v2; // r3
  int v3; // r4
  int *v4; // r5
  unsigned int v5; // r2
  unsigned int v6; // r6
  int *v7; // r7
  int v9; // [sp+4h] [bp-4h]

  v2 = a1[3];
  v3 = -1;
  if ( v2 && *v2 <= a2 && v2[1] > a2 )
  {
    if ( v2 != &(*a1)[2 * (_DWORD)a1[1] - 2] )
    {
      a1[3] = v2 + 2;
      return v2[2];
    }
  }
  else
  {
    v9 = 8 * (_DWORD)a1[1];
    v4 = *a1;
    if ( v9 )
    {
      v5 = v9 >> 3;
      v4 = *a1;
      do
      {
        while ( 1 )
        {
          v6 = v5 >> 1;
          v7 = &v4[2 * (v5 >> 1)];
          if ( *v7 <= a2 )
            break;
          v5 >>= 1;
          if ( !v6 )
            goto LABEL_12;
        }
        v5 += ~v6;
        v4 = v7 + 2;
      }
      while ( v5 );
    }
LABEL_12:
    v3 = -1;
    if ( v4 != &(*a1)[v9 / 4u] )
    {
      v3 = *v4;
      a1[3] = v4;
    }
  }
  return v3;
}
