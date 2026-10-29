__int64 __fastcall sub_752280(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  __int64 v3; // rdx
  char **exception; // rbp
  __int64 v5; // rdx
  __int64 v6; // r13
  _DWORD *v8; // rax
  __int64 *v9; // r12
  __int64 *v10; // r15
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rsi
  int v15; // eax
  _QWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // r9
  char v20; // al
  int v21; // esi
  char *v22; // r10
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned int v28; // eax
  unsigned int v29; // r10d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rsi
  unsigned int v33; // r14d
  _BYTE *v34; // rdi
  char *v35; // rcx
  char *v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rax
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rcx
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rsi
  char v49; // dl
  __int64 v50; // r13
  int v51; // eax
  char *v52; // rsi
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rsi
  char v56; // al
  int v57; // eax
  char *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r8
  __int64 v63; // rcx
  unsigned int v64; // eax
  unsigned int v65; // r14d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rsi
  void *v69; // rbx
  void *v70; // rbx
  __int64 v72; // r14
  char *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdx
  _QWORD *v76; // rax
  _QWORD *v77; // rsi
  int v78; // eax
  _QWORD *v79; // rax
  unsigned int v80; // edx
  _BYTE *v81; // rdi
  char *v82; // rcx
  char *v83; // rax
  __int64 v84; // rdx
  _BYTE *v85; // rdi
  char *v86; // rcx
  char *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // r11
  char *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  char *v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // [rsp+8h] [rbp-290h]
  __int64 v102; // [rsp+8h] [rbp-290h]
  __int64 v103; // [rsp+8h] [rbp-290h]
  __int64 v104; // [rsp+8h] [rbp-290h]
  __int64 v105; // [rsp+8h] [rbp-290h]
  unsigned int v106; // [rsp+10h] [rbp-288h]
  __int64 v107; // [rsp+10h] [rbp-288h]
  __int64 v108; // [rsp+10h] [rbp-288h]
  __int64 v109; // [rsp+18h] [rbp-280h]
  char *v110; // [rsp+18h] [rbp-280h]
  unsigned int **v111; // [rsp+20h] [rbp-278h]
  int v112; // [rsp+28h] [rbp-270h]
  unsigned __int8 v113; // [rsp+30h] [rbp-268h]
  __int64 v114; // [rsp+38h] [rbp-260h]
  int v115; // [rsp+38h] [rbp-260h]
  char *v116; // [rsp+48h] [rbp-250h]
  __int64 v117; // [rsp+50h] [rbp-248h] BYREF
  __int64 v118; // [rsp+58h] [rbp-240h] BYREF
  char v119[8]; // [rsp+60h] [rbp-238h] BYREF
  __int128 v120; // [rsp+68h] [rbp-230h]
  int v121; // [rsp+78h] [rbp-220h]
  char v122; // [rsp+7Ch] [rbp-21Ch]
  _QWORD v123[2]; // [rsp+80h] [rbp-218h] BYREF
  _QWORD v124[2]; // [rsp+90h] [rbp-208h] BYREF
  _QWORD v125[2]; // [rsp+A0h] [rbp-1F8h] BYREF
  _QWORD v126[2]; // [rsp+B0h] [rbp-1E8h] BYREF
  int v127; // [rsp+C0h] [rbp-1D8h]
  char v128; // [rsp+C4h] [rbp-1D4h]
  char v129[8]; // [rsp+D0h] [rbp-1C8h] BYREF
  __int128 v130; // [rsp+D8h] [rbp-1C0h]
  int v131; // [rsp+E8h] [rbp-1B0h]
  char v132; // [rsp+ECh] [rbp-1ACh]
  char v133[32]; // [rsp+F0h] [rbp-1A8h] BYREF
  char v134[48]; // [rsp+110h] [rbp-188h] BYREF
  void *v135; // [rsp+140h] [rbp-158h] BYREF
  __int64 v136; // [rsp+148h] [rbp-150h]
  _BYTE v137[128]; // [rsp+150h] [rbp-148h] BYREF
  void *v138; // [rsp+1D0h] [rbp-C8h]
  __int64 v139; // [rsp+1D8h] [rbp-C0h]
  _BYTE v140[184]; // [rsp+1E0h] [rbp-B8h] BYREF

  v6 = a2;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v8 )
    {
      if ( *(_DWORD *)(a1 + 32) == *v8 && !v8[1] )
        return 0;
      while ( v8 )
      {
        if ( *v8 )
          break;
        if ( v8[1] != 8 )
          break;
        if ( *(_DWORD *)(v6 + 24) != 1 )
          break;
        v6 = *(_QWORD *)(v6 + 32);
        if ( *(_WORD *)(v6 + 4) )
          break;
        v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
      }
    }
  }
  v9 = *(__int64 **)(a1 + 80);
  v10 = &v9[14 * *(unsigned int *)(a1 + 88)];
  if ( v9 == v10 )
    goto LABEL_46;
  while ( (unsigned __int64)*v9 <= 1 )
  {
    v9 += 14;
    if ( v10 == v9 )
      goto LABEL_46;
  }
  if ( v10 == v9 )
  {
LABEL_46:
    v119[0] = 1;
    v121 = 0;
    v122 = 1;
    v123[0] = 0;
    v123[1] = 0;
    v124[0] = 1;
    v124[1] = 0;
    v125[0] = 0;
    v125[1] = 0;
    v126[0] = 1;
    v126[1] = 0;
    v127 = 0;
    v128 = 1;
    v120 = 0;
    sub_182CBA0(qword_1C7F2C0, v124);
    BYTE4(v124[0]) &= ~1u;
    BYTE4(v125[0]) &= ~1u;
    LODWORD(v124[0]) = 1;
    LODWORD(v125[0]) = 0;
    sub_182CBA0(qword_1C7F2C0, v126);
    BYTE4(v126[0]) &= ~1u;
    LODWORD(v126[0]) = 1;
    v128 = 1;
    v33 = sub_754B30(a1 + 16, v6, &v117, v119);
    if ( !(_BYTE)v33 )
    {
      v135 = v137;
      v138 = v140;
      v136 = 0x1000000000LL;
      v139 = 0x1000000000LL;
      v111 = (unsigned int **)(a1 + 120);
      v43 = *(_QWORD *)(a1 + 120);
      if ( !v43 || (v44 = *(_DWORD *)(v43 - 4), v44 == *(_DWORD *)(v43 - 8)) )
      {
        sub_23A6F0(v111);
        v43 = *(_QWORD *)(a1 + 120);
        v80 = *(_DWORD *)(v43 - 4);
        *(_QWORD *)(v43 + 8LL * v80) = v6;
        v46 = v80 + 1;
        *(_DWORD *)(v43 - 4) = v46;
        if ( v46 )
          goto LABEL_51;
      }
      else
      {
        v45 = v44;
        v46 = v44 + 1;
        *(_QWORD *)(v43 + 8 * v45) = v6;
        *(_DWORD *)(v43 - 4) = v46;
        while ( v46 )
        {
LABEL_51:
          v47 = v46 - 1;
          v48 = *(_QWORD *)(v43 + 8 * v47);
          *(_DWORD *)(v43 - 4) = v47;
          v49 = *(_BYTE *)(v48 + 6);
          v50 = v48;
          if ( (v49 & 1) == 0 )
          {
            *(_BYTE *)(v48 + 6) = v49 | 1;
            v51 = v136;
            if ( (unsigned int)v136 >= HIDWORD(v136) )
            {
              v112 = 2 * HIDWORD(v136);
              v52 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v136)));
              v51 = v136;
              v91 = (char *)v135;
              if ( (_DWORD)v136 )
              {
                if ( (unsigned int)(v136 - 1) <= 2 || v52 == (char *)v135 + 8 )
                {
                  v94 = 0;
                  v95 = 8LL * (unsigned int)v136;
                  do
                  {
                    *(_QWORD *)&v52[v94] = *(_QWORD *)&v91[v94];
                    v94 += 8;
                  }
                  while ( v95 != v94 );
                }
                else
                {
                  v92 = 0;
                  v93 = 16LL * ((unsigned int)v136 >> 1);
                  do
                  {
                    *(__m128i *)&v52[v92] = _mm_loadu_si128((const __m128i *)&v91[v92]);
                    v92 += 16;
                  }
                  while ( v92 != v93 );
                  if ( (v51 & 1) != 0 )
                    *(_QWORD *)&v52[8 * (v51 & 0xFFFFFFFE)] = *(_QWORD *)&v91[8 * (v51 & 0xFFFFFFFE)];
                }
              }
              if ( v91 != v137 && v91 )
              {
                sub_186B220(v91);
                v51 = v136;
              }
              v135 = v52;
              HIDWORD(v136) = v112;
            }
            else
            {
              v52 = (char *)v135;
            }
            *(_QWORD *)&v52[8 * v51] = v50;
            LODWORD(v136) = v51 + 1;
            if ( !*(_WORD *)(v50 + 4) )
            {
              v129[0] = 1;
              v132 = 1;
              v131 = 0;
              v130 = 0;
              sub_7547D0(v133);
              v113 = sub_754B30(a1 + 16, v50, &v118, v129);
              if ( v113 )
              {
                v55 = v118;
                v56 = *(_BYTE *)(v118 + 6);
                if ( (v56 & 2) != 0 )
                  goto LABEL_140;
                *(_BYTE *)(v118 + 6) = v56 | 2;
                v57 = v139;
                if ( (unsigned int)v139 >= HIDWORD(v139) )
                {
                  v115 = 2 * HIDWORD(v139);
                  v58 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v139)));
                  v57 = v139;
                  v96 = (char *)v138;
                  if ( (_DWORD)v139 )
                  {
                    if ( (unsigned int)(v139 - 1) <= 2 || v58 == (char *)v138 + 8 )
                    {
                      v99 = 0;
                      v53 = 8LL * (unsigned int)v139;
                      do
                      {
                        v54 = *(_QWORD *)&v96[v99];
                        *(_QWORD *)&v58[v99] = v54;
                        v99 += 8;
                      }
                      while ( v53 != v99 );
                    }
                    else
                    {
                      v97 = 0;
                      v53 = 16LL * ((unsigned int)v139 >> 1);
                      do
                      {
                        *(__m128i *)&v58[v97] = _mm_loadu_si128((const __m128i *)&v96[v97]);
                        v97 += 16;
                      }
                      while ( v53 != v97 );
                      if ( (v57 & 1) != 0 )
                      {
                        v98 = v57 & 0xFFFFFFFE;
                        v53 = *(_QWORD *)&v96[8 * v98];
                        *(_QWORD *)&v58[8 * v98] = v53;
                      }
                    }
                  }
                  if ( v96 != v140 && v96 )
                  {
                    v116 = v58;
                    sub_186B220(v96);
                    v57 = v139;
                    v58 = v116;
                  }
                  v138 = v58;
                  HIDWORD(v139) = v115;
                }
                else
                {
                  v58 = (char *)v138;
                }
                *(_QWORD *)&v58[8 * v57] = v55;
                LODWORD(v139) = v57 + 1;
                if ( sub_7566C0((int)a1 + 80, v55, (_DWORD)v58, v57, v53, v54) )
                {
LABEL_140:
                  v100 = *(_QWORD *)(a1 + 120);
                  if ( v100 )
                    *(_DWORD *)(v100 - 4) = 0;
                  sub_25A130(v134);
                  sub_25A130(v133);
                  v33 = v113;
                  break;
                }
              }
              v59 = *(unsigned int *)(v50 + 24);
              if ( (_DWORD)v59 )
              {
                v60 = *(_QWORD *)(a1 + 120);
                v61 = v50;
                v62 = v50 + 8 * v59;
                if ( v60 )
                {
                  while ( 1 )
                  {
                    v64 = *(_DWORD *)(v60 - 4);
                    if ( v64 == *(_DWORD *)(v60 - 8) )
                      break;
LABEL_63:
                    v63 = *(_QWORD *)(v61 + 32);
                    v61 += 8;
                    *(_QWORD *)(v60 + 8LL * v64) = v63;
                    *(_DWORD *)(v60 - 4) = v64 + 1;
                    if ( v61 == v62 )
                      goto LABEL_108;
                  }
                }
                v114 = v62;
                sub_23A6F0(v111);
                v60 = *(_QWORD *)(a1 + 120);
                v62 = v114;
                v64 = *(_DWORD *)(v60 - 4);
                goto LABEL_63;
              }
LABEL_108:
              sub_25A130(v134);
              sub_25A130(v133);
            }
            v43 = *(_QWORD *)(a1 + 120);
            if ( !v43 )
              break;
          }
          v46 = *(_DWORD *)(v43 - 4);
        }
      }
      v81 = v138;
      v82 = (char *)v138 + 8 * (unsigned int)v139;
      v83 = (char *)v138;
      if ( v138 != v82 )
      {
        do
        {
          v84 = *(_QWORD *)v83;
          v83 += 8;
          *(_BYTE *)(v84 + 6) &= ~2u;
        }
        while ( v83 != v82 );
      }
      LODWORD(v139) = 0;
      if ( v81 != v140 && v81 )
        sub_186B220(v81);
      v85 = v135;
      v86 = (char *)v135 + 8 * (unsigned int)v136;
      v87 = (char *)v135;
      if ( v135 != v86 )
      {
        do
        {
          v88 = *(_QWORD *)v87;
          v87 += 8;
          *(_BYTE *)(v88 + 6) &= ~1u;
        }
        while ( v86 != v87 );
      }
      LODWORD(v136) = 0;
      if ( v85 && v85 != v137 )
        sub_186B220(v85);
      goto LABEL_73;
    }
    if ( v119[0] )
    {
      if ( !(_QWORD)v120 )
      {
        v40 = 64 - v121;
        if ( *((_QWORD *)&v120 + 1) == 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v121) )
          goto LABEL_73;
      }
    }
    else if ( (unsigned __int8)sub_755190(v123) )
    {
      goto LABEL_73;
    }
    LOBYTE(v33) = sub_7566C0((int)a1 + 80, v117, v39, v40, v41, v42) != 0;
LABEL_73:
    v69 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v125);
    sub_182CBA0(v69, v126);
    v70 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v123);
    sub_182CBA0(v70, v124);
    return v33;
  }
  v11 = *v9;
  while ( 1 )
  {
    v12 = *(_QWORD **)(a1 + 120);
    v138 = v140;
    v139 = 0x1000000000LL;
    if ( v12 )
    {
      v13 = *((_DWORD *)v12 - 1);
      if ( v13 == *((_DWORD *)v12 - 2) )
      {
        v65 = (3 * v13 + 1) >> 1;
        v66 = 8 * v65 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v66 || v13 >= v65 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_10DC44((__int64 *)&v135, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v135);
          sub_233E40((__int64)&v135);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v102 = v11;
        v67 = (unsigned int *)sub_186B300(v12 - 1, v66);
        v68 = v67[1];
        v12 = v67 + 2;
        v11 = v102;
        *v67 = v65;
        *(_QWORD *)(a1 + 120) = v67 + 2;
        LODWORD(v67) = v68;
        v16 = &v12[v68];
        v15 = (_DWORD)v67 + 1;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = &v12[v14];
      }
    }
    else
    {
      v105 = v11;
      v79 = (_QWORD *)sub_186B270(0x18u);
      v12 = v79 + 1;
      *v79 = 2;
      v11 = v105;
      v15 = 1;
      *(_QWORD *)(a1 + 120) = v12;
      v16 = v12;
    }
    *v16 = v6;
    *((_DWORD *)v12 - 1) = v15;
LABEL_18:
    if ( v12 )
    {
      while ( 1 )
      {
        v17 = *((_DWORD *)v12 - 1);
        if ( !v17 )
          break;
        v18 = (unsigned int)(v17 - 1);
        v19 = v12[v18];
        *((_DWORD *)v12 - 1) = v18;
        v20 = *(_BYTE *)(v19 + 6);
        if ( (v20 & 1) == 0 )
        {
          if ( v19 == v11 )
          {
            *((_DWORD *)v12 - 1) = 0;
            v33 = 1;
            goto LABEL_35;
          }
          *(_BYTE *)(v19 + 6) = v20 | 1;
          v21 = v139;
          if ( (unsigned int)v139 >= HIDWORD(v139) )
          {
            v107 = v19;
            v72 = (unsigned int)(2 * HIDWORD(v139));
            v103 = v11;
            v21 = v139;
            v73 = (char *)v138;
            v22 = (char *)sub_186B270(8 * v72);
            v11 = v103;
            v19 = v107;
            if ( (_DWORD)v139 )
            {
              if ( (unsigned int)(v139 - 1) <= 2 || v22 == (char *)v138 + 8 )
              {
                v89 = 0;
                v90 = 8LL * (unsigned int)v139;
                do
                {
                  *(_QWORD *)&v22[v89] = *(_QWORD *)&v73[v89];
                  v89 += 8;
                }
                while ( v89 != v90 );
              }
              else
              {
                v74 = 0;
                v75 = 16LL * ((unsigned int)v139 >> 1);
                do
                {
                  *(__m128i *)&v22[v74] = _mm_loadu_si128((const __m128i *)&v73[v74]);
                  v74 += 16;
                }
                while ( v74 != v75 );
                if ( (v21 & 1) != 0 )
                  *(_QWORD *)&v22[8 * (v21 & 0xFFFFFFFE)] = *(_QWORD *)&v73[8 * (v21 & 0xFFFFFFFE)];
              }
            }
            if ( v73 != v140 && v73 )
            {
              v110 = v22;
              sub_186B220(v73);
              v21 = v139;
              v22 = v110;
              v19 = v107;
              v11 = v103;
            }
            v138 = v22;
            v12 = *(_QWORD **)(a1 + 120);
            HIDWORD(v139) = v72;
          }
          else
          {
            v22 = (char *)v138;
          }
          *(_QWORD *)&v22[8 * v21] = v19;
          LODWORD(v139) = v21 + 1;
          if ( !*(_WORD *)(v19 + 4) )
          {
            v23 = *(unsigned int *)(v19 + 24);
            if ( (_DWORD)v23 )
            {
              v24 = v19;
              v25 = v19 + 8 * v23;
              if ( !v12 )
              {
                v108 = v25;
                v104 = v11;
                v76 = (_QWORD *)sub_186B270(0x18u);
                v12 = v76 + 1;
                v11 = v104;
                v25 = v108;
                *v76 = 2;
                *(_QWORD *)(a1 + 120) = v76 + 1;
                v77 = v76 + 1;
                v78 = 1;
                goto LABEL_29;
              }
              do
              {
                v28 = *((_DWORD *)v12 - 1);
                if ( v28 == *((_DWORD *)v12 - 2) )
                {
                  v29 = (3 * v28 + 1) >> 1;
                  v30 = 8 * v29 + 8;
                  if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
                  {
                    v2 = (char **)__cxa_allocate_exception(0x28u);
                    sub_10DC44((__int64 *)&v135, "Overflow encountered when expanding vector", v3);
                    *v2 = (char *)off_1C63128;
                    sub_2333C0(v2 + 1, &v135);
                    sub_233E40((__int64)&v135);
                    __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v109 = v25;
                  v106 = (3 * v28 + 1) >> 1;
                  v101 = v11;
                  v31 = (unsigned int *)sub_186B300(v12 - 1, v30);
                  v32 = v31[1];
                  v12 = v31 + 2;
                  v11 = v101;
                  v25 = v109;
                  *(_QWORD *)(a1 + 120) = v31 + 2;
                  *v31 = v106;
                  LODWORD(v31) = v32;
                  v77 = &v12[v32];
                  v78 = (_DWORD)v31 + 1;
                }
                else
                {
                  v26 = v28;
                  v78 = v28 + 1;
                  v77 = &v12[v26];
                }
LABEL_29:
                v27 = *(_QWORD *)(v24 + 32);
                v24 += 8;
                *v77 = v27;
                *((_DWORD *)v12 - 1) = v78;
              }
              while ( v24 != v25 );
            }
          }
          goto LABEL_18;
        }
      }
    }
    v33 = 0;
LABEL_35:
    v34 = v138;
    v35 = (char *)v138 + 8 * (unsigned int)v139;
    v36 = (char *)v138;
    if ( v138 != v35 )
    {
      do
      {
        v37 = *(_QWORD *)v36;
        v36 += 8;
        *(_BYTE *)(v37 + 6) &= ~1u;
      }
      while ( v36 != v35 );
    }
    LODWORD(v139) = 0;
    if ( v34 != v140 && v34 )
      sub_186B220(v34);
    if ( (_BYTE)v33 )
      return v33;
    v38 = v9 + 14;
    if ( v10 != v9 + 14 )
    {
      while ( 1 )
      {
        v11 = *v38;
        v9 = v38;
        if ( (unsigned __int64)*v38 > 1 )
          break;
        v38 += 14;
        if ( v10 == v38 )
          goto LABEL_46;
      }
      if ( v10 != v38 )
        continue;
    }
    goto LABEL_46;
  }
}

