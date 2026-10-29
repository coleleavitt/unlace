/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1468
// Address: 0x00000000004A1468

//----- (00000000004A1468) ----------------------------------------------------
__int64 __fastcall sub_4A1468(__int64 *a1, unsigned __int64 a2, size_t a3, const void **a4)
{
  __int64 v5; // x0
  unsigned __int64 v6; // x19
  size_t v7; // x19
  _QWORD *v8; // x1
  size_t v9; // x20
  size_t v10; // x2
  __int64 v11; // x19
  __int64 result; // x0

  v5 = *a1;
  v6 = *(_QWORD *)(v5 - 24);
  if ( a2 > v6 )
    sub_4A0590(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::compare",
      a2,
      *(_QWORD *)(v5 - 24));
  v7 = v6 - a2;
  v8 = *a4;
  if ( v7 > a3 )
    v7 = a3;
  v9 = *(v8 - 3);
  if ( v9 > v7 )
    v10 = v7;
  else
    v10 = *(v8 - 3);
  if ( !v10 || (result = memcmp((const void *)(v5 + a2), v8, v10), !(_DWORD)result) )
  {
    v11 = v7 - v9;
    result = 0x7FFFFFFF;
    if ( v11 <= 0x7FFFFFFF )
    {
      if ( v11 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v11;
      else
        return 0x80000000LL;
    }
  }
  return result;
}
