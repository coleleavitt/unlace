/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A15E8
// Address: 0x00000000004A15E8

//----- (00000000004A15E8) ----------------------------------------------------
__int64 __fastcall sub_4A15E8(const void **a1, char *s)
{
  _QWORD *v3; // x21
  size_t v4; // x0
  size_t v5; // x20
  size_t v6; // x19
  size_t v7; // x2
  __int64 result; // x0
  __int64 v9; // x19

  v3 = *a1;
  v4 = strlen(s);
  v5 = v4;
  v6 = *(v3 - 3);
  if ( v4 > v6 )
    v7 = *(v3 - 3);
  else
    v7 = v4;
  if ( !v7 || (result = memcmp(v3, s, v7), !(_DWORD)result) )
  {
    v9 = v6 - v5;
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
