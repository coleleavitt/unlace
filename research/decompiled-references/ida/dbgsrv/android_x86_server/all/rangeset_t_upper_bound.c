/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_upper_bound
// Address: 0x000B88B0

//----- (000B88B0) --------------------------------------------------------
int __cdecl rangeset_t_upper_bound(int *a1, unsigned int a2)
{
  int result; // eax
  int v3; // esi
  int v4; // esi
  unsigned int v5; // edx

  result = *a1;
  v3 = 8 * a1[1];
  if ( v3 )
  {
    v4 = v3 >> 3;
    v5 = v4;
    do
    {
      v5 >>= 1;
      if ( *(_DWORD *)(result + 8 * v5) <= a2 )
      {
        result += 8 * v5 + 8;
        v5 = v4 + ~v5;
      }
      v4 = v5;
    }
    while ( v5 );
  }
  return result;
}
