/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_prev_range
// Address: 0x000B8B30

//----- (000B8B30) --------------------------------------------------------
int __cdecl rangeset_t_prev_range(unsigned int **a1, unsigned int a2)
{
  unsigned int *v2; // eax
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // ecx
  unsigned int *v7; // esi
  unsigned int v8; // ebx

  v2 = a1[3];
  if ( v2 && *v2 <= a2 && v2[1] > a2 )
  {
    if ( v2 == *a1 )
      return -1;
    a1[3] = v2 - 2;
    v3 = *(v2 - 1);
    return v3 - 1;
  }
  v4 = 8 * (_DWORD)a1[1];
  result = -1;
  if ( v4 )
  {
    v6 = v4 >> 3;
    v7 = *a1;
    v8 = v6;
    do
    {
      v8 >>= 1;
      if ( v7[2 * v8 + 1] <= a2 )
      {
        v7 += 2 * v8 + 2;
        v8 = v6 + ~v8;
      }
      v6 = v8;
    }
    while ( v8 );
    if ( v7 != *a1 )
    {
      a1[3] = v7 - 2;
      v3 = *(v7 - 1);
      return v3 - 1;
    }
  }
  return result;
}
