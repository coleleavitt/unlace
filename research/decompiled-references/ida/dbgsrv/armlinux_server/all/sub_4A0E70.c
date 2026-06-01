/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0E70
// Address: 0x00000000004A0E70

//----- (00000000004A0E70) ----------------------------------------------------
__int64 __fastcall sub_4A0E70(__int64 *a1, void *s2, unsigned __int64 a3, size_t n)
{
  __int64 v4; // x22
  __int64 v5; // x19
  size_t v6; // x0
  unsigned __int64 v7; // x0

  v4 = *a1;
  v5 = -1;
  v6 = *(_QWORD *)(*a1 - 24);
  if ( n <= v6 )
  {
    v7 = v6 - n;
    if ( v7 > a3 )
      v5 = a3;
    else
      v5 = v7;
    while ( n && memcmp((const void *)(v4 + v5), s2, n) )
    {
      if ( !v5 )
        return -1;
      --v5;
    }
  }
  return v5;
}
