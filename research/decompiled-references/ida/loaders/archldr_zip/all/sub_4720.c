__int64 __fastcall sub_4720(
        _DWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        char *s1,
        __int64 *a8)
{
  __m128i v9; // xmm2
  const char *v10; // rsi
  __m128i v11; // xmm1
  int *v12; // rax
  void *v13; // rax
  __int64 v14; // r15
  __m128i *v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r13
  const char *v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  _QWORD *v23; // rcx
  const void *v24; // rbp
  size_t v25; // rax
  size_t v26; // rbx
  const char *v27; // rdx
  const char *v28; // rax
  const char *v29; // rbx
  size_t v30; // rax
  size_t v31; // rbp
  __int64 (__fastcall ***v32)(); // rbx
  __int64 (__fastcall ***v33)(); // rbp
  __int64 (__fastcall **v34)(); // rdi
  size_t v35; // r12
  void *v36; // rdi
  _QWORD *v37; // r14
  size_t v38; // r12
  void *v39; // rdi
  _QWORD *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v44; // [rsp+10h] [rbp-3178h] BYREF
  __int64 (__fastcall ***v45)(); // [rsp+20h] [rbp-3168h]
  const char *v46; // [rsp+28h] [rbp-3160h]
  __int64 *v47; // [rsp+30h] [rbp-3158h]
  _QWORD *v48; // [rsp+38h] [rbp-3150h]
  __int64 v49; // [rsp+40h] [rbp-3148h]
  _DWORD *v50; // [rsp+48h] [rbp-3140h]
  __int64 v51; // [rsp+58h] [rbp-3130h]
  __int64 (__fastcall **v52)(); // [rsp+60h] [rbp-3128h] BYREF
  __int64 v53; // [rsp+68h] [rbp-3120h]
  __int128 v54; // [rsp+70h] [rbp-3118h]
  __int64 v55; // [rsp+80h] [rbp-3108h]
  void *v56; // [rsp+88h] [rbp-3100h]
  int v57; // [rsp+90h] [rbp-30F8h]
  __m128i v58; // [rsp+98h] [rbp-30F0h] BYREF
  int v59; // [rsp+A8h] [rbp-30E0h]
  char v60; // [rsp+B0h] [rbp-30D8h] BYREF
  _BYTE v61[24]; // [rsp+F8h] [rbp-3090h] BYREF
  int v62; // [rsp+110h] [rbp-3078h] BYREF
  __int64 v63; // [rsp+118h] [rbp-3070h]
  void *v64; // [rsp+120h] [rbp-3068h] BYREF
  __int128 v65; // [rsp+128h] [rbp-3060h]
  _BYTE v66[4096]; // [rsp+140h] [rbp-3048h] BYREF
  _BYTE v67[4096]; // [rsp+1140h] [rbp-2048h] BYREF
  char v68[4104]; // [rsp+2140h] [rbp-1048h] BYREF
  unsigned __int64 v69; // [rsp+3148h] [rbp-40h]

  v9 = _mm_loadl_epi64((const __m128i *)&off_7BE0);
  v50 = a1;
  v48 = a2;
  v49 = a4;
  v46 = a6;
  v47 = a8;
  v69 = __readfsqword(0x28u);
  *a1 = 0;
  v45 = &v52;
  v44 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)off_7A40);
  while ( !s1 || !*s1 )
  {
    v10 = (const char *)&unk_6308;
    if ( a3[1] )
      v10 = (const char *)*a3;
    v11 = _mm_load_si128(&v44);
    v52 = (__int64 (__fastcall **)())&unk_7C20;
    v55 = 0;
    v56 = nullptr;
    v57 = 3;
    v59 = -1;
    v53 = 0x3FF000004LL;
    v12 = (int *)&v60;
    v54 = -1;
    v58 = v11;
    do
    {
      *(_QWORD *)v12 = 0;
      v12 += 6;
      *((_OWORD *)v12 - 1) = 0;
    }
    while ( v12 != &v62 );
    v62 = 0;
    if ( ((HIDWORD(v53) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v53) != 0xFF )
      {
        if ( !under_debugger )
          interr(3449, v10, HIDWORD(v53), ((HIDWORD(v53) >> 19) & 0x3F) - 1, 0.0);
        BUG();
      }
      BYTE3(v53) = ((HIDWORD(v53) >> 19) & 0x3F) - 1;
      HIDWORD(v53) &= 0xFE07FFFF;
    }
    v63 = a5;
    v52 = off_78F0;
    v64 = nullptr;
    DWORD1(v54) = -2;
    v65 = 0;
    sub_4570((__int64 *)&v64, (__int64)"Archive: %s Type: %s", v10, v46);
    v13 = &unk_6308;
    if ( (_QWORD)v65 )
      v13 = v64;
    v56 = v13;
    v51 = 0;
    v14 = callui(16, 0, v45);
    if ( v14 < 0 )
    {
      v52 = off_78F0;
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v64);
      }
      v52 = (__int64 (__fastcall **)())&unk_7C20;
      v32 = (__int64 (__fastcall ***)())v61;
      v33 = v45 + 7;
      do
      {
        v34 = *v32;
        if ( *v32 )
        {
          v32[1] = nullptr;
          qfree(v34);
        }
        v32 -= 3;
      }
      while ( v33 != v32 );
      return 0xFFFFFFFFLL;
    }
    v52 = off_78F0;
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(v64);
    }
    v52 = (__int64 (__fastcall **)())&unk_7C20;
    v15 = (__m128i *)v61;
    do
    {
      v16 = v15->m128i_i64[0];
      if ( v15->m128i_i64[0] )
      {
        v15->m128i_i64[1] = 0;
        qfree(v16);
      }
      v15 = (__m128i *)((char *)v15 - 24);
    }
    while ( v15 != &v58 );
    v17 = 4 * v14;
LABEL_21:
    v18 = *(_QWORD *)a5 + 8 * (v14 + v17);
    if ( (*(_DWORD *)(v18 + 32) & 0xFFFFFFF7) == 0 )
    {
      v23 = v48;
      *v48 = v49;
      v23[4] = *(_QWORD *)(v18 + 8);
      v24 = *(const void **)(v18 + 24);
      if ( v24 && (v25 = strlen(*(const char **)(v18 + 24)), (v26 = v25) != 0) )
      {
        v35 = v25 + 1;
        v36 = (void *)v48[1];
        if ( v48[3] < v25 + 1 )
        {
          v40 = v48;
          v41 = qvector_reserve(v48 + 1, v48[1], v35, 1);
          v40[1] = v41;
          v36 = (void *)v41;
        }
        v37 = v48;
        v48[2] = v35;
        memmove(v36, v24, v26);
        *(_BYTE *)(v37[1] + v26) = 0;
      }
      else
      {
        v48[2] = 0;
      }
      qlseek(v49, *(_QWORD *)v18, 0);
      *v50 = *(_DWORD *)(v18 + 32);
      qstrncpy(v66, *(_QWORD *)(v18 + 24), 4096);
      sanitize_file_name(v66, 4096);
      v27 = (const char *)&unk_6308;
      if ( a3[1] )
        v27 = (const char *)*a3;
      qdirname(v67, 4096, v27);
      v28 = (const char *)qmakepath(v68, 4096, v67, v66, 0);
      v29 = v28;
      if ( v28 && (v30 = strlen(v28), (v31 = v30) != 0) )
      {
        v38 = v30 + 1;
        v39 = (void *)*a3;
        if ( a3[2] < v30 + 1 )
        {
          v42 = qvector_reserve(a3, *a3, v38, 1);
          *a3 = v42;
          v39 = (void *)v42;
        }
        a3[1] = v38;
        memmove(v39, v29, v31);
        *(_BYTE *)(*a3 + v31) = 0;
      }
      else
      {
        a3[1] = 0;
      }
      return 1;
    }
    sub_2C40((__int64)"%s");
  }
  if ( *(int *)(a5 + 8) > 0 )
  {
    v14 = 0;
    while ( 1 )
    {
      v17 = 4 * v14;
      v19 = (const char *)qbasename(*(_QWORD *)(*(_QWORD *)a5 + 40 * v14 + 24));
      v20 = strcmp(s1, v19);
      v21 = *(int *)(a5 + 8);
      if ( !v20 )
        break;
      if ( ++v14 >= v21 )
        goto LABEL_28;
    }
    if ( v21 > v14 )
      goto LABEL_21;
  }
LABEL_28:
  if ( v47 )
    sub_4570(v47, (__int64)"The requested archive member '%s' could not be found", s1);
  return 0;
}

