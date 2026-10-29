__m128i *__fastcall sub_220CE20(__m128i *a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 (__fastcall *v6)(); // rax
  unsigned __int64 v7; // rdi
  const __m128i **v8; // rax
  const __m128i *v9; // rcx
  __m128i v11; // xmm0

  v6 = *(__int64 (__fastcall **)())(*a2 + 48LL);
  if ( v6 == sub_220CEC0 )
  {
    v7 = a2[11];
    v8 = *(const __m128i ***)(a2[10] + 8 * (a5 % v7));
    if ( v8 )
    {
      v9 = *v8;
      if ( a5 == (*v8)->m128i_i32[2] )
      {
LABEL_9:
        v11 = _mm_loadu_si128(v9 + 1);
        a1[1].m128i_i8[0] = 1;
        *a1 = v11;
        return a1;
      }
      while ( 1 )
      {
        v9 = (const __m128i *)v9->m128i_i64[0];
        if ( !v9 || a5 % v7 != v9->m128i_u32[2] % v7 )
          break;
        if ( a5 == v9->m128i_i32[2] )
          goto LABEL_9;
      }
    }
    a1[1].m128i_i8[0] = 0;
    return a1;
  }
  ((void (__fastcall *)(__m128i *, _QWORD *, _QWORD))v6)(a1, a2, a5);
  return a1;
}
