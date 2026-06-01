__int64 __fastcall sub_2F0D60(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  void *v5; // r15
  __int64 v6; // r13
  __int64 v8; // rbp
  __int64 i; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __m128i si128; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rax
  size_t v21; // rbx
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+18h] [rbp-50h]
  __m128i v24[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (void *)a1[29];
  v22.m128i_i64[0] = (__int64)a2;
  v23 = a3;
  if ( v5 )
  {
    if ( under_debugger )
      BUG();
    interr(40650, a2, a3, a4, a5);
    return sub_2F0F20();
  }
  else
  {
    v6 = a1[24];
    if ( v6 )
    {
      v8 = 0;
      for ( i = 0; i != v6; ++i )
      {
        v10 = (_QWORD *)(v8 + a1[23]);
        v11 = v10[18];
        if ( v11 )
        {
          v10[19] = 0;
          qfree(v11, a2);
        }
        v12 = v10[14];
        if ( v12 )
        {
          v10[15] = 0;
          qfree(v12, a2);
        }
        v13 = v10[10];
        if ( v13 )
        {
          v10[11] = 0;
          qfree(v13, a2);
        }
        clear_tinfo_t(v10 + 9);
        v14 = v10[5];
        if ( v14 )
        {
          v10[6] = 0;
          qfree(v14, a2);
        }
        v15 = v10[1];
        if ( v15 )
        {
          v10[2] = 0;
          qfree(v15, a2);
        }
        v8 += 200;
        clear_tinfo_t(v10);
      }
    }
    a1[24] = 0;
    v16 = *(_QWORD *)(v22.m128i_i64[0] + 8);
    si128 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
    if ( v16 )
    {
      v21 = 8 * v16;
      v24[0] = si128;
      v5 = (void *)qalloc_or_throw(8 * v16);
      a2 = *(const char **)v22.m128i_i64[0];
      memcpy(v5, *(const void **)v22.m128i_i64[0], v21);
      si128 = _mm_load_si128(v24);
    }
    v18 = a1[26];
    if ( v18 )
    {
      a1[27] = 0;
      v22 = si128;
      qfree(v18, a2);
      si128 = _mm_load_si128(&v22);
    }
    v19 = v23;
    a1[26] = v5;
    *(__m128i *)(a1 + 27) = si128;
    a1[29] = v19;
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  }
}
