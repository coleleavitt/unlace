__int64 __fastcall sub_423B50(
        _QWORD *a1,
        void *a2,
        __int64 a3,
        const __m128i *a4,
        const __m128i *a5,
        double a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 v8; // r13
  int v11; // ebp
  __int64 v12; // rax
  size_t v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbp
  __m128i v17; // xmm0
  size_t v18; // r14
  int v19; // eax
  __m128i v20; // xmm0
  __int64 *v21; // rdi
  __m128i v22; // xmm0
  void (__fastcall *v23)(__int128 *, __int128 *, __int64); // rax
  _QWORD *v24; // rbp
  __int64 v25; // r12
  _QWORD *v26; // rax
  __int64 *v27; // rcx
  __m128i v28; // xmm3
  volatile signed __int32 *v29; // r14
  volatile signed __int32 *v30; // rdx
  __m128 v31; // xmm0
  __int64 v32; // r14
  int v33; // eax
  signed __int32 v34; // eax
  __int64 v36; // rax
  void *v37; // rdi
  void *v38; // rax
  void *v39; // rsi
  bool v40; // zf
  __int64 v41; // rax
  const void **v42; // [rsp+0h] [rbp-108h]
  __m128i i; // [rsp+10h] [rbp-F8h] BYREF
  __int64 *v45; // [rsp+20h] [rbp-E8h]
  volatile signed __int32 *v46; // [rsp+28h] [rbp-E0h]
  char v47; // [rsp+3Fh] [rbp-C9h] BYREF
  void *ptr[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v49; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+70h] [rbp-98h] BYREF
  __m128i v51; // [rsp+80h] [rbp-88h] BYREF
  __m128i v52; // [rsp+90h] [rbp-78h]
  void *src; // [rsp+A0h] [rbp-68h]
  size_t n[2]; // [rsp+A8h] [rbp-60h]
  int v55; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v56; // [rsp+C8h] [rbp-40h]

  v42 = (const void **)a2;
  v56 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(*(_QWORD *)(*a1 + 1480LL) + 601LL) )
  {
    if ( !byte_2CA1730 )
    {
      byte_2CA1730 = 1;
      sub_365330();
    }
    v40 = a4[1].m128i_i64[0] == 0;
    v47 = 1;
    memset(ptr, 0, 24);
    if ( v40 )
      std::__throw_bad_function_call();
    ((void (__fastcall *)(const __m128i *, char *, void **))a4[1].m128i_i64[1])(a4, &v47, ptr);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    return v56 - __readfsqword(0x28u);
  }
  v8 = a1[8];
  v52.m128i_i64[0] = 0;
  v11 = *(_DWORD *)(a3 + 8);
  v12 = a4[1].m128i_i64[1];
  v51 = 0;
  v52.m128i_i64[1] = v12;
  if ( a4[1].m128i_i64[0] )
  {
    v52.m128i_i64[0] = a4[1].m128i_i64[0];
    v51 = _mm_loadu_si128(a4);
    a4[1] = 0;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v13 = *((_QWORD *)a2 + 1);
  if ( v13 )
  {
    src = (void *)qalloc_or_throw(*((_QWORD *)a2 + 1), (const char *)a2);
    n[1] = v13;
    a2 = *(void **)a2;
    memcpy(src, *v42, v13);
    n[0] = v13;
  }
  v55 = v11;
  v14 = operator new(0x58u);
  v46 = (volatile signed __int32 *)(v14 + 8);
  v50.m128i_i64[0] = 0;
  *(_QWORD *)(v14 + 8) = 0x100000001LL;
  *(_QWORD *)v14 = off_2AFE688;
  v45 = (__int64 *)(v14 + 16);
  v50.m128i_i64[1] = 0;
  v49 = 0;
  v15 = operator new(0x40u);
  *(_QWORD *)(v15 + 16) = 0;
  v16 = v15;
  *(_OWORD *)v15 = 0;
  *(_QWORD *)(v15 + 24) = v52.m128i_i64[1];
  if ( v52.m128i_i64[0] )
  {
    v17 = _mm_load_si128(&v51);
    *(_QWORD *)(v15 + 16) = v52.m128i_i64[0];
    *(__m128i *)v15 = v17;
    v52 = 0;
  }
  v18 = n[0];
  *(_QWORD *)(v15 + 32) = 0;
  *(_OWORD *)(v15 + 40) = 0;
  if ( v18 )
  {
    v38 = (void *)qalloc_or_throw(v18, (const char *)a2);
    *(_QWORD *)(v16 + 32) = v38;
    v39 = src;
    *(_QWORD *)(v16 + 48) = v18;
    memcpy(v38, v39, v18);
    *(_QWORD *)(v16 + 40) = v18;
  }
  v19 = v55;
  *(_QWORD *)(v14 + 32) = 0;
  v20 = _mm_loadl_epi64((const __m128i *)off_2AFE6E8);
  v21 = v45;
  *(_QWORD *)&v49 = v16;
  *(_DWORD *)(v16 + 56) = v19;
  *(_QWORD *)(v14 + 40) = 0;
  v50 = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)sub_421CA0);
  *(_OWORD *)(v14 + 16) = 0;
  sub_41F680(v21, (const char *)&v49, 2);
  v22 = _mm_load_si128(&v50);
  *(_QWORD *)(v14 + 48) = v8;
  *(_BYTE *)(v14 + 56) = 0;
  *(_QWORD *)(v14 + 80) = 0;
  v23 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v22.m128i_i64[0];
  *(__m128i *)(v14 + 32) = v22;
  *(_OWORD *)(v14 + 64) = 0;
  if ( !v8 )
  {
    if ( !v22.m128i_i64[0] )
      goto LABEL_13;
    goto LABEL_12;
  }
  sub_4239A0((__int64 *)(v14 + 64), v8);
  v23 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v50.m128i_i64[0];
  if ( v50.m128i_i64[0] )
LABEL_12:
    v23(&v49, &v49, 3);
LABEL_13:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( v52.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v52.m128i_i64[0])(&v51, &v51, 3);
  v24 = (_QWORD *)a1[7];
  v25 = 0;
  for ( i = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2AFE6F0), (__m128i)(unsigned __int64)sub_421FD0);
        v24;
        ++v25 )
  {
    while ( 1 )
    {
      v31 = (__m128)_mm_loadu_si128(a5);
      v32 = v24[2];
      a8 = _mm_movehl_ps(a8, v31);
      *(__m128 *)ptr = v31;
      if ( a8.m128_u64[0] )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(a8.m128_u64[0] + 8), 1u);
        else
          ++*(_DWORD *)(a8.m128_u64[0] + 8);
      }
      if ( v14 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd(v46, 1u);
        else
          ++*(_DWORD *)(v14 + 8);
      }
      v52 = 0u;
      v51 = 0;
      v26 = (_QWORD *)operator new(0x18u);
      v26[1] = v14;
      v27 = v45;
      v28 = _mm_load_si128(&i);
      v26[2] = v25;
      v51.m128i_i64[0] = (__int64)v26;
      *v26 = v27;
      v52 = v28;
      sub_429BC0(v32, v42, a3, &v51, ptr);
      if ( v52.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v52.m128i_i64[0])(&v51, &v51, 3);
      v29 = (volatile signed __int32 *)ptr[1];
      if ( !ptr[1] )
        goto LABEL_29;
      v30 = (volatile signed __int32 *)((char *)ptr[1] + 8);
      if ( *((_QWORD *)ptr[1] + 1) == 0x100000001LL )
      {
        v36 = *(_QWORD *)ptr[1];
        v37 = ptr[1];
        *((_QWORD *)ptr[1] + 1) = 0;
        (*(void (__fastcall **)(void *, __int64, volatile signed __int32 *))(v36 + 16))(v37, 0x100000001LL, v30);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 24LL))(v29);
        goto LABEL_29;
      }
      if ( &_pthread_key_create )
        break;
      v33 = *((_DWORD *)ptr[1] + 2);
      *((_DWORD *)ptr[1] + 2) = v33 - 1;
      if ( v33 != 1 )
        goto LABEL_29;
LABEL_35:
      ++v25;
      sub_420480(v29);
      v24 = (_QWORD *)*v24;
      if ( !v24 )
        goto LABEL_36;
    }
    if ( _InterlockedExchangeAdd(v30, 0xFFFFFFFF) == 1 )
      goto LABEL_35;
LABEL_29:
    v24 = (_QWORD *)*v24;
  }
LABEL_36:
  if ( !v14 )
    return v56 - __readfsqword(0x28u);
  if ( *(_QWORD *)(v14 + 8) == 0x100000001LL )
  {
    v41 = *(_QWORD *)v14;
    *(_QWORD *)(v14 + 8) = 0;
    (*(void (__fastcall **)(__int64))(v41 + 16))(v14);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v34 = _InterlockedExchangeAdd(v46, 0xFFFFFFFF);
    }
    else
    {
      v34 = *(_DWORD *)(v14 + 8);
      *(_DWORD *)(v14 + 8) = v34 - 1;
    }
    if ( v34 != 1 )
      return v56 - __readfsqword(0x28u);
    return sub_420480((volatile signed __int32 *)v14);
  }
}

