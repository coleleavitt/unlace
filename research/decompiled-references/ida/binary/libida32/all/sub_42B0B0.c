unsigned __int64 __fastcall sub_42B0B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i *a5,
        const __m128i *a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 v11; // rdx
  char *v12; // rax
  pthread_rwlock_t *v13; // rbx
  __int64 align; // rcx
  int v15; // edx
  __int64 v16; // rax
  char *v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128 v22; // xmm0
  unsigned __int64 v23; // xmm2_8
  __int64 search_utils; // r15
  void (__fastcall *v25)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *); // rbp
  __m128 v26; // xmm0
  unsigned __int64 v27; // xmm3_8
  __int64 v28; // rax
  __m128 v29; // xmm5
  __int64 v30; // rdx
  __m128i si128; // xmm0
  __m128i v32; // xmm1
  __int64 v33; // rdx
  __int64 v34; // rdx
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  __int64 v37; // rax
  __m128 v38; // xmm0
  unsigned __int64 v39; // xmm5_8
  __m128i *v40; // rsi
  volatile signed __int32 *v41; // rbp
  volatile signed __int32 *v42; // rdx
  signed __int32 v43; // eax
  __int64 v44; // rax
  volatile signed __int32 *v45; // rbx
  volatile signed __int32 *v46; // rdx
  signed __int32 v47; // eax
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rdx
  signed __int32 v50; // eax
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rdx
  signed __int32 v53; // eax
  int v55; // eax
  __int64 v56; // rax
  unsigned __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rdi
  int v64; // edx
  int v65; // edx
  int v66; // edx
  pthread_rwlock_t *rwlock; // [rsp+18h] [rbp-120h]
  volatile signed __int32 *v71; // [rsp+20h] [rbp-118h] BYREF
  __int64 v72; // [rsp+28h] [rbp-110h] BYREF
  __m128 v73; // [rsp+30h] [rbp-108h] BYREF
  __m128 v74; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v75; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v76; // [rsp+60h] [rbp-D8h]
  __int64 v77; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v78; // [rsp+78h] [rbp-C0h]
  __int64 v79; // [rsp+88h] [rbp-B0h]
  int v80; // [rsp+90h] [rbp-A8h]
  void *ptr; // [rsp+98h] [rbp-A0h]
  __m128i v82; // [rsp+A0h] [rbp-98h] BYREF
  volatile signed __int32 *v83; // [rsp+B0h] [rbp-88h]
  __int64 v84; // [rsp+B8h] [rbp-80h]
  __m128i v85; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v86; // [rsp+D0h] [rbp-68h]
  __m128i v87; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v88; // [rsp+F8h] [rbp-40h]

  v11 = *(_QWORD *)(a2 + 8);
  v88 = __readfsqword(0x28u);
  v71 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v12 = (char *)haystack;
  if ( v11 )
  {
    v12 = *(char **)a2;
    --v11;
  }
  sub_427E80((std::string *)&v71, v11, v12);
  v13 = *(pthread_rwlock_t **)(a1 + 8);
  rwlock = v13;
  if ( &_pthread_key_create )
  {
    do
      v55 = pthread_rwlock_rdlock(v13);
    while ( v55 == 11 );
    if ( v55 == 35 )
      std::__throw_system_error(35);
    v13 = *(pthread_rwlock_t **)(a1 + 8);
  }
  align = v13[1].__align;
  v77 = a1;
  *(_QWORD *)&v78 = v13;
  v15 = *(_DWORD *)(a3 + 8);
  v16 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v78 + 1) = v16;
  if ( v16 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
    else
      ++*(_DWORD *)(v16 + 8);
  }
  v17 = *(char **)a2;
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v79 = align;
  v80 = v15;
  ptr = v17;
  v19 = (__int64)v71;
  v82 = v18;
  *(_QWORD *)a2 = 0;
  *(_OWORD *)(a2 + 8) = 0;
  if ( *(int *)(v19 - 8) < 0 )
  {
    v19 = std::string::_Rep::_M_clone();
  }
  else if ( (_UNKNOWN *)(v19 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v19 - 8), 1u);
    else
      ++*(_DWORD *)(v19 - 8);
  }
  v83 = (volatile signed __int32 *)v19;
  *(_QWORD *)&v86 = 0;
  v84 = a4;
  v20 = a5[1].m128i_i64[1];
  v85 = 0;
  *((_QWORD *)&v86 + 1) = v20;
  if ( a5[1].m128i_i64[0] )
  {
    v21 = _mm_loadu_si128(a5);
    *(_QWORD *)&v86 = a5[1].m128i_i64[0];
    v85 = v21;
    a5[1] = 0;
  }
  v22 = (__m128)_mm_loadu_si128(a6);
  v23 = _mm_movehl_ps(a9, v22).m128_u64[0];
  v87 = (__m128i)v22;
  if ( v23 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
    else
      ++*(_DWORD *)(v23 + 8);
  }
  search_utils = get_search_utils();
  v25 = *(void (__fastcall **)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *))(*(_QWORD *)search_utils
                                                                                           + 24LL);
  v26 = (__m128)_mm_loadu_si128(a6);
  v27 = _mm_movehl_ps(a10, v26).m128_u64[0];
  v74 = v26;
  if ( v27 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v27 + 8), 1u);
    else
      ++*(_DWORD *)(v27 + 8);
  }
  v76 = 0u;
  v75 = 0;
  v28 = operator new(0x80u);
  v30 = *((_QWORD *)&v78 + 1);
  si128 = _mm_load_si128((const __m128i *)&v77);
  *(_QWORD *)(v28 + 96) = 0;
  v32 = _mm_load_si128(&v82);
  *(_QWORD *)(v28 + 16) = v30;
  v33 = v79;
  *(__m128i *)v28 = si128;
  *(_QWORD *)(v28 + 24) = v33;
  LODWORD(v33) = v80;
  *(__m128i *)(v28 + 48) = v32;
  *(_DWORD *)(v28 + 32) = v33;
  v78 = 0;
  *(_QWORD *)(v28 + 40) = ptr;
  ptr = nullptr;
  *(_QWORD *)(v28 + 64) = v83;
  v83 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v82 = 0;
  *(_QWORD *)(v28 + 72) = v84;
  v34 = *((_QWORD *)&v86 + 1);
  *(_OWORD *)(v28 + 80) = 0;
  *(_QWORD *)(v28 + 104) = v34;
  if ( (_QWORD)v86 )
  {
    v35 = _mm_load_si128(&v85);
    *(_QWORD *)(v28 + 96) = v86;
    v86 = 0;
    *(__m128i *)(v28 + 80) = v35;
  }
  v36 = _mm_load_si128(&v87);
  *(_QWORD *)&v75 = v28;
  *(__m128i *)(v28 + 112) = v36;
  v87 = 0;
  v37 = (__int64)v71;
  v76 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2AFE9D0), (__m128i)(unsigned __int64)sub_42AFE0);
  if ( *((int *)v71 - 2) < 0 )
  {
    v37 = std::string::_Rep::_M_clone();
  }
  else if ( v71 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v71 - 2, 1u);
    else
      ++*((_DWORD *)v71 - 2);
  }
  v38 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 8));
  v72 = v37;
  v39 = _mm_movehl_ps(v29, v38).m128_u64[0];
  v73 = v38;
  if ( v39 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v39 + 8), 1u);
    else
      ++*(_DWORD *)(v39 + 8);
  }
  v40 = (__m128i *)&v73;
  v25(search_utils, &v73, a1 + 264, &v72, &v75, &v74);
  v41 = (volatile signed __int32 *)v73.m128_u64[1];
  if ( v73.m128_u64[1] )
  {
    v42 = (volatile signed __int32 *)(v73.m128_u64[1] + 8);
    if ( *(_QWORD *)(v73.m128_u64[1] + 8) == 0x100000001LL )
    {
      v62 = *(_QWORD *)v73.m128_u64[1];
      v63 = v73.m128_u64[1];
      *(_QWORD *)(v73.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(unsigned __int64, __m128 *, volatile signed __int32 *))(v62 + 16))(v63, &v73, v42);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 24LL))(v41);
      v44 = v72;
      if ( (_UNKNOWN *)(v72 - 24) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_31;
      goto LABEL_73;
    }
    if ( &_pthread_key_create )
    {
      v43 = _InterlockedExchangeAdd(v42, 0xFFFFFFFF);
    }
    else
    {
      v43 = *(_DWORD *)(v73.m128_u64[1] + 8);
      *(_DWORD *)(v73.m128_u64[1] + 8) = v43 - 1;
    }
    if ( v43 == 1 )
      sub_420480(v41);
  }
  v44 = v72;
  if ( (_UNKNOWN *)(v72 - 24) == &std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_31;
LABEL_73:
  if ( &_pthread_key_create )
  {
    v64 = _InterlockedExchangeAdd((volatile signed __int32 *)(v44 - 8), 0xFFFFFFFF);
  }
  else
  {
    v64 = *(_DWORD *)(v44 - 8);
    *(_DWORD *)(v44 - 8) = v64 - 1;
  }
  if ( v64 <= 0 )
  {
    v40 = (__m128i *)&v73;
    std::string::_Rep::_M_destroy();
  }
LABEL_31:
  if ( v76.m128i_i64[0] )
  {
    v40 = (__m128i *)&v75;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v76.m128i_i64[0])(&v75, &v75, 3);
  }
  v45 = (volatile signed __int32 *)v74.m128_u64[1];
  if ( v74.m128_u64[1] )
  {
    v46 = (volatile signed __int32 *)(v74.m128_u64[1] + 8);
    if ( *(_QWORD *)(v74.m128_u64[1] + 8) == 0x100000001LL )
    {
      v56 = *(_QWORD *)v74.m128_u64[1];
      v57 = v74.m128_u64[1];
      *(_QWORD *)(v74.m128_u64[1] + 8) = 0;
      (*(void (__fastcall **)(unsigned __int64, __m128i *, volatile signed __int32 *))(v56 + 16))(v57, v40, v46);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 24LL))(v45);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v47 = _InterlockedExchangeAdd(v46, 0xFFFFFFFF);
      }
      else
      {
        v47 = *(_DWORD *)(v74.m128_u64[1] + 8);
        *(_DWORD *)(v74.m128_u64[1] + 8) = v47 - 1;
      }
      if ( v47 == 1 )
        sub_420480(v45);
    }
  }
  v48 = (volatile signed __int32 *)v87.m128i_i64[1];
  if ( v87.m128i_i64[1] )
  {
    v49 = (volatile signed __int32 *)(v87.m128i_i64[1] + 8);
    if ( *(_QWORD *)(v87.m128i_i64[1] + 8) == 0x100000001LL )
    {
      v58 = *(_QWORD *)v87.m128i_i64[1];
      v59 = v87.m128i_i64[1];
      *(_QWORD *)(v87.m128i_i64[1] + 8) = 0;
      (*(void (__fastcall **)(__int64, __m128i *, volatile signed __int32 *))(v58 + 16))(v59, v40, v49);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 24LL))(v48);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v50 = _InterlockedExchangeAdd(v49, 0xFFFFFFFF);
      }
      else
      {
        v50 = *(_DWORD *)(v87.m128i_i64[1] + 8);
        *(_DWORD *)(v87.m128i_i64[1] + 8) = v50 - 1;
      }
      if ( v50 == 1 )
        sub_420480(v48);
    }
  }
  if ( (_QWORD)v86 )
  {
    v40 = &v85;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v86)(&v85, &v85, 3);
  }
  if ( v83 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v65 = _InterlockedExchangeAdd(v83 - 2, 0xFFFFFFFF);
    }
    else
    {
      v65 = *((_DWORD *)v83 - 2);
      *((_DWORD *)v83 - 2) = v65 - 1;
    }
    if ( v65 <= 0 )
    {
      v40 = (__m128i *)&v74;
      std::string::_Rep::_M_destroy();
    }
  }
  if ( ptr )
  {
    v82.m128i_i64[0] = 0;
    qfree(ptr);
  }
  v51 = *((volatile signed __int32 **)&v78 + 1);
  if ( *((_QWORD *)&v78 + 1) )
  {
    v52 = (volatile signed __int32 *)(*((_QWORD *)&v78 + 1) + 8LL);
    if ( *(_QWORD *)(*((_QWORD *)&v78 + 1) + 8LL) == 0x100000001LL )
    {
      v60 = **((_QWORD **)&v78 + 1);
      v61 = *((_QWORD *)&v78 + 1);
      *(_QWORD *)(*((_QWORD *)&v78 + 1) + 8LL) = 0;
      (*(void (__fastcall **)(__int64, __m128i *, volatile signed __int32 *))(v60 + 16))(v61, v40, v52);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 24LL))(v51);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v53 = _InterlockedExchangeAdd(v52, 0xFFFFFFFF);
      }
      else
      {
        v53 = *(_DWORD *)(*((_QWORD *)&v78 + 1) + 8LL);
        *(_DWORD *)(*((_QWORD *)&v78 + 1) + 8LL) = v53 - 1;
      }
      if ( v53 == 1 )
        sub_420480(v51);
    }
  }
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  if ( v71 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v66 = _InterlockedExchangeAdd(v71 - 2, 0xFFFFFFFF);
    }
    else
    {
      v66 = *((_DWORD *)v71 - 2);
      *((_DWORD *)v71 - 2) = v66 - 1;
    }
    if ( v66 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return v88 - __readfsqword(0x28u);
}

