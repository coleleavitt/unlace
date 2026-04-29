_BOOL8 __fastcall sub_3A1FD0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  bool v3; // zf
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __m128i v12; // xmm3
  _BOOL4 v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 j; // r12
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 k; // r12
  __int64 *v23; // rax
  __int64 v24; // rdi
  __m128i *v25; // rsi
  __m128i si128; // xmm0
  __int64 v28; // rsi
  __m128i v29; // xmm0
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // r8
  __int64 v34; // rcx
  size_t v35; // r14
  __int64 v36; // rdi
  void *v37; // rax
  const void **v38; // rcx
  __int64 v39; // rax
  __m128i v40; // [rsp+0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+10h] [rbp-58h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  _QWORD v43[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1[4] == 0;
  v43[1] = __readfsqword(0x28u);
  if ( !v3 && !get_func(a1[3]) )
  {
    if ( a3 )
    {
      v25 = (__m128i *)*a3;
      if ( (unsigned __int64)a3[2] <= 0x14 )
      {
        v31 = qvector_reserve(a3, v25, 21, 1);
        *a3 = v31;
        v25 = (__m128i *)v31;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_4003C0);
      a3[1] = 21;
      v25[1].m128i_i32[0] = 1684370017;
      *v25 = si128;
      *(_BYTE *)(*a3 + 20) = 0;
    }
    return 0;
  }
  sub_148200(v43, a1[2], a1 + 4, nullptr, 0);
  v5 = v43[0];
  if ( !v43[0] )
  {
    if ( a3 )
    {
      v28 = *a3;
      if ( (unsigned __int64)a3[2] <= 0x15 )
      {
        v39 = qvector_reserve(a3, v28, 22, 1);
        *a3 = v39;
        v5 = v43[0];
        v28 = v39;
      }
      v29 = _mm_load_si128((const __m128i *)&xmmword_4003D0);
      a3[1] = 22;
      *(__m128i *)v28 = v29;
      *(_QWORD *)(v28 + 13) = 0x6572756C69616620LL;
      v30 = *a3;
      v13 = 0;
      *(_BYTE *)(v30 + 21) = 0;
      goto LABEL_13;
    }
    return 0;
  }
  v41 = 0;
  v6 = *(_QWORD *)(v43[0] + 136LL);
  if ( v6 )
  {
    v41 = qalloc_or_throw(32 * v6);
    v32 = v41;
    v33 = 0;
    do
    {
      v34 = *(_QWORD *)(v5 + 128) + 32 * v33;
      *(_OWORD *)(v32 + 8) = 0;
      *(_QWORD *)v32 = 0;
      v35 = *(_QWORD *)(v34 + 8);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v34 + 8);
        v42 = v33;
        v40.m128i_i64[0] = v34;
        v37 = (void *)qalloc_or_throw(v36);
        v38 = (const void **)v40.m128i_i64[0];
        *(_QWORD *)v32 = v37;
        *(_QWORD *)(v32 + 16) = v35;
        memcpy(v37, *v38, v35);
        *(_QWORD *)(v32 + 8) = v35;
        v33 = v42;
        v34 = v40.m128i_i64[0];
      }
      ++v33;
      v32 += 32;
      *(_BYTE *)(v32 - 8) = *(_BYTE *)(v34 + 24);
      *(_DWORD *)(v32 - 4) = *(_DWORD *)(v34 + 28);
    }
    while ( v6 != v33 );
  }
  v7 = *a2;
  v40 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  if ( v7 )
  {
    v8 = a2[1];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (__int64 *)(v7 + 32 * i);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11);
          v7 = *a2;
        }
      }
    }
    a2[1] = 0;
    qfree(v7);
  }
  v12 = _mm_load_si128(&v40);
  v5 = v43[0];
  *a2 = v41;
  *(__m128i *)(a2 + 1) = v12;
  v13 = *(_DWORD *)(v5 + 152) >= 0;
LABEL_13:
  if ( v5 )
  {
    v3 = (*(_DWORD *)(v5 + 104))-- == 1;
    if ( v3 )
    {
      sub_2535B0((__int64 *)v5);
      v14 = *(_QWORD *)(v5 + 184);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v5 + 192);
        if ( v15 )
        {
          for ( j = 0; j != v15; ++j )
          {
            v17 = (__int64 *)(v14 + 24 * j);
            v18 = *v17;
            if ( *v17 )
            {
              v17[1] = 0;
              qfree(v18);
              v14 = *(_QWORD *)(v5 + 184);
            }
          }
        }
        *(_QWORD *)(v5 + 192) = 0;
        qfree(v14);
      }
      v19 = *(_QWORD *)(v5 + 160);
      if ( v19 )
      {
        *(_QWORD *)(v5 + 168) = 0;
        qfree(v19);
      }
      v20 = *(_QWORD *)(v5 + 128);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v5 + 136);
        if ( v21 )
        {
          for ( k = 0; k != v21; ++k )
          {
            v23 = (__int64 *)(v20 + 32 * k);
            v24 = *v23;
            if ( *v23 )
            {
              v23[1] = 0;
              qfree(v24);
              v20 = *(_QWORD *)(v5 + 128);
            }
          }
        }
        *(_QWORD *)(v5 + 136) = 0;
        qfree(v20);
      }
      sub_24FC90(v5 + 16);
      j__qfree(v5);
    }
  }
  return v13;
}
