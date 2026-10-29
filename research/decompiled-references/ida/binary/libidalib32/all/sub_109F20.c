__int64 __fastcall sub_109F20(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // r14
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  _QWORD *v7; // r15
  unsigned __int64 v8; // rdx
  __m128i si128; // xmm0
  size_t v11; // rbx
  __m128i v13[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = (void *)a1[29];
  if ( v3 )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_10A0D0(40650);
  }
  else
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = a1[23] + 192 * i;
        v7 = (_QWORD *)v6;
        if ( *(_QWORD *)(v6 + 144) )
        {
          *(_QWORD *)(v6 + 152) = 0;
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
        clear_tinfo_t();
      }
    }
    a1[24] = 0;
    v8 = *(_QWORD *)(a2 + 8);
    si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
    if ( v8 )
    {
      v11 = 4 * v8;
      v13[0] = si128;
      v3 = (void *)qalloc_or_throw();
      memcpy(v3, *(const void **)a2, v11);
      si128 = _mm_load_si128(v13);
    }
    if ( a1[26] )
    {
      a1[27] = 0;
      v13[0] = si128;
      qfree();
      si128 = _mm_load_si128(v13);
    }
    a1[26] = v3;
    *(__m128i *)(a1 + 27) = si128;
    a1[29] = a3;
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
  }
}

