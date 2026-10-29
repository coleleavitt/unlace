void __fastcall sub_B38E40(_QWORD *a1, unsigned int *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rbx
  unsigned int *v6; // r13
  __int64 *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int8 *v12; // r13
  _BOOL8 v13; // r14
  _QWORD *v14; // rdx
  __int64 v15; // rax
  void **v16; // r14
  __int64 v17; // rax
  void **v18; // r15
  void **v19; // r13
  void **v20; // rdi
  void **v21; // rdi
  void **v22; // r13
  void **v23; // r15
  unsigned __int64 v24; // rax
  char v25; // al
  __int64 v26; // r14
  __int64 *v27; // r15
  const char *v28; // r14
  char *v29; // rdi
  char *v30; // r15
  unsigned int v31; // r14d
  _BYTE *v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 v34; // r15
  __int64 v35; // r14
  __int64 *v36; // rax
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r14
  __int64 *v40; // rcx
  _BYTE *v41; // rax
  __int64 *v42; // rsi
  signed __int64 v43; // rbp
  void **v44; // rbp
  unsigned __int64 v45; // rax
  void **v46; // r13
  void **v47; // rbx
  void **v48; // rdi
  void **v49; // rdi
  void **v50; // rbx
  void **v51; // r13
  __int64 v52; // rax
  __int64 *v53; // rdx
  unsigned __int64 v54; // rcx
  __int64 *i; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 *v58; // rdx
  unsigned __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __int64 *v65; // rax
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 *v70; // rdx
  __int64 *v71; // r15
  __int64 *v72; // rdi
  __int64 *j; // rax
  __int64 v74; // rcx
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // r15
  __int64 *v79; // rdx
  __int64 *v80; // r15
  __int64 *v81; // rdi
  _QWORD *v82; // r8
  _QWORD *v83; // r15
  unsigned int v84; // eax
  unsigned int v85; // eax
  __int64 v86; // r8
  unsigned int v87; // r10d
  __int64 *v88; // r9
  __int64 v89; // r9
  __int64 *v90; // rax
  _QWORD *v91; // r8
  __int64 v92; // r15
  _QWORD *v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 *v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rax
  unsigned int v99; // eax
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 *v102; // r15
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 *v105; // rax
  __int64 v106; // r15
  _QWORD *v107; // rax
  __int64 v108; // rdi
  __int64 *v109; // rdx
  __int64 v110; // rdx
  unsigned __int64 v111; // rax
  unsigned int v112; // eax
  size_t v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned __int64 v116; // rax
  unsigned int v117; // eax
  __int64 *v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rdx
  unsigned __int64 v121; // rdx
  __int64 v122; // rdi
  __int64 v123; // rdx
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // rdx
  int v126; // eax
  char *v127; // r14
  __int64 v128; // rbp
  int v129; // eax
  _QWORD *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // r14
  __int64 *v133; // r14
  __int64 *v134; // rdi
  __int64 v135; // r14
  int v136; // ebp
  _QWORD *v137; // rdi
  __int64 v138; // rax
  __int64 *v139; // [rsp+0h] [rbp-168h] BYREF
  _QWORD *v140; // [rsp+8h] [rbp-160h]
  unsigned int v141; // [rsp+14h] [rbp-154h]
  __int64 *v142; // [rsp+18h] [rbp-150h]
  void *src; // [rsp+20h] [rbp-148h] BYREF
  size_t n; // [rsp+28h] [rbp-140h]
  _QWORD v145[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned int v146; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v147; // [rsp+44h] [rbp-124h]
  char v148; // [rsp+48h] [rbp-120h]
  __int64 v149; // [rsp+4Ch] [rbp-11Ch]
  char v150; // [rsp+54h] [rbp-114h]
  void *dest; // [rsp+58h] [rbp-110h]
  __m128 v152; // [rsp+60h] [rbp-108h] BYREF
  char v153; // [rsp+78h] [rbp-F0h]
  void *v154; // [rsp+80h] [rbp-E8h] BYREF
  unsigned __int64 v155; // [rsp+88h] [rbp-E0h]
  __int64 v156; // [rsp+90h] [rbp-D8h]
  void *v157; // [rsp+A0h] [rbp-C8h]
  __int64 v158; // [rsp+B0h] [rbp-B8h] BYREF
  __int16 v159; // [rsp+C0h] [rbp-A8h]
  void *ptr; // [rsp+D0h] [rbp-98h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-90h]
  __int64 v162; // [rsp+E8h] [rbp-80h] BYREF
  void *v163; // [rsp+F0h] [rbp-78h]
  _QWORD *v164; // [rsp+F8h] [rbp-70h]
  __int16 v165; // [rsp+100h] [rbp-68h] BYREF
  _QWORD *v166; // [rsp+108h] [rbp-60h]
  __int16 v167; // [rsp+110h] [rbp-58h]
  __int64 v168; // [rsp+118h] [rbp-50h]
  __int16 v169; // [rsp+120h] [rbp-48h]
  __int64 v170; // [rsp+128h] [rbp-40h]

  v2 = (_QWORD *)a1[5];
  v3 = *v2;
  if ( !*v2 )
    return;
  if ( (*(_BYTE *)(v3 + 29) & 1) != 0 )
  {
    v52 = sub_B68690(*v2);
    v53 = *(__int64 **)v52;
    v54 = *(_QWORD *)v52 + 8LL * *(unsigned int *)(v52 + 8);
    if ( *(_QWORD *)v52 < v54 )
    {
      v65 = *(__int64 **)v52;
      while ( *(_WORD *)(*v65 + 36) != 199 )
      {
        if ( (__int64 *)v54 == ++v65 )
          goto LABEL_88;
      }
      if ( (__int64 *)v54 != v65 )
        return;
    }
    else if ( v53 != (__int64 *)v54 )
    {
      if ( *(_WORD *)(*(_QWORD *)v54 + 36LL) == 199 )
        return;
      for ( i = (__int64 *)(v54 + 8); v53 != i; ++i )
      {
        v56 = *i;
        if ( *(_WORD *)(v56 + 36) == 199 )
          return;
      }
    }
LABEL_88:
    if ( (*(_BYTE *)(v3 + 29) & 1) != 0 )
    {
      v57 = sub_B68690(v3);
      v58 = *(__int64 **)v57;
      v59 = *(_QWORD *)v57 + 8LL * *(unsigned int *)(v57 + 8);
      if ( *(_QWORD *)v57 >= v59 )
      {
        if ( v58 != (__int64 *)v59 )
        {
          if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) == 142 )
            return;
          for ( j = (__int64 *)(v59 + 8); v58 != j; ++j )
          {
            v74 = *j;
            if ( *(_WORD *)(v74 + 36) == 142 )
              return;
          }
        }
      }
      else
      {
        v60 = *(__int64 **)v57;
        while ( *(_WORD *)(*v60 + 36) != 142 )
        {
          if ( (__int64 *)v59 == ++v60 )
            goto LABEL_93;
        }
        if ( (__int64 *)v59 != v60 )
          return;
      }
LABEL_93:
      if ( (*(_BYTE *)(v3 + 29) & 1) != 0 )
      {
        v61 = sub_B68690(v3);
        v62 = *(_QWORD *)v61;
        v63 = *(_QWORD *)v61 + 8LL * *(unsigned int *)(v61 + 8);
        if ( *(_QWORD *)v61 >= v63 )
        {
          if ( v62 != v63 )
          {
            while ( *(_WORD *)(*(_QWORD *)v63 + 36LL) != 386 )
            {
              v63 += 8LL;
              if ( v62 == v63 )
                goto LABEL_3;
            }
            return;
          }
        }
        else
        {
          v64 = *(_QWORD *)v61;
          while ( *(_WORD *)(*(_QWORD *)v64 + 36LL) != 386 )
          {
            v64 += 8;
            if ( v63 == v64 )
              goto LABEL_3;
          }
          if ( v63 != v64 )
            return;
        }
      }
    }
  }
LABEL_3:
  sub_FA3370(&ptr, a1[2], *a2, 2635);
  v6 = (unsigned int *)ptr;
  v7 = *(__int64 **)(a2 + 1);
  if ( ptr )
  {
    v8 = *((unsigned int *)ptr + 106);
    v9 = *((unsigned int *)ptr + 107);
    v10 = v8 + 1;
  }
  else
  {
    v66 = si128.m128i_i64[0];
    v67 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
    if ( v67 )
    {
      v68 = (unsigned int)(v67 - 1);
      *(_DWORD *)(si128.m128i_i64[0] + 14976) = v68;
      v6 = *(unsigned int **)(v66 + 8 * v68 + 14848);
      v69 = v6[134];
      *(_BYTE *)v6 = 0;
      v70 = *((__int64 **)v6 + 66);
      v6[106] = 0;
      v71 = &v70[8 * v69];
      if ( v70 == v71 )
      {
        v10 = 1;
        v8 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v71 -= 8;
            v72 = (__int64 *)v71[3];
            if ( v72 == v71 + 5 )
              break;
            v140 = v7;
            v139 = v70;
            operator delete(v72);
            v70 = v139;
            if ( v139 == v71 )
              goto LABEL_111;
          }
        }
        while ( v70 != v71 );
LABEL_111:
        v8 = v6[106];
        v10 = v8 + 1;
      }
      v6[134] = 0;
      v9 = v6[107];
    }
    else
    {
      v139 = *(__int64 **)(a2 + 1);
      v98 = operator new(0x3A0u);
      v9 = 8;
      v10 = 1;
      v6 = (unsigned int *)v98;
      *(_BYTE *)v98 = 0;
      *(_QWORD *)(v98 + 96) = v98 + 112;
      *(_QWORD *)(v98 + 128) = v98 + 144;
      *(_QWORD *)(v98 + 160) = v98 + 176;
      *(_QWORD *)(v98 + 192) = v98 + 208;
      *(_QWORD *)(v98 + 224) = v98 + 240;
      *(_QWORD *)(v98 + 256) = v98 + 272;
      *(_QWORD *)(v98 + 288) = v98 + 304;
      *(_QWORD *)(v98 + 320) = v98 + 336;
      *(_QWORD *)(v98 + 352) = v98 + 368;
      *(_QWORD *)(v98 + 384) = v98 + 400;
      *(_QWORD *)(v98 + 416) = v98 + 432;
      *(_QWORD *)(v98 + 104) = 0;
      *(_BYTE *)(v98 + 112) = 0;
      *(_QWORD *)(v98 + 136) = 0;
      *(_BYTE *)(v98 + 144) = 0;
      *(_QWORD *)(v98 + 168) = 0;
      *(_BYTE *)(v98 + 176) = 0;
      *(_QWORD *)(v98 + 200) = 0;
      *(_BYTE *)(v98 + 208) = 0;
      *(_QWORD *)(v98 + 232) = 0;
      *(_BYTE *)(v98 + 240) = 0;
      *(_QWORD *)(v98 + 264) = 0;
      *(_BYTE *)(v98 + 272) = 0;
      *(_QWORD *)(v98 + 296) = 0;
      *(_BYTE *)(v98 + 304) = 0;
      *(_QWORD *)(v98 + 328) = 0;
      *(_BYTE *)(v98 + 336) = 0;
      *(_QWORD *)(v98 + 360) = 0;
      *(_BYTE *)(v98 + 368) = 0;
      *(_QWORD *)(v98 + 392) = 0;
      *(_BYTE *)(v98 + 400) = 0;
      *(_QWORD *)(v98 + 424) = 0x800000000LL;
      v7 = v139;
      *(_QWORD *)(v98 + 528) = v98 + 544;
      *(_QWORD *)(v98 + 536) = 0x600000000LL;
      v8 = 0;
    }
    ptr = v6;
  }
  v154 = v7;
  LOBYTE(v155) = 1;
  if ( v9 < v10 )
  {
    sub_22134E0(v6 + 104, v6 + 108, v10, 12);
    v8 = v6[106];
  }
  v11 = *((_QWORD *)v6 + 52) + 12 * v8;
  *(_QWORD *)v11 = v154;
  *(_DWORD *)(v11 + 8) = v155;
  ++v6[106];
  v12 = (unsigned __int8 *)ptr;
  v13 = (*((_BYTE *)a2 + 15) & 0x10) != 0;
  if ( !ptr )
  {
    v75 = si128.m128i_i64[0];
    v76 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
    if ( v76 )
    {
      v77 = (unsigned int)(v76 - 1);
      *(_DWORD *)(si128.m128i_i64[0] + 14976) = v77;
      v12 = *(unsigned __int8 **)(v75 + 8 * v77 + 14848);
      v78 = *((unsigned int *)v12 + 134);
      *v12 = 0;
      v79 = *((__int64 **)v12 + 66);
      *((_DWORD *)v12 + 106) = 0;
      v80 = &v79[8 * v78];
      while ( v79 != v80 )
      {
        while ( 1 )
        {
          v80 -= 8;
          v81 = (__int64 *)v80[3];
          if ( v81 == v80 + 5 )
            break;
          v139 = v79;
          operator delete(v81);
          v79 = v139;
          if ( v139 == v80 )
            goto LABEL_133;
        }
      }
LABEL_133:
      *((_DWORD *)v12 + 134) = 0;
    }
    else
    {
      v12 = (unsigned __int8 *)operator new(0x3A0u);
      *v12 = 0;
      *((_QWORD *)v12 + 12) = v12 + 112;
      *((_QWORD *)v12 + 16) = v12 + 144;
      *((_QWORD *)v12 + 20) = v12 + 176;
      *((_QWORD *)v12 + 24) = v12 + 208;
      *((_QWORD *)v12 + 28) = v12 + 240;
      *((_QWORD *)v12 + 32) = v12 + 272;
      *((_QWORD *)v12 + 36) = v12 + 304;
      *((_QWORD *)v12 + 40) = v12 + 336;
      *((_QWORD *)v12 + 44) = v12 + 368;
      *((_QWORD *)v12 + 48) = v12 + 400;
      *((_QWORD *)v12 + 52) = v12 + 432;
      *((_QWORD *)v12 + 13) = 0;
      v12[112] = 0;
      *((_QWORD *)v12 + 17) = 0;
      v12[144] = 0;
      *((_QWORD *)v12 + 21) = 0;
      v12[176] = 0;
      *((_QWORD *)v12 + 25) = 0;
      v12[208] = 0;
      *((_QWORD *)v12 + 29) = 0;
      v12[240] = 0;
      *((_QWORD *)v12 + 33) = 0;
      v12[272] = 0;
      *((_QWORD *)v12 + 37) = 0;
      v12[304] = 0;
      *((_QWORD *)v12 + 41) = 0;
      v12[336] = 0;
      *((_QWORD *)v12 + 45) = 0;
      v12[368] = 0;
      *((_QWORD *)v12 + 49) = 0;
      v12[400] = 0;
      *((_QWORD *)v12 + 53) = 0x800000000LL;
      *((_QWORD *)v12 + 66) = v12 + 544;
      *((_QWORD *)v12 + 67) = 0x600000000LL;
    }
    ptr = v12;
  }
  v12[*v12 + 1] = 2;
  v14 = ptr;
  v15 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v15 + 1;
  v14[v15 + 2] = v13;
  if ( (_BYTE)v167 )
  {
    sub_FA3A50(si128.m128i_i64[1], &ptr, HIBYTE(v167));
    si128.m128i_i64[1] = 0;
    v167 = 0;
  }
  if ( v163 != &v165 )
    operator delete(v163);
  v16 = (void **)ptr;
  if ( ptr )
  {
    v17 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] )
    {
      if ( (unsigned __int64)ptr >= si128.m128i_i64[0] && (unsigned __int64)ptr <= si128.m128i_i64[0] + 14848 )
      {
        v97 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
        *(_DWORD *)(si128.m128i_i64[0] + 14976) = v97 + 1;
        *(_QWORD *)(v17 + 8 * v97 + 14848) = v16;
      }
      else
      {
        v18 = *((void ***)ptr + 66);
        v19 = &v18[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
        if ( v18 != v19 )
        {
          do
          {
            while ( 1 )
            {
              v19 -= 8;
              v20 = (void **)v19[3];
              if ( v20 == v19 + 5 )
                break;
              operator delete(v20);
              if ( v18 == v19 )
                goto LABEL_19;
            }
          }
          while ( v18 != v19 );
LABEL_19:
          v19 = (void **)v16[66];
        }
        if ( v19 != v16 + 68 )
          free(v19);
        v21 = (void **)v16[52];
        if ( v21 != v16 + 54 )
          free(v21);
        v22 = v16 + 48;
        v23 = v16 + 8;
        do
        {
          while ( *v22 != v22 + 2 )
          {
            operator delete(*v22);
            v22 -= 4;
            if ( v22 == v23 )
              goto LABEL_27;
          }
          v22 -= 4;
        }
        while ( v22 != v23 );
LABEL_27:
        operator delete(v16, 0x3A0u);
      }
    }
  }
  if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v24 = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v3 + 16) & 4) != 0 )
      v24 = *(_QWORD *)v24;
    if ( v24 && ((*(_BYTE *)(v24 + 8) + 70) & 0x7Fu) <= 3
      || ((v25 = *(_BYTE *)(v3 + 83), (v25 & 8) != 0) || (*(_BYTE *)(v3 + 128) & 1) == 0 && !*(_QWORD *)(v3 + 128))
      && (v25 & 0x40) == 0 )
    {
      if ( (*(_WORD *)sub_B68890(v3) & 0x2008) == 0 )
      {
        v82 = (_QWORD *)a1[4];
        v27 = &qword_18 + 3;
        v28 = "__attribute__((deprecated))";
        if ( !v82 )
          goto LABEL_38;
        v139 = &qword_18 + 3;
        v83 = v82 + 69;
        v28 = "__attribute__((deprecated))";
        goto LABEL_136;
      }
      v26 = a1[4];
      if ( !v26 )
      {
        v27 = (_QWORD *)(byte_9 + 5);
        v28 = "[[deprecated]]";
LABEL_38:
        v29 = (char *)&v162;
        ptr = &v162;
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
        goto LABEL_39;
      }
      si128.m128i_i16[4] = 20;
      LOWORD(ptr) = 20;
      si128.m128i_i64[0] = 0;
      v162 = 0;
      v99 = sub_2220DF0("deprecated", 10);
      v100 = (unsigned int)sub_2220F70(v26 + 552, "deprecated", 10, v99);
      v102 = (__int64 *)(*(_QWORD *)(v26 + 552) + 8 * v100);
      if ( *v102 )
      {
        if ( *v102 != -8 )
        {
          sub_965750((__int64 **)&v154, v102, 0);
          v105 = (__int64 *)v154;
LABEL_154:
          v106 = *v105;
          v107 = *(_QWORD **)(*v105 + 8);
          if ( !v107 )
          {
            v122 = *(_QWORD *)(v26 + 672);
            if ( !v122
              || (v107 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v122 + 16LL))(
                                     v122,
                                     "deprecated",
                                     10),
                  (*(_QWORD *)(v106 + 8) = v107) == 0) )
            {
              v123 = *(_QWORD *)(v26 + 576);
              *(_QWORD *)(v26 + 656) += 24LL;
              v107 = (_QWORD *)((v123 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( *(_QWORD *)(v26 + 584) >= (unsigned __int64)(v107 + 3) && v123 )
                *(_QWORD *)(v26 + 576) = v107 + 3;
              else
                v107 = (_QWORD *)sub_962430(v26 + 576, 24, 24, 3, v103, v104);
              v124 = *v107 & 0xFFFFF80000000000LL;
              v107[1] = 0;
              *v107 = v124 | 0x1FFFC05;
              *(_QWORD *)(v106 + 8) = v107;
              v107[2] = v106;
            }
          }
          v108 = a1[4];
          LOWORD(v163) = 5;
          v165 = 21;
          v164 = v107;
          v166 = nullptr;
          v167 = 21;
          v168 = 0;
          v28 = (const char *)sub_143BA50(v108, *(unsigned int *)(v3 + 24), &ptr, 5);
          v27 = v109;
          if ( v109 )
            goto LABEL_176;
          v82 = (_QWORD *)a1[4];
          v139 = (_QWORD *)(byte_9 + 5);
          v28 = "[[deprecated]]";
          v83 = v82 + 69;
LABEL_136:
          v140 = v82;
          LOWORD(ptr) = 189;
          si128.m128i_i16[4] = 22;
          si128.m128i_i64[0] = 0;
          v162 = 0;
          LOWORD(v163) = 22;
          v164 = nullptr;
          v84 = sub_2220DF0("deprecated", 10);
          v85 = sub_2220F70(v83, "deprecated", 10, v84);
          v86 = (__int64)v140;
          v87 = v85;
          v88 = (__int64 *)(v140[69] + 8LL * v85);
          if ( *v88 )
          {
            if ( *v88 != -8 )
            {
              sub_965750((__int64 **)&v154, v88, 0);
              v90 = (__int64 *)v154;
              v91 = v140;
LABEL_139:
              v92 = *v90;
              v93 = *(_QWORD **)(*v90 + 8);
              if ( !v93 )
              {
                v118 = (__int64 *)v91[84];
                if ( !v118
                  || (v119 = *v118,
                      v140 = v91,
                      v93 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *, __int64))(v119 + 16))(
                                        v118,
                                        "deprecated",
                                        10),
                      v91 = v140,
                      (*(_QWORD *)(v92 + 8) = v93) == 0) )
                {
                  v120 = v91[72];
                  v91[82] += 24LL;
                  v93 = (_QWORD *)((v120 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v91[73] >= (unsigned __int64)(v93 + 3) && v120 )
                    v91[72] = v93 + 3;
                  else
                    v93 = (_QWORD *)sub_962430((__int64)(v91 + 72), 24, 24, 3, (__int64)v91, v89);
                  v121 = *v93 & 0xFFFFF80000000000LL;
                  v93[1] = 0;
                  *v93 = v121 | 0x1FFFC05;
                  *(_QWORD *)(v92 + 8) = v93;
                  v93[2] = v92;
                }
              }
              v94 = a1[4];
              v165 = 5;
              v166 = v93;
              v167 = 23;
              v168 = 0;
              v169 = 23;
              v170 = 0;
              v95 = sub_143BA50(v94, *(unsigned int *)(v3 + 24), &ptr, 6);
              v27 = v96;
              if ( !v96 )
              {
                v29 = (char *)&v162;
                v27 = v139;
                ptr = &v162;
                si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
                goto LABEL_39;
              }
              v28 = (const char *)v95;
LABEL_176:
              v29 = (char *)&v162;
              ptr = &v162;
              si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
              if ( (unsigned __int64)v27 > 0x40 )
              {
                sub_22130D0(&ptr, &v162, v27, 1);
                v29 = (char *)ptr + si128.m128i_i64[0];
              }
LABEL_39:
              memcpy(v29, v28, (size_t)v27);
              v30 = (char *)v27 + si128.m128i_i64[0];
              si128.m128i_i64[0] = (__int64)v30;
              if ( (unsigned __int64)(v30 + 1) > si128.m128i_i64[1] )
              {
                sub_22130D0(&ptr, &v162, v30 + 1, 1);
                v30 = (char *)si128.m128i_i64[0];
              }
              v30[(_QWORD)ptr] = 32;
              ++si128.m128i_i64[0];
              v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
              sub_FA3370(&v154, a1[2], v31, 2621);
              v146 = v31;
              v147 = v31;
              v149 = 0;
              v150 = 0;
              dest = &v152.m128_u16[4];
              v152.m128_u64[0] = 0;
              v152.m128_i8[8] = 0;
              v153 = 0;
              v148 = 0;
              src = v145;
              sub_B29310(&src, ptr, (__int64)ptr + si128.m128i_i64[0]);
              v32 = dest;
              if ( src == v145 )
              {
                v113 = n;
                if ( n )
                {
                  if ( n == 1 )
                    *(_BYTE *)dest = v145[0];
                  else
                    memcpy(dest, src, n);
                  v113 = n;
                  v32 = dest;
                }
                v152.m128_u64[0] = v113;
                v32[v113] = 0;
                v32 = src;
              }
              else
              {
                if ( dest == &v152.m128_u16[4] )
                {
                  v139 = (__int64 *)v145[0];
                  dest = src;
                  v152 = _mm_loadh_ps((const double *)&v139);
                }
                else
                {
                  v139 = (__int64 *)v145[0];
                  v33 = v152.m128_u64[1];
                  dest = src;
                  v152 = _mm_loadh_ps((const double *)&v139);
                  if ( v32 )
                  {
                    src = v32;
                    v145[0] = v33;
                    goto LABEL_45;
                  }
                }
                v32 = v145;
                src = v145;
              }
LABEL_45:
              n = 0;
              *v32 = 0;
              if ( src != v145 )
                operator delete(src);
              v153 = 0;
              if ( !v146 || !v147 )
                goto LABEL_58;
              v34 = (__int64)v154;
              if ( v154 )
              {
                v35 = *((unsigned int *)v154 + 134);
                v36 = *((__int64 **)v154 + 66);
                v37 = *((unsigned int *)v154 + 135);
                v38 = v35 + 1;
                v39 = (unsigned __int64)&v36[8 * v35];
              }
              else
              {
                v125 = v155;
                v126 = *(_DWORD *)(v155 + 14976);
                if ( v126 )
                {
                  v131 = (unsigned int)(v126 - 1);
                  *(_DWORD *)(v155 + 14976) = v131;
                  v34 = *(_QWORD *)(v125 + 8 * v131 + 14848);
                  v132 = *(unsigned int *)(v34 + 536);
                  *(_BYTE *)v34 = 0;
                  v36 = *(__int64 **)(v34 + 528);
                  *(_DWORD *)(v34 + 424) = 0;
                  v133 = &v36[8 * v132];
                  if ( v36 != v133 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v133 -= 8;
                        v134 = (__int64 *)v133[3];
                        if ( v134 == v133 + 5 )
                          break;
                        v139 = v36;
                        operator delete(v134);
                        v36 = v139;
                        if ( v139 == v133 )
                          goto LABEL_216;
                      }
                    }
                    while ( v36 != v133 );
LABEL_216:
                    v36 = *(__int64 **)(v34 + 528);
                  }
                  *(_DWORD *)(v34 + 536) = 0;
                  v37 = *(unsigned int *)(v34 + 540);
                }
                else
                {
                  v34 = operator new(0x3A0u);
                  *(_BYTE *)v34 = 0;
                  *(_QWORD *)(v34 + 96) = v34 + 112;
                  *(_QWORD *)(v34 + 128) = v34 + 144;
                  *(_QWORD *)(v34 + 160) = v34 + 176;
                  *(_QWORD *)(v34 + 192) = v34 + 208;
                  *(_QWORD *)(v34 + 224) = v34 + 240;
                  *(_QWORD *)(v34 + 256) = v34 + 272;
                  *(_QWORD *)(v34 + 288) = v34 + 304;
                  *(_QWORD *)(v34 + 320) = v34 + 336;
                  *(_QWORD *)(v34 + 352) = v34 + 368;
                  *(_QWORD *)(v34 + 384) = v34 + 400;
                  *(_QWORD *)(v34 + 416) = v34 + 432;
                  *(_QWORD *)(v34 + 104) = 0;
                  *(_BYTE *)(v34 + 112) = 0;
                  *(_QWORD *)(v34 + 136) = 0;
                  *(_BYTE *)(v34 + 144) = 0;
                  *(_QWORD *)(v34 + 168) = 0;
                  *(_BYTE *)(v34 + 176) = 0;
                  *(_QWORD *)(v34 + 200) = 0;
                  *(_BYTE *)(v34 + 208) = 0;
                  *(_QWORD *)(v34 + 232) = 0;
                  *(_BYTE *)(v34 + 240) = 0;
                  *(_QWORD *)(v34 + 264) = 0;
                  *(_BYTE *)(v34 + 272) = 0;
                  *(_QWORD *)(v34 + 296) = 0;
                  *(_BYTE *)(v34 + 304) = 0;
                  *(_QWORD *)(v34 + 328) = 0;
                  *(_BYTE *)(v34 + 336) = 0;
                  *(_QWORD *)(v34 + 360) = 0;
                  *(_BYTE *)(v34 + 368) = 0;
                  *(_QWORD *)(v34 + 392) = 0;
                  *(_BYTE *)(v34 + 400) = 0;
                  *(_QWORD *)(v34 + 424) = 0x800000000LL;
                  v36 = (__int64 *)(v34 + 544);
                  *(_QWORD *)(v34 + 528) = v34 + 544;
                  *(_QWORD *)(v34 + 536) = 0x600000000LL;
                  v37 = 6;
                }
                v154 = (void *)v34;
                v39 = (unsigned __int64)v36;
                v38 = 1;
              }
              v40 = (__int64 *)&v146;
              if ( v37 < v38 )
              {
                if ( v36 > (__int64 *)&v146 || v39 <= (unsigned __int64)&v146 )
                {
                  v140 = (_QWORD *)(v34 + 544);
                  v139 = (__int64 *)(v34 + 528);
                  v135 = sub_22136C0(v34 + 528, v34 + 544, v38, 64, &src);
                  sub_9CBAD0(v139, v135);
                  v136 = (int)src;
                  v137 = *(_QWORD **)(v34 + 528);
                  if ( v140 != v137 )
                    free(v137);
                  v138 = *(unsigned int *)(v34 + 536);
                  *(_QWORD *)(v34 + 528) = v135;
                  v40 = (__int64 *)&v146;
                  *(_DWORD *)(v34 + 540) = v136;
                  v39 = (v138 << 6) + v135;
                }
                else
                {
                  v140 = (_QWORD *)(v34 + 544);
                  v139 = (__int64 *)(v34 + 528);
                  v127 = (char *)((char *)&v146 - (char *)v36);
                  v128 = sub_22136C0(v34 + 528, v34 + 544, v38, 64, &src);
                  sub_9CBAD0(v139, v128);
                  v129 = (int)src;
                  v130 = *(_QWORD **)(v34 + 528);
                  if ( v140 != v130 )
                  {
                    v139 = (__int64 *)src;
                    free(v130);
                    v129 = (int)v139;
                  }
                  *(_QWORD *)(v34 + 528) = v128;
                  *(_DWORD *)(v34 + 540) = v129;
                  v40 = (__int64 *)&v127[v128];
                  v39 = v128 + ((unsigned __int64)*(unsigned int *)(v34 + 536) << 6);
                }
              }
              *(_QWORD *)v39 = *v40;
              *(_DWORD *)(v39 + 8) = *((_DWORD *)v40 + 2);
              *(_QWORD *)(v39 + 12) = *(__int64 *)((char *)v40 + 12);
              *(_DWORD *)(v39 + 20) = *((_DWORD *)v40 + 5);
              v41 = (_BYTE *)(v39 + 40);
              *(_QWORD *)(v39 + 24) = v39 + 40;
              v42 = (__int64 *)v40[3];
              v43 = v40[4];
              if ( (__int64 *)((char *)v42 + v43) && !v42 )
                std::__throw_logic_error("basic_string::_M_construct null not valid");
              if ( (unsigned __int64)v43 > 0xF )
              {
                if ( v43 < 0 )
                  std::__throw_length_error("basic_string::_M_create");
                v140 = v40;
                v139 = v42;
                v41 = (_BYTE *)operator new(v43 + 1);
                *(_QWORD *)(v39 + 40) = v43;
                v42 = v139;
                *(_QWORD *)(v39 + 24) = v41;
                v40 = v140;
              }
              else
              {
                if ( v43 == 1 )
                {
                  *(_BYTE *)(v39 + 40) = *(_BYTE *)v42;
LABEL_57:
                  *(_QWORD *)(v39 + 32) = v43;
                  v41[v43] = 0;
                  *(_BYTE *)(v39 + 56) = *((_BYTE *)v40 + 56);
                  ++*(_DWORD *)(v34 + 536);
LABEL_58:
                  if ( dest != &v152.m128_u16[4] )
                    operator delete(dest);
                  if ( (_BYTE)v159 )
                  {
                    sub_FA3A50(v156, &v154, HIBYTE(v159));
                    v156 = 0;
                    v159 = 0;
                  }
                  if ( v157 != &v158 )
                    operator delete(v157);
                  v44 = (void **)v154;
                  if ( v154 )
                  {
                    v45 = v155;
                    if ( v155 )
                    {
                      if ( (unsigned __int64)v154 < v155 || (unsigned __int64)v154 > v155 + 14848 )
                      {
                        v46 = *((void ***)v154 + 66);
                        v47 = &v46[8 * (unsigned __int64)*((unsigned int *)v154 + 134)];
                        if ( v46 != v47 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v47 -= 8;
                              v48 = (void **)v47[3];
                              if ( v48 == v47 + 5 )
                                break;
                              operator delete(v48);
                              if ( v46 == v47 )
                                goto LABEL_70;
                            }
                          }
                          while ( v46 != v47 );
LABEL_70:
                          v47 = (void **)v44[66];
                        }
                        if ( v47 != v44 + 68 )
                          free(v47);
                        v49 = (void **)v44[52];
                        v50 = v44 + 52;
                        if ( v49 != v44 + 54 )
                          free(v49);
                        v51 = v44 + 12;
                        do
                        {
                          while ( 1 )
                          {
                            v50 -= 4;
                            if ( *v50 == v50 + 2 )
                              break;
                            operator delete(*v50);
                            if ( v51 == v50 )
                              goto LABEL_78;
                          }
                        }
                        while ( v51 != v50 );
LABEL_78:
                        operator delete(v44, 0x3A0u);
                      }
                      else
                      {
                        v114 = *(unsigned int *)(v155 + 14976);
                        *(_DWORD *)(v155 + 14976) = v114 + 1;
                        *(_QWORD *)(v45 + 8 * v114 + 14848) = v44;
                      }
                    }
                  }
                  if ( ptr != &v162 )
                    free(ptr);
                  return;
                }
                if ( !v43 )
                  goto LABEL_57;
              }
              v139 = v40;
              memcpy(v41, v42, v43);
              v41 = *(_BYTE **)(v39 + 24);
              v40 = v139;
              goto LABEL_57;
            }
            --*((_DWORD *)v140 + 142);
          }
          v110 = *(_QWORD *)(v86 + 576);
          *(_QWORD *)(v86 + 656) += 27LL;
          v111 = (v110 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v86 + 584) >= v111 + 27 && v110 )
          {
            *(_QWORD *)(v86 + 576) = v111 + 27;
          }
          else
          {
            v142 = v88;
            v141 = v87;
            v140 = (_QWORD *)v86;
            v111 = sub_962430(v86 + 576, 27, 27, 3, v86, (__int64)v88);
            v88 = v142;
            v87 = v141;
            v86 = (__int64)v140;
          }
          strcpy((char *)(v111 + 16), "deprecated");
          *(_QWORD *)v111 = 10;
          *(_QWORD *)(v111 + 8) = 0;
          *v88 = v111;
          ++*(_DWORD *)(v86 + 564);
          v140 = (_QWORD *)v86;
          v112 = sub_2221390(v83, v87);
          sub_965750((__int64 **)&v154, (__int64 *)(v140[69] + 8LL * v112), 0);
          v90 = (__int64 *)v154;
          v91 = v140;
          goto LABEL_139;
        }
        --*(_DWORD *)(v26 + 568);
      }
      v115 = *(_QWORD *)(v26 + 576);
      *(_QWORD *)(v26 + 656) += 27LL;
      v116 = (v115 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v26 + 584) >= v116 + 27 && v115 )
      {
        *(_QWORD *)(v26 + 576) = v116 + 27;
      }
      else
      {
        LODWORD(v139) = v100;
        v116 = sub_962430(v26 + 576, 27, 27, 3, v100, v101);
        LODWORD(v100) = (_DWORD)v139;
      }
      strcpy((char *)(v116 + 16), "deprecated");
      *(_QWORD *)v116 = 10;
      *(_QWORD *)(v116 + 8) = 0;
      *v102 = v116;
      ++*(_DWORD *)(v26 + 564);
      v117 = sub_2221390(v26 + 552, (unsigned int)v100);
      sub_965750((__int64 **)&v154, (__int64 *)(*(_QWORD *)(v26 + 552) + 8LL * v117), 0);
      v105 = (__int64 *)v154;
      goto LABEL_154;
    }
  }
}

