unsigned __int64 __fastcall sub_95ECE0(__int64 a1)
{
  pthread_mutex_t *v2; // rdi
  int v3; // eax
  const __m128i *v4; // rbx
  const __m128i *v5; // r12
  void (__fastcall *v6)(__int128 *, const __m128i *, __int64); // rax
  const __m128i *v7; // r15
  void (__fastcall *v8)(const __m128i *, const __m128i *, __int64); // rax
  int v9; // eax
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall *v18)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v19; // xmm0
  const __m128i *i; // r12
  void (__fastcall *v21)(__int64, __int64, __int64); // rax
  void (__fastcall *v22)(__int128 *, const __m128i *, __int64); // rax
  __int64 v23; // rbx
  const __m128i *v24; // r15
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  void (__fastcall *v29)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  void (__fastcall *v32)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall *v33)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v34; // xmm0
  char v36; // [rsp+8h] [rbp-E0h]
  __int128 v37; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v38; // [rsp+20h] [rbp-C8h]
  __int8 v39; // [rsp+30h] [rbp-B8h]
  __int64 v40; // [rsp+38h] [rbp-B0h]
  __m128i v41; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v42; // [rsp+50h] [rbp-98h]
  __int8 v43; // [rsp+60h] [rbp-88h]
  __int64 v44; // [rsp+68h] [rbp-80h]
  __m128i v45; // [rsp+70h] [rbp-78h] BYREF
  void (__fastcall *v46)(_QWORD, _QWORD, _QWORD); // [rsp+80h] [rbp-68h]
  __int64 v47; // [rsp+88h] [rbp-60h]
  __int8 v48; // [rsp+90h] [rbp-58h]
  __int64 v49; // [rsp+98h] [rbp-50h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v2 = (pthread_mutex_t *)(a1 + 208);
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock(v2);
    if ( v3 )
      std::__throw_system_error(v3);
  }
  v36 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(const __m128i **)(a1 + 304);
      v5 = *(const __m128i **)(a1 + 296);
      if ( v4 == v5 )
        break;
      v6 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))v5[1].m128i_i64[0];
      v38 = 0u;
      v37 = 0;
      if ( v6 )
      {
        v6(&v37, v5, 2);
        v4 = *(const __m128i **)(a1 + 304);
        v7 = *(const __m128i **)(a1 + 296);
        v38 = _mm_loadu_si128(v5 + 1);
      }
      else
      {
        v7 = v5;
      }
      v39 = v5[2].m128i_i8[0];
      v40 = v5[2].m128i_i64[1];
      if ( (char *)v4 - (char *)v7 > 48 )
      {
        v10 = v4[-2].m128i_i64[1];
        *(_QWORD *)&v42 = 0;
        v41 = 0;
        *((_QWORD *)&v42 + 1) = v10;
        if ( v4[-2].m128i_i64[0] )
        {
          v11 = _mm_loadu_si128(v4 - 3);
          *(_QWORD *)&v42 = v4[-2].m128i_i64[0];
          v41 = v11;
          v4[-2] = 0;
        }
        v43 = v4[-1].m128i_i8[0];
        v12 = v4[-1].m128i_i64[1];
        v46 = nullptr;
        v44 = v12;
        v13 = v7[1].m128i_i64[1];
        v14 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v7[1].m128i_i64[0];
        v45 = 0;
        v47 = v13;
        if ( v14 )
        {
          v15 = _mm_loadu_si128(v7);
          v46 = v14;
          v45 = v15;
          v7[1] = 0;
        }
        v16 = _mm_load_si128(&v45);
        v45 = _mm_loadu_si128(v4 - 3);
        v17 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v4[-2].m128i_i64[0];
        v4[-3] = v16;
        v18 = v46;
        v46 = v17;
        v4[-2].m128i_i64[0] = (__int64)v18;
        v47 = v4[-2].m128i_i64[1];
        v4[-2].m128i_i64[1] = v13;
        if ( v46 )
          v46(&v45, &v45, 3);
        v4[-1].m128i_i8[0] = v7[2].m128i_i8[0];
        v4[-1].m128i_i64[1] = v7[2].m128i_i64[1];
        v46 = nullptr;
        v47 = *((_QWORD *)&v42 + 1);
        v45 = 0;
        if ( (_QWORD)v42 )
        {
          v19 = _mm_load_si128(&v41);
          v46 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v42;
          v45 = v19;
          v42 = 0;
        }
        v48 = v43;
        v49 = v44;
        sub_95E650((__int64)v7, 0, 0xAAAAAAAAAAAAAAABLL * (&v4[-3] - v7), &v45);
        if ( v46 )
          v46(&v45, &v45, 3);
        if ( (_QWORD)v42 )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v42)(&v41, &v41, 3);
        v4 = *(const __m128i **)(a1 + 304);
      }
      *(_QWORD *)(a1 + 304) = v4 - 3;
      v8 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))v4[-2].m128i_i64[0];
      if ( v8 )
        v8(v4 - 3, v4 - 3, 3);
      if ( v2 )
      {
        if ( &_pthread_key_create )
          pthread_mutex_unlock(v2);
        v36 = 0;
      }
      if ( !v38.m128i_i64[0] )
        std::__throw_bad_function_call();
      ((void (__fastcall *)(__int128 *))v38.m128i_i64[1])(&v37);
      if ( !v2 )
        std::__throw_system_error(1);
      if ( v36 )
        std::__throw_system_error(35);
      if ( &_pthread_key_create )
      {
        v9 = pthread_mutex_lock(v2);
        if ( v9 )
          std::__throw_system_error(v9);
      }
      v36 = 1;
      if ( v38.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v38.m128i_i64[0])(&v37, &v37, 3);
    }
    if ( *(_BYTE *)(a1 + 24) )
      break;
    std::condition_variable::wait();
  }
  for ( i = *(const __m128i **)(a1 + 296); *(const __m128i **)(a1 + 304) != i; i = *(const __m128i **)(a1 + 296) )
  {
    v22 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))i[1].m128i_i64[0];
    v38 = 0u;
    v37 = 0;
    if ( v22 )
    {
      v22(&v37, i, 2);
      v38 = _mm_loadu_si128(i + 1);
    }
    v23 = *(_QWORD *)(a1 + 304);
    v24 = *(const __m128i **)(a1 + 296);
    v39 = i[2].m128i_i8[0];
    v40 = i[2].m128i_i64[1];
    if ( v23 - (__int64)v24 > 48 )
    {
      v25 = *(_QWORD *)(v23 - 24);
      *(_QWORD *)&v42 = 0;
      v41 = 0;
      *((_QWORD *)&v42 + 1) = v25;
      if ( *(_QWORD *)(v23 - 32) )
      {
        v26 = _mm_loadu_si128((const __m128i *)(v23 - 48));
        *(_QWORD *)&v42 = *(_QWORD *)(v23 - 32);
        v41 = v26;
        *(_OWORD *)(v23 - 32) = 0;
      }
      v43 = *(_BYTE *)(v23 - 16);
      v27 = *(_QWORD *)(v23 - 8);
      v46 = nullptr;
      v44 = v27;
      v28 = v24[1].m128i_i64[1];
      v29 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v24[1].m128i_i64[0];
      v45 = 0;
      v47 = v28;
      if ( v29 )
      {
        v30 = _mm_loadu_si128(v24);
        v46 = v29;
        v45 = v30;
        v24[1] = 0;
      }
      v31 = _mm_load_si128(&v45);
      v45 = _mm_loadu_si128((const __m128i *)(v23 - 48));
      v32 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v23 - 32);
      *(__m128i *)(v23 - 48) = v31;
      v33 = v46;
      v46 = v32;
      *(_QWORD *)(v23 - 32) = v33;
      v47 = *(_QWORD *)(v23 - 24);
      *(_QWORD *)(v23 - 24) = v28;
      if ( v46 )
        v46(&v45, &v45, 3);
      *(_BYTE *)(v23 - 16) = v24[2].m128i_i8[0];
      *(_QWORD *)(v23 - 8) = v24[2].m128i_i64[1];
      v46 = nullptr;
      v47 = *((_QWORD *)&v42 + 1);
      v45 = 0;
      if ( (_QWORD)v42 )
      {
        v34 = _mm_load_si128(&v41);
        v46 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v42;
        v45 = v34;
        v42 = 0;
      }
      v48 = v43;
      v49 = v44;
      sub_95E650((__int64)v24, 0, 0xAAAAAAAAAAAAAAABLL * ((v23 - 48 - (__int64)v24) >> 4), &v45);
      if ( v46 )
        v46(&v45, &v45, 3);
      if ( (_QWORD)v42 )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v42)(&v41, &v41, 3);
      v23 = *(_QWORD *)(a1 + 304);
    }
    *(_QWORD *)(a1 + 304) = v23 - 48;
    v21 = *(void (__fastcall **)(__int64, __int64, __int64))(v23 - 32);
    if ( v21 )
      v21(v23 - 48, v23 - 48, 3);
    if ( !v38.m128i_i64[0] )
      std::__throw_bad_function_call();
    ((void (__fastcall *)(__int128 *))v38.m128i_i64[1])(&v37);
    if ( v38.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v38.m128i_i64[0])(&v37, &v37, 3);
  }
  if ( v2 && &_pthread_key_create )
    pthread_mutex_unlock(v2);
  return v50 - __readfsqword(0x28u);
}

