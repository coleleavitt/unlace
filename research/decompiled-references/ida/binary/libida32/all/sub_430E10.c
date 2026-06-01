unsigned __int64 __fastcall sub_430E10(
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
  const char *align; // rsi
  int v17; // ecx
  __int64 v18; // rax
  size_t v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm0
  __m128 v24; // xmm0
  unsigned __int64 v25; // xmm5_8
  __int64 v26; // rbx
  __int64 v27; // r13
  size_t v28; // r15
  __int64 v29; // rax
  volatile signed __int32 *v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  __int64 v34; // r13
  __int64 search_utils; // r10
  __m128 v36; // xmm0
  void (__fastcall *v37)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *); // rax
  __int64 v38; // rax
  __m128 v39; // xmm4
  __m128i v40; // xmm3
  __int64 v41; // rax
  __int64 v42; // r10
  __m128 v43; // xmm0
  __int64 v44; // rdx
  unsigned __int64 v45; // xmm4_8
  __m128 *v46; // rsi
  volatile signed __int32 *v47; // rdi
  volatile signed __int32 *v48; // rdx
  signed __int32 v49; // eax
  volatile signed __int32 *v50; // rdi
  volatile signed __int32 *v51; // rdx
  signed __int32 v52; // eax
  __int64 v53; // rax
  signed __int32 v54; // eax
  int v56; // eax
  void *v57; // rax
  void *v58; // rax
  void *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // edx
  __int64 v63; // rax
  int v64; // edx
  int v65; // edx
  void (__fastcall *v67)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *); // [rsp+8h] [rbp-150h]
  unsigned __int64 v68; // [rsp+8h] [rbp-150h]
  unsigned __int64 v69; // [rsp+8h] [rbp-150h]
  __int64 *v70; // [rsp+10h] [rbp-148h]
  __int64 v71; // [rsp+18h] [rbp-140h]
  __m128i v72; // [rsp+20h] [rbp-138h] BYREF
  volatile signed __int32 *v73; // [rsp+30h] [rbp-128h]
  pthread_rwlock_t *rwlock; // [rsp+38h] [rbp-120h]
  volatile signed __int32 *v75; // [rsp+40h] [rbp-118h] BYREF
  __int64 v76; // [rsp+48h] [rbp-110h] BYREF
  __m128 v77; // [rsp+50h] [rbp-108h] BYREF
  __m128 v78; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v79[2]; // [rsp+70h] [rbp-E8h]
  __int128 v80; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v81; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v83; // [rsp+A8h] [rbp-B0h]
  const char *v84; // [rsp+B8h] [rbp-A0h]
  int v85; // [rsp+C0h] [rbp-98h]
  void *src; // [rsp+C8h] [rbp-90h]
  size_t n[2]; // [rsp+D0h] [rbp-88h]
  volatile signed __int32 *v88; // [rsp+E0h] [rbp-78h]
  __m128i v89; // [rsp+E8h] [rbp-70h] BYREF
  __int128 v90; // [rsp+F8h] [rbp-60h]
  __m128i v91; // [rsp+108h] [rbp-50h] BYREF
  unsigned __int64 v92; // [rsp+118h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  sub_42C450(a1);
  v12 = *(_QWORD *)(a2 + 8);
  v75 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v13 = (char *)haystack;
  if ( v12 )
  {
    v13 = *(char **)a2;
    --v12;
  }
  sub_427E80((std::string *)&v75, v12, v13);
  v15 = *(pthread_rwlock_t **)(a1 + 8);
  rwlock = v15;
  if ( &_pthread_key_create )
  {
    do
      v56 = pthread_rwlock_rdlock(v15);
    while ( v56 == 11 );
    if ( v56 == 35 )
      std::__throw_system_error(35);
    v15 = *(pthread_rwlock_t **)(a1 + 8);
  }
  align = (const char *)v15[1].__align;
  v82 = a1;
  *(_QWORD *)&v83 = v15;
  v17 = *(_DWORD *)(a3 + 8);
  v18 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v83 + 1) = v18;
  if ( v18 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
    else
      ++*(_DWORD *)(v18 + 8);
  }
  v19 = *(_QWORD *)(a2 + 8);
  v84 = align;
  v85 = v17;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v19 )
  {
    v57 = (void *)qalloc_or_throw(v19, align);
    align = *(const char **)a2;
    src = v57;
    n[1] = v19;
    memcpy(v57, align, v19);
    n[0] = v19;
  }
  v20 = (__int64)v75;
  if ( *((int *)v75 - 2) < 0 )
  {
    align = (const char *)&v78;
    v20 = std::string::_Rep::_M_clone();
  }
  else if ( v75 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v75 - 2, 1u);
    else
      ++*((_DWORD *)v75 - 2);
  }
  v88 = (volatile signed __int32 *)v20;
  v21 = a4[1].m128i_i64[1];
  *(_QWORD *)&v90 = 0;
  *((_QWORD *)&v90 + 1) = v21;
  v22 = a4[1].m128i_i64[0];
  v89 = 0;
  if ( v22 )
  {
    v23 = _mm_loadu_si128(a4);
    *(_QWORD *)&v90 = v22;
    v89 = v23;
    a4[1] = 0;
  }
  v24 = (__m128)_mm_loadu_si128(a5);
  v25 = _mm_movehl_ps(v14, v24).m128_u64[0];
  v91 = (__m128i)v24;
  if ( v25 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
    else
      ++*(_DWORD *)(v25 + 8);
  }
  v79[0] = a1 + 248;
  v79[1] = a1 + 464;
  v26 = operator new(0x58u);
  v73 = (volatile signed __int32 *)(v26 + 8);
  v81.m128i_i64[0] = 0;
  *(_QWORD *)(v26 + 8) = 0x100000001LL;
  *(_QWORD *)v26 = off_2AFE998;
  v70 = (__int64 *)(v26 + 16);
  v81.m128i_i64[1] = 0;
  v80 = 0;
  v27 = operator new(0x78u);
  v28 = n[0];
  *(__m128i *)v27 = _mm_load_si128((const __m128i *)&v82);
  v29 = *((_QWORD *)&v83 + 1);
  *(_QWORD *)(v27 + 40) = 0;
  *(_QWORD *)(v27 + 16) = v29;
  v83 = 0;
  *(_QWORD *)(v27 + 24) = v84;
  LODWORD(v29) = v85;
  *(_OWORD *)(v27 + 48) = 0;
  *(_DWORD *)(v27 + 32) = v29;
  if ( v28 )
  {
    v58 = (void *)qalloc_or_throw(v28, align);
    *(_QWORD *)(v27 + 40) = v58;
    v59 = src;
    *(_QWORD *)(v27 + 56) = v28;
    memcpy(v58, v59, v28);
    *(_QWORD *)(v27 + 48) = v28;
  }
  v30 = v88;
  *(_QWORD *)(v27 + 88) = 0;
  *(_OWORD *)(v27 + 72) = 0;
  *(_QWORD *)(v27 + 64) = v30;
  v88 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  *(_QWORD *)(v27 + 96) = *((_QWORD *)&v90 + 1);
  if ( (_QWORD)v90 )
  {
    v31 = _mm_loadu_si128(&v89);
    *(_QWORD *)(v27 + 88) = v90;
    *(__m128i *)(v27 + 72) = v31;
    v90 = 0;
  }
  v32 = _mm_loadu_si128(&v91);
  *(_QWORD *)(v26 + 32) = 0;
  *(_QWORD *)(v26 + 40) = 0;
  *(__m128i *)(v27 + 104) = v32;
  v91 = 0;
  *(_QWORD *)&v80 = v27;
  v81 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2AFE9D8), (__m128i)(unsigned __int64)sub_42DA70);
  *(_OWORD *)(v26 + 16) = 0;
  sub_4295C0(v70, (const char *)&v80, 2);
  *(_BYTE *)(v26 + 56) = 0;
  v33 = _mm_load_si128(&v81);
  *(_QWORD *)(v26 + 48) = 2;
  *(_QWORD *)(v26 + 80) = 0;
  *(__m128i *)(v26 + 32) = v33;
  *(_OWORD *)(v26 + 64) = 0;
  sub_430C60((__int64 *)(v26 + 64), 2u);
  if ( v81.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v81.m128i_i64[0])(&v80, &v80, 3);
  v34 = 0;
  v72 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2AFE9E0), (__m128i)(unsigned __int64)sub_42E160);
  do
  {
    if ( v26 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v73, 1u);
      else
        ++*(_DWORD *)(v26 + 8);
    }
    search_utils = get_search_utils();
    v36 = (__m128)_mm_loadu_si128(a5);
    v37 = *(void (__fastcall **)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *))(*(_QWORD *)search_utils
                                                                                             + 24LL);
    a8 = _mm_movehl_ps(a8, v36);
    v78 = v36;
    v67 = v37;
    if ( a8.m128_u64[0] )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(a8.m128_u64[0] + 8), 1u);
      else
        ++*(_DWORD *)(a8.m128_u64[0] + 8);
    }
    v71 = search_utils;
    v81 = 0u;
    v80 = 0;
    v38 = operator new(0x18u);
    *(_QWORD *)(v38 + 8) = v26;
    *(_DWORD *)(v38 + 16) = v34;
    v40 = _mm_load_si128(&v72);
    *(_QWORD *)v38 = v70;
    *(_QWORD *)&v80 = v38;
    v41 = (__int64)v75;
    v81 = v40;
    v42 = v71;
    if ( *((int *)v75 - 2) < 0 )
    {
      v41 = std::string::_Rep::_M_clone();
      v42 = v71;
    }
    else if ( v75 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v75 - 2, 1u);
      else
        ++*((_DWORD *)v75 - 2);
    }
    v43 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 8));
    v44 = v79[v34];
    v76 = v41;
    v45 = _mm_movehl_ps(v39, v43).m128_u64[0];
    v77 = v43;
    if ( v45 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
      else
        ++*(_DWORD *)(v45 + 8);
    }
    v46 = &v77;
    v67(v42, &v77, v44, &v76, &v80, &v78);
    v47 = (volatile signed __int32 *)v77.m128_u64[1];
    if ( v77.m128_u64[1] )
    {
      v48 = (volatile signed __int32 *)(v77.m128_u64[1] + 8);
      if ( *(_QWORD *)(v77.m128_u64[1] + 8) == 0x100000001LL )
      {
        v60 = *(_QWORD *)v77.m128_u64[1];
        v68 = v77.m128_u64[1];
        *(_QWORD *)(v77.m128_u64[1] + 8) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __m128 *, volatile signed __int32 *))(v60 + 16))(
          v47,
          &v77,
          v48);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v68 + 24LL))(v68);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v49 = _InterlockedExchangeAdd(v48, 0xFFFFFFFF);
        }
        else
        {
          v49 = *(_DWORD *)(v77.m128_u64[1] + 8);
          *(_DWORD *)(v77.m128_u64[1] + 8) = v49 - 1;
        }
        if ( v49 == 1 )
          sub_420480(v47);
      }
    }
    if ( (_UNKNOWN *)(v76 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v62 = _InterlockedExchangeAdd((volatile signed __int32 *)(v76 - 8), 0xFFFFFFFF);
      }
      else
      {
        v62 = *(_DWORD *)(v76 - 8);
        *(_DWORD *)(v76 - 8) = v62 - 1;
      }
      if ( v62 <= 0 )
      {
        v46 = &v77;
        std::string::_Rep::_M_destroy();
      }
    }
    if ( v81.m128i_i64[0] )
    {
      v46 = (__m128 *)&v80;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v81.m128i_i64[0])(&v80, &v80, 3);
    }
    v50 = (volatile signed __int32 *)v78.m128_u64[1];
    if ( v78.m128_u64[1] )
    {
      v51 = (volatile signed __int32 *)(v78.m128_u64[1] + 8);
      if ( *(_QWORD *)(v78.m128_u64[1] + 8) == 0x100000001LL )
      {
        v61 = *(_QWORD *)v78.m128_u64[1];
        v69 = v78.m128_u64[1];
        *(_QWORD *)(v78.m128_u64[1] + 8) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __m128 *, volatile signed __int32 *))(v61 + 16))(
          v50,
          v46,
          v51);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v69 + 24LL))(v69);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v52 = _InterlockedExchangeAdd(v51, 0xFFFFFFFF);
        }
        else
        {
          v52 = *(_DWORD *)(v78.m128_u64[1] + 8);
          *(_DWORD *)(v78.m128_u64[1] + 8) = v52 - 1;
        }
        if ( v52 == 1 )
          sub_420480(v50);
      }
    }
    v53 = v34 + 1;
    v34 = 1;
  }
  while ( v53 != 2 );
  if ( v26 )
  {
    if ( *(_QWORD *)(v26 + 8) == 0x100000001LL )
    {
      v63 = *(_QWORD *)v26;
      *(_QWORD *)(v26 + 8) = 0;
      (*(void (__fastcall **)(__int64))(v63 + 16))(v26);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v54 = _InterlockedExchangeAdd(v73, 0xFFFFFFFF);
      }
      else
      {
        v54 = *(_DWORD *)(v26 + 8);
        *(_DWORD *)(v26 + 8) = v54 - 1;
      }
      if ( v54 == 1 )
        sub_420480((volatile signed __int32 *)v26);
    }
  }
  if ( v91.m128i_i64[1] )
    sub_4204D0((volatile signed __int32 *)v91.m128i_i64[1]);
  if ( (_QWORD)v90 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v90)(&v89, &v89, 3);
  if ( v88 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v65 = _InterlockedExchangeAdd(v88 - 2, 0xFFFFFFFF);
    }
    else
    {
      v65 = *((_DWORD *)v88 - 2);
      *((_DWORD *)v88 - 2) = v65 - 1;
    }
    if ( v65 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( *((_QWORD *)&v83 + 1) )
    sub_4204D0(*((volatile signed __int32 **)&v83 + 1));
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  if ( v75 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v64 = _InterlockedExchangeAdd(v75 - 2, 0xFFFFFFFF);
    }
    else
    {
      v64 = *((_DWORD *)v75 - 2);
      *((_DWORD *)v75 - 2) = v64 - 1;
    }
    if ( v64 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return v92 - __readfsqword(0x28u);
}

