/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B20A8
// Address: 0x00000000004B20A8

//----- (00000000004B20A8) ----------------------------------------------------
__int64 __fastcall sub_4B20A8(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x19
  unsigned __int64 v3; // x20
  size_t v4; // x2
  __int64 result; // x0
  __int64 v6; // x19

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 > v2 )
    v4 = *(_QWORD *)(a1 + 8);
  else
    v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 || (result = memcmp(*(const void **)a1, *(const void **)a2, v4), !(_DWORD)result) )
  {
    v6 = v2 - v3;
    result = 0x7FFFFFFF;
    if ( v6 <= 0x7FFFFFFF )
    {
      if ( v6 >= (__int64)0xFFFFFFFF80000000LL )
        return (unsigned int)v6;
      else
        return 0x80000000LL;
    }
  }
  return result;
}
