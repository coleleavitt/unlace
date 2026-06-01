/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1B20
// Address: 0x00000000004B1B20

//----- (00000000004B1B20) ----------------------------------------------------
__int64 __fastcall sub_4B1B20(__int64 *a1, void *s2, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x19
  size_t v5; // x4
  unsigned __int64 v6; // x4
  __int64 v9; // x22

  v4 = -1;
  v5 = a1[1];
  if ( n <= v5 )
  {
    v6 = v5 - n;
    if ( v6 > a3 )
      v4 = a3;
    else
      v4 = v6;
    v9 = *a1;
    while ( n && memcmp((const void *)(v9 + v4), s2, n) )
    {
      if ( !v4 )
        return -1;
      --v4;
    }
  }
  return v4;
}
