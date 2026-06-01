__m128i *__fastcall sub_2259AC0(__m128i *a1, __int64 a2)
{
  __int32 v2; // eax
  __int64 v3; // rdx
  __int64 v5; // rdx
  __int32 v6; // eax
  _BYTE *v7; // rsi
  _QWORD v8[2]; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v9; // [rsp+10h] [rbp-C8h] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v12[160]; // [rsp+38h] [rbp-A0h] BYREF

  if ( !*(_BYTE *)(a2 + 328) )
  {
    ptr = v12;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v2 = sub_228DB00((std::_V2 *)&ptr);
    if ( v2 )
    {
      a1[2].m128i_i8[0] |= 1u;
      a1->m128i_i32[0] = v2;
      a1->m128i_i64[1] = v3;
    }
    else
    {
      v8[0] = &v9;
      sub_2259A00(v8, ptr, (__int64)ptr + si128.m128i_i64[0]);
      a1[2].m128i_i8[0] &= ~1u;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( (__m128i *)v8[0] == &v9 )
      {
        a1[1] = _mm_load_si128(&v9);
      }
      else
      {
        a1->m128i_i64[0] = v8[0];
        a1[1].m128i_i64[0] = v9.m128i_i64[0];
      }
      a1->m128i_i64[1] = v8[1];
    }
    if ( ptr != v12 )
    {
      free(ptr);
      return a1;
    }
    return a1;
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 320) & 1) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 16);
    a1[2].m128i_i8[0] |= 1u;
    a1->m128i_i64[1] = v5;
    a1->m128i_i32[0] = v6;
    return a1;
  }
  v7 = *(_BYTE **)(a2 + 16);
  ptr = &si128.m128i_u64[1];
  sub_2259A00(&ptr, v7, (__int64)&v7[v5]);
  a1[2].m128i_i8[0] &= ~1u;
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  if ( ptr == &si128.m128i_u64[1] )
  {
    a1[1] = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
  }
  else
  {
    a1->m128i_i64[0] = (__int64)ptr;
    a1[1].m128i_i64[0] = si128.m128i_i64[1];
  }
  a1->m128i_i64[1] = si128.m128i_i64[0];
  return a1;
}
