/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_upper_bound
// Address: 0x0008358E

//----- (0008358E) --------------------------------------------------------
_DWORD *__fastcall rangeset_t_upper_bound(_DWORD *a1, unsigned int a2)
{
  _DWORD *result; // r0
  int v4; // r2
  unsigned int v5; // r2
  unsigned int v6; // r4
  unsigned int *v7; // r3

  result = (_DWORD *)*a1;
  v4 = 8 * a1[1];
  if ( v4 )
  {
    v5 = v4 >> 3;
    do
    {
      while ( 1 )
      {
        v6 = v5 >> 1;
        v7 = &result[2 * (v5 >> 1)];
        if ( *v7 <= a2 )
          break;
        v5 >>= 1;
        if ( !v6 )
          return result;
      }
      v5 += ~v6;
      result = v7 + 2;
    }
    while ( v5 );
  }
  return result;
}
