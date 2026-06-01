unsigned __int64 __fastcall sub_43EFF0(
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
  unsigned __int64 v12; // rdx
  char *v14; // rax
  pthread_rwlock_t *v15; // rbx
  __int64 align; // rcx
  int v17; // edx
  __int64 v18; // rax
  char *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  __m128 v25; // xmm0
  unsigned __int64 v26; // xmm2_8
  __int64 search_utils; // rax
  __m128 v28; // xmm0
  __int64 v29; // r14
  unsigned __int64 v30; // xmm3_8
  void (__fastcall *v31)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *); // rbp
  __int64 v32; // rax
  __m128 v33; // xmm5
  __int64 v34; // rdx
  __m128i si128; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // rdx
  __int64 v38; // rdx
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  __int64 v41; // rax
  char *v42; // rdi
  __m128 v43; // xmm0
  unsigned __int64 v44; // xmm5_8
  __int64 v45; // rdi
  char *v46; // rdi
  char *v47; // rdi
  int v49; // eax
  int v50; // edx
  int v51; // edx
  int v52; // edx
  pthread_rwlock_t *rwlock; // [rsp+18h] [rbp-120h]
  volatile signed __int32 *v56; // [rsp+20h] [rbp-118h] BYREF
  __int64 v57; // [rsp+28h] [rbp-110h] BYREF
  __m128 v58; // [rsp+30h] [rbp-108h] BYREF
  __m128 v59; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v60; // [rsp+50h] [rbp-E8h] BYREF
  __m128i v61; // [rsp+60h] [rbp-D8h]
  __int64 v62; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v63; // [rsp+78h] [rbp-C0h]
  __int64 v64; // [rsp+88h] [rbp-B0h]
  int v65; // [rsp+90h] [rbp-A8h]
  void *ptr; // [rsp+98h] [rbp-A0h]
  __m128i v67; // [rsp+A0h] [rbp-98h] BYREF
  volatile signed __int32 *v68; // [rsp+B0h] [rbp-88h]
  __int64 v69; // [rsp+B8h] [rbp-80h]
  __m128i v70; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v71; // [rsp+D0h] [rbp-68h]
  __m128i v72; // [rsp+E0h] [rbp-58h] BYREF
  unsigned __int64 v73; // [rsp+F8h] [rbp-40h]

  v12 = *(_QWORD *)(a2 + 8);
  v73 = __readfsqword(0x28u);
  v56 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v14 = (char *)haystack;
  if ( v12 )
  {
    v14 = *(char **)a2;
    --v12;
  }
  sub_43BD80((std::string *)&v56, v12, v14);
  v15 = *(pthread_rwlock_t **)(a1 + 8);
  rwlock = v15;
  if ( &_pthread_key_create )
  {
    do
      v49 = pthread_rwlock_rdlock(v15);
    while ( v49 == 11 );
    if ( v49 == 35 )
      std::__throw_system_error(35);
    v15 = *(pthread_rwlock_t **)(a1 + 8);
  }
  align = v15[1].__align;
  v62 = a1;
  *(_QWORD *)&v63 = v15;
  v17 = *(_DWORD *)(a3 + 8);
  v18 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v63 + 1) = v18;
  if ( v18 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v18 + 8), 1u);
    else
      ++*(_DWORD *)(v18 + 8);
  }
  v19 = *(char **)a2;
  v20 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v64 = align;
  v65 = v17;
  ptr = v19;
  v21 = (__int64)v56;
  v67 = v20;
  *(_QWORD *)a2 = 0;
  v22 = (void *)(v21 - 24);
  *(_OWORD *)(a2 + 8) = 0;
  if ( *(int *)(v21 - 8) < 0 )
  {
    v21 = std::string::_Rep::_M_clone(v22, &v59, 0);
  }
  else if ( v22 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v21 - 8), 1u);
    else
      ++*(_DWORD *)(v21 - 8);
  }
  v68 = (volatile signed __int32 *)v21;
  *(_QWORD *)&v71 = 0;
  v69 = a4;
  v23 = a5[1].m128i_i64[1];
  v70 = 0;
  *((_QWORD *)&v71 + 1) = v23;
  if ( a5[1].m128i_i64[0] )
  {
    v24 = _mm_loadu_si128(a5);
    *(_QWORD *)&v71 = a5[1].m128i_i64[0];
    v70 = v24;
    a5[1] = 0;
  }
  v25 = (__m128)_mm_loadu_si128(a6);
  v26 = _mm_movehl_ps(a9, v25).m128_u64[0];
  v72 = (__m128i)v25;
  if ( v26 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v26 + 8), 1u);
    else
      ++*(_DWORD *)(v26 + 8);
  }
  search_utils = get_search_utils();
  v28 = (__m128)_mm_loadu_si128(a6);
  v29 = search_utils;
  v30 = _mm_movehl_ps(a10, v28).m128_u64[0];
  v31 = *(void (__fastcall **)(__int64, __m128 *, __int64, __int64 *, __int128 *, __m128 *))(*(_QWORD *)search_utils
                                                                                           + 24LL);
  v59 = v28;
  if ( v30 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v30 + 8), 1u);
    else
      ++*(_DWORD *)(v30 + 8);
  }
  v61 = 0u;
  v60 = 0;
  v32 = operator new(0x80u);
  v34 = *((_QWORD *)&v63 + 1);
  si128 = _mm_load_si128((const __m128i *)&v62);
  *(_QWORD *)(v32 + 96) = 0;
  v36 = _mm_load_si128(&v67);
  *(_QWORD *)(v32 + 16) = v34;
  v37 = v64;
  *(__m128i *)v32 = si128;
  *(_QWORD *)(v32 + 24) = v37;
  LODWORD(v37) = v65;
  *(__m128i *)(v32 + 48) = v36;
  *(_DWORD *)(v32 + 32) = v37;
  v63 = 0;
  *(_QWORD *)(v32 + 40) = ptr;
  ptr = nullptr;
  *(_QWORD *)(v32 + 64) = v68;
  v68 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v67 = 0;
  *(_QWORD *)(v32 + 72) = v69;
  v38 = *((_QWORD *)&v71 + 1);
  *(_OWORD *)(v32 + 80) = 0;
  *(_QWORD *)(v32 + 104) = v38;
  if ( (_QWORD)v71 )
  {
    v39 = _mm_load_si128(&v70);
    *(_QWORD *)(v32 + 96) = v71;
    v71 = 0;
    *(__m128i *)(v32 + 80) = v39;
  }
  v40 = _mm_load_si128(&v72);
  *(_QWORD *)&v60 = v32;
  *(__m128i *)(v32 + 112) = v40;
  v72 = 0;
  v41 = (__int64)v56;
  v42 = (char *)(v56 - 6);
  v61 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B28990), (__m128i)(unsigned __int64)sub_43EF20);
  if ( *((int *)v56 - 2) < 0 )
  {
    v41 = std::string::_Rep::_M_clone(v42, &v58, 0);
  }
  else if ( v42 != (char *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v56 - 2, 1u);
    else
      ++*((_DWORD *)v56 - 2);
  }
  v43 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 8));
  v57 = v41;
  v44 = _mm_movehl_ps(v33, v43).m128_u64[0];
  v58 = v43;
  if ( v44 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v44 + 8), 1u);
    else
      ++*(_DWORD *)(v44 + 8);
  }
  v31(v29, &v58, a1 + 264, &v57, &v60, &v59);
  if ( v58.m128_u64[1] )
    sub_4343A0((volatile signed __int32 *)v58.m128_u64[1]);
  v45 = v57 - 24;
  if ( (_UNKNOWN *)(v57 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v50 = _InterlockedExchangeAdd((volatile signed __int32 *)(v57 - 8), 0xFFFFFFFF);
    }
    else
    {
      v50 = *(_DWORD *)(v57 - 8);
      *(_DWORD *)(v57 - 8) = v50 - 1;
    }
    if ( v50 <= 0 )
      std::string::_Rep::_M_destroy(v45, &v58);
  }
  if ( v61.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v61.m128i_i64[0])(&v60, &v60, 3);
  if ( v59.m128_u64[1] )
    sub_4343A0((volatile signed __int32 *)v59.m128_u64[1]);
  if ( v72.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v72.m128i_i64[1]);
  if ( (_QWORD)v71 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v71)(&v70, &v70, 3);
  v46 = (char *)(v68 - 6);
  if ( v68 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v51 = _InterlockedExchangeAdd(v68 - 2, 0xFFFFFFFF);
    }
    else
    {
      v51 = *((_DWORD *)v68 - 2);
      *((_DWORD *)v68 - 2) = v51 - 1;
    }
    if ( v51 <= 0 )
      std::string::_Rep::_M_destroy(v46, &v59);
  }
  if ( ptr )
  {
    v67.m128i_i64[0] = 0;
    qfree(ptr);
  }
  if ( *((_QWORD *)&v63 + 1) )
    sub_4343A0(*((volatile signed __int32 **)&v63 + 1));
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(rwlock);
  v47 = (char *)(v56 - 6);
  if ( v56 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v52 = _InterlockedExchangeAdd(v56 - 2, 0xFFFFFFFF);
    }
    else
    {
      v52 = *((_DWORD *)v56 - 2);
      *((_DWORD *)v56 - 2) = v52 - 1;
    }
    if ( v52 <= 0 )
      std::string::_Rep::_M_destroy(v47, &v59);
  }
  return v73 - __readfsqword(0x28u);
}
