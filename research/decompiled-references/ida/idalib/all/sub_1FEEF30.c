__int64 __fastcall sub_1FEEF30(__int64 a1, __int64 a2, __m128 si128, __m128i a4)
{
  __int64 v4; // r12
  pthread_mutex_t **v5; // r13
  __int64 v6; // rbx
  pthread_mutex_t *v7; // r14
  int v9; // eax
  int *v10; // rax
  int v11; // r12d
  __m128i *v12; // rax
  size_t v13; // rcx
  size_t v14; // r12
  unsigned __int64 v15; // rdx
  __m128i *v16; // rax
  unsigned __int64 v17; // rdi
  size_t v18; // rsi
  size_t v19; // r8
  __int8 *v20; // rcx
  unsigned __int64 v21; // rbx
  __m128i *v22; // rax
  size_t v23; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rbx
  __m128 *v27; // rax
  __m128i *v28; // rax
  size_t v29; // rsi
  void **v30; // rdi
  size_t v31; // r8
  _BYTE *v32; // rcx
  size_t v33; // rbx
  void *v34; // rax
  pthread_mutex_t *v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // rdx
  volatile signed __int32 *v38; // rax
  volatile signed __int32 *v39; // r14
  void **v40; // r15
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  volatile signed __int32 *v47; // r15
  void *v48; // rdi
  void *v49; // r15
  __int64 v51; // r15
  void (__fastcall *v52)(void **, __int64, __int64, __int64, __int64); // rax
  void **v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r12
  _QWORD *v58; // r15
  _QWORD *v59; // r12
  _QWORD *v60; // rdi
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 result; // rax
  __int8 *v64; // rdi
  __int64 v65; // r12
  pthread_mutex_t *v66; // rbp
  _QWORD *v67; // r12
  size_t v68; // rsi
  _QWORD *v69; // rax
  char *v70; // r14
  unsigned __int64 v71; // rdx
  _BYTE *v72; // rdi
  __m128i v73; // xmm2
  __m128i v74; // xmm4
  __m128i v75; // xmm3
  __int64 v76; // [rsp-10h] [rbp-278h]
  __int64 v77; // [rsp-8h] [rbp-270h]
  void **v79; // [rsp+10h] [rbp-258h] BYREF
  volatile signed __int32 *v80; // [rsp+18h] [rbp-250h]
  __int64 v81; // [rsp+20h] [rbp-248h]
  pthread_mutex_t *mutex; // [rsp+28h] [rbp-240h]
  void *v83[4]; // [rsp+30h] [rbp-238h] BYREF
  void *v84; // [rsp+50h] [rbp-218h] BYREF
  size_t v85; // [rsp+58h] [rbp-210h]
  __m128i v86; // [rsp+60h] [rbp-208h] BYREF
  void *v87; // [rsp+70h] [rbp-1F8h] BYREF
  size_t v88; // [rsp+78h] [rbp-1F0h]
  __m128i v89; // [rsp+80h] [rbp-1E8h] BYREF
  void *v90; // [rsp+90h] [rbp-1D8h] BYREF
  size_t v91; // [rsp+98h] [rbp-1D0h]
  __m128i v92; // [rsp+A0h] [rbp-1C8h] BYREF
  void *v93; // [rsp+B0h] [rbp-1B8h] BYREF
  void *v94; // [rsp+B8h] [rbp-1B0h]
  __m128i v95; // [rsp+C0h] [rbp-1A8h] BYREF
  void *v96[2]; // [rsp+D0h] [rbp-198h] BYREF
  __m128i v97; // [rsp+E0h] [rbp-188h] BYREF
  void *v98[2]; // [rsp+F0h] [rbp-178h] BYREF
  void (__fastcall *v99)(void **, void **, __int64); // [rsp+100h] [rbp-168h]
  __int16 v100; // [rsp+110h] [rbp-158h]
  void *src[2]; // [rsp+120h] [rbp-148h] BYREF
  void (__fastcall *v102)(void **, void **, __int64); // [rsp+130h] [rbp-138h] BYREF
  __int16 v103; // [rsp+140h] [rbp-128h]
  void *v104[2]; // [rsp+150h] [rbp-118h] BYREF
  _QWORD v105[2]; // [rsp+160h] [rbp-108h] BYREF
  __int16 v106; // [rsp+170h] [rbp-F8h]
  void *v107[2]; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v108; // [rsp+190h] [rbp-D8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(pthread_mutex_t ***)a1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(pthread_mutex_t **)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_144;
  if ( &_pthread_key_create )
  {
    v9 = pthread_mutex_lock(*(pthread_mutex_t **)v4);
    if ( v9 )
      goto LABEL_143;
  }
  v10 = *(int **)(v4 + 8);
  v11 = *v10 + 1;
  *v10 = v11;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v7);
  v80 = (volatile signed __int32 *)v83;
  sub_D8B070(
    v83,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    v11);
  v12 = (__m128i *)sub_99BDC0(v83, 0, 0, "[", 1u);
  v84 = &v86;
  if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
  {
    a4 = _mm_loadu_si128(v12 + 1);
    v86 = a4;
  }
  else
  {
    v84 = (void *)v12->m128i_i64[0];
    v86.m128i_i64[0] = v12[1].m128i_i64[0];
  }
  v13 = v12->m128i_u64[1];
  v12[1].m128i_i8[0] = 0;
  v85 = v13;
  v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
  v12->m128i_i64[1] = 0;
  v14 = v85;
  if ( v85 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_141;
  if ( v84 == &v86 )
    v15 = 15;
  else
    v15 = v86.m128i_i64[0];
  if ( v85 + 1 > v15 )
    sub_998B30((__int64)&v84, v85, 0, "/", 1u);
  else
    *((_BYTE *)v84 + v85) = 47;
  v85 = v14 + 1;
  *((_BYTE *)v84 + v14 + 1) = 0;
  v16 = (__m128i *)v84;
  v87 = &v89;
  if ( v84 == &v86 )
  {
    v18 = v85;
    v73 = _mm_load_si128(&v86);
    v86.m128i_i8[0] = 0;
    v16 = &v89;
    v85 = 0;
    v17 = 15;
    v89 = v73;
    v88 = v18;
    v19 = *(_QWORD *)(v6 + 8);
    v20 = *(__int8 **)v6;
    v21 = v19 + v18;
  }
  else
  {
    v17 = v86.m128i_i64[0];
    v18 = v85;
    v86.m128i_i8[0] = 0;
    v85 = 0;
    v89.m128i_i64[0] = v17;
    if ( v84 == &v89 )
      v17 = 15;
    v88 = v18;
    v19 = *(_QWORD *)(v6 + 8);
    v87 = v84;
    v84 = &v86;
    v20 = *(__int8 **)v6;
    v21 = v19 + v18;
  }
  if ( v21 > v17 )
  {
    sub_998B30((__int64)&v87, v18, 0, v20, v19);
    v16 = (__m128i *)v87;
  }
  else if ( v19 )
  {
    v64 = &v16->m128i_i8[v18];
    if ( v19 == 1 )
      *v64 = *v20;
    else
      memcpy(v64, v20, v19);
    v16 = (__m128i *)v87;
  }
  v88 = v21;
  v16->m128i_i8[v21] = 0;
  v79 = &v90;
  v22 = (__m128i *)v87;
  v90 = &v92;
  if ( v87 == &v89 )
  {
    v75 = _mm_load_si128(&v89);
    v23 = v88;
    v88 = 0;
    v89.m128i_i8[0] = 0;
    v92 = v75;
    v91 = v23;
    if ( 0x7FFFFFFFFFFFFFFFLL - v23 > 0x11 )
    {
      v26 = v23 + 18;
      v22 = &v92;
      v24 = 15;
      goto LABEL_23;
    }
LABEL_141:
    std::__throw_length_error("basic_string::append");
  }
  v23 = v88;
  v24 = v89.m128i_i64[0];
  v87 = &v89;
  v90 = v22;
  v25 = 0x7FFFFFFFFFFFFFFFLL - v88;
  v92.m128i_i64[0] = v89.m128i_i64[0];
  v91 = v88;
  v88 = 0;
  v89.m128i_i8[0] = 0;
  if ( v25 <= 0x11 )
    goto LABEL_141;
  v26 = v23 + 18;
  if ( v22 == &v92 )
    v24 = 15;
LABEL_23:
  if ( v26 > v24 )
  {
    sub_998B30((__int64)v79, v23, 0, "] Processing file ", 0x12u);
  }
  else
  {
    v27 = (__m128 *)&v22->m128i_i8[v23];
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AAE70);
    v27[1].m128_i16[0] = 8293;
    *v27 = si128;
  }
  v91 = v26;
  *((_BYTE *)v90 + v26) = 0;
  v28 = (__m128i *)v90;
  v93 = &v95;
  if ( v90 == v79 + 2 )
  {
    v29 = v91;
    v30 = (void **)(byte_9 + 6);
    v91 = 0;
    v74 = _mm_load_si128(&v92);
    v92.m128i_i8[0] = 0;
    v31 = *(_QWORD *)(a2 + 8);
    v32 = *(_BYTE **)a2;
    v94 = (void *)v29;
    v28 = &v95;
    v95 = v74;
    v33 = v31 + v29;
  }
  else
  {
    v29 = v91;
    v93 = v90;
    v30 = (void **)v92.m128i_i64[0];
    v91 = 0;
    v31 = *(_QWORD *)(a2 + 8);
    v94 = (void *)v29;
    v92.m128i_i8[0] = 0;
    v95.m128i_i64[0] = (__int64)v30;
    if ( v90 == &v95 )
      v30 = (void **)(byte_9 + 6);
    v90 = v79 + 2;
    v32 = *(_BYTE **)a2;
    v33 = v31 + v29;
  }
  if ( v33 > (unsigned __int64)v30 )
  {
    v30 = &v93;
    sub_998B30((__int64)&v93, v29, 0, v32, v31);
    v28 = (__m128i *)v93;
  }
  else if ( v31 )
  {
    v30 = (void **)((char *)v28->m128i_i64 + v29);
    if ( v31 == 1 )
    {
      *(_BYTE *)v30 = *v32;
    }
    else
    {
      v29 = (size_t)v32;
      memcpy(v30, v32, v31);
    }
    v28 = (__m128i *)v93;
  }
  v94 = (void *)v33;
  v28->m128i_i8[v33] = 0;
  v96[0] = &v97;
  if ( v93 == &v95 )
  {
    v97 = _mm_load_si128(&v95);
  }
  else
  {
    v96[0] = v93;
    v97.m128i_i64[0] = v95.m128i_i64[0];
  }
  v34 = v94;
  v95.m128i_i8[0] = 0;
  v94 = nullptr;
  v96[1] = v34;
  v93 = &v95;
  v35 = *v5;
  src[0] = v96;
  mutex = v35;
  v103 = 260;
  if ( !v35 )
    goto LABEL_144;
  if ( &_pthread_key_create )
  {
    v30 = (void **)v35;
    v9 = pthread_mutex_lock(v35);
    if ( v9 )
      goto LABEL_143;
  }
  v81 = sub_227D6D0(v30, v29);
  sub_2253560(v107, src);
  v36 = sub_227BF10(v81, v107[0], v107[1]);
  v37 = *(_BYTE **)(v36 + 32);
  if ( *(_BYTE **)(v36 + 24) == v37 )
  {
    sub_227BF10(v36, "\n", 1);
  }
  else
  {
    *v37 = 10;
    ++*(_QWORD *)(v36 + 32);
  }
  if ( v107[0] != &v108 )
    operator delete(v107[0]);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  if ( v96[0] != &v97 )
    operator delete(v96[0]);
  if ( v93 != &v95 )
    operator delete(v93);
  if ( v90 != v79 + 2 )
    operator delete(v90);
  if ( v87 != &v89 )
    operator delete(v87);
  if ( v84 != &v86 )
    operator delete(v84);
  if ( v83[0] != v80 + 4 )
    operator delete(v83[0]);
  sub_2260470(v107);
  v38 = (volatile signed __int32 *)v107[0];
  v107[0] = nullptr;
  v80 = v38;
  if ( v38 )
  {
    v39 = v38 + 2;
    _InterlockedAdd(v38 + 2, 1u);
    if ( v107[0] )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v107[0] + 8LL))(v107[0]);
    v98[0] = nullptr;
    v96[0] = (void *)v80;
    _InterlockedAdd(v39, 1u);
  }
  else
  {
    v98[0] = nullptr;
    v96[0] = nullptr;
  }
  src[0] = nullptr;
  v40 = (void **)operator new(0x80u);
  v40[1] = (void *)0x100000001LL;
  *v40 = off_2C71350;
  sub_1FE2A60((__int64)(v40 + 2), *(double *)si128.m128_u64, *(double *)a4.m128i_i64);
  v79 = v40;
  v41 = *(_BYTE **)a2;
  v42 = *(_QWORD *)(a2 + 8);
  v104[0] = v105;
  *(__m128 *)src = _mm_loadh_ps((const double *)&v79);
  sub_1FEDCB0(v104, v41, (__int64)&v41[v42]);
  v43 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 80LL);
  v79 = v98;
  sub_20096F0((unsigned int)v107, v43, (unsigned int)v104, 1, (unsigned int)src, (unsigned int)v96, (__int64)v98);
  v46 = v77;
  if ( v104[0] != v105 )
    operator delete(v104[0]);
  v47 = (volatile signed __int32 *)src[1];
  if ( !src[1] )
    goto LABEL_63;
  if ( &_pthread_key_create )
  {
    v44 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)src[1] + 2, 0xFFFFFFFF);
    if ( (_DWORD)v44 != 1 )
      goto LABEL_63;
  }
  else
  {
    v44 = *((unsigned int *)src[1] + 2);
    v45 = (unsigned int)(v44 - 1);
    *((_DWORD *)src[1] + 2) = v45;
    if ( (_DWORD)v44 != 1 )
      goto LABEL_63;
  }
  (*(void (__fastcall **)(volatile signed __int32 *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v47 + 16LL))(
    v47,
    v76,
    *(_QWORD *)v47,
    v45,
    v46);
  if ( &_pthread_key_create )
  {
    v44 = (unsigned int)_InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF);
  }
  else
  {
    v44 = *((unsigned int *)v47 + 3);
    v45 = (unsigned int)(v44 - 1);
    *((_DWORD *)v47 + 3) = v45;
  }
  if ( (_DWORD)v44 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 24LL))(v47);
LABEL_63:
  v48 = v96[0];
  if ( v96[0] && !_InterlockedSub((volatile signed __int32 *)v96[0] + 2, 1u) )
    (*(void (__fastcall **)(void *, __int64, __int64, __int64, __int64))(*(_QWORD *)v48 + 8LL))(v48, v76, v44, v45, v46);
  v49 = v98[0];
  if ( v98[0] )
  {
    if ( (*(_DWORD *)v98[0])-- == 1 )
    {
      sub_FD6C20((__int64)v49);
      operator delete(v49, 0x328u);
    }
  }
  v105[0] = 0;
  v51 = *(_QWORD *)(a1 + 32);
  v52 = *(void (__fastcall **)(void **, __int64, __int64, __int64, __int64))(v51 + 24);
  if ( v52 )
  {
    v52(v104, v51 + 8, 2, v45, v46);
    v105[1] = *(_QWORD *)(v51 + 32);
    v105[0] = *(_QWORD *)(v51 + 24);
  }
  sub_2009580(v107, v104, v44, v45, v46);
  if ( v105[0] )
    ((void (__fastcall *)(void **, void **, __int64))v105[0])(v104, v104, 3);
  sub_1FF1130(src);
  v53 = v79;
  sub_1FF10D0(v79);
  sub_1FF13E0(v104, v53, src);
  sub_1FF1100(v96);
  sub_1FF13E0(&v93, v96, v104);
  if ( v97.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v97.m128i_i64[0])(v96, v96, 3);
  if ( v105[0] )
    ((void (__fastcall *)(void **, void **, __int64))v105[0])(v104, v104, 3);
  if ( v99 )
    v99(v79, v79, 3);
  if ( v102 )
    v102(src, src, 3);
  sub_2009580(v107, &v93, v54, v55, v56);
  if ( v95.m128i_i64[0] )
    ((void (__fastcall *)(void **, void **, __int64))v95.m128i_i64[0])(&v93, &v93, 3);
  v57 = *(_QWORD *)(a1 + 24);
  sub_11727E0((__int64 **)v104, *(__int64 **)(v57 + 112), *(_DWORD *)(v57 + 120) == 0);
  v58 = v104[0];
  sub_11727E0((__int64 **)v104, (__int64 *)(*(_QWORD *)(v57 + 112) + 8LL * *(unsigned int *)(v57 + 120)), 1);
  v59 = v104[0];
  if ( v104[0] != v58 )
  {
    v60 = (_QWORD *)*v58;
    do
    {
      while ( 1 )
      {
        sub_2009EE0(v107, v60 + 5, *v60, v60[1], v60[2]);
        v60 = (_QWORD *)v58[1];
        v61 = v58 + 1;
        if ( !v60 || v60 == (_QWORD *)-8LL )
          break;
        ++v58;
        if ( v59 == v61 )
          goto LABEL_91;
      }
      v62 = v58 + 2;
      do
      {
        do
        {
          v60 = (_QWORD *)*v62;
          v58 = v62++;
        }
        while ( v60 == (_QWORD *)-8LL );
      }
      while ( !v60 );
    }
    while ( v59 != v58 );
  }
LABEL_91:
  if ( (unsigned int)sub_200BB40(v107, **(_QWORD **)(a1 + 32)) )
  {
    v65 = *(_QWORD *)(a1 + 40);
    v98[0] = "Failed to run action on ";
    v66 = *(pthread_mutex_t **)v65;
    v106 = 770;
    v99 = (void (__fastcall *)(void **, void **, __int64))a2;
    v100 = 1027;
    v104[0] = v79;
    v105[0] = "\n";
    if ( v66 )
    {
      if ( !&_pthread_key_create || (v9 = pthread_mutex_lock(v66)) == 0 )
      {
        sub_2253560(src, v104);
        v67 = *(_QWORD **)(v65 + 8);
        v68 = v67[1];
        v69 = (_QWORD *)*v67;
        v70 = (char *)src[1] + v68;
        if ( (_QWORD *)*v67 == v67 + 2 )
          v71 = 15;
        else
          v71 = v67[2];
        if ( (unsigned __int64)v70 > v71 )
        {
          sub_998B30((__int64)v67, v68, 0, (_BYTE *)src[0], (size_t)src[1]);
          v69 = (_QWORD *)*v67;
        }
        else if ( src[1] )
        {
          v72 = (char *)v69 + v68;
          if ( src[1] == (char *)&dword_0 + 1 )
            *v72 = *(_BYTE *)src[0];
          else
            memcpy(v72, src[0], (size_t)src[1]);
          v69 = (_QWORD *)*v67;
        }
        v67[1] = v70;
        v70[(_QWORD)v69] = 0;
        if ( src[0] != &v102 )
          operator delete(src[0]);
        if ( &_pthread_key_create )
          pthread_mutex_unlock(v66);
        goto LABEL_92;
      }
LABEL_143:
      std::__throw_system_error(v9);
    }
LABEL_144:
    std::__throw_system_error(1);
  }
LABEL_92:
  sub_20093A0(v107);
  result = (__int64)v80;
  if ( v80 )
  {
    if ( !_InterlockedSub(v80 + 2, 1u) )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
  }
  return result;
}
