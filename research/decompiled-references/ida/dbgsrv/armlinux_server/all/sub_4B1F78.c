/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B1F78
// Address: 0x00000000004B1F78

//----- (00000000004B1F78) ----------------------------------------------------
__int64 __fastcall sub_4B1F78(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x19
  __int64 v5; // x4
  unsigned __int64 v6; // x4
  __int64 v9; // x22

  v4 = -1;
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 - 1;
    v4 = v6 > a3 ? a3 : v6;
    v9 = *a1;
    if ( n )
    {
      while ( memchr(s, *(unsigned __int8 *)(v9 + v4), n) )
      {
        if ( !v4 )
          return -1;
        --v4;
        if ( !n )
          return v4;
      }
    }
  }
  return v4;
}
