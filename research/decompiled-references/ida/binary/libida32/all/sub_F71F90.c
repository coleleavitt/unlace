__int64 *__fastcall sub_F71F90(__m128i *a1, __int64 a2)
{
  __int32 v2; // eax
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 *result; // rax
  __int64 i; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx

  a1->m128i_i64[0] = 0;
  a1->m128i_i64[1] = 0;
  a1[1].m128i_i64[0] = 0;
  a1[1].m128i_i64[1] = 0;
  a1[2].m128i_i64[0] = 0;
  a1[2].m128i_i64[1] = 0;
  a1[3] = _mm_loadu_si128((const __m128i *)(a2 + 104));
  v2 = *(_DWORD *)(a2 + 120);
  a1[4].m128i_i64[1] = a2;
  a1[4].m128i_i32[0] = v2;
  v3 = *(__int64 **)(a2 + 48);
  if ( v3 )
  {
    v4 = *v3;
    a1[1].m128i_i64[0] = (__int64)(v3 + 4);
    a1[1].m128i_i64[1] = v4;
  }
  result = *(__int64 **)(sub_FCB100(a2) + 304);
  if ( result )
  {
    for ( i = result[1]; i; i = *(_QWORD *)(v7 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v7 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v7 )
        break;
      result = (__int64 *)v7;
    }
    v8 = *result;
    result += 4;
    a1[2].m128i_i64[0] = (__int64)result;
    a1[2].m128i_i64[1] = v8;
  }
  return result;
}

