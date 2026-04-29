__m128i **__fastcall sub_3A1AF0(__m128i **a1, __int64 a2, __int64 *a3)
{
  bool v4; // zf
  __m128i *v6; // rax
  unsigned __int64 v7; // rbx
  __m128i *v8; // rbp
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 i; // rbp
  __int64 *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 j; // rbp
  __int64 *v19; // rax
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 k; // r13
  __int64 *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 m; // r13
  __int64 *v32; // rax
  __int64 v33; // rdi
  _QWORD v34[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a3[4] == 0;
  v34[1] = __readfsqword(0x28u);
  if ( !v4 && !get_func(a3[3]) || (sub_148BC0(v34, a3[2], a3 + 4, nullptr, 0), !v34[0]) )
  {
    *a1 = nullptr;
    return a1;
  }
  v6 = (__m128i *)operator new(0x28u);
  v7 = v34[0];
  v8 = v6;
  if ( !v34[0] )
  {
    v22 = *(_QWORD *)(a2 + 40);
    v8->m128i_i32[2] = 1;
    v8->m128i_i64[0] = (__int64)&off_4C7570;
    v8[1].m128i_i64[0] = v22;
    v8[1].m128i_i64[1] = 0;
    v8[2].m128i_i32[0] = -1;
    *a1 = v8;
    return a1;
  }
  ++*(_DWORD *)(v34[0] + 104LL);
  v9 = _mm_loadl_epi64((const __m128i *)(a2 + 40));
  v6->m128i_i32[2] = 1;
  v6->m128i_i64[0] = (__int64)&off_4C7570;
  v6[1] = _mm_unpacklo_epi64(v9, (__m128i)v7);
  ++*(_DWORD *)(v7 + 104);
  v6[2].m128i_i32[0] = -1;
  v4 = (*(_DWORD *)(v7 + 104))-- == 1;
  if ( !v4 )
  {
    *a1 = v6;
LABEL_7:
    v4 = (*(_DWORD *)(v7 + 104))-- == 1;
    if ( v4 )
    {
      sub_2540F0((__int64 *)v7);
      v10 = *(_QWORD *)(v7 + 184);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v7 + 192);
        if ( v11 )
        {
          for ( i = 0; i != v11; ++i )
          {
            v13 = (__int64 *)(v10 + 24 * i);
            v14 = *v13;
            if ( *v13 )
            {
              v13[1] = 0;
              qfree(v14);
              v10 = *(_QWORD *)(v7 + 184);
            }
          }
        }
        *(_QWORD *)(v7 + 192) = 0;
        qfree(v10);
      }
      v15 = *(_QWORD *)(v7 + 160);
      if ( v15 )
      {
        *(_QWORD *)(v7 + 168) = 0;
        qfree(v15);
      }
      v16 = *(_QWORD *)(v7 + 128);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v7 + 136);
        if ( v17 )
        {
          for ( j = 0; j != v17; ++j )
          {
            v19 = (__int64 *)(v16 + 32 * j);
            v20 = *v19;
            if ( *v19 )
            {
              v19[1] = 0;
              qfree(v20);
              v16 = *(_QWORD *)(v7 + 128);
            }
          }
        }
        *(_QWORD *)(v7 + 136) = 0;
        qfree(v16);
      }
      sub_2507D0(v7 + 16);
      j__qfree(v7);
    }
    return a1;
  }
  sub_2540F0((__int64 *)v7);
  v23 = *(_QWORD *)(v7 + 184);
  if ( v23 )
  {
    v24 = *(_QWORD *)(v7 + 192);
    if ( v24 )
    {
      for ( k = 0; k != v24; ++k )
      {
        v26 = (__int64 *)(v23 + 24 * k);
        v27 = *v26;
        if ( *v26 )
        {
          v26[1] = 0;
          qfree(v27);
          v23 = *(_QWORD *)(v7 + 184);
        }
      }
    }
    *(_QWORD *)(v7 + 192) = 0;
    qfree(v23);
  }
  v28 = *(_QWORD *)(v7 + 160);
  if ( v28 )
  {
    *(_QWORD *)(v7 + 168) = 0;
    qfree(v28);
  }
  v29 = *(_QWORD *)(v7 + 128);
  if ( v29 )
  {
    v30 = *(_QWORD *)(v7 + 136);
    if ( v30 )
    {
      for ( m = 0; m != v30; ++m )
      {
        v32 = (__int64 *)(v29 + 32 * m);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33);
          v29 = *(_QWORD *)(v7 + 128);
        }
      }
    }
    *(_QWORD *)(v7 + 136) = 0;
    qfree(v29);
  }
  sub_2507D0(v7 + 16);
  j__qfree(v7);
  v7 = v34[0];
  *a1 = v8;
  if ( v7 )
    goto LABEL_7;
  return a1;
}
