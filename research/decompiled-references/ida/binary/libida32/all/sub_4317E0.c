unsigned __int64 __fastcall sub_4317E0(
        double a1,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i *a7,
        const __m128i *a8)
{
  unsigned __int64 v11; // rdx
  char *v12; // rax
  const char *v13; // rsi
  __int64 v14; // r14
  __m128 v15; // xmm4
  pthread_rwlock_t *v16; // rbx
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 align; // rcx
  int v20; // r15d
  __m128i v21; // xmm0
  __m128 v22; // xmm0
  unsigned __int64 v23; // xmm4_8
  size_t v24; // r12
  __int64 v25; // r12
  __int64 *v26; // r15
  __int64 v27; // rax
  __int64 v28; // r13
  __m128i v29; // xmm0
  size_t v30; // r14
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  unsigned int v36; // r13d
  __m128 v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm3
  __int64 v40; // rax
  __int64 *v41; // rsi
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdx
  signed __int32 v44; // eax
  unsigned int v45; // eax
  signed __int32 v46; // eax
  volatile signed __int32 *v47; // r12
  volatile signed __int32 *v48; // rdx
  signed __int32 v49; // eax
  volatile signed __int32 *v50; // r12
  volatile signed __int32 *v51; // rdx
  signed __int32 v52; // eax
  int v54; // eax
  void *v55; // rax
  void *v56; // rax
  void *v57; // rsi
  __int64 v58; // rax
  int v59; // edx
  int v60; // edx
  __int64 v61; // [rsp+8h] [rbp-140h]
  __m128i v62; // [rsp+10h] [rbp-138h] BYREF
  const __m128i *v63; // [rsp+20h] [rbp-128h]
  __m128 *v64; // [rsp+28h] [rbp-120h]
  volatile signed __int32 *v65; // [rsp+30h] [rbp-118h]
  unsigned __int64 v66; // [rsp+38h] [rbp-110h]
  char v67; // [rsp+4Fh] [rbp-F9h] BYREF
  volatile signed __int32 *v68; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v69; // [rsp+58h] [rbp-F0h] BYREF
  __m128 v70; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v71; // [rsp+70h] [rbp-D8h] BYREF
  __m128i v72; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v73; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v74; // [rsp+A0h] [rbp-A8h]
  __m128i v75; // [rsp+B0h] [rbp-98h] BYREF
  void *src; // [rsp+C0h] [rbp-88h]
  size_t n[2]; // [rsp+C8h] [rbp-80h]
  __m128i v78; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-60h]
  __int64 v80; // [rsp+F0h] [rbp-58h]
  int v81; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v82; // [rsp+108h] [rbp-40h]

  v11 = *(_QWORD *)(a5 + 8);
  v63 = a8;
  v82 = __readfsqword(0x28u);
  v68 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v12 = (char *)haystack;
  if ( v11 )
  {
    v12 = *(char **)a5;
    --v11;
  }
  v13 = (const char *)v11;
  sub_427E80((std::string *)&v68, v11, v12);
  v14 = *(_QWORD *)(qword_2CA1698 + 1536);
  v61 = v14;
  sub_4C92F0(v14);
  sub_4C7B30(*(_QWORD *)(qword_2CA1698 + 1536));
  v16 = *(pthread_rwlock_t **)v14;
  v17 = *(_QWORD *)(v14 + 8);
  if ( v17 )
  {
    if ( !&_pthread_key_create )
    {
      ++*(_DWORD *)(v17 + 8);
      goto LABEL_7;
    }
    _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
  }
  if ( &_pthread_key_create )
  {
    do
      v54 = pthread_rwlock_rdlock(v16);
    while ( v54 == 11 );
    if ( v54 == 35 )
      std::__throw_system_error(35);
  }
LABEL_7:
  v18 = a7[1].m128i_i64[1];
  align = v16[1].__align;
  *(_QWORD *)&v74 = 0;
  v20 = *(_DWORD *)(a6 + 8);
  v73 = 0;
  *((_QWORD *)&v74 + 1) = v18;
  if ( a7[1].m128i_i64[0] )
  {
    v21 = _mm_loadu_si128(a7);
    *(_QWORD *)&v74 = a7[1].m128i_i64[0];
    v73 = v21;
    a7[1] = 0;
  }
  v22 = (__m128)_mm_loadu_si128(v63);
  v23 = _mm_movehl_ps(v15, v22).m128_u64[0];
  v75 = (__m128i)v22;
  if ( v23 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
    else
      ++*(_DWORD *)(v23 + 8);
  }
  v24 = *(_QWORD *)(a5 + 8);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v24 )
  {
    v62.m128i_i64[0] = align;
    v55 = (void *)qalloc_or_throw(v24, v13);
    v13 = *(const char **)a5;
    src = v55;
    n[1] = v24;
    memcpy(v55, v13, v24);
    n[0] = v24;
    align = v62.m128i_i64[0];
  }
  v80 = align;
  v79 = v61;
  v81 = v20;
  v78 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)v17);
  v25 = operator new(0x58u);
  v65 = (volatile signed __int32 *)(v25 + 8);
  v26 = (__int64 *)(v25 + 16);
  v72.m128i_i64[0] = 0;
  *(_QWORD *)(v25 + 8) = 0x100000001LL;
  *(_QWORD *)v25 = off_2AFE998;
  v72.m128i_i64[1] = 0;
  v71 = 0;
  v27 = operator new(0x70u);
  *(_QWORD *)(v27 + 16) = 0;
  v28 = v27;
  *(_OWORD *)v27 = 0;
  *(_QWORD *)(v27 + 24) = *((_QWORD *)&v74 + 1);
  if ( (_QWORD)v74 )
  {
    v29 = _mm_load_si128(&v73);
    *(_QWORD *)(v27 + 16) = v74;
    *(__m128i *)v27 = v29;
    v74 = 0;
  }
  v30 = n[0];
  *(_QWORD *)(v27 + 48) = 0;
  *(__m128i *)(v27 + 32) = _mm_load_si128(&v75);
  v75 = 0;
  *(_OWORD *)(v27 + 56) = 0;
  if ( v30 )
  {
    v56 = (void *)qalloc_or_throw(v30, v13);
    *(_QWORD *)(v28 + 48) = v56;
    v57 = src;
    *(_QWORD *)(v28 + 64) = v30;
    memcpy(v56, v57, v30);
    *(_QWORD *)(v28 + 56) = v30;
  }
  v31 = v79;
  v32 = _mm_loadu_si128(&v78);
  *(_QWORD *)(v25 + 32) = 0;
  *(_QWORD *)&v71 = v28;
  *(_QWORD *)(v28 + 88) = v31;
  v33 = v80;
  *(__m128i *)(v28 + 72) = v32;
  *(_QWORD *)(v28 + 96) = v33;
  v78 = 0;
  v34 = _mm_loadl_epi64((const __m128i *)off_2AFE9E8);
  *(_DWORD *)(v28 + 104) = v81;
  *(_QWORD *)(v25 + 40) = 0;
  v72 = _mm_unpacklo_epi64(v34, (__m128i)(unsigned __int64)sub_42D350);
  *(_OWORD *)(v25 + 16) = 0;
  sub_4293E0(v26, (const char *)&v71, 2);
  *(_BYTE *)(v25 + 56) = 0;
  v35 = _mm_load_si128(&v72);
  *(_QWORD *)(v25 + 48) = 2;
  *(_QWORD *)(v25 + 80) = 0;
  *(__m128i *)(v25 + 32) = v35;
  *(_OWORD *)(v25 + 64) = 0;
  sub_430C60((__int64 *)(v25 + 64), 2u);
  if ( v72.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v72.m128i_i64[0])(&v71, &v71, 3);
  v36 = 0;
  v62 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2AFE9F0), (__m128i)(unsigned __int64)sub_42E3A0);
  do
  {
    if ( v25 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v65, 1u);
      else
        ++*(_DWORD *)(v25 + 8);
    }
    v37 = (__m128)_mm_loadu_si128(v63);
    a3 = _mm_movehl_ps(a3, v37);
    v70 = v37;
    if ( a3.m128_u64[0] )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(a3.m128_u64[0] + 8), 1u);
      else
        ++*(_DWORD *)(a3.m128_u64[0] + 8);
    }
    v72 = 0u;
    v71 = 0;
    v38 = operator new(0x18u);
    *(_QWORD *)v38 = v26;
    v39 = _mm_load_si128(&v62);
    *(_QWORD *)(v38 + 8) = v25;
    *(_DWORD *)(v38 + 16) = v36;
    *(_QWORD *)&v71 = v38;
    v40 = (__int64)v68;
    v72 = v39;
    if ( *((int *)v68 - 2) < 0 )
    {
      v40 = std::string::_Rep::_M_clone();
    }
    else if ( v68 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v68 - 2, 1u);
      else
        ++*((_DWORD *)v68 - 2);
    }
    v69 = v40;
    v41 = &v69;
    v64 = &v70;
    sub_4C7370(v61, &v69, 1, v36, &v71, &v70);
    if ( (_UNKNOWN *)(v69 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v59 = _InterlockedExchangeAdd((volatile signed __int32 *)(v69 - 8), 0xFFFFFFFF);
      }
      else
      {
        v59 = *(_DWORD *)(v69 - 8);
        *(_DWORD *)(v69 - 8) = v59 - 1;
      }
      if ( v59 <= 0 )
      {
        v41 = (__int64 *)&v67;
        std::string::_Rep::_M_destroy();
      }
    }
    if ( v72.m128i_i64[0] )
    {
      v41 = (__int64 *)&v71;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v72.m128i_i64[0])(&v71, &v71, 3);
    }
    v42 = (volatile signed __int32 *)v70.m128_u64[1];
    if ( v70.m128_u64[1] )
    {
      v43 = (volatile signed __int32 *)(v70.m128_u64[1] + 8);
      if ( *(_QWORD *)(v70.m128_u64[1] + 8) == 0x100000001LL )
      {
        v58 = *(_QWORD *)v70.m128_u64[1];
        v66 = v70.m128_u64[1];
        *(_QWORD *)(v70.m128_u64[1] + 8) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64 *, volatile signed __int32 *))(v58 + 16))(
          v42,
          v41,
          v43);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v66 + 24LL))(v66);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v44 = _InterlockedExchangeAdd(v43, 0xFFFFFFFF);
        }
        else
        {
          v44 = *(_DWORD *)(v70.m128_u64[1] + 8);
          *(_DWORD *)(v70.m128_u64[1] + 8) = v44 - 1;
        }
        if ( v44 == 1 )
          sub_420480(v42);
      }
    }
    v45 = v36 + 1;
    v36 = 1;
  }
  while ( v45 != 2 );
  if ( v25 )
  {
    if ( *(_QWORD *)(v25 + 8) == 0x100000001LL )
    {
      *(_QWORD *)(v25 + 8) = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v46 = _InterlockedExchangeAdd(v65, 0xFFFFFFFF);
      }
      else
      {
        v46 = *(_DWORD *)(v25 + 8);
        *(_DWORD *)(v25 + 8) = v46 - 1;
      }
      if ( v46 == 1 )
        sub_420480((volatile signed __int32 *)v25);
    }
  }
  v47 = (volatile signed __int32 *)v78.m128i_i64[1];
  if ( v78.m128i_i64[1] )
  {
    v48 = (volatile signed __int32 *)(v78.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v78.m128i_i64[1] + 8) == 0x100000001LL )
    {
      *(_QWORD *)(v78.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64 *, volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(
        v47,
        v41,
        v48);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 24LL))(v47);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v49 = _InterlockedExchangeAdd(v48, 0xFFFFFFFF);
      }
      else
      {
        v49 = *(_DWORD *)(v78.m128i_i64[1] + 8);
        *(_DWORD *)(v78.m128i_i64[1] + 8) = v49 - 1;
      }
      if ( v49 == 1 )
        sub_420480(v47);
    }
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  v50 = (volatile signed __int32 *)v75.m128i_i64[1];
  if ( v75.m128i_i64[1] )
  {
    v51 = (volatile signed __int32 *)(v75.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v75.m128i_i64[1] + 8) == 0x100000001LL )
    {
      *(_QWORD *)(v75.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64 *, volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(
        v50,
        v41,
        v51);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 24LL))(v50);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v52 = _InterlockedExchangeAdd(v51, 0xFFFFFFFF);
      }
      else
      {
        v52 = *(_DWORD *)(v75.m128i_i64[1] + 8);
        *(_DWORD *)(v75.m128i_i64[1] + 8) = v52 - 1;
      }
      if ( v52 == 1 )
        sub_420480(v50);
    }
  }
  if ( (_QWORD)v74 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v74)(&v73, &v73, 3);
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(v16);
  if ( v68 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v60 = _InterlockedExchangeAdd(v68 - 2, 0xFFFFFFFF);
    }
    else
    {
      v60 = *((_DWORD *)v68 - 2);
      *((_DWORD *)v68 - 2) = v60 - 1;
    }
    if ( v60 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return v82 - __readfsqword(0x28u);
}

