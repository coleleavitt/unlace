/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_find_range
// Address: 0x000B88F0

//----- (000B88F0) --------------------------------------------------------
unsigned int *__cdecl rangeset_t_find_range(int a1, unsigned int a2)
{
  unsigned int *result; // eax
  int v3; // edi
  unsigned int *v4; // esi
  int v5; // ecx
  unsigned int v6; // ebx

  result = *(unsigned int **)(a1 + 12);
  if ( !result || *result > a2 || result[1] <= a2 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    v4 = *(unsigned int **)a1;
    if ( 8 * v3 )
    {
      v5 = (8 * v3) >> 3;
      v4 = *(unsigned int **)a1;
      v6 = v5;
      do
      {
        v6 >>= 1;
        if ( v4[2 * v6 + 1] <= a2 )
        {
          v4 += 2 * v6 + 2;
          v6 = v5 + ~v6;
        }
        v5 = v6;
      }
      while ( v6 );
    }
    result = nullptr;
    if ( v4 != (unsigned int *)(*(_DWORD *)a1 + 8 * v3) && *v4 <= a2 && v4[1] > a2 )
    {
      *(_DWORD *)(a1 + 12) = v4;
      return v4;
    }
  }
  return result;
}
