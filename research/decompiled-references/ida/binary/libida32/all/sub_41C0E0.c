__int64 __fastcall sub_41C0E0(__int64 a1, unsigned int a2, int a3)
{
  __int64 *v4; // rbp
  _QWORD *v5; // r15
  unsigned int v6; // r12d
  int v8; // r13d
  int v9; // eax
  char *v10; // r14
  char *v11; // r13
  const char *v12; // rsi
  char *v13; // rdi
  char *v14; // rdx
  void *v15; // r14
  void *v16; // r13
  char *v17; // rax
  void *v18; // rdi
  int v19; // r13d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // r13d
  unsigned int v26; // eax
  unsigned int v27; // r14d
  __m128i v28; // xmm0
  void *v29; // r14
  __m128i si128; // xmm0
  int *v31; // r14
  int v32; // r13d
  int v33; // eax
  unsigned int v34; // r13d
  int v35; // eax
  _DWORD *v36; // r14
  _DWORD *v37; // r13
  unsigned int v38; // eax
  int v39; // eax
  __int64 v40; // rsi
  int v41; // ecx
  __int64 v42; // rax
  void *v43; // r8
  unsigned __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdi
  bool v47; // zf
  __int64 (__fastcall **v48)(); // r13
  __int64 v49; // rax
  __int64 v50; // rax
  char *v51; // rdx
  __int64 v52; // r12
  __int64 v53; // rbx
  char *v54; // rax
  void *v55; // rdi
  char *v56; // rax
  void *v57; // rdi
  char *v58; // rax
  __int64 v59; // rax
  size_t v60; // r13
  int v61[4]; // [rsp+0h] [rbp-1B8h] BYREF
  int v62; // [rsp+10h] [rbp-1A8h]
  void *v63; // [rsp+18h] [rbp-1A0h]
  int *v64; // [rsp+20h] [rbp-198h]
  unsigned int *v65; // [rsp+28h] [rbp-190h]
  int *v66; // [rsp+30h] [rbp-188h]
  unsigned int *v67; // [rsp+38h] [rbp-180h]
  int v68; // [rsp+40h] [rbp-178h] BYREF
  int v69; // [rsp+44h] [rbp-174h] BYREF
  __int64 v70; // [rsp+48h] [rbp-170h] BYREF
  unsigned int v71; // [rsp+50h] [rbp-168h] BYREF
  unsigned int v72; // [rsp+54h] [rbp-164h]
  int v73[2]; // [rsp+58h] [rbp-160h] BYREF
  void *v74; // [rsp+60h] [rbp-158h] BYREF
  __int128 v75; // [rsp+68h] [rbp-150h]
  int v76; // [rsp+78h] [rbp-140h]
  char *s; // [rsp+80h] [rbp-138h] BYREF
  __int128 v78; // [rsp+88h] [rbp-130h]
  void *v79; // [rsp+98h] [rbp-120h]
  char *s1; // [rsp+A0h] [rbp-118h] BYREF
  int v81[4]; // [rsp+A8h] [rbp-110h] BYREF
  int v82[2]; // [rsp+B8h] [rbp-100h]
  __int64 v83; // [rsp+C0h] [rbp-F8h]
  __int128 v84; // [rsp+C8h] [rbp-F0h]
  void *v85; // [rsp+E0h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+E8h] [rbp-D0h] BYREF
  __m128i v87; // [rsp+F8h] [rbp-C0h]
  __int64 v88; // [rsp+108h] [rbp-B0h]
  int v89; // [rsp+110h] [rbp-A8h]
  __int64 v90; // [rsp+118h] [rbp-A0h] BYREF
  int v91; // [rsp+120h] [rbp-98h] BYREF
  void *v92; // [rsp+128h] [rbp-90h]
  int *v93; // [rsp+130h] [rbp-88h]
  int *v94; // [rsp+138h] [rbp-80h]
  __int64 v95; // [rsp+140h] [rbp-78h]
  unsigned int v96; // [rsp+148h] [rbp-70h]
  __m128i v97; // [rsp+150h] [rbp-68h] BYREF
  __m128i v98; // [rsp+160h] [rbp-58h]
  unsigned __int64 v99; // [rsp+178h] [rbp-40h]

  LODWORD(v64) = a3;
  v4 = &v70;
  v99 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 1480);
  v70 = 0;
  sub_6141A0(*v5, 26, &v70, 8);
  if ( (_DWORD)v70 == a2 )
  {
    LODWORD(v4) = 1;
    return (unsigned int)v4;
  }
  v71 = a2;
  v6 = a2 - v70;
  v72 = a2 - v70 + HIDWORD(v70);
  if ( a2 >= v72 || (v65 = &v71, (unsigned __int8)rangeset_t_has_common(v5 + 129, &v71, 0)) )
  {
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v8 = sub_618160(a1);
  v9 = sub_6180E0(a1);
  v73[1] = v8;
  v73[0] = v9;
  v66 = v73;
  v75 = 0;
  v74 = nullptr;
  v97 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v73, (__m128i)(unsigned __int64)&v74);
  v98 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2AFE668), (__m128i)(unsigned __int64)sub_417E80);
  sub_798010(a1, &byte_22CD811, &v97);
  if ( v98.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v98.m128i_i64[0])(&v97, &v97, 3);
  *(_QWORD *)v61 = &s1;
  v63 = &v85;
  v10 = (char *)v74 + 32 * v75;
  v11 = (char *)v74;
  if ( v10 != v74 )
  {
    do
    {
      s1 = nullptr;
      *(_OWORD *)v81 = 0;
      LODWORD(v85) = *(_DWORD *)v11;
      if ( sub_79BD30(v63, a1, *(_QWORD *)v61) <= 0 )
      {
LABEL_21:
        if ( !(_BYTE)v64 )
          sub_365330();
        *(_OWORD *)ptr = 0;
        v85 = nullptr;
        sub_79A4E0(a1, v63, v66, 1);
        v14 = (char *)v85;
        if ( v85 )
        {
          v15 = ptr[0];
          if ( ptr[0] )
          {
            v16 = nullptr;
            do
            {
              v17 = &v14[24 * (_QWORD)v16];
              v18 = *(void **)v17;
              if ( *(_QWORD *)v17 )
              {
                *((_QWORD *)v17 + 1) = 0;
                qfree(v18);
                v14 = (char *)v85;
              }
              v16 = (char *)v16 + 1;
            }
            while ( v15 != v16 );
          }
          ptr[0] = nullptr;
          qfree(v14);
        }
        if ( s1 )
        {
          *(_QWORD *)v81 = 0;
          qfree(s1);
        }
        break;
      }
      if ( *((_QWORD *)v11 + 2) )
      {
        v12 = *((const char **)v11 + 1);
        v13 = (char *)haystack;
        if ( !*(_QWORD *)v81 )
          goto LABEL_12;
      }
      else
      {
        v12 = haystack;
        if ( !*(_QWORD *)v81 )
          goto LABEL_13;
      }
      v13 = s1;
LABEL_12:
      if ( strcmp(v13, v12) )
        goto LABEL_21;
LABEL_13:
      if ( s1 )
      {
        *(_QWORD *)v81 = 0;
        qfree(s1);
      }
      v11 += 32;
    }
    while ( v10 != v11 );
  }
  sub_4196E0(a1);
  v85 = v5;
  v89 = -1;
  ptr[0] = nullptr;
  ptr[1] = nullptr;
  v88 = 0;
  v91 = 0;
  v92 = nullptr;
  v93 = &v91;
  v94 = &v91;
  v95 = 0;
  v96 = v6;
  v87 = 0;
  sub_6141A0(*v5, 26, ptr, 8);
  v19 = sub_78F190(*(_QWORD *)v85);
  v20 = sub_614FB0(*(_QWORD *)v85, 29);
  v24 = v19;
  v25 = HIDWORD(ptr[0]);
  v26 = v24 - v20;
  if ( v26 < HIDWORD(ptr[0]) )
  {
    v25 = v26 + 1;
    HIDWORD(ptr[0]) = v26 + 1;
  }
  v27 = (unsigned int)ptr[0];
  s1 = nullptr;
  *(_QWORD *)v82 = 0;
  LODWORD(v83) = -1;
  *(_OWORD *)v81 = 0;
  if ( LODWORD(ptr[0]) >= v25
    || (v58 = (char *)qvector_reserve(&s1, 0, 1, 8),
        v20 = v81[0],
        s1 = v58,
        *(_QWORD *)&v58[8 * *(_QWORD *)v81] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v25)).m128i_u64[0],
        v47 = *(_QWORD *)v81 == -1,
        v59 = *(_QWORD *)v81 + 1LL,
        ++*(_QWORD *)v81,
        v47) )
  {
    v28 = 0;
    v29 = nullptr;
  }
  else
  {
    v60 = 8 * v59;
    *(_QWORD *)v61 = v59;
    v29 = (void *)qalloc_or_throw(8 * v59, nullptr);
    memcpy(v29, s1, v60);
    v28 = _mm_loadl_epi64((const __m128i *)v61);
  }
  si128 = _mm_unpacklo_epi64(v28, v28);
  if ( ptr[1] )
  {
    *(__m128i *)v61 = si128;
    v87.m128i_i64[0] = 0;
    qfree(ptr[1]);
    si128 = _mm_load_si128((const __m128i *)v61);
  }
  ptr[1] = v29;
  v88 = 0;
  v87 = si128;
  if ( s1 )
  {
    *(_QWORD *)v81 = 0;
    qfree(s1);
  }
  rangeset_t_intersect(
    (int)&ptr[1],
    (_DWORD)v85 + 1032,
    v20,
    v21,
    v22,
    v23,
    v61[0],
    v61[2],
    v62,
    (int)v63,
    (int)v64,
    (int)v65,
    (int)v66,
    (int)v67,
    v68,
    v70,
    v71,
    v73[0],
    (int)v74,
    v75,
    SDWORD2(v75),
    v76,
    (int)s,
    v78,
    SDWORD2(v78),
    v79,
    (__int64)s1,
    v81[0],
    v81[2],
    v82[0],
    v83);
  if ( !v87.m128i_i64[0] )
    goto LABEL_59;
  memset(v81, 0, sizeof(v81));
  v82[0] = 2;
  s1 = (char *)&off_2AFE428;
  v83 = 0;
  v64 = (int *)((char *)ptr[1] + 8 * v87.m128i_i64[0]);
  v84 = 0;
  if ( ptr[1] == v64 )
    goto LABEL_59;
  v31 = (int *)ptr[1];
  *(_QWORD *)v61 = &s1;
  do
  {
    v32 = *v31;
    v33 = v32 + sub_614FB0(*(_QWORD *)v85, 29);
    v34 = *v31 + v96;
    LODWORD(v63) = v33;
    v35 = sub_614FB0(*(_QWORD *)v85, 29);
    netnode_copy2((unsigned int)v63, (unsigned int)(v31[1] - *v31), v34 + v35, 0, *(_QWORD *)v61);
    v31 += 2;
  }
  while ( v64 != v31 );
  v36 = (_DWORD *)(v83 + 4 * v84);
  if ( (_DWORD *)v83 == v36 )
    goto LABEL_57;
  v37 = (_DWORD *)v83;
  v67 = (unsigned int *)&v68;
  do
  {
    while ( 1 )
    {
      v46 = *(_QWORD *)v85;
      v68 = *v37 - v96;
      v64 = (int *)v85;
      v47 = v68 == *(_DWORD *)(v46 + 1332);
      LODWORD(v63) = v68;
      if ( v47 )
        break;
      v38 = sub_78F190(v46);
      if ( v38 >= (unsigned int)v63 )
      {
        v39 = sub_614FB0(*(_QWORD *)v64, 29);
        s = nullptr;
        v78 = 0;
        v40 = *(_QWORD *)v64;
        v69 = (int)v63;
        v41 = (_DWORD)v63 - v39;
        v63 = v64;
        LODWORD(v66) = v41;
        v42 = sub_79BD30(&v69, v40, &s);
        v43 = v63;
        if ( v42 > 0 )
        {
          if ( (_QWORD)v78 )
          {
            v64 = (int *)v63;
            v63 = s;
            v56 = strchr(s, 36);
            v43 = v64;
            if ( v56 )
            {
              v57 = v63;
              if ( v56 - (_BYTE *)v63 != -1 )
                goto LABEL_77;
            }
          }
          v63 = v43;
          v44 = sub_3B9AA0((__int64)v43, (unsigned int)v66, 4);
          v43 = v63;
          if ( (v44 & 0xC000) == 0 )
          {
            v57 = s;
LABEL_77:
            if ( v57 )
            {
              *(_QWORD *)&v78 = 0;
              qfree(v57);
            }
            break;
          }
        }
        v45 = sub_41A0E0((__int64 *)v43, (unsigned int)v66);
        if ( !v45 )
        {
          if ( !under_debugger )
            interr(2837);
          BUG();
        }
        if ( s )
        {
          LODWORD(v63) = v45;
          *(_QWORD *)&v78 = 0;
          qfree(s);
          v45 = (int)v63;
        }
        if ( v45 != 7 )
          break;
      }
      if ( v36 == ++v37 )
        goto LABEL_56;
    }
    sub_41BFC0(&v90, v67);
    ++v37;
  }
  while ( v36 != v37 );
LABEL_56:
  v36 = (_DWORD *)v83;
LABEL_57:
  s1 = (char *)&off_2AFE428;
  if ( v36 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v36);
  }
LABEL_59:
  sub_419760((_QWORD **)&v85, v65);
  sub_6160D0(*v5, 26, v65, 8);
  *((_BYTE *)v5 + 2752) = 1;
  v48 = &off_2BCFF48;
  do
  {
    if ( *v48 )
    {
      v49 = (*v48)();
      (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v49 + 16LL))(v49, a1, &v70, v6);
    }
    v48 += 2;
  }
  while ( &unk_2BD02E8 != (_UNKNOWN *)v48 );
  switch_dbctx(*(int *)(a1 + 88));
  s1 = nullptr;
  *(_OWORD *)v81 = 0;
  v50 = sub_375980(0x5Fu, &v70, v6, &s1);
  *((_BYTE *)v5 + 2752) = 0;
  LOBYTE(v4) = v50 != -1;
  if ( s1 )
  {
    *(_QWORD *)v81 = 0;
    qfree(s1);
  }
  sub_418120(v92);
  if ( ptr[1] )
  {
    v87.m128i_i64[0] = 0;
    qfree(ptr[1]);
  }
  v51 = (char *)v74;
  if ( v74 )
  {
    v52 = v75;
    if ( (_QWORD)v75 )
    {
      v53 = 0;
      do
      {
        v54 = &v51[32 * v53];
        v55 = *((void **)v54 + 1);
        if ( v55 )
        {
          *((_QWORD *)v54 + 2) = 0;
          qfree(v55);
          v51 = (char *)v74;
        }
        ++v53;
      }
      while ( v52 != v53 );
    }
    *(_QWORD *)&v75 = 0;
    qfree(v51);
  }
  return (unsigned int)v4;
}

