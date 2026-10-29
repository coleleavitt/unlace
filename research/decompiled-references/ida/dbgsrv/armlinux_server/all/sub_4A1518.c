/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1518
// Address: 0x00000000004A1518

//----- (00000000004A1518) ----------------------------------------------------
__int64 __fastcall sub_4A1518(__int64 *a1, unsigned __int64 a2, size_t a3, __int64 *a4, unsigned __int64 a5, size_t a6)
{
  __int64 v7; // x0
  unsigned __int64 v8; // x6
  __int64 v9; // x1
  unsigned __int64 v10; // x3
  size_t v11; // x6
  size_t v12; // x3
  size_t v13; // x19
  size_t v14; // x20
  size_t v15; // x2
  __int64 v16; // x19
  __int64 result; // x0

  v7 = *a1;
  v8 = *(_QWORD *)(v7 - 24);
  if ( a2 > v8 )
    sub_4A0590(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a2,
      *(_QWORD *)(v7 - 24));
  v9 = *a4;
  v10 = *(_QWORD *)(*a4 - 24);
  if ( a5 > v10 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a5, v10);
  v11 = v8 - a2;
  v12 = v10 - a5;
  if ( v11 > a3 )
    v13 = a3;
  else
    v13 = v11;
  if ( v12 > a6 )
    v14 = a6;
  else
    v14 = v12;
  if ( v14 > v13 )
    v15 = v13;
  else
    v15 = v14;
  if ( !v15 || (result = memcmp((const void *)(v7 + a2), (const void *)(v9 + a5), v15), !(_DWORD)result) )
  {
    v16 = v13 - v14;
    result = 0x7FFFFFFF;
    if ( v16 <= 0x7FFFFFFF )
    {
      if ( v16 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v16;
      else
        return 0x80000000LL;
    }
  }
  return result;
}
