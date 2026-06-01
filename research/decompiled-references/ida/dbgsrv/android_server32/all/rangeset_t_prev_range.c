/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_range
// Address: 0x000837A8

//----- (000837A8) --------------------------------------------------------
int __fastcall rangeset_t_prev_range(unsigned int **a1, unsigned int a2)
{
  unsigned int *v3; // r3
  int result; // r0
  unsigned int *v5; // r0
  int v6; // r4
  unsigned int *v7; // r5
  unsigned int v8; // r4
  unsigned int v9; // r7
  unsigned int *v10; // r6

  v3 = a1[3];
  result = -1;
  if ( v3 && *v3 <= a2 && v3[1] > a2 )
  {
    if ( v3 == *a1 )
      return result;
    v5 = v3 - 2;
    goto LABEL_14;
  }
  v6 = 8 * (_DWORD)a1[1];
  if ( v6 )
  {
    v7 = *a1;
    v8 = v6 >> 3;
    do
    {
      while ( 1 )
      {
        v9 = v8 >> 1;
        v10 = &v7[2 * (v8 >> 1)];
        if ( v10[1] <= a2 )
          break;
        v8 >>= 1;
        if ( !v9 )
          goto LABEL_12;
      }
      v8 += ~v9;
      v7 = v10 + 2;
    }
    while ( v8 );
LABEL_12:
    if ( v7 != *a1 )
    {
      v5 = v7 - 2;
LABEL_14:
      a1[3] = v5;
      return v5[1] - 1;
    }
  }
  return result;
}
