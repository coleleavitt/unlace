void __fastcall sub_12C75D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char **a4,
        __int64 *a5,
        _QWORD *a6,
        __m128 a7,
        __m128i a8)
{
  __int64 v9; // rsi
  void **p_ptr; // rbp
  char *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r14
  _QWORD *v15; // r12
  __int64 v16; // r13
  const char *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  const char *v22; // r14
  size_t v23; // rax
  size_t v24; // r12
  char *v25; // rdi
  size_t v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // r14
  _QWORD *v30; // r12
  __int64 v31; // r12
  bool v32; // zf
  const char *v33; // r13
  __int64 v34; // rax
  char *v35; // rcx
  char *v36; // rsi
  size_t v37; // rdx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(_QWORD *, char *, size_t); // r12
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rbp
  size_t v49; // rax
  size_t v50; // r15
  void *v51; // r10
  char *v52; // rdi
  unsigned __int64 v53; // rdx
  void *v54; // rsi
  __int64 v55; // rax
  size_t v56; // rdx
  __int64 (__fastcall *v57)(_QWORD, _QWORD, _QWORD); // rcx
  size_t v58; // rax
  void *v59; // rax
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  __int64 v62; // rbx
  const __m128i *v63; // r13
  __int64 v64; // r14
  void *v65; // r12
  __int64 v66; // rdx
  __int64 v67; // rsi
  int v68; // eax
  __int64 v69; // rcx
  void *v70; // rsi
  _QWORD *v71; // rbp
  void (__fastcall *v72)(_QWORD *); // rax
  __int64 v73; // r12
  __int64 v74; // rbx
  void *v75; // rdi
  _QWORD *v76; // rdi
  _QWORD *v77; // rdi
  void **v78; // r12
  void **v79; // rbx
  void *v80; // rdi
  _QWORD *v81; // rdi
  __m128i v82; // xmm2
  __int64 v83; // rax
  __int64 v84; // xmm3_8^8
  __int64 v85; // rax
  char *v86; // rax
  __int64 v87; // rax
  __int64 v88; // r15
  unsigned __int64 v89; // rbx
  __int64 v90; // rdi
  unsigned __int64 v91; // rsi
  char *v92; // rcx
  const char *v93; // r13
  unsigned int v94; // edx
  unsigned int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // [rsp+0h] [rbp-408h]
  __m128 v98; // [rsp+10h] [rbp-3F8h] BYREF
  __m128i si128; // [rsp+20h] [rbp-3E8h] BYREF
  void *src; // [rsp+38h] [rbp-3D0h]
  __int64 v101; // [rsp+40h] [rbp-3C8h]
  void **v102; // [rsp+48h] [rbp-3C0h]
  const char **v103; // [rsp+50h] [rbp-3B8h]
  __int64 *v104; // [rsp+58h] [rbp-3B0h]
  char **p_s; // [rsp+60h] [rbp-3A8h]
  void **v106; // [rsp+68h] [rbp-3A0h]
  __int64 v107; // [rsp+70h] [rbp-398h]
  __int64 v108; // [rsp+78h] [rbp-390h]
  void **v109; // [rsp+80h] [rbp-388h]
  __int64 (__fastcall *v110)(_QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp-380h]
  void *v111[8]; // [rsp+90h] [rbp-378h] BYREF
  __int16 v112; // [rsp+D0h] [rbp-338h]
  void *v113; // [rsp+E0h] [rbp-328h] BYREF
  __int64 v114; // [rsp+E8h] [rbp-320h]
  const char *v115; // [rsp+F0h] [rbp-318h] BYREF
  char *s; // [rsp+170h] [rbp-298h] BYREF
  __m128i v117; // [rsp+178h] [rbp-290h]
  _BYTE v118[136]; // [rsp+188h] [rbp-280h] BYREF
  char *v119; // [rsp+210h] [rbp-1F8h] BYREF
  __m128 v120; // [rsp+218h] [rbp-1F0h]
  __int64 v121; // [rsp+228h] [rbp-1E0h] BYREF
  __int16 v122; // [rsp+230h] [rbp-1D8h]
  void *ptr; // [rsp+2B0h] [rbp-158h] BYREF
  __m128 v124; // [rsp+2B8h] [rbp-150h]
  __int64 v125; // [rsp+2C8h] [rbp-140h] BYREF
  __int16 v126; // [rsp+2D0h] [rbp-138h]

  v101 = a2;
  v9 = *(_QWORD *)(a1 + 24);
  p_ptr = &ptr;
  v108 = a3;
  v11 = *(char **)(a1 + 16);
  v107 = a1;
  v103 = a4;
  v104 = a5;
  v109 = v111;
  sub_112D530(v111, v9, v11);
  LODWORD(ptr) = 346;
  v102 = &v113;
  v113 = &v115;
  v115 = "--input-format=IFS";
  v114 = 0x1000000001LL;
  v12 = sub_21B6DA0(a6, &ptr, 1);
  v13 = a6[1];
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 == v15 )
    goto LABEL_5;
  while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 346) )
  {
    if ( v15 == ++v14 )
      goto LABEL_5;
  }
  if ( v15 == v14 )
  {
LABEL_5:
    v16 = 0;
    v17 = "--output-format=ELF";
  }
  else
  {
    do
    {
      v16 = *v14;
      v18 = *(_QWORD *)(*v14 + 16LL);
      if ( !v18 )
        v18 = *v14;
      ++v14;
      *(_BYTE *)(v18 + 44) |= 1u;
      if ( v14 == v15 )
        break;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 346) )
      {
        if ( v15 == ++v14 )
          goto LABEL_13;
      }
    }
    while ( v15 != v14 );
LABEL_13:
    v17 = "--output-format=IFS";
  }
  v19 = (unsigned int)v114;
  v20 = (unsigned int)v114 + 1LL;
  if ( v20 > HIDWORD(v114) )
  {
    sub_2237220(v102, v102 + 2, v20, 8);
    v19 = (unsigned int)v114;
  }
  *((_QWORD *)v113 + v19) = v17;
  LODWORD(v114) = v114 + 1;
  v21 = (unsigned int)v114;
  if ( (unsigned __int64)(unsigned int)v114 + 1 > HIDWORD(v114) )
  {
    sub_2237220(v102, v102 + 2, (unsigned int)v114 + 1LL, 8);
    v21 = (unsigned int)v114;
  }
  *((_QWORD *)v113 + v21) = "-o";
  LODWORD(v114) = v114 + 1;
  v22 = *v103;
  if ( *v103 )
  {
    v23 = strlen(*v103);
    v24 = v23;
    p_s = &s;
    s = v118;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v117 = si128;
    if ( v23 > 0x80 )
    {
      sub_2236E10(&s, v118, v23, 1);
      v25 = &s[v117.m128i_i64[0]];
LABEL_21:
      memcpy(v25, v22, v24);
      v26 = v24 + v117.m128i_i64[0];
      v117.m128i_i64[0] = v26;
      if ( v26 == 1 && *s == 45 )
        goto LABEL_37;
      goto LABEL_23;
    }
    if ( v23 )
    {
      v25 = v118;
      goto LABEL_21;
    }
    v117.m128i_i64[0] = 0;
  }
  else
  {
    p_s = &s;
    s = v118;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v117 = si128;
  }
LABEL_23:
  LODWORD(ptr) = 3264;
  v27 = sub_21B6DA0(a6, &ptr, 1);
  v28 = a6[1];
  v29 = (_QWORD *)(v28 + 8LL * (unsigned int)v27);
  v30 = (_QWORD *)(v28 + 8 * HIDWORD(v27));
  if ( v29 == v30 )
    goto LABEL_27;
  while ( !*v29 || !(unsigned __int8)sub_21B9810(*v29, 3264) )
  {
    if ( v30 == ++v29 )
      goto LABEL_27;
  }
  if ( v30 == v29 )
  {
LABEL_27:
    v31 = 5LL - (v16 != 0);
    v32 = v16 == 0;
    v33 = ".ifso";
    if ( !v32 )
      v33 = ".ifs";
    v34 = v117.m128i_i64[0];
    if ( v117.m128i_i64[1] < (unsigned __int64)(v31 + v117.m128i_i64[0]) )
    {
      sub_2236E10(p_s, p_s + 3, v31 + v117.m128i_i64[0], 1);
      v34 = v117.m128i_i64[0];
    }
    v35 = &s[v34];
    if ( (unsigned int)v31 >= 8 )
    {
      v91 = (unsigned __int64)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v35 = *(_QWORD *)v33;
      *(_QWORD *)&v35[(unsigned int)v31 - 8] = *(_QWORD *)&v33[(unsigned int)v31 - 8];
      v92 = &v35[-v91];
      v93 = (const char *)(v33 - v92);
      if ( (((_DWORD)v31 + (_DWORD)v92) & 0xFFFFFFF8) >= 8 )
      {
        v94 = (v31 + (_DWORD)v92) & 0xFFFFFFF8;
        v95 = 0;
        do
        {
          v96 = v95;
          v95 += 8;
          *(_QWORD *)(v91 + v96) = *(_QWORD *)&v93[v96];
        }
        while ( v95 < v94 );
      }
      v34 = v117.m128i_i64[0];
    }
    else if ( (v31 & 4) != 0 )
    {
      *(_DWORD *)v35 = *(_DWORD *)v33;
      *(_DWORD *)&v35[(unsigned int)v31 - 4] = *(_DWORD *)&v33[(unsigned int)v31 - 4];
      v34 = v117.m128i_i64[0];
    }
    else if ( (_DWORD)v31 )
    {
      *v35 = *v33;
      v34 = v117.m128i_i64[0];
      if ( (v31 & 2) != 0 )
      {
        *(_WORD *)&v35[(unsigned int)v31 - 2] = *(_WORD *)&v33[(unsigned int)v31 - 2];
        v34 = v117.m128i_i64[0];
      }
    }
    v26 = v31 + v34;
    v117.m128i_i64[0] = v26;
  }
  else
  {
    do
    {
      v85 = *(_QWORD *)(*v29 + 16LL);
      if ( !v85 )
        v85 = *v29;
      ++v29;
      *(_BYTE *)(v85 + 44) |= 1u;
      if ( v29 == v30 )
        break;
      while ( !*v29 || !(unsigned __int8)sub_21B9810(*v29, 3264) )
      {
        if ( v30 == ++v29 )
          goto LABEL_123;
      }
    }
    while ( v30 != v29 );
LABEL_123:
    v86 = "ifso";
    v126 = 259;
    if ( v16 )
      v86 = "ifs";
    ptr = v86;
    sub_228A730(p_s, &ptr, 0);
    v26 = v117.m128i_i64[0];
  }
LABEL_37:
  if ( v26 + 1 > v117.m128i_i64[1] )
  {
    sub_2236E10(p_s, p_s + 3, v26 + 1, 1);
    v26 = v117.m128i_i64[0];
  }
  s[v26] = 0;
  v36 = s;
  v122 = 257;
  if ( *s )
  {
    v37 = 0;
    v119 = s;
    ptr = &v125;
    v38 = *a6;
    LOBYTE(v122) = 3;
    v98 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v39 = *(__int64 (__fastcall **)(_QWORD *, char *, size_t))(v38 + 16);
    v124 = v98;
    if ( s )
    {
      v36 = s;
      v37 = strlen(s);
    }
    v40 = v39(a6, v36, v37);
  }
  else
  {
    ptr = &v125;
    v87 = *a6;
    v98 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    v124 = v98;
    v40 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v87 + 16))(a6, 0, 0);
  }
  v41 = v40;
  if ( ptr != &v125 )
    free(ptr);
  v42 = (unsigned int)v114;
  v43 = (unsigned int)v114 + 1LL;
  if ( v43 > HIDWORD(v114) )
  {
    sub_2237220(v102, v102 + 2, v43, 8);
    v42 = (unsigned int)v114;
  }
  v44 = v104;
  *((_QWORD *)v113 + v42) = v41;
  v45 = *v44;
  v46 = *((unsigned int *)v44 + 2);
  LODWORD(v114) = v114 + 1;
  v47 = v45 + 40 * v46;
  if ( v45 != v47 )
  {
    v106 = &ptr;
    v48 = v45;
    while ( *(_DWORD *)(v48 + 8) != 1 )
    {
LABEL_66:
      v48 += 40;
      if ( v47 == v48 )
      {
        p_ptr = v106;
        goto LABEL_68;
      }
    }
    if ( !*(_QWORD *)v48 )
    {
      v84 = _mm_load_si128(&si128).m128i_i64[1];
      v119 = (char *)&v121;
      v49 = 0;
      v32 = *(_DWORD *)(v48 + 24) == 58;
      v120.m128_u64[1] = v84;
      v120.m128_u64[0] = 0;
      if ( !v32 )
      {
LABEL_55:
        v53 = v49 + 1;
        if ( v49 + 1 <= v120.m128_u64[1] )
        {
LABEL_56:
          v119[v49] = 0;
          v54 = v119;
          v112 = 257;
          if ( *v119 )
          {
            a8 = _mm_load_si128((const __m128i *)&v98);
            v55 = *a6;
            ptr = &v125;
            v56 = 0;
            v111[4] = v119;
            LOBYTE(v112) = 3;
            v57 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v55 + 16);
            v124 = (__m128)a8;
            if ( v119 )
            {
              v110 = v57;
              src = v119;
              v58 = strlen(v119);
              v57 = v110;
              v54 = src;
              v56 = v58;
            }
            v59 = (void *)v57(a6, v54, v56);
          }
          else
          {
            v82 = _mm_load_si128((const __m128i *)&v98);
            v83 = *a6;
            ptr = &v125;
            v124 = (__m128)v82;
            v59 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v83 + 16))(a6, 0, 0);
          }
          if ( ptr != &v125 )
          {
            src = v59;
            free(ptr);
            v59 = src;
          }
          v60 = (unsigned int)v114;
          v61 = (unsigned int)v114 + 1LL;
          if ( v61 > HIDWORD(v114) )
          {
            src = v59;
            sub_2237220(v102, v102 + 2, v61, 8);
            v60 = (unsigned int)v114;
            v59 = src;
          }
          *((_QWORD *)v113 + v60) = v59;
          LODWORD(v114) = v114 + 1;
          if ( v119 != (char *)&v121 )
            free(v119);
          goto LABEL_66;
        }
LABEL_113:
        sub_2236E10(&v119, &v121, v53, 1);
        v49 = v120.m128_u64[0];
        goto LABEL_56;
      }
LABEL_112:
      v126 = 259;
      ptr = ".ifs";
      sub_228A730(&v119, v106, 0);
      v49 = v120.m128_u64[0];
      v53 = v120.m128_u64[0] + 1;
      if ( v120.m128_u64[0] + 1 <= v120.m128_u64[1] )
        goto LABEL_56;
      goto LABEL_113;
    }
    src = *(void **)v48;
    v49 = strlen((const char *)src);
    a7 = (__m128)_mm_load_si128(&si128);
    v50 = v49;
    v51 = src;
    v119 = (char *)&v121;
    v120 = a7;
    if ( v49 <= 0x80 )
    {
      if ( !v49 )
      {
LABEL_54:
        v32 = *(_DWORD *)(v48 + 24) == 58;
        v120.m128_u64[0] = v49;
        if ( !v32 )
          goto LABEL_55;
        goto LABEL_112;
      }
      v52 = (char *)&v121;
    }
    else
    {
      sub_2236E10(&v119, &v121, v49, 1);
      v51 = src;
      v52 = &v119[v120.m128_u64[0]];
    }
    memcpy(v52, v51, v50);
    v49 = v50 + v120.m128_u64[0];
    goto LABEL_54;
  }
LABEL_68:
  v62 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*a6 + 16LL))(a6, v111[0], v111[1]);
  v97 = (__int64)v103;
  v63 = (const __m128i *)*v104;
  v64 = *((unsigned int *)v104 + 2);
  v65 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v65, v108, v107, 2, 0, v62, (__int64)v102, v63, v64, v97, 1, 0);
  ptr = v65;
  v66 = *(unsigned int *)(v101 + 160);
  v67 = v66 + 1;
  v68 = *(_DWORD *)(v101 + 160);
  if ( v66 + 1 > (unsigned __int64)*(unsigned int *)(v101 + 164) )
  {
    v88 = v101;
    v89 = *(_QWORD *)(v101 + 152);
    v90 = v101 + 152;
    if ( v89 > (unsigned __int64)p_ptr || (unsigned __int64)p_ptr >= v89 + 8 * v66 )
    {
      sub_11673D0(v90, v67, a7, *(double *)a8.m128i_i64);
      v66 = *(unsigned int *)(v101 + 160);
      v69 = *(_QWORD *)(v101 + 152);
      v68 = *(_DWORD *)(v101 + 160);
    }
    else
    {
      sub_11673D0(v90, v67, a7, *(double *)a8.m128i_i64);
      v69 = *(_QWORD *)(v88 + 152);
      v66 = *(unsigned int *)(v88 + 160);
      p_ptr = (void **)((char *)p_ptr + v69 - v89);
      v68 = *(_DWORD *)(v88 + 160);
    }
  }
  else
  {
    v69 = *(_QWORD *)(v101 + 152);
  }
  v70 = *p_ptr;
  *p_ptr = nullptr;
  *(_QWORD *)(v69 + 8 * v66) = v70;
  v71 = ptr;
  *(_DWORD *)(v101 + 160) = v68 + 1;
  if ( v71 )
  {
    v72 = *(void (__fastcall **)(_QWORD *))(*v71 + 8LL);
    if ( v72 == sub_10D4290 )
    {
      v73 = v71[58];
      v74 = v71[57];
      *v71 = &off_2BA8F30;
      if ( v73 != v74 )
      {
        do
        {
          if ( *(_BYTE *)(v74 + 32) && *(_QWORD *)v74 != v74 + 16 )
            operator delete(*(void **)v74);
          v74 += 40;
        }
        while ( v73 != v74 );
        v74 = v71[57];
      }
      if ( v74 )
        operator delete((void *)v74);
      v75 = (void *)v71[54];
      if ( v75 )
        operator delete(v75);
      v76 = (_QWORD *)v71[50];
      if ( v76 != v71 + 52 )
        operator delete(v76);
      v77 = (_QWORD *)v71[32];
      if ( v77 != v71 + 34 )
        free(v77);
      v78 = (void **)v71[29];
      v79 = (void **)v71[28];
      if ( v78 != v79 )
      {
        do
        {
          while ( *v79 != v79 + 2 )
          {
            operator delete(*v79);
            v79 += 4;
            if ( v79 == v78 )
              goto LABEL_89;
          }
          v79 += 4;
        }
        while ( v78 != v79 );
LABEL_89:
        v79 = (void **)v71[28];
      }
      if ( v79 )
        operator delete(v79);
      v80 = (void *)v71[25];
      if ( v80 )
        operator delete(v80);
      v81 = (_QWORD *)v71[7];
      if ( v81 != v71 + 9 )
        free(v81);
      operator delete(v71, 0x208u);
    }
    else
    {
      v72(v71);
    }
  }
  if ( s != (char *)(p_s + 3) )
    free(s);
  if ( v113 != v102 + 2 )
    free(v113);
  if ( v111[0] != v109 + 2 )
    operator delete(v111[0]);
}
