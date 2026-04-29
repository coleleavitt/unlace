_BOOL8 __fastcall sub_3A8050(__int64 a1, __int64 *a2, __int64 *a3)
{
  bool v4; // zf
  const void *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 i; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __m128i v16; // xmm3
  _BOOL4 v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // r13
  __int64 j; // r12
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 k; // r12
  __int64 *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  __m128i si128; // xmm0
  __int64 v32; // rsi
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // r8
  __int64 v39; // rcx
  size_t v40; // r14
  __int64 v41; // rdi
  void *v42; // rax
  const void **v43; // rcx
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-68h] BYREF
  __int64 v46; // [rsp+10h] [rbp-58h]
  __int64 v47; // [rsp+18h] [rbp-50h]
  __int64 v48[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 32) == 0;
  v48[1] = __readfsqword(0x28u);
  if ( !v4 && !get_func() )
  {
    if ( a3 )
    {
      v29 = *a3;
      if ( (unsigned __int64)a3[2] <= 0x14 )
      {
        v35 = qvector_reserve((__int64)a3, v29, 21, 1);
        *a3 = v35;
        v29 = v35;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_424A40);
      a3[1] = 21;
      *(_DWORD *)(v29 + 16) = 1684370017;
      *(__m128i *)v29 = si128;
      *(_BYTE *)(*a3 + 20) = 0;
    }
    return 0;
  }
  v6 = *(const void **)(a1 + 16);
  sub_14CDC0(v48, (__int64)v6, (_QWORD *)(a1 + 32), nullptr, 0);
  v9 = v48[0];
  if ( !v48[0] )
  {
    if ( a3 )
    {
      v32 = *a3;
      if ( (unsigned __int64)a3[2] <= 0x15 )
      {
        v44 = qvector_reserve((__int64)a3, v32, 22, 1);
        *a3 = v44;
        v9 = v48[0];
        v32 = v44;
      }
      v33 = _mm_load_si128((const __m128i *)&xmmword_424A50);
      a3[1] = 22;
      *(__m128i *)v32 = v33;
      *(_QWORD *)(v32 + 13) = 0x6572756C69616620LL;
      v34 = *a3;
      v17 = 0;
      *(_BYTE *)(v34 + 21) = 0;
      goto LABEL_13;
    }
    return 0;
  }
  v46 = 0;
  v10 = *(_QWORD *)(v48[0] + 136);
  if ( v10 )
  {
    v46 = qalloc_or_throw(32 * v10, (__int64)v6, v7, v8);
    v37 = v46;
    v38 = 0;
    do
    {
      v39 = *(_QWORD *)(v9 + 128) + 32 * v38;
      *(_OWORD *)(v37 + 8) = 0;
      *(_QWORD *)v37 = 0;
      v40 = *(_QWORD *)(v39 + 8);
      if ( v40 )
      {
        v41 = *(_QWORD *)(v39 + 8);
        v47 = v38;
        v45.m128i_i64[0] = v39;
        v42 = (void *)qalloc_or_throw(v41, (__int64)v6, v36, v39);
        v43 = (const void **)v45.m128i_i64[0];
        *(_QWORD *)v37 = v42;
        *(_QWORD *)(v37 + 16) = v40;
        v6 = *v43;
        memcpy(v42, *v43, v40);
        *(_QWORD *)(v37 + 8) = v40;
        v38 = v47;
        v39 = v45.m128i_i64[0];
      }
      ++v38;
      v37 += 32;
      *(_BYTE *)(v37 - 8) = *(_BYTE *)(v39 + 24);
      *(_DWORD *)(v37 - 4) = *(_DWORD *)(v39 + 28);
    }
    while ( v10 != v38 );
  }
  v11 = *a2;
  v45 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  if ( v11 )
  {
    v12 = a2[1];
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = (__int64 *)(v11 + 32 * i);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15);
          v11 = *a2;
        }
      }
    }
    a2[1] = 0;
    qfree(v11);
  }
  v16 = _mm_load_si128(&v45);
  v9 = v48[0];
  *a2 = v46;
  *(__m128i *)(a2 + 1) = v16;
  v17 = *(_DWORD *)(v9 + 152) >= 0;
LABEL_13:
  if ( v9 )
  {
    v4 = (*(_DWORD *)(v9 + 104))-- == 1;
    if ( v4 )
    {
      sub_258970((__int64 *)v9);
      v18 = *(_QWORD *)(v9 + 184);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v9 + 192);
        if ( v19 )
        {
          for ( j = 0; j != v19; ++j )
          {
            v21 = (__int64 *)(v18 + 24 * j);
            v22 = *v21;
            if ( *v21 )
            {
              v21[1] = 0;
              qfree(v22);
              v18 = *(_QWORD *)(v9 + 184);
            }
          }
        }
        *(_QWORD *)(v9 + 192) = 0;
        qfree(v18);
      }
      v23 = *(_QWORD *)(v9 + 160);
      if ( v23 )
      {
        *(_QWORD *)(v9 + 168) = 0;
        qfree(v23);
      }
      v24 = *(_QWORD *)(v9 + 128);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v9 + 136);
        if ( v25 )
        {
          for ( k = 0; k != v25; ++k )
          {
            v27 = (__int64 *)(v24 + 32 * k);
            v28 = *v27;
            if ( *v27 )
            {
              v27[1] = 0;
              qfree(v28);
              v24 = *(_QWORD *)(v9 + 128);
            }
          }
        }
        *(_QWORD *)(v9 + 136) = 0;
        qfree(v24);
      }
      sub_255050(v9 + 16);
      j__qfree(v9);
    }
  }
  return v17;
}
