/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_addr
// Address: 0x0008362A

//----- (0008362A) --------------------------------------------------------
int __fastcall rangeset_t_next_addr(int **a1, int a2)
{
  int result; // r0
  unsigned int v4; // r1
  int *v5; // r3
  int *v6; // r5
  unsigned int v7; // r4
  unsigned int v8; // r6
  int *v9; // r7
  int v10; // [sp+4h] [bp-4h]

  result = -1;
  v4 = a2 + 1;
  if ( v4 )
  {
    v5 = a1[3];
    if ( v5 )
    {
      if ( *v5 <= v4 && v5[1] > v4 )
        return v4;
    }
    v10 = 8 * (_DWORD)a1[1];
    v6 = *a1;
    if ( v10 )
    {
      v7 = v10 >> 3;
      v6 = *a1;
      do
      {
        while ( 1 )
        {
          v8 = v7 >> 1;
          v9 = &v6[2 * (v7 >> 1)];
          if ( v9[1] <= v4 )
            break;
          v7 >>= 1;
          if ( !v8 )
            goto LABEL_11;
        }
        v7 += ~v8;
        v6 = v9 + 2;
      }
      while ( v7 );
    }
LABEL_11:
    result = -1;
    if ( v6 != &(*a1)[v10 / 4u] )
    {
      a1[3] = v6;
      result = *v6;
      if ( v4 >= *v6 )
        return v4;
    }
  }
  return result;
}
