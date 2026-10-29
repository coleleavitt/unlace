__int64 __fastcall sub_10A1C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // r15
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 i; // rbx
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdx
  __m128i si128; // xmm0
  __int64 v10; // rax
  size_t v12; // rbx
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  __m128i v15[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (void *)a1[29];
  v13.m128i_i64[0] = a2;
  v14 = a3;
  if ( v3 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_10A380(40650);
  }
  else
  {
    v4 = a1[24];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = (_QWORD *)(v5 + a1[23]);
        if ( v7[18] )
        {
          v7[19] = 0;
          qfree();
        }
        if ( v7[14] )
        {
          v7[15] = 0;
          qfree();
        }
        if ( v7[10] )
        {
          v7[11] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v7[5] )
        {
          v7[6] = 0;
          qfree();
        }
        if ( v7[1] )
        {
          v7[2] = 0;
          qfree();
        }
        v5 += 200;
        clear_tinfo_t();
      }
    }
    a1[24] = 0;
    v8 = *(_QWORD *)(v13.m128i_i64[0] + 8);
    si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v8 )
    {
      v12 = 8 * v8;
      v15[0] = si128;
      v3 = (void *)qalloc_or_throw();
      memcpy(v3, *(const void **)v13.m128i_i64[0], v12);
      si128 = _mm_load_si128(v15);
    }
    if ( a1[26] )
    {
      a1[27] = 0;
      v13 = si128;
      qfree();
      si128 = _mm_load_si128(&v13);
    }
    v10 = v14;
    a1[26] = v3;
    *(__m128i *)(a1 + 27) = si128;
    a1[29] = v10;
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  }
}

