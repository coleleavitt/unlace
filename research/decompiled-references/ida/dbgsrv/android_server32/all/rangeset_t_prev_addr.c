/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_addr
// Address: 0x00083698

//----- (00083698) --------------------------------------------------------
unsigned int __fastcall rangeset_t_prev_addr(unsigned int **a1, int a2)
{
  unsigned int result; // r0
  unsigned int *v4; // r1
  unsigned int *v5; // r4
  unsigned int *v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r6
  unsigned int *v9; // r7
  unsigned int v10; // r4
  int v11; // [sp+8h] [bp-4h]

  result = a2 - 1;
  if ( !a2 )
    return -1;
  v4 = a1[3];
  if ( !v4 || *v4 > result || v4[1] <= result )
  {
    v5 = *a1;
    v11 = 8 * (_DWORD)a1[1];
    v6 = *a1;
    if ( v11 )
    {
      v7 = v11 >> 3;
      v6 = *a1;
      do
      {
        while ( 1 )
        {
          v8 = v7 >> 1;
          v9 = &v6[2 * (v7 >> 1)];
          if ( v9[1] <= result )
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
    if ( v6 == &v5[v11 / 4u] || *v6 > result || v6[1] <= result )
    {
      if ( v6 == v5 )
        return -1;
      v6 -= 2;
      v10 = v6[1];
      if ( result >= v10 )
        result = v10 - 1;
    }
    a1[3] = v6;
  }
  return result;
}
