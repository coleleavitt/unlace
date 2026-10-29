/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2108
// Address: 0x00000000004B2108

//----- (00000000004B2108) ----------------------------------------------------
__int64 __fastcall sub_4B2108(_QWORD *a1, unsigned __int64 a2, size_t a3, __int64 a4)
{
  unsigned __int64 v4; // x19
  size_t v5; // x19
  size_t v6; // x20
  size_t v7; // x2
  __int64 v8; // x19
  __int64 result; // x0

  v4 = a1[1];
  if ( a2 > v4 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, a1[1]);
  v5 = v4 - a2;
  v6 = *(_QWORD *)(a4 + 8);
  if ( v5 > a3 )
    v5 = a3;
  if ( v6 > v5 )
    v7 = v5;
  else
    v7 = *(_QWORD *)(a4 + 8);
  if ( !v7 || (result = memcmp((const void *)(*a1 + a2), *(const void **)a4, v7), !(_DWORD)result) )
  {
    v8 = v5 - v6;
    result = 0x7FFFFFFF;
    if ( v8 <= 0x7FFFFFFF )
    {
      if ( v8 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v8;
      else
        return 0x80000000LL;
    }
  }
  return result;
}
