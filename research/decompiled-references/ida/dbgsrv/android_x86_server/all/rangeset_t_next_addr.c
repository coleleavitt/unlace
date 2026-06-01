/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_next_addr
// Address: 0x000B8970

//----- (000B8970) --------------------------------------------------------
int __cdecl rangeset_t_next_addr(int *a1, int a2)
{
  int result; // eax
  unsigned int v3; // ecx
  unsigned int *v4; // edx
  int v5; // edi
  int v6; // ebx
  unsigned int v7; // edx
  int v8; // [esp+8h] [ebp-10h]

  result = -1;
  if ( a2 != -1 )
  {
    v3 = a2 + 1;
    v4 = (unsigned int *)a1[3];
    if ( v4 && *v4 <= v3 && v4[1] > v3 )
      return v3;
    v8 = a1[1];
    v5 = *a1;
    if ( 8 * v8 )
    {
      v6 = (8 * v8) >> 3;
      v5 = *a1;
      v7 = v6;
      do
      {
        v7 >>= 1;
        if ( *(_DWORD *)(v5 + 8 * v7 + 4) <= v3 )
        {
          v5 += 8 * v7 + 8;
          v7 = v6 + ~v7;
        }
        v6 = v7;
      }
      while ( v7 );
    }
    if ( v5 != *a1 + 8 * v8 )
    {
      a1[3] = v5;
      if ( v3 < *(_DWORD *)v5 )
        return *(_DWORD *)v5;
      return v3;
    }
  }
  return result;
}
