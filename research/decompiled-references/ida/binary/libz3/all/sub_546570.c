__int64 __fastcall sub_546570(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbx
  __m128i v4; // xmm0
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v8[8]; // [rsp+18h] [rbp-30h] BYREF
  __m128i v9[2]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  v2 = sub_1625800();
  v3 = v2;
  v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
  if ( v2 )
    ++*(_DWORD *)(v2 + 8);
  v7 = v4;
  sub_180C5A0(v8, "e_union");
  v9[0] = _mm_load_si128(&v7);
  result = sub_15E3510(v1, v8, 2, v9, v3, 0);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
    {
      v7.m128i_i64[0] = result;
      sub_15D7BC0(v1, v3);
      return v7.m128i_i64[0];
    }
  }
  return result;
}

