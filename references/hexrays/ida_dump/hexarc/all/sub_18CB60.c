__m128i *__fastcall sub_18CB60(_QWORD *a1, unsigned int a2, _BYTE *a3)
{
  _QWORD *exception; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __m128i *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // r15
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // r15
  __m128i *v23; // rcx
  unsigned __int64 v24; // rdx
  __m128i v25; // xmm0
  bool v26; // r10
  _BYTE *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128i v30; // xmm0
  unsigned __int8 v31; // al
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rcx
  const __m128i *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rsi
  __m128i v38; // xmm0
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __m128i v43; // xmm0
  bool v45; // [rsp+8h] [rbp-70h]
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+10h] [rbp-68h]
  __int64 v52; // [rsp+20h] [rbp-58h]
  bool v53; // [rsp+2Fh] [rbp-49h]
  __m128i v54; // [rsp+30h] [rbp-48h] BYREF

  if ( (unsigned __int64)(int)a2 >= a1[18] )
  {
    if ( !under_debugger )
      sub_37B760(51545);
LABEL_66:
    BUG();
  }
  v7 = (__m128i *)(a1[17] + 16LL * (int)a2);
  if ( !a3[8] && v7->m128i_i64[1] )
  {
    if ( !under_debugger )
      sub_37B760(51546);
    goto LABEL_66;
  }
  v8 = a1[8];
  a1[7] = 0;
  if ( v8 )
  {
    a1[9] = 0;
    qfree(v8);
    a1[8] = 0;
    a1[10] = 0;
  }
  v9 = a1[1];
  if ( a2 >= *(_DWORD *)(v9 + 64) )
    sub_18A710();
  v54.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * a2);
  v52 = *(_QWORD *)(v54.m128i_i64[0] + 48);
  if ( !v52 )
    return v7;
  while ( 2 )
  {
    v53 = sub_18BEF0((__int64)a1, (_BYTE *)v52, a3);
    if ( !v53 || !a1[12] )
      goto LABEL_9;
    v10 = 0;
    v11 = 0;
    do
    {
      v13 = sub_18BBF0((__int64)a1, *(_QWORD *)(a1[11] + 8 * v11), a3);
      v14 = v12;
      if ( !(_BYTE)v12 )
      {
        if ( !under_debugger )
          sub_37B760(51669);
        goto LABEL_66;
      }
      v15 = *(_QWORD *)(a1[11] + 8 * v11);
      if ( !v15 )
      {
        if ( !under_debugger )
          sub_37B760(51668);
        goto LABEL_66;
      }
      v16 = v7->m128i_i64[0];
      if ( !v7->m128i_i64[0] )
      {
        v50 = v12;
        v42 = qalloc(64);
        v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
        if ( !v42 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v14 = v50;
        *(_OWORD *)(v42 + 16) = 0;
        *(__m128i *)(v42 + 8) = v43;
        *(_OWORD *)(v42 + 32) = 0;
        *(_QWORD *)v42 = v42 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(_OWORD *)(v42 + 48) = 0;
        v7->m128i_i64[0] = v42;
        *(_QWORD *)v42 = v42 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v42 & 3LL;
        *(__m128i *)(v7->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v7->m128i_u64[0], (__m128i)v7->m128i_u64[0]);
        *(_QWORD *)v7->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)v7->m128i_i64[0] |= 2uLL;
        v16 = v7->m128i_i64[0];
LABEL_17:
        v48 = v14;
        v17 = qalloc(64);
        v18 = v17;
        if ( !v17 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)(v17 + 16) = 0;
        *(_QWORD *)(v17 + 32) = v48;
        *(_QWORD *)(v17 + 24) = v13;
        *(_QWORD *)(v17 + 40) = 0;
        *(_OWORD *)v17 = 0;
        *(_OWORD *)(v17 + 48) = 0;
        *(_QWORD *)v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
        v19 = _mm_loadl_epi64(v7);
        *(_QWORD *)v17 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v19, v19);
        if ( v7->m128i_i64[0] != v16 )
        {
LABEL_19:
          *(_QWORD *)(v16 + 8) = v18;
          if ( *(_QWORD *)(v7->m128i_i64[0] + 8) == v16 )
            *(_QWORD *)(v7->m128i_i64[0] + 8) = v18;
          goto LABEL_21;
        }
LABEL_50:
        *(_QWORD *)v16 = v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v16 & 3LL;
        *(_QWORD *)(v7->m128i_i64[0] + 8) = v18;
        *(_QWORD *)(v7->m128i_i64[0] + 16) = v18;
        v41 = *(_QWORD *)v18 & 2LL;
        *(_QWORD *)v18 &= ~1uLL;
        *(_QWORD *)v18 = v41 | v7->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_22;
      }
      if ( !v7->m128i_i64[1] )
        goto LABEL_17;
      v26 = v53;
      v27 = (_BYTE *)(*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (*v27 & 2) != 0 )
        goto LABEL_33;
      while ( 1 )
      {
        v16 = (unsigned __int64)v27;
        v31 = v27[32];
        if ( (unsigned __int8)v12 >= v31 )
        {
          if ( v31 < (unsigned __int8)v12 )
            goto LABEL_53;
          if ( v13 >= *(_QWORD *)(v16 + 24) )
            break;
        }
        v27 = *(_BYTE **)(v16 + 8);
        v26 = v53;
LABEL_39:
        if ( (*v27 & 2) != 0 )
          goto LABEL_33;
      }
      if ( v13 > *(_QWORD *)(v16 + 24) )
      {
LABEL_53:
        v27 = *(_BYTE **)(v16 + 16);
        v26 = 0;
        goto LABEL_39;
      }
      if ( v16 )
      {
        v18 = v16;
        goto LABEL_23;
      }
LABEL_33:
      v54.m128i_i64[1] = v12;
      v45 = v26;
      v28 = qalloc(64);
      v18 = v28;
      if ( !v28 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v29 = v54.m128i_i64[1];
      *(_OWORD *)(v28 + 16) = 0;
      *(_QWORD *)(v28 + 24) = v13;
      *(_QWORD *)(v28 + 32) = v29;
      *(_QWORD *)(v28 + 40) = 0;
      *(_OWORD *)v28 = 0;
      *(_OWORD *)(v28 + 48) = 0;
      *(_QWORD *)v28 = v16 & 0xFFFFFFFFFFFFFFFCLL;
      v30 = _mm_loadl_epi64(v7);
      *(_QWORD *)v28 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64(v30, v30);
      if ( v7->m128i_i64[0] == v16 )
        goto LABEL_50;
      if ( v45 )
        goto LABEL_19;
      *(_QWORD *)(v16 + 16) = v28;
      if ( *(_QWORD *)(v7->m128i_i64[0] + 16) == v16 )
        *(_QWORD *)(v7->m128i_i64[0] + 16) = v28;
LABEL_21:
      sub_18C780(v7, (__int64 *)v18);
LABEL_22:
      ++v7->m128i_i64[1];
LABEL_23:
      v20 = *(_QWORD *)(v18 + 48);
      v21 = *(_QWORD *)(v18 + 40);
      v22 = (_QWORD *)(v18 + 24);
      v23 = (__m128i *)(v21 + 24 * v20);
      if ( (__m128i *)v21 == v23 )
        goto LABEL_30;
      while ( v15 != *(_QWORD *)(v21 + 8) )
      {
        v21 += 24;
        if ( v23 == (__m128i *)v21 )
          goto LABEL_30;
      }
      if ( (__m128i *)v21 == v23 )
      {
LABEL_30:
        v24 = v20 + 1;
        if ( v22[4] < v24 )
        {
          v46 = v22[4];
          v32 = qvector_reserve(v22 + 2, 0, v24, 24);
          v33 = v22[3];
          v34 = v22[4];
          v35 = (const __m128i *)v22[2];
          v36 = v32;
          v22[4] = v46;
          v37 = v33 - 1;
          if ( v37 >= 0 )
          {
            do
            {
              v38 = _mm_loadu_si128(v35);
              v32 += 24;
              v35 = (const __m128i *)((char *)v35 + 24);
              *(__m128i *)(v32 - 24) = v38;
              *(_QWORD *)(v32 - 8) = v35[-1].m128i_i64[1];
            }
            while ( v37-- != 0 );
            v35 = (const __m128i *)v22[2];
          }
          v49 = v34;
          v47 = v36;
          qfree(v35);
          v40 = 3LL * v22[3];
          v22[2] = v47;
          v22[4] = v49;
          v23 = (__m128i *)(v47 + 8 * v40);
        }
        v25 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v54), (__m128i)v15);
        v23[1].m128i_i64[0] = v52;
        *v23 = v25;
        ++v22[3];
      }
      v11 = ++v10;
    }
    while ( (unsigned __int64)v10 < a1[12] );
LABEL_9:
    v52 = *(_QWORD *)(v52 + 8);
    if ( v52 )
      continue;
    return v7;
  }
}
