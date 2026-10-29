_QWORD *__fastcall sub_AFCFB0(_QWORD *a1, __int64 *a2)
{
  __m128i v3; // xmm0
  size_t v4; // rdi
  _QWORD *result; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // [rsp+8h] [rbp-30h]

  if ( *a2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(*a2 - 8));
    v4 = 16LL * (unsigned int)_mm_cvtsi128_si32(v3) + 8;
  }
  else
  {
    v3.m128i_i64[0] = 0;
    v4 = 8;
  }
  v9 = v3.m128i_i64[0];
  result = (_QWORD *)sub_186B270(v4);
  *a1 = result + 1;
  v6 = *a2;
  *result = v3.m128i_i64[0];
  if ( v6 )
  {
    v7 = v6 + 16LL * *(unsigned int *)(v6 - 4);
    if ( v6 != v7 )
    {
      v8 = result + 1;
      do
      {
        result = (_QWORD *)sub_15D0E50(v8, v6);
        v6 += 16;
        v8 += 2;
      }
      while ( v7 != v6 );
    }
  }
  return result;
}

