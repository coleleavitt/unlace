__m128i **__fastcall sub_3A4D40(__m128i **a1, const __m128i *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __m128i *v4; // rbp
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // r12
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 j; // r12
  _QWORD *v15; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0

  v2 = operator new(0x30u);
  v3 = a2[1].m128i_i64[1];
  v4 = (__m128i *)v2;
  v5 = (const __m128i *)(a2[2].m128i_i64[0] + 16LL * a2[3].m128i_i32[2]);
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 104);
    v6 = _mm_loadl_epi64(a2 + 1);
    v4->m128i_i32[2] = 1;
    v4->m128i_i64[0] = (__int64)off_4E6F98;
    v4[1] = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)v3);
    ++*(_DWORD *)(v3 + 104);
    v4[2] = _mm_loadu_si128(v5);
    if ( (*(_DWORD *)(v3 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v3);
      v8 = *(_QWORD *)(v3 + 184);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v3 + 192);
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = (_QWORD *)(v8 + 24 * i);
            if ( *v11 )
            {
              v11[1] = 0;
              qfree();
              v8 = *(_QWORD *)(v3 + 184);
            }
          }
        }
        *(_QWORD *)(v3 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v3 + 160) )
      {
        *(_QWORD *)(v3 + 168) = 0;
        qfree();
      }
      v12 = *(_QWORD *)(v3 + 128);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v3 + 136);
        if ( v13 )
        {
          for ( j = 0; j != v13; ++j )
          {
            v15 = (_QWORD *)(v12 + 32 * j);
            if ( *v15 )
            {
              v15[1] = 0;
              qfree();
              v12 = *(_QWORD *)(v3 + 128);
            }
          }
        }
        *(_QWORD *)(v3 + 136) = 0;
        qfree();
      }
      sub_255050(v3 + 16);
      j__qfree();
    }
    *a1 = v4;
    return a1;
  }
  else
  {
    v17 = a2[1].m128i_i64[0];
    v4->m128i_i32[2] = 1;
    v4->m128i_i64[0] = (__int64)off_4E6F98;
    v4[1].m128i_i64[0] = v17;
    v4[1].m128i_i64[1] = 0;
    v18 = _mm_loadu_si128(v5);
    *a1 = v4;
    v4[2] = v18;
    return a1;
  }
}
