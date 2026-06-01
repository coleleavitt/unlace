/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B23E8
// Address: 0x00000000004B23E8

//----- (00000000004B23E8) ----------------------------------------------------
__int64 __fastcall sub_4B23E8(_QWORD *a1, unsigned __int64 a2, size_t a3, void *s2, size_t a5)
{
  unsigned __int64 v5; // x5
  size_t v6; // x5
  size_t v8; // x19
  size_t v9; // x2
  __int64 v10; // x19
  __int64 result; // x0

  v5 = a1[1];
  if ( a2 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, a1[1]);
  v6 = v5 - a2;
  if ( v6 > a3 )
    v8 = a3;
  else
    v8 = v6;
  if ( v8 > a5 )
    v9 = a5;
  else
    v9 = v8;
  if ( !v9 || (result = memcmp((const void *)(*a1 + a2), s2, v9), !(_DWORD)result) )
  {
    v10 = v8 - a5;
    result = 0x7FFFFFFF;
    if ( v10 <= 0x7FFFFFFF )
    {
      if ( v10 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v10;
      else
        return 0x80000000LL;
    }
  }
  return result;
}
