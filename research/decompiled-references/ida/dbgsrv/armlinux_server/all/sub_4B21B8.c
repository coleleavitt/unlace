/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B21B8
// Address: 0x00000000004B21B8

//----- (00000000004B21B8) ----------------------------------------------------
__int64 __fastcall sub_4B21B8(_QWORD *a1, unsigned __int64 a2, size_t a3, _QWORD *a4, unsigned __int64 a5, size_t a6)
{
  unsigned __int64 v6; // x6
  unsigned __int64 v7; // x20
  size_t v8; // x6
  size_t v9; // x20
  size_t v10; // x19
  size_t v11; // x2
  __int64 v12; // x19
  __int64 result; // x0

  v6 = a1[1];
  if ( a2 > v6 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, v6);
  v7 = a4[1];
  if ( a5 > v7 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a5, v7);
  v8 = v6 - a2;
  v9 = v7 - a5;
  if ( v8 > a3 )
    v10 = a3;
  else
    v10 = v8;
  if ( v9 > a6 )
    v9 = a6;
  if ( v9 > v10 )
    v11 = v10;
  else
    v11 = v9;
  if ( !v11 || (result = memcmp((const void *)(*a1 + a2), (const void *)(*a4 + a5), v11), !(_DWORD)result) )
  {
    v12 = v10 - v9;
    result = 0x7FFFFFFF;
    if ( v12 <= 0x7FFFFFFF )
    {
      if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v12;
      else
        return 0x80000000LL;
    }
  }
  return result;
}
