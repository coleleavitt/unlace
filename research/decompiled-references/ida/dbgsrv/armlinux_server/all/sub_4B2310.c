/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B2310
// Address: 0x00000000004B2310

//----- (00000000004B2310) ----------------------------------------------------
__int64 __fastcall sub_4B2310(_QWORD *a1, unsigned __int64 a2, size_t a3, char *s)
{
  unsigned __int64 v5; // x19
  size_t v6; // x19
  size_t v9; // x0
  size_t v10; // x20
  size_t v11; // x2
  __int64 v12; // x19
  __int64 result; // x0

  v5 = a1[1];
  if ( a2 > v5 )
    sub_4A0590("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::compare", a2, a1[1]);
  v6 = v5 - a2;
  if ( v6 > a3 )
    v6 = a3;
  v9 = strlen(s);
  v10 = v9;
  if ( v9 > v6 )
    v11 = v6;
  else
    v11 = v9;
  if ( !v11 || (result = memcmp((const void *)(*a1 + a2), s, v11), !(_DWORD)result) )
  {
    v12 = v6 - v10;
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
