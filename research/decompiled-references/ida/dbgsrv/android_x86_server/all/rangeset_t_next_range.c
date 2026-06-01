/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_range
// Address: 0x000B8AA0

//----- (000B8AA0) --------------------------------------------------------
int __cdecl rangeset_t_next_range(int **a1, unsigned int a2)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // esi
  int *v5; // edi
  int v6; // ecx
  unsigned int v7; // ebx

  v2 = a1[3];
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
    v4 = a1[1];
    v5 = *a1;
    if ( 8 * (_DWORD)v4 )
    {
      v6 = (8 * (int)v4) >> 3;
      v5 = *a1;
      v7 = v6;
      do
      {
        v7 >>= 1;
        if ( v5[2 * v7] <= a2 )
        {
          v5 += 2 * v7 + 2;
          v7 = v6 + ~v7;
        }
        v6 = v7;
      }
      while ( v7 );
    }
    if ( v5 != &(*a1)[2 * (_DWORD)v4] )
    {
      result = *v5;
      a1[3] = v5;
      return result;
    }
  }
  return -1;
}
