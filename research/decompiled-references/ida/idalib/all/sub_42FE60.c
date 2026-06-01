__int64 __fastcall sub_42FE60(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r13
  __int128 *v5; // rbp
  _QWORD *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  bool v10; // zf
  __int64 v12; // r13
  __int64 v13; // rax
  char *v14; // r14
  char *v15; // r13
  const char *v16; // rsi
  char *v17; // rdi
  char *v18; // rdx
  void *v19; // r14
  void *v20; // r13
  char *v21; // rax
  void *v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  void *v29; // r13
  unsigned __int64 v30; // rax
  void *v31; // r14
  __m128i v32; // xmm0
  void *v33; // r14
  __m128i si128; // xmm0
  __int64 *v35; // r14
  __int64 v36; // r13
  void *v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  _QWORD *v40; // r14
  _QWORD *v41; // r13
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  char *v45; // rcx
  __int64 v46; // rax
  _QWORD *v47; // r8
  unsigned __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdi
  void *v53; // rdx
  __int64 (__fastcall **v54)(); // r13
  __int64 v55; // rax
  __int64 v56; // rax
  char *v57; // rdx
  __int64 v58; // r12
  __int64 v59; // rbx
  char *v60; // rax
  void *v61; // rdi
  char *v62; // rax
  void *v63; // rdi
  __int64 v64; // rax
  size_t v65; // r13
  int v66[4]; // [rsp+0h] [rbp-1E8h] BYREF
  int v67; // [rsp+10h] [rbp-1D8h]
  void *v68; // [rsp+18h] [rbp-1D0h]
  __int64 *v69; // [rsp+20h] [rbp-1C8h]
  unsigned __int64 *v70; // [rsp+28h] [rbp-1C0h]
  __int64 *v71; // [rsp+30h] [rbp-1B8h]
  unsigned __int64 *v72; // [rsp+38h] [rbp-1B0h]
  void *v73; // [rsp+40h] [rbp-1A8h] BYREF
  void *v74; // [rsp+48h] [rbp-1A0h] BYREF
  __int128 v75; // [rsp+50h] [rbp-198h] BYREF
  unsigned __int64 v76; // [rsp+60h] [rbp-188h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-180h]
  __int64 v78; // [rsp+70h] [rbp-178h] BYREF
  __int64 v79; // [rsp+78h] [rbp-170h]
  void *v80; // [rsp+80h] [rbp-168h] BYREF
  __int128 v81; // [rsp+88h] [rbp-160h]
  int v82; // [rsp+98h] [rbp-150h]
  char *s; // [rsp+A0h] [rbp-148h] BYREF
  __int128 v84; // [rsp+A8h] [rbp-140h]
  int v85; // [rsp+B8h] [rbp-130h]
  char *s1; // [rsp+C0h] [rbp-128h] BYREF
  int v87[4]; // [rsp+C8h] [rbp-120h] BYREF
  int v88[2]; // [rsp+D8h] [rbp-110h]
  int v89[2]; // [rsp+E0h] [rbp-108h]
  __int128 v90; // [rsp+E8h] [rbp-100h]
  int v91; // [rsp+F8h] [rbp-F0h]
  void *v92; // [rsp+100h] [rbp-E8h] BYREF
  void *v93[2]; // [rsp+108h] [rbp-E0h] BYREF
  void *ptr; // [rsp+118h] [rbp-D0h] BYREF
  int v95[4]; // [rsp+120h] [rbp-C8h]
  __int64 v96; // [rsp+130h] [rbp-B8h]
  int v97; // [rsp+138h] [rbp-B0h]
  __int64 v98; // [rsp+140h] [rbp-A8h] BYREF
  int v99; // [rsp+148h] [rbp-A0h] BYREF
  void *v100; // [rsp+150h] [rbp-98h]
  int *v101; // [rsp+158h] [rbp-90h]
  int *v102; // [rsp+160h] [rbp-88h]
  __int64 v103; // [rsp+168h] [rbp-80h]
  __int64 v104; // [rsp+170h] [rbp-78h]
  __m128i v105; // [rsp+180h] [rbp-68h] BYREF
  __m128i v106; // [rsp+190h] [rbp-58h]
  unsigned __int64 v107; // [rsp+1A8h] [rbp-40h]

  v3 = a2;
  LODWORD(v69) = a3;
  v5 = &v75;
  v107 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1672);
  v75 = 0;
  sub_630CA0(*v6, 26, &v75, 16);
  if ( (_QWORD)v75 == a2 )
  {
    LODWORD(v5) = 1;
    return (unsigned int)v5;
  }
  v7 = v6[3];
  v76 = a2;
  v8 = a2 - v75;
  v9 = a2 - v75 + *((_QWORD *)&v75 + 1);
  v10 = *(_DWORD *)(v7 + 24) == 4;
  v77 = v9;
  if ( v10 )
  {
    if ( (unsigned __int8)rangeset_t_has_common(v6 + 135, &v76, 0) )
    {
LABEL_4:
      LODWORD(v5) = 0;
      return (unsigned int)v5;
    }
    v3 = v76;
    v9 = v77;
  }
  if ( v3 >= v9 )
    goto LABEL_4;
  v70 = &v76;
  if ( (unsigned __int8)rangeset_t_has_common(v6 + 130, &v76, 0) )
    goto LABEL_4;
  v12 = sub_634F70(a1);
  v13 = sub_634EF0(a1);
  v79 = v12;
  v78 = v13;
  v71 = &v78;
  v81 = 0;
  v80 = nullptr;
  v105 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v78, (__m128i)(unsigned __int64)&v80);
  v106 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B28628), (__m128i)(unsigned __int64)sub_42B980);
  sub_7BB110(a1, &byte_22F0C30, &v105);
  if ( v106.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v106.m128i_i64[0])(&v105, &v105, 3);
  *(_QWORD *)v66 = &s1;
  v68 = &v92;
  v14 = (char *)v80 + 32 * v81;
  v15 = (char *)v80;
  if ( v14 != v80 )
  {
    do
    {
      s1 = nullptr;
      *(_OWORD *)v87 = 0;
      v92 = *(void **)v15;
      if ( sub_7BF130(v68, a1, *(_QWORD *)v66) <= 0 )
      {
LABEL_22:
        if ( !(_BYTE)v69 )
          sub_368890();
        *(_OWORD *)v93 = 0;
        v92 = nullptr;
        sub_7BD850(a1, v68, v71, 1);
        v18 = (char *)v92;
        if ( v92 )
        {
          v19 = v93[0];
          if ( v93[0] )
          {
            v20 = nullptr;
            do
            {
              v21 = &v18[24 * (_QWORD)v20];
              v22 = *(void **)v21;
              if ( *(_QWORD *)v21 )
              {
                *((_QWORD *)v21 + 1) = 0;
                qfree(v22);
                v18 = (char *)v92;
              }
              v20 = (char *)v20 + 1;
            }
            while ( v19 != v20 );
          }
          v93[0] = nullptr;
          qfree(v18);
        }
        if ( s1 )
        {
          *(_QWORD *)v87 = 0;
          qfree(s1);
        }
        break;
      }
      if ( *((_QWORD *)v15 + 2) )
      {
        v16 = *((const char **)v15 + 1);
        v17 = (char *)haystack;
        if ( !*(_QWORD *)v87 )
          goto LABEL_13;
      }
      else
      {
        v16 = haystack;
        if ( !*(_QWORD *)v87 )
          goto LABEL_14;
      }
      v17 = s1;
LABEL_13:
      if ( strcmp(v17, v16) )
        goto LABEL_22;
LABEL_14:
      if ( s1 )
      {
        *(_QWORD *)v87 = 0;
        qfree(s1);
      }
      v15 += 32;
    }
    while ( v14 != v15 );
  }
  sub_42D2E0(a1);
  v92 = v6;
  v97 = -1;
  ptr = nullptr;
  v96 = 0;
  v99 = 0;
  v100 = nullptr;
  v101 = &v99;
  v102 = &v99;
  v103 = 0;
  v104 = v8;
  *(_OWORD *)v93 = 0;
  *(_OWORD *)v95 = 0;
  sub_630CA0(*v6, 26, v93, 16);
  v23 = sub_7AFEE0(*(_QWORD *)v92);
  v24 = sub_631AD0(*(_QWORD *)v92, 29);
  v28 = v23;
  v29 = v93[1];
  v30 = v28 - v24;
  if ( (void *)v30 < v93[1] )
  {
    v29 = (void *)(v30 + 1);
    v93[1] = (void *)(v30 + 1);
  }
  v31 = v93[0];
  s1 = nullptr;
  *(_QWORD *)v88 = 0;
  v89[0] = -1;
  *(_OWORD *)v87 = 0;
  if ( v93[0] >= v29
    || (s1 = (char *)qvector_reserve(&s1, 0, 1, 16),
        LODWORD(v24) = 16 * v87[0],
        *(__m128i *)&s1[16 * *(_QWORD *)v87] = _mm_unpacklo_epi64(
                                                 (__m128i)(unsigned __int64)v31,
                                                 (__m128i)(unsigned __int64)v29),
        v10 = *(_QWORD *)v87 == -1,
        v64 = *(_QWORD *)v87 + 1LL,
        ++*(_QWORD *)v87,
        v10) )
  {
    v32 = 0;
    v33 = nullptr;
  }
  else
  {
    *(_QWORD *)v66 = v64;
    v65 = 16 * v64;
    v33 = (void *)qalloc_or_throw(16 * v64);
    memcpy(v33, s1, v65);
    v32 = _mm_loadl_epi64((const __m128i *)v66);
  }
  si128 = _mm_unpacklo_epi64(v32, v32);
  if ( ptr )
  {
    *(__m128i *)v66 = si128;
    *(_QWORD *)v95 = 0;
    qfree(ptr);
    si128 = _mm_load_si128((const __m128i *)v66);
  }
  ptr = v33;
  v96 = 0;
  *(__m128i *)v95 = si128;
  if ( s1 )
  {
    *(_QWORD *)v87 = 0;
    qfree(s1);
  }
  rangeset_t_intersect(
    (int)&ptr,
    (_DWORD)v92 + 1040,
    v24,
    v25,
    v26,
    v27,
    v66[0],
    v66[2],
    v67,
    (int)v68,
    (int)v69,
    (int)v70,
    (int)v71,
    (int)v72,
    (int)v73,
    (int)v74,
    v75,
    SDWORD2(v75),
    v76,
    v77,
    v78,
    v79,
    (int)v80,
    v81,
    SDWORD2(v81),
    v82,
    (int)s,
    v84,
    SDWORD2(v84),
    v85,
    (int)s1,
    v87[0],
    v87[2],
    v88[0],
    v89[0],
    v90,
    SDWORD2(v90),
    v91,
    (int)v92,
    v93[0],
    (__int64)v93[1],
    (int)ptr,
    v95[0],
    v95[2],
    v96);
  if ( !*(_QWORD *)v95 )
    goto LABEL_60;
  memset(v87, 0, sizeof(v87));
  s1 = (char *)&off_2B283E8;
  v88[0] = 2;
  *(_QWORD *)v89 = 0;
  v69 = (__int64 *)((char *)ptr + 16 * *(_QWORD *)v95);
  v90 = 0;
  if ( ptr == v69 )
    goto LABEL_60;
  v35 = (__int64 *)ptr;
  *(_QWORD *)v66 = &s1;
  do
  {
    v36 = *v35;
    v37 = (void *)(v36 + sub_631AD0(*(_QWORD *)v92, 29));
    v38 = *v35 + v104;
    v68 = v37;
    v39 = sub_631AD0(*(_QWORD *)v92, 29);
    netnode_copy2(v68, v35[1] - *v35, v38 + v39, 0, *(_QWORD *)v66);
    v35 += 2;
  }
  while ( v69 != v35 );
  v40 = (_QWORD *)(*(_QWORD *)v89 + 8 * v90);
  if ( *(_QWORD **)v89 == v40 )
    goto LABEL_58;
  v41 = *(_QWORD **)v89;
  v72 = (unsigned __int64 *)&v73;
  do
  {
    while ( 1 )
    {
      v50 = *v41 - v104;
      v51 = *((_QWORD *)v92 + 3);
      v52 = *(_QWORD *)v92;
      v69 = (__int64 *)v92;
      v53 = (void *)(*(_QWORD *)(v51 + 16) & v50);
      v10 = v53 == *(void **)(v52 + 1520);
      v73 = v53;
      v68 = v53;
      if ( v10 )
        break;
      v42 = sub_7AFEE0(v52);
      if ( v42 >= (unsigned __int64)v68 )
      {
        v43 = sub_631AD0(*v69, 29);
        s = nullptr;
        v84 = 0;
        v74 = v68;
        v44 = *v69;
        v45 = (char *)v68 - v43;
        v68 = v69;
        v71 = (__int64 *)v45;
        v46 = sub_7BF130(&v74, v44, &s);
        v47 = v68;
        if ( v46 > 0 )
        {
          if ( (_QWORD)v84 )
          {
            v69 = (__int64 *)v68;
            v68 = s;
            v62 = strchr(s, 36);
            v47 = v69;
            if ( v62 )
            {
              v63 = v68;
              if ( v62 - (_BYTE *)v68 != -1 )
                goto LABEL_78;
            }
          }
          v68 = v47;
          v48 = sub_3BE900(v47, (unsigned __int64)v71, 4);
          v47 = v68;
          if ( (v48 & 0xC000) == 0 )
          {
            v63 = s;
LABEL_78:
            if ( v63 )
            {
              *(_QWORD *)&v84 = 0;
              qfree(v63);
            }
            break;
          }
        }
        v49 = sub_42DD50(v47, (unsigned __int64)v71);
        if ( !v49 )
        {
          if ( !under_debugger )
            interr(2837);
          BUG();
        }
        if ( s )
        {
          LODWORD(v68) = v49;
          *(_QWORD *)&v84 = 0;
          qfree(s);
          v49 = (int)v68;
        }
        if ( v49 != 7 )
          break;
      }
      if ( v40 == ++v41 )
        goto LABEL_57;
    }
    sub_42FD40(&v98, v72);
    ++v41;
  }
  while ( v40 != v41 );
LABEL_57:
  v40 = *(_QWORD **)v89;
LABEL_58:
  s1 = (char *)&off_2B283E8;
  if ( v40 )
  {
    *(_QWORD *)&v90 = 0;
    qfree(v40);
  }
LABEL_60:
  sub_42D360((_QWORD **)&v92, v70);
  sub_632C30(*v6, 26, v70, 16);
  *((_BYTE *)v6 + 2960) = 1;
  v54 = &off_2BF9F48;
  do
  {
    if ( *v54 )
    {
      v55 = (*v54)();
      (*(void (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v55 + 16LL))(v55, a1, &v75, v8);
    }
    v54 += 2;
  }
  while ( &unk_2BFA2E8 != (_UNKNOWN *)v54 );
  switch_dbctx(*(int *)(a1 + 88));
  s1 = nullptr;
  *(_OWORD *)v87 = 0;
  v56 = sub_3792E0(0x5Fu, &v75, v8, &s1);
  *((_BYTE *)v6 + 2960) = 0;
  LOBYTE(v5) = v56 != -1;
  if ( s1 )
  {
    *(_QWORD *)v87 = 0;
    qfree(s1);
  }
  sub_42BC70(v100);
  if ( ptr )
  {
    *(_QWORD *)v95 = 0;
    qfree(ptr);
  }
  v57 = (char *)v80;
  if ( v80 )
  {
    v58 = v81;
    if ( (_QWORD)v81 )
    {
      v59 = 0;
      do
      {
        v60 = &v57[32 * v59];
        v61 = *((void **)v60 + 1);
        if ( v61 )
        {
          *((_QWORD *)v60 + 2) = 0;
          qfree(v61);
          v57 = (char *)v80;
        }
        ++v59;
      }
      while ( v58 != v59 );
    }
    *(_QWORD *)&v81 = 0;
    qfree(v57);
  }
  return (unsigned int)v5;
}
