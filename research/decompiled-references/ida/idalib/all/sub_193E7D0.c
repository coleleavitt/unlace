__int64 __fastcall sub_193E7D0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        double a6,
        __m128 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 a11)
{
  __int64 *v12; // r12
  __m128 si128; // xmm0
  __int64 v14; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // r12
  __int64 v20; // rsi
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 *v30; // rax
  __int64 v31; // r15
  __int64 v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rax
  void *v42; // r14
  void *v43; // rax
  __int64 v44; // rcx
  __m128 v45; // xmm0
  void *v46; // r13
  __int64 v47; // rbx
  unsigned int v48; // eax
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rbp
  unsigned __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // rdx
  unsigned __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // r15d
  int v59; // edx
  int v60; // r14d
  __int64 *v61; // r15
  __int64 *v62; // rcx
  void *v63; // rsi
  __int64 v64; // r12
  __int64 *v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // r12
  int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rdx
  __int64 v76; // rax
  char v77; // r9
  char v78; // al
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rax
  _DWORD *v82; // rdx
  _DWORD *v83; // rcx
  int v84; // edi
  int v85; // esi
  _DWORD *v86; // r8
  int v87; // eax
  __int64 v88; // rsi
  unsigned __int64 v89; // rax
  int v91; // [rsp+18h] [rbp-290h]
  int v92; // [rsp+18h] [rbp-290h]
  int v93; // [rsp+20h] [rbp-288h]
  __int64 v94; // [rsp+20h] [rbp-288h]
  int v95; // [rsp+28h] [rbp-280h]
  void *v96; // [rsp+28h] [rbp-280h]
  int v97; // [rsp+28h] [rbp-280h]
  unsigned int v98; // [rsp+40h] [rbp-268h]
  __int64 v99; // [rsp+40h] [rbp-268h]
  int v100; // [rsp+48h] [rbp-260h]
  __int64 *v101; // [rsp+50h] [rbp-258h]
  unsigned int v102; // [rsp+64h] [rbp-244h]
  __int64 *v103; // [rsp+68h] [rbp-240h]
  __int64 v104; // [rsp+70h] [rbp-238h] BYREF
  _DWORD *v105; // [rsp+78h] [rbp-230h]
  __m128i v106; // [rsp+80h] [rbp-228h] BYREF
  __m128i v107; // [rsp+90h] [rbp-218h] BYREF
  void *v108; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v109; // [rsp+A8h] [rbp-200h]
  _BYTE v110[32]; // [rsp+B0h] [rbp-1F8h] BYREF
  void *v111[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  _BYTE v112[32]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __m128 v114; // [rsp+108h] [rbp-1A0h]
  _BYTE v115[16]; // [rsp+118h] [rbp-190h] BYREF
  char v116; // [rsp+128h] [rbp-180h]
  void *v117; // [rsp+130h] [rbp-178h] BYREF
  __int64 v118; // [rsp+138h] [rbp-170h]
  _QWORD v119[4]; // [rsp+140h] [rbp-168h] BYREF
  __m128 v120; // [rsp+160h] [rbp-148h] BYREF
  int v121; // [rsp+178h] [rbp-130h]
  __int64 *v122; // [rsp+180h] [rbp-128h]
  __int64 v123; // [rsp+188h] [rbp-120h]
  unsigned __int64 v124; // [rsp+190h] [rbp-118h]
  __int64 v125; // [rsp+1A0h] [rbp-108h]
  void *v126; // [rsp+1A8h] [rbp-100h]
  _BYTE *v127; // [rsp+1B8h] [rbp-F0h]
  void *v128; // [rsp+1C0h] [rbp-E8h]
  _QWORD *v129; // [rsp+1C8h] [rbp-E0h]
  __int64 v130; // [rsp+1D0h] [rbp-D8h]
  void *v131[25]; // [rsp+1E0h] [rbp-C8h] BYREF

  v12 = a1;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v105 = a4;
  v108 = v110;
  v109 = 0x400000000LL;
  v111[1] = (void *)0x400000000LL;
  ptr = v115;
  v114 = si128;
  v116 = 0;
  v14 = *(_QWORD *)(a3 + 16);
  v104 = a3;
  v111[0] = v112;
  if ( (v14 & 0x100000000LL) != 0 )
  {
    if ( (v14 & 0x20000000) != 0 )
      v16 = sub_18BCBB0(a3);
    else
      v16 = 0;
    v17 = 0;
    if ( *(_BYTE *)(a3 + 16) != 25 )
      v17 = *(unsigned __int16 *)(a3 + 22);
    v95 = v17;
    v93 = (_DWORD)v105 + 16;
    v91 = v16;
    sub_F6CCB0(&v104, si128);
    if ( (unsigned __int8)sub_1972290(
                            (_DWORD)a1,
                            v93,
                            v95,
                            (int)a3 + 48,
                            v91,
                            (unsigned int)&v108,
                            (__int64)v111,
                            (__int64)&ptr) )
      goto LABEL_7;
    v20 = *a1;
    v21 = *(_QWORD *)(*a1 + 3032);
    if ( !v21 )
      v21 = *(_QWORD *)(v20 + 544);
    v22 = *(_BYTE *)(v21 + 8);
    v23 = v21 - 64;
    if ( (v22 & 0x7Fu) - 59 >= 3 )
      v23 = 0;
    sub_19A2CD0(v131, v20, v23, a5, 1);
    v24 = sub_BEB490((__int64)&v104);
    v94 = sub_193F4E0(a1, a2, v24, v25);
    if ( (v94 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v18 = 0;
      sub_19A2DA0(v131);
      goto LABEL_8;
    }
    sub_19A2DA0(v131);
  }
  else
  {
    v56 = sub_BEB490((__int64)&v104);
    v94 = sub_193F4E0(a1, a2, v56, v57);
    if ( (v94 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_7;
    if ( (*(_BYTE *)(a3 + 19) & 0x20) != 0 )
      v58 = sub_18BCBB0(a3);
    else
      v58 = 0;
    v59 = 0;
    v60 = v104 + 48;
    if ( *(_BYTE *)(v104 + 16) != 25 )
      v59 = *(unsigned __int16 *)(v104 + 22);
    v97 = v59;
    v92 = (_DWORD)v105 + 16;
    sub_F6CCB0(&v104, si128);
    if ( (unsigned __int8)sub_1972290((_DWORD)a1, v92, v97, v60, v58, (unsigned int)&v108, (__int64)v111, (__int64)&ptr) )
      goto LABEL_7;
  }
  sub_A5E110(&v120, a3);
  v98 = sub_F6CCB0(a10, si128);
  v27 = v121;
  v28 = (unsigned int)(v121 - 6);
  if ( (unsigned int)v28 <= 2 )
  {
    v29 = v125;
    if ( v125 && (*(_BYTE *)(v125 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v30 = (__int64 *)(*(_QWORD *)(v125 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v31 = *v30;
      if ( *(_BYTE *)(*v30 + 16) != 26 )
        v31 = sub_F63050(*v30, a3, v28, v26);
      if ( (*(_QWORD *)(v31 + 16) & 0x1000000LL) != 0 )
      {
        v76 = sub_18BCBB0(v31);
        if ( (v77 & 0x20) != 0 )
          v76 += *(unsigned __int16 *)(v31 + 22);
        v32 = *(_QWORD *)((v76 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else if ( *(_BYTE *)(v31 + 16) == 26
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
             && sub_F63050(v31, a3, v28, v26) )
      {
        v32 = *(_BYTE *)(v31 + 18) >> 5;
      }
      else
      {
        v32 = 0;
      }
      v33 = sub_B72690(v29 + 72);
      v34 = v33;
      if ( v33 )
        v34 = v33 - 64;
      v35 = 1;
    }
    else
    {
      v32 = 0;
      v35 = 0;
      v34 = 0;
    }
    sub_19A2CD0(v131, *a9, v34, v32, v35);
    v36 = *a9;
    sub_18C79E0(*a9, 4, 4);
    v37 = sub_1933BC0(a9, v124, *(double *)si128.m128_u64, a7);
    if ( v37 == 1
      || (v38 = *a9,
          LODWORD(v117) = v121,
          v39 = sub_18B0290(v38, (_DWORD *)(v37 & 0xFFFFFFFFFFFFFFFELL), &v117, *(double *)si128.m128_u64),
          v39 == 1) )
    {
      sub_190D5E0(v36, si128);
      sub_19A2DA0(v131);
      goto LABEL_7;
    }
    v124 = v39 & 0xFFFFFFFFFFFFFFFELL;
    v121 = (int)v117;
    sub_190D5E0(v36, si128);
    sub_19A2DA0(v131);
    v27 = v121;
  }
  if ( v27 != 2 )
    goto LABEL_36;
  v61 = v122;
  v62 = &v122[v123];
  v63 = v131;
  v101 = v62;
  if ( v122 == v62 )
    goto LABEL_94;
  v103 = v12;
  do
  {
    v64 = *v61;
    v65 = (__int64 *)(*v61 & 0xFFFFFFFFFFFFFFF0LL);
    v66 = *v65;
    if ( *(_BYTE *)(*v65 + 16) == 38
      || (v71 = *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v71 + 16) == 38)
      && (v66 = sub_F63050(*v65, v63, v71, v62)) != 0 )
    {
      v67 = *a9;
      v131[1] = (void *)0x200000000LL;
      v131[0] = &v131[2];
      sub_1E4C960(v67, *(_QWORD *)(v66 + 32));
      v68 = *a9;
      v102 = *(_DWORD *)(v66 + 20);
      v69 = *(_DWORD *)(*a9 + 12632);
      *(_DWORD *)(*a9 + 12632) = 0;
      v100 = v69;
      v70 = sub_1942710(a9, *(_QWORD *)(v66 + 32));
      if ( (v70 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v63 = (void *)sub_A781D0(*(_QWORD *)(*a9 + 248), v70, v102);
        sub_A6A4A0(a11, (__int64)v63);
        *(_DWORD *)(v68 + 12632) = v100;
        if ( v131[0] != &v131[2] )
          free(v131[0]);
        goto LABEL_92;
      }
      *(_DWORD *)(v68 + 12632) = v100;
      if ( v131[0] != &v131[2] )
        free(v131[0]);
LABEL_7:
      v18 = 0;
      goto LABEL_8;
    }
    v131[0] = (void *)sub_1942710(a9, v64);
    if ( ((unsigned __int64)v131[0] & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (unsigned __int8)sub_18B53F0(*a9, (__int64 *)v131, ((unsigned __int64)v98 << 32) | v98, v72, v73, v74) )
    {
      goto LABEL_7;
    }
    v63 = v131[0];
    sub_A6A4A0(a11, (__int64)v131[0]);
LABEL_92:
    ++v61;
  }
  while ( v101 != v61 );
  v12 = v103;
LABEL_94:
  v75 = *(__int64 **)a11;
  v123 = *(unsigned int *)(a11 + 8);
  v122 = v75;
  if ( !v123 )
    v121 = 1;
LABEL_36:
  v40 = (unsigned int)v109;
  if ( !v116 )
  {
    v43 = v126;
    goto LABEL_97;
  }
  v41 = v114.m128_u64[0];
  if ( (unsigned int)v109 == v114.m128_u64[0] )
  {
LABEL_105:
    v42 = ptr;
    goto LABEL_44;
  }
  if ( (unsigned int)v109 < v114.m128_u64[0] )
  {
    v114.m128_u64[0] = (unsigned int)v109;
    goto LABEL_105;
  }
  if ( (unsigned int)v109 > v114.m128_u64[1] )
  {
    sub_2236E10(&ptr, v115, (unsigned int)v109, 1);
    v41 = v114.m128_u64[0];
  }
  v42 = ptr;
  if ( (char *)ptr + v41 != (char *)ptr + v40 )
    memset((char *)ptr + v41, 0, v40 - v41);
  v114.m128_u64[0] = v40;
LABEL_44:
  v43 = v126;
  if ( v42 )
  {
    v126 = v42;
    goto LABEL_46;
  }
LABEL_97:
  if ( v43 )
    v126 = nullptr;
LABEL_46:
  memset(v131, 0, 0x88u);
  v44 = *v12;
  v99 = *v12;
  if ( v130 )
  {
    v45 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    v46 = nullptr;
    LOBYTE(v131[16]) = 1;
    *(__m128 *)&v131[1] = v45;
    v131[0] = &v131[3];
    v131[8] = &v131[10];
    v131[9] = (void *)0x600000000LL;
    sub_18C79E0(v44, 4, 4);
    v96 = v128;
    if ( v128 )
    {
      do
      {
        if ( !v130 )
        {
          v107.m128i_i8[0] = *((_BYTE *)v46 + (_QWORD)v127);
          v107.m128i_i64[1] = 0;
          a7 = (__m128)_mm_load_si128(&v107);
          v106 = (__m128i)a7;
          goto LABEL_50;
        }
        v49 = v129[(_QWORD)v46];
        v107.m128i_i8[0] = *((_BYTE *)v46 + (_QWORD)v127);
        v107.m128i_i64[1] = v49;
        v106 = _mm_load_si128(&v107);
        if ( v49 )
        {
          v50 = sub_1933BC0(v12, v49, *(double *)v45.m128_u64, a7);
          if ( v50 == 1
            || (v51 = *v12,
                v52 = v50 & 0xFFFFFFFFFFFFFFFELL,
                v53 = sub_F5ED10(v107.m128i_i8),
                v55 = sub_1E72620(v51, v52, v53, v54),
                !HIBYTE(v55)) )
          {
            v18 = 0;
            sub_190D5E0(v99, v45);
            goto LABEL_82;
          }
          if ( (_BYTE)v55 == 2 )
            goto LABEL_60;
          if ( (_BYTE)v55 != 3 )
          {
            if ( (_BYTE)v55 != 1 )
              goto LABEL_50;
            v106.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v107);
LABEL_60:
            v106.m128i_i64[1] = 0;
            goto LABEL_50;
          }
          v106.m128i_i64[1] = v52;
        }
LABEL_50:
        v47 = *v12;
        v48 = sub_F6CCB0(&v104, v45);
        v117 = v131[0];
        v119[1] = LODWORD(v131[9]);
        v118 = (__int64)v131[1];
        v119[0] = v131[8];
        if ( !(unsigned __int8)sub_19EE280(v47, &v117, &v106, v48) )
        {
          v117 = v119;
          v118 = 0x100000000LL;
          sub_F5EEE0((__int64 *)v131, &v106, (__int64)&v117);
          if ( v117 != v119 )
            free(v117);
        }
        v46 = (char *)v46 + 1;
      }
      while ( v46 != v96 );
    }
    v127 = v131[0];
    v128 = v131[1];
    v129 = v131[8];
    v130 = LODWORD(v131[9]);
    sub_190D5E0(v99, v45);
    v99 = *v12;
  }
  v18 = sub_1E6A200(v99, v94, (_DWORD)v108, v109, 0, 0, (__int64)&v120);
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v18 = 0;
    goto LABEL_82;
  }
  v78 = *(_BYTE *)(v18 + 16);
  if ( v78 == 26 )
  {
    v79 = ((*(_BYTE *)(v18 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    goto LABEL_111;
  }
  v80 = 16;
  if ( v78 != 25 )
  {
    v79 = 15;
LABEL_111:
    v80 = 8 * ((v79 + 8 * (unsigned int)*(unsigned __int16 *)(v18 + 22)) >> 3) + 8;
  }
  v81 = sub_1EA6140(a2, v18, v80, 8);
  v83 = v105;
  *v82 = *v105;
  v82[1] = v83[1];
  v82[2] = v83[2];
  if ( *(_BYTE *)(v104 + 16) == 26 && (*(_BYTE *)(v104 + 19) & 0x1E) != 0 )
  {
    v84 = v83[2 * *(unsigned __int16 *)(v104 + 22) + 4];
    v85 = v83[2 * *(unsigned __int16 *)(v104 + 22) + 5];
  }
  else
  {
    v85 = 0;
    v84 = 0;
  }
  if ( *(_BYTE *)(v81 + 16) == 26 && (*(_BYTE *)(v81 + 19) & 0x1E) != 0 )
  {
    v86 = &v82[2 * *(unsigned __int16 *)(v81 + 22) + 4];
    *v86 = v84;
    v86[1] = v85;
  }
  v82[3] = v83[3];
  if ( *(_BYTE *)(v81 + 16) != 25 )
  {
    v87 = *(unsigned __int16 *)(v81 + 22);
    if ( v87 )
    {
      v88 = 8LL * (unsigned int)(v87 - 1) + 8;
      v89 = 0;
      do
      {
        *(_QWORD *)&v82[v89 / 4 + 4] = *(_QWORD *)((char *)v111[0] + v89);
        v89 += 8LL;
      }
      while ( v88 != v89 );
    }
  }
LABEL_82:
  if ( LOBYTE(v131[16]) )
  {
    if ( v131[8] != &v131[10] )
      free(v131[8]);
    if ( v131[0] != &v131[3] )
      free(v131[0]);
  }
LABEL_8:
  if ( ptr != v115 )
    free(ptr);
  if ( v111[0] != v112 )
    free(v111[0]);
  if ( v108 != v110 )
    free(v108);
  return v18;
}
