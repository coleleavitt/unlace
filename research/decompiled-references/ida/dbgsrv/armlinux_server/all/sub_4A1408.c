/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A1408
// Address: 0x00000000004A1408

//----- (00000000004A1408) ----------------------------------------------------
__int64 __fastcall sub_4A1408(const void **a1, const void **a2)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x1
  unsigned __int64 v4; // x19
  unsigned __int64 v5; // x20
  size_t v6; // x2
  __int64 result; // x0
  __int64 v8; // x19

  v2 = *a1;
  v3 = *a2;
  v4 = *(v2 - 3);
  v5 = *(v3 - 3);
  if ( v5 > v4 )
    v6 = *(v2 - 3);
  else
    v6 = *(v3 - 3);
  if ( !v6 || (result = memcmp(v2, v3, v6), !(_DWORD)result) )
  {
    v8 = v4 - v5;
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
