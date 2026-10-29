unsigned __int64 __fastcall sub_445510(
        double a1,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i *a7,
        const __m128i *a8)
{
  unsigned __int64 v10; // rdx
  char *v11; // rax
  struct _Unwind_Exception *v12; // r14
  __m128 v13; // xmm4
  pthread_rwlock_t *exception_class; // rbx
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // r14
  __int64 v16; // rax
  __int64 align; // rcx
  int v18; // r15d
  __m128i v19; // xmm0
  __m128 v20; // xmm0
  unsigned __int64 v21; // xmm4_8
  size_t v22; // r12
  __int64 v23; // r12
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 v26; // r13
  __m128i v27; // xmm0
  size_t v28; // r14
  struct _Unwind_Exception *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  unsigned int v34; // r13d
  __m128 v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm3
  __int64 v38; // rax
  char *v39; // rdi
  __int64 *v40; // rsi
  __int64 v41; // rdi
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdx
  signed __int32 v44; // eax
  unsigned int v45; // eax
  char *v46; // rdi
  int v48; // eax
  void *v49; // rax
  char *v50; // rsi
  void *v51; // rax
  void *v52; // rsi
  __int64 v53; // rax
  int v54; // edx
  int v55; // edx
  struct _Unwind_Exception *v56; // [rsp+8h] [rbp-140h]
  __m128i v57; // [rsp+10h] [rbp-138h] BYREF
  const __m128i *v58; // [rsp+20h] [rbp-128h]
  __m128 *v59; // [rsp+28h] [rbp-120h]
  volatile signed __int32 *v60; // [rsp+30h] [rbp-118h]
  unsigned __int64 v61; // [rsp+38h] [rbp-110h]
  char v62; // [rsp+4Fh] [rbp-F9h] BYREF
  volatile signed __int32 *v63; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-F0h] BYREF
  __m128 v65; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v66; // [rsp+70h] [rbp-D8h] BYREF
  __m128i v67; // [rsp+80h] [rbp-C8h] BYREF
  __m128i v68; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v69; // [rsp+A0h] [rbp-A8h]
  __m128i v70; // [rsp+B0h] [rbp-98h] BYREF
  void *src; // [rsp+C0h] [rbp-88h]
  size_t n[2]; // [rsp+C8h] [rbp-80h]
  __m128i v73; // [rsp+D8h] [rbp-70h] BYREF
  struct _Unwind_Exception *v74; // [rsp+E8h] [rbp-60h]
  __int64 v75; // [rsp+F0h] [rbp-58h]
  int v76; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v77; // [rsp+108h] [rbp-40h]

  v10 = *(_QWORD *)(a5 + 8);
  v58 = a8;
  v77 = __readfsqword(0x28u);
  v63 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
  v11 = (char *)haystack;
  if ( v10 )
  {
    v11 = *(char **)a5;
    --v10;
  }
  sub_43BD80((std::string *)&v63, v10, v11);
  v12 = *(struct _Unwind_Exception **)(qword_2CCB598 + 1728);
  v56 = v12;
  sub_4E07C0(v12);
  sub_4DEC70(*(_QWORD *)(qword_2CCB598 + 1728));
  exception_class = (pthread_rwlock_t *)v12->exception_class;
  exception_cleanup = v12->exception_cleanup;
  if ( exception_cleanup )
  {
    if ( !&_pthread_key_create )
    {
      ++*((_DWORD *)exception_cleanup + 2);
      goto LABEL_7;
    }
    _InterlockedAdd((volatile signed __int32 *)exception_cleanup + 2, 1u);
  }
  if ( &_pthread_key_create )
  {
    do
      v48 = pthread_rwlock_rdlock(exception_class);
    while ( v48 == 11 );
    if ( v48 == 35 )
      std::__throw_system_error(35);
  }
LABEL_7:
  v16 = a7[1].m128i_i64[1];
  align = exception_class[1].__align;
  *(_QWORD *)&v69 = 0;
  v18 = *(_DWORD *)(a6 + 8);
  v68 = 0;
  *((_QWORD *)&v69 + 1) = v16;
  if ( a7[1].m128i_i64[0] )
  {
    v19 = _mm_loadu_si128(a7);
    *(_QWORD *)&v69 = a7[1].m128i_i64[0];
    v68 = v19;
    a7[1] = 0;
  }
  v20 = (__m128)_mm_loadu_si128(v58);
  v21 = _mm_movehl_ps(v13, v20).m128_u64[0];
  v70 = (__m128i)v20;
  if ( v21 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v21 + 8), 1u);
    else
      ++*(_DWORD *)(v21 + 8);
  }
  v22 = *(_QWORD *)(a5 + 8);
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( v22 )
  {
    v57.m128i_i64[0] = align;
    v49 = (void *)qalloc_or_throw(v22);
    v50 = *(char **)a5;
    src = v49;
    n[1] = v22;
    memcpy(v49, v50, v22);
    n[0] = v22;
    align = v57.m128i_i64[0];
  }
  v75 = align;
  v74 = v56;
  v76 = v18;
  v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)exception_class, (__m128i)(unsigned __int64)exception_cleanup);
  v23 = operator new(0x58u);
  v60 = (volatile signed __int32 *)(v23 + 8);
  v24 = (_QWORD *)(v23 + 16);
  v67.m128i_i64[0] = 0;
  *(_QWORD *)(v23 + 8) = 0x100000001LL;
  *(_QWORD *)v23 = off_2B28958;
  v67.m128i_i64[1] = 0;
  v66 = 0;
  v25 = operator new(0x70u);
  *(_QWORD *)(v25 + 16) = 0;
  v26 = v25;
  *(_OWORD *)v25 = 0;
  *(_QWORD *)(v25 + 24) = *((_QWORD *)&v69 + 1);
  if ( (_QWORD)v69 )
  {
    v27 = _mm_load_si128(&v68);
    *(_QWORD *)(v25 + 16) = v69;
    *(__m128i *)v25 = v27;
    v69 = 0;
  }
  v28 = n[0];
  *(_QWORD *)(v25 + 48) = 0;
  *(__m128i *)(v25 + 32) = _mm_load_si128(&v70);
  v70 = 0;
  *(_OWORD *)(v25 + 56) = 0;
  if ( v28 )
  {
    v51 = (void *)qalloc_or_throw(v28);
    *(_QWORD *)(v26 + 48) = v51;
    v52 = src;
    *(_QWORD *)(v26 + 64) = v28;
    memcpy(v51, v52, v28);
    *(_QWORD *)(v26 + 56) = v28;
  }
  v29 = v74;
  v30 = _mm_loadu_si128(&v73);
  *(_QWORD *)(v23 + 32) = 0;
  *(_QWORD *)&v66 = v26;
  *(_QWORD *)(v26 + 88) = v29;
  v31 = v75;
  *(__m128i *)(v26 + 72) = v30;
  *(_QWORD *)(v26 + 96) = v31;
  v73 = 0;
  v32 = _mm_loadl_epi64((const __m128i *)off_2B289A8);
  *(_DWORD *)(v26 + 104) = v76;
  *(_QWORD *)(v23 + 40) = 0;
  v67 = _mm_unpacklo_epi64(v32, (__m128i)(unsigned __int64)sub_4410F0);
  *(_OWORD *)(v23 + 16) = 0;
  sub_43D2E0(v24, &v66, 2);
  *(_BYTE *)(v23 + 56) = 0;
  v33 = _mm_load_si128(&v67);
  *(_QWORD *)(v23 + 48) = 2;
  *(_QWORD *)(v23 + 80) = 0;
  *(__m128i *)(v23 + 32) = v33;
  *(_OWORD *)(v23 + 64) = 0;
  sub_444A40((__m128i **)(v23 + 64), 2u);
  if ( v67.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v67.m128i_i64[0])(&v66, &v66, 3);
  v34 = 0;
  v57 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B289B0), (__m128i)(unsigned __int64)sub_442140);
  do
  {
    if ( v23 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v60, 1u);
      else
        ++*(_DWORD *)(v23 + 8);
    }
    v35 = (__m128)_mm_loadu_si128(v58);
    a3 = _mm_movehl_ps(a3, v35);
    v65 = v35;
    if ( a3.m128_u64[0] )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(a3.m128_u64[0] + 8), 1u);
      else
        ++*(_DWORD *)(a3.m128_u64[0] + 8);
    }
    v67 = 0u;
    v66 = 0;
    v36 = operator new(0x18u);
    *(_QWORD *)v36 = v24;
    v37 = _mm_load_si128(&v57);
    *(_QWORD *)(v36 + 8) = v23;
    *(_DWORD *)(v36 + 16) = v34;
    *(_QWORD *)&v66 = v36;
    v38 = (__int64)v63;
    v67 = v37;
    v39 = (char *)(v63 - 6);
    if ( *((int *)v63 - 2) < 0 )
    {
      v38 = std::string::_Rep::_M_clone(v39, &v62, 0);
    }
    else if ( v39 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd(v63 - 2, 1u);
      else
        ++*((_DWORD *)v63 - 2);
    }
    v64 = v38;
    v40 = &v64;
    v59 = &v65;
    sub_4DE4B0(v56, &v64, 1, v34, &v66, &v65);
    v41 = v64 - 24;
    if ( (_UNKNOWN *)(v64 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v54 = _InterlockedExchangeAdd((volatile signed __int32 *)(v64 - 8), 0xFFFFFFFF);
      }
      else
      {
        v54 = *(_DWORD *)(v64 - 8);
        *(_DWORD *)(v64 - 8) = v54 - 1;
      }
      if ( v54 <= 0 )
      {
        v40 = (__int64 *)&v62;
        std::string::_Rep::_M_destroy(v41, &v62);
      }
    }
    if ( v67.m128i_i64[0] )
    {
      v40 = (__int64 *)&v66;
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v67.m128i_i64[0])(&v66, &v66, 3);
    }
    v42 = (volatile signed __int32 *)v65.m128_u64[1];
    if ( v65.m128_u64[1] )
    {
      v43 = (volatile signed __int32 *)(v65.m128_u64[1] + 8);
      if ( *(_QWORD *)(v65.m128_u64[1] + 8) == 0x100000001LL )
      {
        v53 = *(_QWORD *)v65.m128_u64[1];
        v61 = v65.m128_u64[1];
        *(_QWORD *)(v65.m128_u64[1] + 8) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64 *, volatile signed __int32 *))(v53 + 16))(
          v42,
          v40,
          v43);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v61 + 24LL))(v61);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v44 = _InterlockedExchangeAdd(v43, 0xFFFFFFFF);
        }
        else
        {
          v44 = *(_DWORD *)(v65.m128_u64[1] + 8);
          *(_DWORD *)(v65.m128_u64[1] + 8) = v44 - 1;
        }
        if ( v44 == 1 )
          sub_434350(v42);
      }
    }
    v45 = v34 + 1;
    v34 = 1;
  }
  while ( v45 != 2 );
  if ( v23 )
    sub_4343A0((volatile signed __int32 *)v23);
  if ( v73.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v73.m128i_i64[1]);
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  if ( v70.m128i_i64[1] )
    sub_4343A0((volatile signed __int32 *)v70.m128i_i64[1]);
  if ( (_QWORD)v69 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v69)(&v68, &v68, 3);
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(exception_class);
  v46 = (char *)(v63 - 6);
  if ( v63 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v55 = _InterlockedExchangeAdd(v63 - 2, 0xFFFFFFFF);
    }
    else
    {
      v55 = *((_DWORD *)v63 - 2);
      *((_DWORD *)v63 - 2) = v55 - 1;
    }
    if ( v55 <= 0 )
      std::string::_Rep::_M_destroy(v46, v59);
  }
  return v77 - __readfsqword(0x28u);
}
