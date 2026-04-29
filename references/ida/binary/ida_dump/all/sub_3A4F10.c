__m128i **__fastcall sub_3A4F10(__m128i **a1, const __m128i *a2)
{
  __int64 v2; // r14
  __m128i *v3; // rax
  __int64 v4; // rbx
  __m128i *v5; // rbp
  __m128i v6; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 i; // r12
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 j; // r12
  _QWORD *v15; // rax
  __int64 v17; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a2[1].m128i_i64[1] + 8) + 432LL) + 104LL * a2[2].m128i_i32[0];
  v3 = (__m128i *)operator new(0x28u);
  v4 = a2[1].m128i_i64[1];
  v5 = v3;
  if ( v4 )
  {
    ++*(_DWORD *)(v4 + 104);
    v6 = _mm_loadl_epi64(a2 + 1);
    v3->m128i_i32[2] = 1;
    v3->m128i_i64[0] = (__int64)off_4E6D98;
    v3[1] = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)v4);
    ++*(_DWORD *)(v4 + 104);
    v3[2].m128i_i64[0] = v2;
    if ( (*(_DWORD *)(v4 + 104))-- == 1 )
    {
      sub_258970((__int64 *)v4);
      v8 = *(_QWORD *)(v4 + 184);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v4 + 192);
        if ( v9 )
        {
          for ( i = 0; i != v9; ++i )
          {
            v11 = (_QWORD *)(v8 + 24 * i);
            if ( *v11 )
            {
              v11[1] = 0;
              qfree();
              v8 = *(_QWORD *)(v4 + 184);
            }
          }
        }
        *(_QWORD *)(v4 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v4 + 160) )
      {
        *(_QWORD *)(v4 + 168) = 0;
        qfree();
      }
      v12 = *(_QWORD *)(v4 + 128);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v4 + 136);
        if ( v13 )
        {
          for ( j = 0; j != v13; ++j )
          {
            v15 = (_QWORD *)(v12 + 32 * j);
            if ( *v15 )
            {
              v15[1] = 0;
              qfree();
              v12 = *(_QWORD *)(v4 + 128);
            }
          }
        }
        *(_QWORD *)(v4 + 136) = 0;
        qfree();
      }
      sub_255050(v4 + 16);
      j__qfree();
    }
    *a1 = v5;
    return a1;
  }
  else
  {
    v17 = a2[1].m128i_i64[0];
    v5->m128i_i32[2] = 1;
    v5[1].m128i_i64[1] = 0;
    v5[1].m128i_i64[0] = v17;
    v5->m128i_i64[0] = (__int64)off_4E6D98;
    v5[2].m128i_i64[0] = v2;
    *a1 = v5;
    return a1;
  }
}
