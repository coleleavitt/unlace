/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A12D0
// Address: 0x00000000004A12D0

//----- (00000000004A12D0) ----------------------------------------------------
__int64 __fastcall sub_4A12D0(__int64 *a1, void *s, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x22
  __int64 v5; // x19
  __int64 v6; // x4
  unsigned __int64 v7; // x4

  v4 = *a1;
  v5 = -1;
  v6 = *(_QWORD *)(*a1 - 24);
  if ( v6 )
  {
    v7 = v6 - 1;
    v5 = v7 > a3 ? a3 : v7;
    if ( n )
    {
      while ( memchr(s, *(unsigned __int8 *)(v4 + v5), n) )
      {
        if ( !v5 )
          return -1;
        --v5;
        if ( !n )
          return v5;
      }
    }
  }
  return v5;
}
