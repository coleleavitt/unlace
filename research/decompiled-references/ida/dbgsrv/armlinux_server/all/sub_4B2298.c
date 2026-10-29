/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2298
// Address: 0x00000000004B2298

//----- (00000000004B2298) ----------------------------------------------------
__int64 __fastcall sub_4B2298(__int64 a1, char *s)
{
  size_t v4; // x0
  size_t v5; // x19
  size_t v6; // x20
  size_t v7; // x2
  __int64 result; // x0
  __int64 v9; // x19

  v4 = strlen(s);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v4;
  if ( v4 > v5 )
    v7 = *(_QWORD *)(a1 + 8);
  else
    v7 = v4;
  if ( !v7 || (result = memcmp(*(const void **)a1, s, v7), !(_DWORD)result) )
  {
    v9 = v5 - v6;
    result = 0x7FFFFFFF;
    if ( v9 <= 0x7FFFFFFF )
    {
      if ( v9 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v9;
      else
        return 0x80000000LL;
    }
  }
  return result;
}
