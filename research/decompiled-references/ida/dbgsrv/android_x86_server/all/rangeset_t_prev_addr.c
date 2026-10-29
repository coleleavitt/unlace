/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_addr
// Address: 0x000B8A00

//----- (000B8A00) --------------------------------------------------------
int __cdecl rangeset_t_prev_addr(unsigned int **a1, int a2)
{
  int result; // eax
  unsigned int v3; // ecx
  unsigned int *v4; // eax
  unsigned int *v5; // edi
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // eax
  bool v11; // cf
  unsigned int v12; // eax

  result = -1;
  if ( a2 )
  {
    v3 = a2 - 1;
    v4 = a1[3];
    if ( !v4 || *v4 > v3 || v4[1] <= v3 )
    {
      v5 = *a1;
      v6 = a1[1];
      v7 = *a1;
      if ( 8 * (_DWORD)v6 )
      {
        v8 = (8 * (int)v6) >> 3;
        v7 = *a1;
        v9 = v8;
        do
        {
          v9 >>= 1;
          if ( v7[2 * v9 + 1] <= v3 )
          {
            v7 += 2 * v9 + 2;
            v9 = v8 + ~v9;
          }
          v8 = v9;
        }
        while ( v9 );
      }
      if ( v7 == &v5[2 * (_DWORD)v6] || *v7 > v3 || v7[1] <= v3 )
      {
        result = -1;
        if ( v7 == v5 )
          return result;
        v10 = *(v7 - 1);
        v7 -= 2;
        v11 = v3 < v10;
        v12 = v10 - 1;
        if ( !v11 )
          v3 = v12;
      }
      a1[3] = v7;
    }
    return v3;
  }
  return result;
}
