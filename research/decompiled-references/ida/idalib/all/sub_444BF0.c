unsigned __int64 __fastcall sub_444BF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        const __m128i *a5,
        double a6,
        double a7,
        __m128 a8)
{
  unsigned __int64 v12; // rdx
  char *v13; // rax
  __m128 v14; // xmm5
  pthread_rwlock_t *v15; // r15
  __int64 align; // rsi
  int v17; // ecx
  __int64 v18; // rax
  size_t v19; // r15
  __int64 v20; // rax
  char *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm0
  __m128 v25; // xmm0
  unsigned __int64 v26; // xmm5_8
  __int64 v27; // rbx
  __int64 v28; // r12
  size_t v29; // r15
  __int64 v30; // rax
  volatile signed __int32 *v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  __int64 v35; // r12
  __int64 search_utils; // r10
  __m128 v37; // xmm0
  void (__fastcall *v38)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *); // rax
  __int64 v39; // rax
  __m128 v40; // xmm4
  __m128i v41; // xmm3
  __int64 v42; // rax
  char *v43; // rdi
  __int64 v44; // r10
  __m128 v45; // xmm0
  __int64 v46; // rdx
  unsigned __int64 v47; // xmm4_8
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rdx
  signed __int32 v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rax
  char *v54; // rdi
  char *v55; // rdi
  int v57; // eax
  void *v58; // rax
  char *v59; // rsi
  void *v60; // rax
  void *v61; // rsi
  __int64 v62; // rax
  int v63; // edx
  int v64; // edx
  int v65; // edx
  void (__fastcall *v67)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *); // [rsp+8h] [rbp-150h]
  _QWORD *v68; // [rsp+10h] [rbp-148h]
  __int64 v69; // [rsp+18h] [rbp-140h]
  __m128i v70; // [rsp+20h] [rbp-138h] BYREF
  volatile signed __int32 *v71; // [rsp+30h] [rbp-128h]
  pthread_rwlock_t *rwlock; // [rsp+38h] [rbp-120h]
  volatile signed __int32 *v73; // [rsp+40h] [rbp-118h] BYREF
  __int64 v74; // [rsp+48h] [rbp-110h] BYREF
  __m128 v75; // [rsp+50h] [rbp-108h] BYREF
  __m128 v76; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v77[2]; // [rsp+70h] [rbp-E8h]
  __int128 v78; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v79; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v81; // [rsp+A8h] [rbp-B0h]
  __int64 v82; // [rsp+B8h] [rbp-A0h]
  int v83; // [rsp+C0h] [rbp-98h]
  void *src; // [rsp+C8h] [rbp-90h]
  size_t n[2]; // [rsp+D0h] [rbp-88h]
  volatile signed __int32 *v86; // [rsp+E0h] [rbp-78h]
  __m128i v87; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v88; // [rsp+F8h] [rbp-60h]
  __m128i v89; // [rsp+108h] [rbp-50h] BYREF
  unsigned __int64 v90; // [rsp+118h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  sub_4401F0(a1);
  v12 = *(_QWORD *)(a2 + 8);
  v73 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v13 = (char *)haystack;
  if ( v12 )
  {
    v13 = *(char **)a2;
    --v12;
  }
  sub_43BD80((std::string *)&v73, v12, v13);
  v15 = *(pthread_rwlock_t **)(a1 + 8);
  rwlock = v15;
  if ( &_pthread_key_create )
  {
    do
      v57 = pthread_rwlock_rdlock(v15);
    while ( v57 == 11 );
    if ( v57 == 35 )
      std::__throw_system_error(35);
    v15 = *(pthread_rwlock_t **)(a1 + 8);
  }
  align = v15[1].__align;
  v80 = a1;
  *(_QWORD *)&v81 = v15;
  v17 = *(_DWORD *)(a3 + 8);
  v18 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v81 + 1) = v18;
  if ( v18 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
    else
      ++*(_DWORD *)(v18 + 8);
  }
  v19 = *(_QWORD *)(a2 + 8);
  v82 = align;
  v83 = v17;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v19 )
  {
    v58 = (void *)qalloc_or_throw(v19);
    v59 = *(char **)a2;
    src = v58;
    n[1] = v19;
    memcpy(v58, v59, v19);
    n[0] = v19;
  }
  v20 = (__int64)v73;
  v21 = (char *)(v73 - 6);
  if ( *((int *)v73 - 2) < 0 )
  {
    v20 = std::string::_Rep::_M_clone(v21, &v76, 0);
  }
  else if ( v21 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v73 - 2, 1u);
    else
      ++*((_DWORD *)v73 - 2);
  }
  v86 = (volatile signed __int32 *)v20;
  v22 = a4[1].m128i_i64[1];
  *(_QWORD *)&v88 = 0;
  *((_QWORD *)&v88 + 1) = v22;
  v23 = a4[1].m128i_i64[0];
  v87 = 0;
  if ( v23 )
  {
    v24 = _mm_loadu_si128(a4);
    *(_QWORD *)&v88 = v23;
    v87 = v24;
    a4[1] = 0;
  }
  v25 = (__m128)_mm_loadu_si128(a5);
  v26 = _mm_movehl_ps(v14, v25).m128_u64[0];
  v89 = (__m128i)v25;
  if ( v26 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
    else
      ++*(_DWORD *)(v26 + 8);
  }
  v77[0] = a1 + 248;
  v77[1] = a1 + 464;
  v27 = operator new(0x58u);
  v71 = (volatile signed __int32 *)(v27 + 8);
  v79.m128i_i64[0] = 0;
  *(_QWORD *)(v27 + 8) = 0x100000001LL;
  *(_QWORD *)v27 = off_2B28958;
  v68 = (_QWORD *)(v27 + 16);
  v79.m128i_i64[1] = 0;
  v78 = 0;
  v28 = operator new(0x78u);
  v29 = n[0];
  *(__m128i *)v28 = _mm_load_si128((const __m128i *)&v80);
  v30 = *((_QWORD *)&v81 + 1);
  *(_QWORD *)(v28 + 40) = 0;
  *(_QWORD *)(v28 + 16) = v30;
  v81 = 0;
  *(_QWORD *)(v28 + 24) = v82;
  LODWORD(v30) = v83;
  *(_OWORD *)(v28 + 48) = 0;
  *(_DWORD *)(v28 + 32) = v30;
  if ( v29 )
  {
    v60 = (void *)qalloc_or_throw(v29);
    *(_QWORD *)(v28 + 40) = v60;
    v61 = src;
    *(_QWORD *)(v28 + 56) = v29;
    memcpy(v60, v61, v29);
    *(_QWORD *)(v28 + 48) = v29;
  }
  v31 = v86;
  *(_QWORD *)(v28 + 88) = 0;
  *(_OWORD *)(v28 + 72) = 0;
  *(_QWORD *)(v28 + 64) = v31;
  v86 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  *(_QWORD *)(v28 + 96) = *((_QWORD *)&v88 + 1);
  if ( (_QWORD)v88 )
  {
    v32 = _mm_loadu_si128(&v87);
    *(_QWORD *)(v28 + 88) = v88;
    *(__m128i *)(v28 + 72) = v32;
    v88 = 0;
  }
  v33 = _mm_loadu_si128(&v89);
  *(_QWORD *)(v27 + 32) = 0;
  *(_QWORD *)(v27 + 40) = 0;
  *(__m128i *)(v28 + 104) = v33;
  v89 = 0;
  *(_QWORD *)&v78 = v28;
  v79 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B28998), (__m128i)(unsigned __int64)sub_441810);
  *(_OWORD *)(v27 + 16) = 0;
  sub_43D4C0(v68, &v78, 2);
  *(_BYTE *)(v27 + 56) = 0;
  v34 = _mm_load_si128(&v79);
  *(_QWORD *)(v27 + 48) = 2;
  *(_QWORD *)(v27 + 80) = 0;
  *(__m128i *)(v27 + 32) = v34;
  *(_OWORD *)(v27 + 64) = 0;
  sub_444A40((__m128i **)(v27 + 64), 2u);
  if ( v79.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v79.m128i_i64[0])(&v78, &v78, 3);
  v35 = 0;
  v70 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B289A0), (__m128i)(unsigned __int64)sub_441F00);
  do
  {
    if ( v27 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v71, 1u);
      else
        ++*(_DWORD *)(v27 + 8);
    }
    search_utils = get_search_utils();
    v37 = (__m128)_mm_loadu_si128(a5);
    v38 = *(void (__fastcall **)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *))(*(_QWORD *)search_utils
                                                                                             + 24LL);
    a8 = _mm_movehl_ps(a8, v37);
    v76 = v37;
    v67 = v38;
    if ( a8.m128_u64[0] )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(a8.m128_u64[0] + 8), 1u);
      else
        ++*(_DWORD *)(a8.m128_u64[0] + 8);
    }
    v69 = search_utils;
    v79 = 0u;
    v78 = 0;
    v39 = operator new(0x18u);
    *(_QWORD *)(v39 + 8) = v27;
    *(_DWORD *)(v39 + 16) = v35;
    v41 = _mm_load_si128(&v70);
    *(_QWORD *)v39 = v68;
    *(_QWORD *)&v78 = v39;
    v42 = (__int64)v73;
    v79 = v41;
    v43 = (char *)(v73 - 6);
    v44 = v69;
    if ( *((int *)v73 - 2) < 0 )
    {
      v42 = std::string::_Rep::_M_clone(v43, &v75, 0);
      v44 = v69;
    }
    else if ( v43 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v73 - 2, 1u);
      else
        ++*((_DWORD *)v73 - 2);
    }
    v45 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 8));
    v46 = v77[v35];
    v74 = v42;
    v47 = _mm_movehl_ps(v40, v45).m128_u64[0];
    v75 = v45;
    if ( v47 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v47 + 8), 1u);
      else
        ++*(_DWORD *)(v47 + 8);
    }
    v67(v44, &v75, v46, &v74, &v78, &v76);
    v48 = (volatile signed __int32 *)v75.m128_u64[1];
    if ( v75.m128_u64[1] )
    {
      v49 = (volatile signed __int32 *)(v75.m128_u64[1] + 8);
      if ( *(_QWORD *)(v75.m128_u64[1] + 8) == 0x100000001LL )
      {
        v62 = *(_QWORD *)v75.m128_u64[1];
        *(_QWORD *)(v75.m128_u64[1] + 8) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __m128 *, volatile signed __int32 *))(v62 + 16))(
          v48,
          &v75,
          v49);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 24LL))(v48);
        v51 = v74;
        v52 = v74 - 24;
        if ( (_UNKNOWN *)(v74 - 24) == &std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_41;
        goto LABEL_73;
      }
      if ( &_pthread_key_create )
      {
        v50 = _InterlockedExchangeAdd(v49, 0xFFFFFFFF);
      }
      else
      {
        v50 = *(_DWORD *)(v75.m128_u64[1] + 8);
        *(_DWORD *)(v75.m128_u64[1] + 8) = v50 - 1;
      }
      if ( v50 == 1 )
        sub_434350(v48);
    }
    v51 = v74;
    v52 = v74 - 24;
    if ( (_UNKNOWN *)(v74 - 24) == &std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_41;
LABEL_73:
    if ( &_pthread_key_create )
    {
      v63 = _InterlockedExchangeAdd((volatile signed __int32 *)(v51 - 8), 0xFFFFFFFF);
    }
    else
    {
      v63 = *(_DWORD *)(v51 - 8);
      *(_DWORD *)(v51 - 8) = v63 - 1;
    }
    if ( v63 <= 0 )
      std::string::_Rep::_M_destroy(v52, &v75);
LABEL_41:
    if ( v79.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v79.m128i_i64[0])(&v78, &v78, 3);
    if ( v76.m128_u64[1] )
      sub_4343A0((volatile signed __int32 *)v76.m128_u64[1]);
    v53 = v35 + 1;
    v35 = 1;
  }
  while ( v53 != 2 );
  if ( v27 )
    sub_4343A0((volatile signed __int32 *)v27);
  if ( v89.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v89.m128i_i64[1]);
  if ( (_QWORD)v88 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v88)(&v87, &v87, 3);
  v54 = (char *)(v86 - 6);
  if ( v86 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v65 = _InterlockedExchangeAdd(v86 - 2, 0xFFFFFFFF);
    }
    else
    {
      v65 = *((_DWORD *)v86 - 2);
      *((_DWORD *)v86 - 2) = v65 - 1;
    }
    if ( v65 <= 0 )
      std::string::_Rep::_M_destroy(v54, &v76);
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( *((_QWORD *)&v81 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v81 + 1));
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  v55 = (char *)(v73 - 6);
  if ( v73 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v64 = _InterlockedExchangeAdd(v73 - 2, 0xFFFFFFFF);
    }
    else
    {
      v64 = *((_DWORD *)v73 - 2);
      *((_DWORD *)v73 - 2) = v64 - 1;
    }
    if ( v64 <= 0 )
      std::string::_Rep::_M_destroy(v55, &v76);
  }
  return v90 - __readfsqword(0x28u);
}
