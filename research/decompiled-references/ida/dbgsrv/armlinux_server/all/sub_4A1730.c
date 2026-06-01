/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1730
// Address: 0x00000000004A1730

//----- (00000000004A1730) ----------------------------------------------------
__int64 __fastcall sub_4A1730(__int64 *a1, unsigned __int64 a2, size_t a3, void *s2, size_t a5)
{
  __int64 v5; // x0
  unsigned __int64 v6; // x5
  size_t v7; // x5
  size_t v9; // x19
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
  if ( v7 > a3 )
    v9 = a3;
  else
    v9 = v7;
  if ( v9 > a5 )
    v10 = a5;
  else
    v10 = v9;
  if ( !v10 || (result = memcmp((const void *)(v5 + a2), s2, v10), !(_DWORD)result) )
  {
    v11 = v9 - a5;
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
