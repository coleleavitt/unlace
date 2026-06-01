int __fastcall sub_9830D0(__int64 a1)
{
  __m128i *v2; // rdi
  int v3; // eax
  __int64 v4; // rax
  const __m128i *v5; // rbp
  void (__fastcall *v6)(__int64, __int64, __int64); // rax
  char v7; // r15
  void (__fastcall *v8)(__int64, __m128i *); // rdx
  __m128i v9; // xmm0
  int v10; // eax
  void (__fastcall *v11)(__m128i *, const __m128i *, __int64); // rax
  __int64 v12; // rax
  __int64 v13; // r12
  const __m128i *v14; // r15
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  void (__fastcall *v19)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  void (__fastcall *v22)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rbp
  const __m128i *i; // rbp
  void (__fastcall *v31)(__int64, __int64, __int64); // rax
  void (__fastcall *v32)(__m128i *, const __m128i *, __int64); // rax
  __int64 v33; // r12
  const __m128i *v34; // r15
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rax
  void (__fastcall *v39)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  void (__fastcall *v42)(_QWORD, _QWORD, _QWORD); // rcx
  void (__fastcall *v43)(_QWORD, _QWORD, _QWORD); // rdx
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v47; // [rsp+0h] [rbp-128h]
  __int64 v48; // [rsp+8h] [rbp-120h]
  pthread_mutex_t *mutex; // [rsp+10h] [rbp-118h]
  struct timespec abstime; // [rsp+20h] [rbp-108h] BYREF
  __m128i v51; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v52; // [rsp+40h] [rbp-E8h]
  __int8 v53; // [rsp+50h] [rbp-D8h]
  __int64 v54; // [rsp+58h] [rbp-D0h]
  __int64 v55; // [rsp+60h] [rbp-C8h]
  __m128i v56; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v57; // [rsp+80h] [rbp-A8h]
  __int8 v58; // [rsp+90h] [rbp-98h]
  __int64 v59; // [rsp+98h] [rbp-90h]
  __int64 v60; // [rsp+A0h] [rbp-88h]
  __m128i v61; // [rsp+B0h] [rbp-78h] BYREF
  void (__fastcall *v62)(_QWORD, _QWORD, _QWORD); // [rsp+C0h] [rbp-68h]
  __int64 v63; // [rsp+C8h] [rbp-60h]
  __int8 v64; // [rsp+D0h] [rbp-58h]
  __int64 v65; // [rsp+D8h] [rbp-50h]
  __int64 v66; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v67; // [rsp+E8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v2 = (__m128i *)(a1 + 48);
  mutex = (pthread_mutex_t *)v2;
  if ( &_pthread_key_create )
  {
    v3 = pthread_mutex_lock((pthread_mutex_t *)v2);
    if ( v3 )
      std::__throw_system_error(v3);
  }
  while ( !*(_BYTE *)(a1 + 24) )
  {
    while ( 1 )
    {
      v4 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v2);
      v5 = *(const __m128i **)(a1 + 136);
      v47 = v4;
      v48 = 1000000LL * *(_QWORD *)(a1 + 32);
      if ( v5 != *(const __m128i **)(a1 + 144) )
      {
        while ( 1 )
        {
          v11 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))v5[1].m128i_i64[0];
          v52 = 0u;
          v51 = 0;
          if ( v11 )
          {
            v2 = &v51;
            v11(&v51, v5, 2);
            v52 = _mm_loadu_si128(v5 + 1);
          }
          v53 = v5[2].m128i_i8[0];
          v54 = v5[2].m128i_i64[1];
          v12 = v5[3].m128i_i64[0];
          v55 = v12;
          if ( v12 >= v47 )
            break;
          v13 = *(_QWORD *)(a1 + 144);
          v14 = *(const __m128i **)(a1 + 136);
          if ( v13 - (__int64)v14 > 56 )
          {
            v15 = *(_QWORD *)(v13 - 32);
            *(_QWORD *)&v57 = 0;
            v56 = 0;
            *((_QWORD *)&v57 + 1) = v15;
            if ( *(_QWORD *)(v13 - 40) )
            {
              v16 = _mm_loadu_si128((const __m128i *)(v13 - 56));
              *(_QWORD *)&v57 = *(_QWORD *)(v13 - 40);
              v56 = v16;
              *(_OWORD *)(v13 - 40) = 0;
            }
            v58 = *(_BYTE *)(v13 - 24);
            v59 = *(_QWORD *)(v13 - 16);
            v17 = *(_QWORD *)(v13 - 8);
            v62 = nullptr;
            v60 = v17;
            v18 = v14[1].m128i_i64[1];
            v19 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v14[1].m128i_i64[0];
            v61 = 0;
            v63 = v18;
            if ( v19 )
            {
              v20 = _mm_loadu_si128(v14);
              v62 = v19;
              v61 = v20;
              v14[1] = 0;
            }
            v21 = _mm_load_si128(&v61);
            v61 = _mm_loadu_si128((const __m128i *)(v13 - 56));
            v22 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v13 - 40);
            *(__m128i *)(v13 - 56) = v21;
            v23 = v62;
            v62 = v22;
            *(_QWORD *)(v13 - 40) = v23;
            v63 = *(_QWORD *)(v13 - 32);
            *(_QWORD *)(v13 - 32) = v18;
            if ( v62 )
              v62(&v61, &v61, 3);
            *(_BYTE *)(v13 - 24) = v14[2].m128i_i8[0];
            *(_QWORD *)(v13 - 16) = v14[2].m128i_i64[1];
            *(_QWORD *)(v13 - 8) = v14[3].m128i_i64[0];
            v62 = nullptr;
            v63 = *((_QWORD *)&v57 + 1);
            v61 = 0;
            if ( (_QWORD)v57 )
            {
              v24 = _mm_load_si128(&v56);
              v62 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v57;
              v61 = v24;
              v57 = 0;
            }
            v64 = v58;
            v65 = v59;
            v66 = v60;
            sub_981E90((__int64)v14, 0, 0x6DB6DB6DB6DB6DB7LL * ((v13 - 56 - (__int64)v14) >> 3), &v61);
            if ( v62 )
              v62(&v61, &v61, 3);
            if ( (_QWORD)v57 )
              ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57)(&v56, &v56, 3);
            v13 = *(_QWORD *)(a1 + 144);
          }
          *(_QWORD *)(a1 + 144) = v13 - 56;
          v6 = *(void (__fastcall **)(__int64, __int64, __int64))(v13 - 40);
          if ( v6 )
            v6(v13 - 56, v13 - 56, 3);
          v7 = 1;
          if ( mutex )
          {
            if ( &_pthread_key_create )
              pthread_mutex_unlock(mutex);
            v7 = 0;
          }
          v8 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 16LL);
          v62 = nullptr;
          v61 = 0;
          v63 = v52.m128i_i64[1];
          if ( v52.m128i_i64[0] )
          {
            v9 = _mm_load_si128(&v51);
            v62 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v52.m128i_i64[0];
            v61 = v9;
            v52 = 0;
          }
          v2 = (__m128i *)a1;
          v64 = v53;
          v65 = v54;
          v8(a1, &v61);
          if ( v62 )
          {
            v2 = &v61;
            v62(&v61, &v61, 3);
          }
          if ( !mutex )
            std::__throw_system_error(1);
          if ( v7 )
            std::__throw_system_error(35);
          if ( &_pthread_key_create )
          {
            v2 = (__m128i *)mutex;
            v10 = pthread_mutex_lock(mutex);
            if ( v10 )
              std::__throw_system_error(v10);
          }
          if ( v52.m128i_i64[0] )
          {
            v2 = &v51;
            ((void (__fastcall *)(__m128i *, __m128i *, __int64))v52.m128i_i64[0])(&v51, &v51, 3);
          }
          v5 = *(const __m128i **)(a1 + 136);
          if ( *(const __m128i **)(a1 + 144) == v5 )
            goto LABEL_44;
        }
        v25 = v12 - v47;
        if ( v48 <= v25 )
          v25 = v48;
        v48 = v25;
        if ( v52.m128i_i64[0] )
        {
          v2 = &v51;
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v52.m128i_i64[0])(&v51, &v51, 3);
        }
      }
LABEL_44:
      v26 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v2);
      v27 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v2);
      v28 = std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)v2);
      v2 = (__m128i *)(a1 + 88);
      v29 = v26 + v28 - v27 + v48;
      abstime.tv_sec = v29 / 1000000000;
      abstime.tv_nsec = v29 % 1000000000;
      pthread_cond_timedwait((pthread_cond_t *)(a1 + 88), mutex, &abstime);
      if ( v29 > std::chrono::_V2::system_clock::now((std::chrono::_V2::system_clock *)(a1 + 88)) )
        break;
      std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v2);
      if ( *(_BYTE *)(a1 + 24) )
        goto LABEL_46;
    }
  }
LABEL_46:
  for ( i = *(const __m128i **)(a1 + 136); *(const __m128i **)(a1 + 144) != i; i = *(const __m128i **)(a1 + 136) )
  {
    v32 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))i[1].m128i_i64[0];
    v52 = 0u;
    v51 = 0;
    if ( v32 )
    {
      v32(&v51, i, 2);
      v52 = _mm_loadu_si128(i + 1);
    }
    v33 = *(_QWORD *)(a1 + 144);
    v34 = *(const __m128i **)(a1 + 136);
    v53 = i[2].m128i_i8[0];
    v54 = i[2].m128i_i64[1];
    v55 = i[3].m128i_i64[0];
    if ( v33 - (__int64)v34 > 56 )
    {
      v35 = *(_QWORD *)(v33 - 32);
      *(_QWORD *)&v57 = 0;
      v56 = 0;
      *((_QWORD *)&v57 + 1) = v35;
      if ( *(_QWORD *)(v33 - 40) )
      {
        v36 = _mm_loadu_si128((const __m128i *)(v33 - 56));
        *(_QWORD *)&v57 = *(_QWORD *)(v33 - 40);
        v56 = v36;
        *(_OWORD *)(v33 - 40) = 0;
      }
      v58 = *(_BYTE *)(v33 - 24);
      v59 = *(_QWORD *)(v33 - 16);
      v37 = *(_QWORD *)(v33 - 8);
      v62 = nullptr;
      v60 = v37;
      v38 = v34[1].m128i_i64[1];
      v39 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v34[1].m128i_i64[0];
      v61 = 0;
      v63 = v38;
      if ( v39 )
      {
        v40 = _mm_loadu_si128(v34);
        v62 = v39;
        v61 = v40;
        v34[1] = 0;
      }
      v41 = _mm_load_si128(&v61);
      v61 = _mm_loadu_si128((const __m128i *)(v33 - 56));
      v42 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v33 - 40);
      *(__m128i *)(v33 - 56) = v41;
      v43 = v62;
      v62 = v42;
      *(_QWORD *)(v33 - 40) = v43;
      v63 = *(_QWORD *)(v33 - 32);
      *(_QWORD *)(v33 - 32) = v38;
      if ( v62 )
        v62(&v61, &v61, 3);
      *(_BYTE *)(v33 - 24) = v34[2].m128i_i8[0];
      *(_QWORD *)(v33 - 16) = v34[2].m128i_i64[1];
      *(_QWORD *)(v33 - 8) = v34[3].m128i_i64[0];
      v62 = nullptr;
      v63 = *((_QWORD *)&v57 + 1);
      v61 = 0;
      if ( (_QWORD)v57 )
      {
        v44 = _mm_load_si128(&v56);
        v62 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v57;
        v61 = v44;
        v57 = 0;
      }
      v64 = v58;
      v65 = v59;
      v66 = v60;
      sub_981E90((__int64)v34, 0, 0x6DB6DB6DB6DB6DB7LL * ((v33 - 56 - (__int64)v34) >> 3), &v61);
      if ( v62 )
        v62(&v61, &v61, 3);
      if ( (_QWORD)v57 )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57)(&v56, &v56, 3);
      v33 = *(_QWORD *)(a1 + 144);
    }
    *(_QWORD *)(a1 + 144) = v33 - 56;
    v31 = *(void (__fastcall **)(__int64, __int64, __int64))(v33 - 40);
    if ( v31 )
      v31(v33 - 56, v33 - 56, 3);
    if ( !v52.m128i_i64[0] )
      std::__throw_bad_function_call();
    ((void (__fastcall *)(__m128i *))v52.m128i_i64[1])(&v51);
    if ( v52.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v52.m128i_i64[0])(&v51, &v51, 3);
  }
  if ( mutex && &_pthread_key_create )
    LODWORD(v45) = pthread_mutex_unlock(mutex);
  else
    return v67 - __readfsqword(0x28u);
  return v45;
}
