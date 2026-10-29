void __fastcall sub_146CA90(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v5; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  const __m128i *v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __m128i *v12; // rax
  __int64 v13; // rdx
  const __m128i *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __m128i *v19; // rax
  char *v20; // rsi
  __int64 v21; // rdx
  __int16 v22; // ax
  unsigned __int16 v23; // cx
  unsigned int v24; // eax
  unsigned __int16 v25; // si
  __int64 v26; // rdx
  unsigned __int16 v27; // cx
  __int64 *v28; // rdi
  int v29; // esi
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  char v34; // al
  __int64 v35; // r8
  unsigned __int8 v36; // al
  int v37; // eax
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // rdx
  __int16 i; // ax
  unsigned __int16 v42; // cx
  __int64 *v43; // rdi
  unsigned __int16 v44; // cx
  unsigned int v45; // eax
  unsigned __int16 v46; // si
  __int64 v47; // rdx
  unsigned __int16 v48; // cx
  unsigned int v49; // eax
  unsigned __int16 v50; // si
  __int64 v51; // rdx
  unsigned int v52; // eax
  _WORD *v53; // rdx
  unsigned __int8 *v54; // r12
  void **v55; // rdx
  void *v56; // r8
  char *v57; // rsi
  size_t v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  void **v64; // r12
  _BYTE *v65; // rdi
  __int64 v66; // rax
  void **v67; // r12
  unsigned __int64 v68; // rax
  void **v69; // r14
  void **v70; // r13
  void **v71; // rdi
  void **v72; // rdi
  void **v73; // r13
  void **v74; // r14
  int v75; // eax
  __int64 *v76; // rdi
  int v77; // eax
  char v78; // al
  __int64 v79; // rdi
  unsigned __int16 v80; // cx
  unsigned int v81; // eax
  unsigned __int16 v82; // si
  __int64 v83; // rdx
  unsigned int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rsi
  __int64 v87; // rax
  unsigned __int64 v88; // rcx
  __int64 v89; // rsi
  __int8 *v90; // rbx
  size_t v91; // rdx
  __int64 v92; // rdx
  int v93; // eax
  __int64 *v94; // rdi
  unsigned __int64 v95; // rdi
  int v96; // eax
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // rax
  __int64 v100; // r13
  void *v101; // rdi
  unsigned __int8 *v102; // r13
  __int64 v103; // rdx
  _QWORD *v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rax
  __int64 v109; // r14
  __int64 v110; // rax
  __int64 v111; // r14
  void *v112; // rdi
  int *v113; // [rsp+0h] [rbp-158h]
  __int64 v115; // [rsp+8h] [rbp-150h]
  __int64 v116; // [rsp+8h] [rbp-150h]
  unsigned __int64 v118; // [rsp+18h] [rbp-140h]
  size_t v119; // [rsp+18h] [rbp-140h]
  size_t v120; // [rsp+18h] [rbp-140h]
  void **v121; // [rsp+18h] [rbp-140h]
  void **v122; // [rsp+18h] [rbp-140h]
  __int64 v123; // [rsp+18h] [rbp-140h]
  void *src; // [rsp+20h] [rbp-138h]
  unsigned int srca; // [rsp+20h] [rbp-138h]
  size_t v126; // [rsp+28h] [rbp-130h]
  size_t v127; // [rsp+28h] [rbp-130h]
  char *v128; // [rsp+30h] [rbp-128h]
  __int64 v129; // [rsp+38h] [rbp-120h]
  _DWORD v130[2]; // [rsp+40h] [rbp-118h] BYREF
  unsigned __int64 v131; // [rsp+48h] [rbp-110h]
  int v132; // [rsp+50h] [rbp-108h]
  void *v133; // [rsp+60h] [rbp-F8h] BYREF
  size_t n; // [rsp+68h] [rbp-F0h]
  _QWORD v135[2]; // [rsp+70h] [rbp-E8h] BYREF
  void *v136; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int64 v137; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v138; // [rsp+90h] [rbp-C8h]
  _DWORD *v139; // [rsp+98h] [rbp-C0h]
  void *v140; // [rsp+A0h] [rbp-B8h]
  __int64 v141; // [rsp+B0h] [rbp-A8h] BYREF
  __int16 v142; // [rsp+C0h] [rbp-98h]
  __int64 v143; // [rsp+D0h] [rbp-88h] BYREF
  void *v144; // [rsp+D8h] [rbp-80h]
  __int64 v145; // [rsp+E0h] [rbp-78h]
  _BYTE v146[16]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v147; // [rsp+F8h] [rbp-60h] BYREF
  void *ptr; // [rsp+100h] [rbp-58h]
  __int64 v149; // [rsp+108h] [rbp-50h]
  _BYTE v150[72]; // [rsp+110h] [rbp-48h] BYREF

  v5 = a2 + 16;
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(unsigned int *)(a2 + 28);
  v9 = (const __m128i *)v130;
  v130[0] = *(_DWORD *)(a1 + 16);
  v10 = *(unsigned int *)(a2 + 24);
  v11 = v10 + 1;
  v131 = v7;
  v130[1] = 0;
  v12 = (__m128i *)(v7 + 24 * v10);
  v132 = 1;
  if ( v11 > v8 )
  {
    v86 = a2 + 32;
    if ( v7 > (unsigned __int64)v130 || v12 <= (__m128i *)v130 )
    {
      sub_2237220(v5, v86, v11, 24);
      v12 = (__m128i *)(*(_QWORD *)(a2 + 16) + 24LL * *(unsigned int *)(a2 + 24));
    }
    else
    {
      sub_2237220(v5, v86, v11, 24);
      v87 = *(_QWORD *)(a2 + 16);
      v9 = (const __m128i *)((char *)v130 + v87 - v7);
      v12 = (__m128i *)(v87 + 24LL * *(unsigned int *)(a2 + 24));
    }
  }
  *v12 = _mm_loadu_si128(v9);
  v13 = v9[1].m128i_i64[0];
  v14 = (const __m128i *)(a1 + 16);
  v113 = (int *)(a1 + 16);
  v12[1].m128i_i64[0] = v13;
  v15 = *(unsigned int *)(a2 + 28);
  v16 = (unsigned int)(*(_DWORD *)(a2 + 24) + 1);
  v17 = v16 + 1;
  *(_DWORD *)(a2 + 24) = v16;
  if ( v16 + 1 > v15 )
  {
    v88 = *(_QWORD *)(a2 + 16);
    v89 = a2 + 32;
    if ( v88 > (unsigned __int64)v14 || (unsigned __int64)v14 >= v88 + 24 * v16 )
    {
      sub_2237220(v5, v89, v17, 24);
      v18 = *(_QWORD *)(a2 + 16);
      v16 = *(unsigned int *)(a2 + 24);
      v14 = (const __m128i *)(a1 + 16);
    }
    else
    {
      v90 = &v14->m128i_i8[-v88];
      sub_2237220(v5, v89, v17, 24);
      v18 = *(_QWORD *)(a2 + 16);
      v16 = *(unsigned int *)(a2 + 24);
      v14 = (const __m128i *)&v90[v18];
    }
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 16);
  }
  v19 = (__m128i *)(v18 + 24 * v16);
  *v19 = _mm_loadu_si128(v14);
  v19[1].m128i_i64[0] = v14[1].m128i_i64[0];
  v20 = *(char **)(a2 + 16);
  v21 = (unsigned int)(*(_DWORD *)(a2 + 24) + 1);
  *(_DWORD *)(a2 + 24) = v21;
  sub_14368B0(*(_QWORD *)(a1 + 8), v20, v21, 1u, 0, 1u);
  v22 = *(_WORD *)(a1 + 32);
  if ( v22 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_19;
  }
  if ( v22 == 23 )
  {
    v27 = *(_WORD *)(a1 + 88);
    if ( !v27 )
      goto LABEL_19;
    v84 = *(_DWORD *)(a1 + 2792);
    if ( !v84 )
    {
LABEL_166:
      *(_WORD *)(a1 + 88) = v27 - 1;
      goto LABEL_19;
    }
    v85 = *(_QWORD *)(a1 + 2784) + 24LL * v84 - 24;
    while ( 1 )
    {
      if ( v27 == *(_WORD *)(v85 + 14) )
      {
        if ( *(_DWORD *)(v85 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_161;
      }
      else if ( v27 > *(_WORD *)(v85 + 14) )
      {
        goto LABEL_161;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v85 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v85 + 18) )
        goto LABEL_166;
LABEL_161:
      --v84;
      v85 -= 24;
      *(_DWORD *)(a1 + 2792) = v84;
      if ( !v84 )
        goto LABEL_166;
    }
  }
  if ( (unsigned __int16)(v22 - 20) <= 1u )
  {
    v23 = *(_WORD *)(a1 + 90);
    if ( v22 == 20 )
    {
      *(_WORD *)(a1 + 90) = v23 + 1;
    }
    else if ( v23 )
    {
      v24 = *(_DWORD *)(a1 + 2792);
      if ( v24 )
      {
        v25 = *(_WORD *)(a1 + 88);
        v26 = *(_QWORD *)(a1 + 2784) + 24LL * v24 - 24;
        do
        {
          if ( v25 == *(_WORD *)(v26 + 14) )
          {
            if ( *(_DWORD *)(v26 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_12;
          }
          else if ( v25 > *(_WORD *)(v26 + 14) )
          {
            goto LABEL_12;
          }
          if ( *(_WORD *)(v26 + 16) >= v23 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v26 + 18) )
            break;
LABEL_12:
          --v24;
          v26 -= 24;
          *(_DWORD *)(a1 + 2792) = v24;
        }
        while ( v24 );
      }
      *(_WORD *)(a1 + 90) = v23 - 1;
    }
    goto LABEL_19;
  }
  if ( (unsigned __int16)(v22 - 24) <= 1u )
  {
    v80 = *(_WORD *)(a1 + 92);
    if ( v22 == 24 )
    {
      *(_WORD *)(a1 + 92) = v80 + 1;
    }
    else if ( v80 )
    {
      v81 = *(_DWORD *)(a1 + 2792);
      if ( v81 )
      {
        v82 = *(_WORD *)(a1 + 88);
        v83 = *(_QWORD *)(a1 + 2784) + 24LL * v81 - 24;
        do
        {
          if ( v82 == *(_WORD *)(v83 + 14) )
          {
            if ( *(_DWORD *)(v83 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_152;
          }
          else if ( v82 > *(_WORD *)(v83 + 14) )
          {
            goto LABEL_152;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v83 + 16) && v80 <= *(_WORD *)(v83 + 18) )
            break;
LABEL_152:
          --v81;
          v83 -= 24;
          *(_DWORD *)(a1 + 2792) = v81;
        }
        while ( v81 );
      }
      *(_WORD *)(a1 + 92) = v80 - 1;
    }
LABEL_19:
    v28 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v28, v113);
    goto LABEL_20;
  }
  if ( (unsigned __int16)(v22 - 14) <= 1u || (unsigned __int16)(v22 - 17) <= 2u || v22 == 3 || !sub_10CCDE0(v22) )
    goto LABEL_19;
  v93 = *(_DWORD *)(a1 + 20);
  v94 = *(__int64 **)(a1 + 8);
  if ( !v93 )
    v93 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v93;
  sub_14634E0(v94, v113);
LABEL_20:
  v29 = *(_DWORD *)(a2 + 160);
  v143 = 0;
  v147 = a1 + 504;
  v144 = v146;
  v145 = 0x200000000LL;
  ptr = v150;
  v149 = 0x200000000LL;
  if ( v29 )
  {
    v30 = 0;
    v31 = **(_QWORD **)(a2 + 152);
    v32 = *(_QWORD *)(v31 + 16);
    if ( (*(_BYTE *)(v31 + 28) & 0x7Fu) - 18 <= 0x3F )
      v30 = **(_QWORD **)(a2 + 152);
    v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v32 & 4) != 0 )
      v33 = *(_QWORD *)v33;
    if ( v33 )
    {
      v34 = *(_BYTE *)(v33 + 8);
      v33 -= 64LL;
      if ( (v34 & 0x7Fu) - 58 >= 4 )
        v33 = 0;
    }
    v35 = 0;
    if ( v30 )
    {
      v118 = v33;
      v36 = sub_B72F20(v30);
      v33 = v118;
      v35 = v36;
    }
    sub_19A2CD0(&v133, *(_QWORD *)(a1 + 96), v33, 0, v35);
    if ( *(_DWORD *)(a2 + 160) == 1 )
    {
      v136 = (void *)a1;
      v137 = a1;
      LODWORD(v138) = 0;
      v139 = (_DWORD *)(a1 + 2548);
      LODWORD(v140) = 0;
      if ( a3
        && ((v77 = sub_154D3C0(a1, &v137, v31),
             *v139 += v77,
             LODWORD(v140) = v77 + (_DWORD)v140,
             v78 = *(_BYTE *)(v31 + 28) & 0x7F,
             ((v78 + 94) & 0x7Fu) <= 5)
         || v78 == 71) )
      {
        sub_1564E40(v137, 4194313);
        v79 = *(_QWORD *)(a1 + 96);
        LODWORD(v138) = v138 + 1;
        sub_17A2FE0(v79, *(_QWORD *)(v79 + 608), v31);
        sub_148F5D0(a1, *(_QWORD *)(a2 + 128), *(_DWORD *)(a2 + 144), (unsigned int)&v143, 0, 0, 0, 241, 0);
        sub_17A3230(*(_QWORD *)(a1 + 96));
      }
      else
      {
        sub_148F5D0(a1, *(_QWORD *)(a2 + 128), *(_DWORD *)(a2 + 144), (unsigned int)&v143, 0, 0, 0, 241, 0);
      }
      for ( *v139 -= (_DWORD)v140; (_DWORD)v138; LODWORD(v138) = v138 - 1 )
        sub_1564F70(v137);
    }
    else
    {
      sub_148F5D0(a1, *(_QWORD *)(a2 + 128), *(_DWORD *)(a2 + 144), (unsigned int)&v143, 0, 0, 0, 241, 0);
    }
    sub_19A2DA0(&v133);
    goto LABEL_33;
  }
  sub_1564840(&v136, a1, v113, 2062);
  v54 = (unsigned __int8 *)v136;
  v55 = *(void ***)(*(_QWORD *)(a2 + 128) + 16LL);
  v56 = *v55;
  v57 = (char *)(v55 + 2);
  v58 = (unsigned int)*v55;
  if ( !v136 )
  {
    v95 = v137;
    v96 = *(_DWORD *)(v137 + 14976);
    if ( v96 )
    {
      v97 = (unsigned int)(v96 - 1);
      *(_DWORD *)(v137 + 14976) = v97;
      v54 = *(unsigned __int8 **)(v95 + 8 * v97 + 14848);
      v98 = *((unsigned int *)v54 + 134);
      v99 = *((_QWORD *)v54 + 66);
      *v54 = 0;
      *((_DWORD *)v54 + 106) = 0;
      v100 = v99 + (v98 << 6);
      while ( v99 != v100 )
      {
        while ( 1 )
        {
          v100 -= 64;
          v101 = *(void **)(v100 + 24);
          if ( v101 == (void *)(v100 + 40) )
            break;
          v129 = v99;
          v126 = v58;
          src = v56;
          v121 = v55;
          operator delete(v101);
          v99 = v129;
          v55 = v121;
          v56 = src;
          v58 = v126;
          if ( v129 == v100 )
            goto LABEL_198;
        }
      }
LABEL_198:
      *((_DWORD *)v54 + 134) = 0;
    }
    else
    {
      v128 = (char *)(v55 + 2);
      v127 = (unsigned int)*v55;
      srca = (unsigned int)*v55;
      v122 = *(void ***)(*(_QWORD *)(a2 + 128) + 16LL);
      v54 = (unsigned __int8 *)operator new(0x3A0u);
      *v54 = 0;
      *((_QWORD *)v54 + 12) = v54 + 112;
      *((_QWORD *)v54 + 16) = v54 + 144;
      *((_QWORD *)v54 + 20) = v54 + 176;
      *((_QWORD *)v54 + 24) = v54 + 208;
      *((_QWORD *)v54 + 28) = v54 + 240;
      *((_QWORD *)v54 + 32) = v54 + 272;
      *((_QWORD *)v54 + 36) = v54 + 304;
      *((_QWORD *)v54 + 40) = v54 + 336;
      *((_QWORD *)v54 + 44) = v54 + 368;
      *((_QWORD *)v54 + 48) = v54 + 400;
      *((_QWORD *)v54 + 52) = v54 + 432;
      *((_QWORD *)v54 + 13) = 0;
      v54[112] = 0;
      *((_QWORD *)v54 + 17) = 0;
      v54[144] = 0;
      *((_QWORD *)v54 + 21) = 0;
      v54[176] = 0;
      *((_QWORD *)v54 + 25) = 0;
      v54[208] = 0;
      *((_QWORD *)v54 + 29) = 0;
      v54[240] = 0;
      *((_QWORD *)v54 + 33) = 0;
      v54[272] = 0;
      *((_QWORD *)v54 + 37) = 0;
      v54[304] = 0;
      *((_QWORD *)v54 + 41) = 0;
      v54[336] = 0;
      *((_QWORD *)v54 + 45) = 0;
      v54[368] = 0;
      *((_QWORD *)v54 + 49) = 0;
      v54[400] = 0;
      *((_QWORD *)v54 + 53) = 0x800000000LL;
      v55 = v122;
      *((_QWORD *)v54 + 66) = v54 + 544;
      LODWORD(v56) = srca;
      *((_QWORD *)v54 + 67) = 0x600000000LL;
      v58 = v127;
      v57 = v128;
    }
    v136 = v54;
  }
  v54[*v54 + 1] = 0;
  v133 = v135;
  if ( &v57[v58] && !v57 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( ((unsigned int)v56 & 0xFFFFFFF0) != 0 )
  {
    v119 = v58;
    v59 = (_QWORD *)operator new(v58 + 1);
    v58 = v119;
    v133 = v59;
    v135[0] = v119;
LABEL_168:
    v120 = v58;
    memcpy(v59, v57, v58);
    v59 = v133;
    v58 = v120;
    goto LABEL_99;
  }
  if ( v58 == 1 )
  {
    LOBYTE(v135[0]) = *((_BYTE *)v55 + 16);
    v59 = v135;
    goto LABEL_99;
  }
  v59 = v135;
  if ( v58 )
    goto LABEL_168;
LABEL_99:
  n = v58;
  *((_BYTE *)v59 + v58) = 0;
  v60 = v136;
  v61 = *(unsigned __int8 *)v136;
  *(_BYTE *)v136 = v61 + 1;
  v62 = (unsigned __int8)v61;
  v63 = 4 * (v61 + 3);
  v64 = (void **)&v60[v63];
  v65 = (_BYTE *)v60[v63];
  if ( v133 == v135 )
  {
    v91 = n;
    if ( n )
    {
      if ( n == 1 )
        *v65 = v135[0];
      else
        memcpy(v65, v133, n);
      v91 = n;
      v65 = *v64;
    }
    v64[1] = (void *)v91;
    v65[v91] = 0;
    v65 = v133;
    goto LABEL_103;
  }
  if ( v65 == (_BYTE *)&v60[v63 + 2] )
  {
    *v64 = v133;
    v64[1] = (void *)n;
    v64[2] = (void *)v135[0];
    goto LABEL_192;
  }
  v66 = v60[4 * v62 + 14];
  *v64 = v133;
  v64[1] = (void *)n;
  v64[2] = (void *)v135[0];
  if ( !v65 )
  {
LABEL_192:
    v65 = v135;
    v133 = v135;
    goto LABEL_103;
  }
  v133 = v65;
  v135[0] = v66;
LABEL_103:
  n = 0;
  *v65 = 0;
  if ( v133 != v135 )
    operator delete(v133);
  if ( (_BYTE)v142 )
  {
    sub_FC7790(v138, (__int64 *)&v136, SHIBYTE(v142));
    v138 = 0;
    v142 = 0;
  }
  if ( v140 != &v141 )
    operator delete(v140);
  v67 = (void **)v136;
  if ( v136 )
  {
    v68 = v137;
    if ( v137 )
    {
      if ( (unsigned __int64)v136 < v137 || (unsigned __int64)v136 > v137 + 14848 )
      {
        v69 = *((void ***)v136 + 66);
        v70 = &v69[8 * (unsigned __int64)*((unsigned int *)v136 + 134)];
        if ( v69 != v70 )
        {
          do
          {
            while ( 1 )
            {
              v70 -= 8;
              v71 = (void **)v70[3];
              if ( v71 == v70 + 5 )
                break;
              operator delete(v71);
              if ( v69 == v70 )
                goto LABEL_115;
            }
          }
          while ( v69 != v70 );
LABEL_115:
          v70 = (void **)v67[66];
        }
        if ( v70 != v67 + 68 )
          free(v70);
        v72 = (void **)v67[52];
        if ( v72 != v67 + 54 )
          free(v72);
        v73 = v67 + 48;
        v74 = v67 + 8;
        do
        {
          while ( *v73 != v73 + 2 )
          {
            operator delete(*v73);
            v73 -= 4;
            if ( v73 == v74 )
              goto LABEL_123;
          }
          v73 -= 4;
        }
        while ( v73 != v74 );
LABEL_123:
        operator delete(v67, 0x3A0u);
      }
      else
      {
        v92 = *(unsigned int *)(v137 + 14976);
        *(_DWORD *)(v137 + 14976) = v92 + 1;
        *(_QWORD *)(v68 + 8 * v92 + 14848) = v67;
      }
    }
  }
  v7 = v131;
LABEL_33:
  if ( a4
    && (_DWORD)v145
    && (*(_BYTE *)(*(_QWORD *)v144 + 34LL) & 0xF) != 2
    && (*(_BYTE *)(*(_QWORD *)v144 + 35LL) & 1) == 0
    && (unsigned __int8)sub_15D8650() )
  {
    sub_1564840(&v136, a1, v113, 2063);
    v102 = (unsigned __int8 *)v136;
    v103 = *(_QWORD *)(a2 + 128);
    if ( !v136 )
    {
      v106 = v137;
      v107 = *(_DWORD *)(v137 + 14976);
      if ( v107 )
      {
        v108 = (unsigned int)(v107 - 1);
        *(_DWORD *)(v137 + 14976) = v108;
        v102 = *(unsigned __int8 **)(v106 + 8 * v108 + 14848);
        v109 = *((unsigned int *)v102 + 134);
        *v102 = 0;
        v110 = *((_QWORD *)v102 + 66);
        *((_DWORD *)v102 + 106) = 0;
        v111 = v110 + (v109 << 6);
        while ( v110 != v111 )
        {
          while ( 1 )
          {
            v111 -= 64;
            v112 = *(void **)(v111 + 24);
            if ( v112 == (void *)(v111 + 40) )
              break;
            v123 = v110;
            v116 = v103;
            operator delete(v112);
            v110 = v123;
            v103 = v116;
            if ( v123 == v111 )
              goto LABEL_212;
          }
        }
LABEL_212:
        *((_DWORD *)v102 + 134) = 0;
      }
      else
      {
        v115 = *(_QWORD *)(a2 + 128);
        v102 = (unsigned __int8 *)operator new(0x3A0u);
        *v102 = 0;
        *((_QWORD *)v102 + 12) = v102 + 112;
        *((_QWORD *)v102 + 16) = v102 + 144;
        *((_QWORD *)v102 + 20) = v102 + 176;
        *((_QWORD *)v102 + 24) = v102 + 208;
        *((_QWORD *)v102 + 28) = v102 + 240;
        *((_QWORD *)v102 + 32) = v102 + 272;
        *((_QWORD *)v102 + 36) = v102 + 304;
        *((_QWORD *)v102 + 40) = v102 + 336;
        *((_QWORD *)v102 + 44) = v102 + 368;
        *((_QWORD *)v102 + 48) = v102 + 400;
        *((_QWORD *)v102 + 52) = v102 + 432;
        *((_QWORD *)v102 + 13) = 0;
        v102[112] = 0;
        *((_QWORD *)v102 + 17) = 0;
        v102[144] = 0;
        *((_QWORD *)v102 + 21) = 0;
        v102[176] = 0;
        *((_QWORD *)v102 + 25) = 0;
        v102[208] = 0;
        *((_QWORD *)v102 + 29) = 0;
        v102[240] = 0;
        *((_QWORD *)v102 + 33) = 0;
        v102[272] = 0;
        *((_QWORD *)v102 + 37) = 0;
        v102[304] = 0;
        *((_QWORD *)v102 + 41) = 0;
        v102[336] = 0;
        *((_QWORD *)v102 + 45) = 0;
        v102[368] = 0;
        *((_QWORD *)v102 + 49) = 0;
        v102[400] = 0;
        *((_QWORD *)v102 + 53) = 0x800000000LL;
        v103 = v115;
        *((_QWORD *)v102 + 66) = v102 + 544;
        *((_QWORD *)v102 + 67) = 0x600000000LL;
      }
      v136 = v102;
    }
    v102[*v102 + 1] = 5;
    v104 = v136;
    v105 = *(unsigned __int8 *)v136;
    *(_BYTE *)v136 = v105 + 1;
    v104[v105 + 2] = v103;
    sub_AEA040((__int64)&v136);
  }
  v37 = *(_DWORD *)(a2 + 160);
  if ( !v37 )
    goto LABEL_52;
  v38 = 0;
  v39 = 8LL * (unsigned int)(v37 - 1) + 8;
  do
  {
    v40 = *(_QWORD *)(*(_QWORD *)(a2 + 152) + v38);
    v38 += 8;
    sub_17A5EA0(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v40, &v143);
  }
  while ( v38 != v39 );
  for ( i = *(_WORD *)(a1 + 32); i != 1; i = *(_WORD *)(a1 + 32) )
  {
    if ( (unsigned __int16)(i - 22) <= 1u )
    {
      v42 = *(_WORD *)(a1 + 88);
      if ( i == 22 )
      {
        *(_WORD *)(a1 + 88) = v42 + 1;
      }
      else if ( v42 )
      {
        v52 = *(_DWORD *)(a1 + 2792);
        if ( !v52 )
        {
LABEL_87:
          *(_WORD *)(a1 + 88) = v42 - 1;
          goto LABEL_51;
        }
        v53 = (_WORD *)(*(_QWORD *)(a1 + 2784) + 24LL * v52 - 24);
        while ( 2 )
        {
          if ( v53[7] == v42 )
          {
            if ( *((_DWORD *)v53 + 4) != *(_DWORD *)(a1 + 90) )
            {
LABEL_85:
              if ( *(_WORD *)(a1 + 90) <= v53[8] && *(_WORD *)(a1 + 92) <= v53[9] )
                goto LABEL_87;
            }
          }
          else if ( v53[7] >= v42 )
          {
            goto LABEL_85;
          }
          --v52;
          v53 -= 12;
          *(_DWORD *)(a1 + 2792) = v52;
          if ( !v52 )
            goto LABEL_87;
          continue;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)(i - 20) <= 1u )
      {
        v44 = *(_WORD *)(a1 + 90);
        if ( i == 20 )
        {
          *(_WORD *)(a1 + 90) = v44 + 1;
        }
        else if ( v44 )
        {
          v45 = *(_DWORD *)(a1 + 2792);
          if ( v45 )
          {
            v46 = *(_WORD *)(a1 + 88);
            v47 = *(_QWORD *)(a1 + 2784) + 24LL * v45 - 24;
            do
            {
              if ( v46 == *(_WORD *)(v47 + 14) )
              {
                if ( *(_DWORD *)(v47 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_60;
              }
              else if ( v46 > *(_WORD *)(v47 + 14) )
              {
                goto LABEL_60;
              }
              if ( *(_WORD *)(v47 + 16) >= v44 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v47 + 18) )
                break;
LABEL_60:
              --v45;
              v47 -= 24;
              *(_DWORD *)(a1 + 2792) = v45;
            }
            while ( v45 );
          }
          *(_WORD *)(a1 + 90) = v44 - 1;
        }
        goto LABEL_51;
      }
      if ( (unsigned __int16)(i - 24) > 1u )
      {
        if ( (unsigned __int16)(i - 14) > 1u && (unsigned __int16)(i - 17) > 2u )
        {
          if ( i == 3 )
          {
            sub_1566D30(a1);
            continue;
          }
          if ( sub_10CCDE0(i) )
          {
            v75 = *(_DWORD *)(a1 + 20);
            v76 = *(__int64 **)(a1 + 8);
            if ( !v75 )
              v75 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 40) = v75;
            sub_14634E0(v76, v113);
            continue;
          }
        }
      }
      else
      {
        v48 = *(_WORD *)(a1 + 92);
        if ( i == 24 )
        {
          *(_WORD *)(a1 + 92) = v48 + 1;
        }
        else if ( v48 )
        {
          v49 = *(_DWORD *)(a1 + 2792);
          if ( v49 )
          {
            v50 = *(_WORD *)(a1 + 88);
            v51 = *(_QWORD *)(a1 + 2784) + 24LL * v49 - 24;
            do
            {
              if ( v50 == *(_WORD *)(v51 + 14) )
              {
                if ( *(_DWORD *)(v51 + 16) == *(_DWORD *)(a1 + 90) )
                  goto LABEL_73;
              }
              else if ( v50 > *(_WORD *)(v51 + 14) )
              {
                goto LABEL_73;
              }
              if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v51 + 16) && *(_WORD *)(v51 + 18) >= v48 )
                break;
LABEL_73:
              --v49;
              v51 -= 24;
              *(_DWORD *)(a1 + 2792) = v49;
            }
            while ( v49 );
          }
          *(_WORD *)(a1 + 92) = v48 - 1;
        }
      }
    }
LABEL_51:
    v43 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v43, v113);
LABEL_52:
    ;
  }
  if ( *(_QWORD *)(a1 + 24) == v7 )
    sub_146AA30(a1);
  sub_15DCED0(v147, &v147);
  if ( ptr != v150 )
    free(ptr);
  if ( v144 != v146 )
    free(v144);
}
