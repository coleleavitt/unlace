__int64 __fastcall sub_21C000(_QWORD *a1, const char *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r8
  const char **v6; // rbx
  char *v7; // r14
  char *v8; // r13
  void *v9; // r9
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // rax
  const char *v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  int v19; // r12d
  size_t v20; // r9
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r14
  __int64 v24; // r13
  size_t v25; // r10
  size_t v26; // r11
  __int64 v27; // rsi
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // r13
  size_t v32; // r10
  __int64 v33; // rsi
  __int64 v34; // r12
  __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rcx
  __int64 v43; // rdi
  int v44; // r10d
  __int64 v45; // rdi
  __int64 v46; // r10
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  bool v52; // al
  int v53; // edi
  unsigned __int64 v54; // rdx
  int v55; // esi
  unsigned __int64 v56; // rdx
  _QWORD *v57; // r10
  void *v58; // r9
  char *v59; // rcx
  unsigned int v60; // r11d
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // r11d
  const char *v65; // rdx
  void *v66; // r9
  char v67; // r8
  const char *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  const char *v71; // rdx
  void *v72; // r9
  unsigned int v73; // r11d
  char v74; // r8
  _QWORD *v75; // r10
  const char *v76; // rcx
  unsigned int v77; // [rsp+8h] [rbp-160h]
  void *v78; // [rsp+8h] [rbp-160h]
  void *v79; // [rsp+8h] [rbp-160h]
  bool v80; // [rsp+8h] [rbp-160h]
  unsigned __int8 v81; // [rsp+8h] [rbp-160h]
  char *v82; // [rsp+8h] [rbp-160h]
  void *v83; // [rsp+10h] [rbp-158h]
  __int64 v84; // [rsp+10h] [rbp-158h]
  char v85; // [rsp+10h] [rbp-158h]
  char v86; // [rsp+10h] [rbp-158h]
  unsigned __int64 v87; // [rsp+10h] [rbp-158h]
  unsigned __int64 v88; // [rsp+10h] [rbp-158h]
  void *v89; // [rsp+10h] [rbp-158h]
  char v90; // [rsp+10h] [rbp-158h]
  __int64 v91; // [rsp+10h] [rbp-158h]
  __int64 v92; // [rsp+18h] [rbp-150h]
  bool v93; // [rsp+18h] [rbp-150h]
  _QWORD *v94; // [rsp+18h] [rbp-150h]
  _QWORD *v95; // [rsp+18h] [rbp-150h]
  unsigned int v96; // [rsp+18h] [rbp-150h]
  size_t v97; // [rsp+18h] [rbp-150h]
  size_t v98; // [rsp+18h] [rbp-150h]
  unsigned int v99; // [rsp+18h] [rbp-150h]
  _QWORD *v100; // [rsp+18h] [rbp-150h]
  const char *v101; // [rsp+18h] [rbp-150h]
  unsigned __int8 v102; // [rsp+20h] [rbp-148h]
  int v103; // [rsp+20h] [rbp-148h]
  __int64 v104; // [rsp+20h] [rbp-148h]
  __int64 *v105; // [rsp+20h] [rbp-148h]
  unsigned __int64 v106; // [rsp+20h] [rbp-148h]
  size_t v107; // [rsp+20h] [rbp-148h]
  int v108; // [rsp+20h] [rbp-148h]
  char v109; // [rsp+28h] [rbp-140h]
  int v110; // [rsp+28h] [rbp-140h]
  void *v111; // [rsp+28h] [rbp-140h]
  size_t v112; // [rsp+28h] [rbp-140h]
  char v113; // [rsp+28h] [rbp-140h]
  void *v114; // [rsp+28h] [rbp-140h]
  __int64 v115; // [rsp+28h] [rbp-140h]
  void *v116; // [rsp+28h] [rbp-140h]
  void *v117; // [rsp+28h] [rbp-140h]
  char v118; // [rsp+30h] [rbp-138h]
  __int64 v119; // [rsp+30h] [rbp-138h]
  unsigned __int64 v120; // [rsp+30h] [rbp-138h]
  unsigned int v121; // [rsp+30h] [rbp-138h]
  void *v122; // [rsp+30h] [rbp-138h]
  unsigned int v123; // [rsp+30h] [rbp-138h]
  unsigned int v124; // [rsp+30h] [rbp-138h]
  const char *v125; // [rsp+30h] [rbp-138h]
  unsigned int v126; // [rsp+38h] [rbp-130h]
  char v127; // [rsp+38h] [rbp-130h]
  unsigned int v128; // [rsp+38h] [rbp-130h]
  char v129; // [rsp+38h] [rbp-130h]
  char v130; // [rsp+38h] [rbp-130h]
  unsigned int v131; // [rsp+38h] [rbp-130h]
  char v132; // [rsp+40h] [rbp-128h]
  _QWORD *v133; // [rsp+40h] [rbp-128h]
  char v134; // [rsp+40h] [rbp-128h]
  _QWORD *v135; // [rsp+40h] [rbp-128h]
  _QWORD *v136; // [rsp+40h] [rbp-128h]
  char v137; // [rsp+40h] [rbp-128h]
  _QWORD *v138; // [rsp+58h] [rbp-110h]
  _QWORD *v139; // [rsp+58h] [rbp-110h]
  unsigned __int64 v140; // [rsp+60h] [rbp-108h] BYREF
  __int128 v141; // [rsp+68h] [rbp-100h]
  _QWORD *v142; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v143; // [rsp+88h] [rbp-E0h]
  int v144; // [rsp+90h] [rbp-D8h]
  const char *v145; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v146; // [rsp+A8h] [rbp-C0h]
  int v147; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v148; // [rsp+C8h] [rbp-A0h]
  __int128 v149; // [rsp+D0h] [rbp-98h]
  int v150; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v151; // [rsp+E8h] [rbp-80h]
  __int64 v152; // [rsp+F0h] [rbp-78h]
  int v153; // [rsp+100h] [rbp-68h] BYREF
  __int64 v154; // [rsp+108h] [rbp-60h]
  unsigned __int64 v155; // [rsp+128h] [rbp-40h]

  v4 = (unsigned int)a3;
  v6 = (const char **)a2;
  v155 = __readfsqword(0x28u);
  v7 = *(char **)(dbg + 40);
  if ( *(_QWORD *)v7 )
  {
    v8 = *(char **)(dbg + 40);
    do
      v8 += 8;
    while ( *(_QWORD *)v8 );
    v140 = 0;
    v9 = (void *)(v8 - v7);
    v141 = 0;
    a3 = (v8 - v7) >> 3;
    v10 = a3;
    if ( a3 && v8 != v7 )
    {
      v102 = v4;
      v11 = qvector_reserve(&v140, 0, a3, 24);
      a4 = v141;
      a3 = (v8 - v7) >> 3;
      v140 = v11;
      a2 = (const char *)v11;
      v9 = (void *)(v8 - v7);
      v4 = v102;
      if ( (unsigned __int64)v141 < a3 )
      {
        a4 = v141 + 1;
        v12 = 24 * v141;
        a2 += 24 * v141;
        *(_QWORD *)a2 = 0;
        *(_OWORD *)(a2 + 8) = 0;
        if ( a4 < a3 )
        {
          v13 = v12 + 24;
          do
          {
            ++a4;
            a2 = (const char *)(v13 + v140);
            v13 += 24;
            *(_QWORD *)a2 = 0;
            *(_OWORD *)(a2 + 8) = 0;
          }
          while ( a3 != a4 );
        }
      }
      *(_QWORD *)&v141 = (v8 - v7) >> 3;
    }
  }
  else
  {
    v8 = *(char **)(dbg + 40);
    v9 = nullptr;
    v10 = 0;
    v140 = 0;
    v141 = 0;
  }
  v142 = a1;
  v14 = 0;
  v143 = 0;
  v144 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      a2 = (const char *)dbg;
      v15 = *(int *)(dbg + 64);
      if ( (int)v15 <= v14 )
        goto LABEL_13;
      v41 = *(unsigned __int8 *)(*a1 + ((unsigned __int64)v14 >> 3));
      if ( _bittest(&v41, v14 & 7) )
        break;
      if ( !(_BYTE)v4 )
        goto LABEL_92;
      v57 = &v142;
      if ( (int)v15 == a1[4] )
        break;
LABEL_83:
      v81 = v4;
      sub_20D150((__int64)v57);
      v14 = v143;
      v4 = v81;
      if ( (int)v143 < 0 )
        goto LABEL_13;
    }
    if ( dword_8BA594 != v14 && v14 < (unsigned __int64)xmmword_8CC398 )
    {
      v42 = qword_8CC390 + 56LL * v14;
      if ( v42 )
      {
        v43 = *(int *)(v42 + 44);
        v147 = -2;
        v148 = -1;
        v44 = v43;
        v149 = 0;
        v45 = *(_QWORD *)(dbg + 56) + 32 * v43;
        if ( (int)v15 <= v44 || (*(_BYTE *)(v45 + 9) & 1) != 0 || !*(_QWORD *)(v45 + 16) )
        {
          v80 = 0;
          v52 = 1;
        }
        else if ( (_BYTE)v4 && a1[4] == v15 )
        {
          v80 = 0;
          v52 = v4;
        }
        else
        {
          v109 = v4;
          v103 = v14;
          v92 = v14;
          v83 = v9;
          v78 = (void *)(qword_8CC390 + 56LL * v14);
          v46 = sub_235E50(v78);
          v42 = (__int64)v78;
          v9 = v83;
          v47 = v92;
          v14 = v103;
          LOBYTE(v4) = v109;
          if ( (int)v143 < 0 || (int)v143 >= (unsigned __int64)xmmword_8CC398 )
          {
            v50 = *(_QWORD *)(dbg + 56);
            v48 = 0;
          }
          else
          {
            v48 = qword_8CC390 + 56LL * (int)v143;
            if ( v48 )
            {
              v49 = *(int *)(v48 + 44);
              if ( *(_DWORD *)(dbg + 64) > (int)v49
                && (v50 = *(_QWORD *)(dbg + 56), v51 = v50 + 32 * v49, (*(_BYTE *)(v51 + 9) & 1) == 0)
                && *(_QWORD *)(v51 + 16)
                && v142[7] )
              {
                v48 = *(_QWORD *)(v142[6] + 8LL * v144);
              }
              else
              {
                v118 = v109;
                v110 = v103;
                v104 = (__int64)v78;
                v84 = v46;
                v79 = v9;
                v48 = sub_235E50(v48);
                LOBYTE(v4) = v118;
                v14 = v110;
                v42 = v104;
                v50 = *(_QWORD *)(dbg + 56);
                v47 = v92;
                v46 = v84;
                v9 = v79;
              }
            }
            else
            {
              v50 = *(_QWORD *)(dbg + 56);
            }
          }
          v148 = v48;
          v52 = (v48 & ~*(_QWORD *)(v50 + 32 * v47 + 24)) != 0;
          v80 = v46 != v48;
          v45 = 32LL * *(int *)(v42 + 44) + v50;
        }
        v53 = *(unsigned __int8 *)(v45 + 12);
        if ( v9 )
        {
          v54 = 0;
          v55 = 1;
          while ( (v55 & v53) == 0 )
          {
            ++v54;
            v55 *= 2;
            if ( v54 >= v10 )
              goto LABEL_95;
          }
        }
        else
        {
LABEL_95:
          v54 = v10 - 1;
        }
        v93 = v52;
        v132 = v4;
        a2 = (const char *)&v142;
        v126 = v14;
        v119 = v42;
        v111 = v9;
        v105 = (__int64 *)(v140 + 24 * v54);
        sub_20D070((__int64)&v150, (int *)&v142);
        v57 = &v142;
        v145 = nullptr;
        v58 = v111;
        v59 = (char *)v119;
        v146 = 0;
        v60 = v126;
        LOBYTE(v4) = v132;
        if ( v93 )
        {
          sub_24B690(&v145, &v150, v126);
          v64 = v126;
          v65 = &s1;
          v66 = v111;
          v67 = v132;
          if ( *(_QWORD *)(v119 + 8) )
            v65 = *(const char **)v119;
          if ( (unsigned __int64)v105[1] > 1 )
          {
            v101 = v65;
            sub_20B040(v105, 32);
            v67 = v132;
            v64 = v126;
            v65 = v101;
            v66 = v111;
          }
          v68 = &s1;
          if ( (_QWORD)v146 )
            v68 = v145;
          a2 = "%s=%s";
          v113 = v67;
          v99 = v64;
          v89 = v66;
          sub_16FAA0(v105, (__int64)"%s=%s", v65, v68);
          v58 = v89;
          v60 = v99;
          LOBYTE(v4) = v113;
          v57 = &v142;
          if ( v80 )
          {
            v69 = xmmword_8CC398;
            v56 = *(int *)(dbg + 64);
            v59 = (char *)(xmmword_8CC398 - 1);
            v82 = (char *)(xmmword_8CC398 - 1);
            if ( (__int64)xmmword_8CC398 - 1 >= v56 )
            {
LABEL_108:
              v56 = 7 * v69;
              v91 = 56 * v69 - 56;
              do
              {
                a2 = (const char *)(qword_8CC390 + v91);
                if ( *(_DWORD *)(qword_8CC390 + v91 + 44) == v60 )
                {
                  v133 = v57;
                  v127 = v4;
                  v121 = v60;
                  v114 = v58;
                  sub_235EE0(&v153, a2, &v147);
                  v70 = v154;
                  v58 = v114;
                  v60 = v121;
                  LOBYTE(v4) = v127;
                  v57 = v133;
                  if ( v153 >= -1 )
                  {
                    v138 = v133;
                    v134 = v127;
                    v128 = v121;
                    v122 = v114;
                    v115 = v154;
                    sub_20AAF0((__int64)&v153, a2);
                    v57 = v138;
                    LOBYTE(v4) = v134;
                    v60 = v128;
                    v58 = v122;
                    v70 = v115;
                  }
                  if ( v70 )
                  {
                    v135 = v57;
                    v129 = v4;
                    v123 = v60;
                    v116 = v58;
                    sub_235EE0(&v153, qword_8CC390 + v91, &v150);
                    sub_24B690(&v145, &v153, (unsigned int)v82);
                    v71 = &s1;
                    v72 = v116;
                    v73 = v123;
                    v74 = v129;
                    v75 = v135;
                    if ( *(_QWORD *)(qword_8CC390 + v91 + 8) )
                      v71 = *(const char **)(qword_8CC390 + v91);
                    if ( (unsigned __int64)v105[1] > 1 )
                    {
                      v139 = v135;
                      v137 = v129;
                      v131 = v123;
                      v125 = v71;
                      sub_20B040(v105, 32);
                      v75 = v139;
                      v74 = v137;
                      v73 = v131;
                      v71 = v125;
                      v72 = v116;
                    }
                    v76 = &s1;
                    if ( (_QWORD)v146 )
                      v76 = v145;
                    a2 = "%s=%s";
                    v136 = v75;
                    v130 = v74;
                    v124 = v73;
                    v117 = v72;
                    sub_16FAA0(v105, (__int64)"%s=%s", v71, v76);
                    v58 = v117;
                    v60 = v124;
                    LOBYTE(v4) = v130;
                    v57 = v136;
                    if ( v153 >= -1 )
                    {
                      sub_20AAF0((__int64)&v153, "%s=%s");
                      v57 = v136;
                      LOBYTE(v4) = v130;
                      v60 = v124;
                      v58 = v117;
                    }
                  }
                }
                v59 = --v82;
                v91 -= 56;
              }
              while ( (unsigned __int64)v82 >= *(int *)(dbg + 64) );
            }
          }
          if ( v145 )
          {
            v100 = v57;
            v90 = v4;
            *(_QWORD *)&v146 = 0;
            qfree(v145, a2);
            v57 = v100;
            LOBYTE(v4) = v90;
          }
        }
        else if ( v80 )
        {
          v69 = xmmword_8CC398;
          v56 = *(int *)(dbg + 64);
          v59 = (char *)(xmmword_8CC398 - 1);
          v82 = (char *)(xmmword_8CC398 - 1);
          if ( (__int64)xmmword_8CC398 - 1 >= v56 )
            goto LABEL_108;
        }
        if ( v150 >= -1 && v151 )
        {
          v94 = v57;
          v85 = v4;
          v152 = 0;
          qfree(v151, a2, v56, v59);
          v57 = v94;
          LOBYTE(v4) = v85;
        }
        if ( v147 >= -1 && v148 )
        {
          v95 = v57;
          v86 = v4;
          *(_QWORD *)&v149 = 0;
          qfree(v148, a2, v56, v59);
          v57 = v95;
          LOBYTE(v4) = v86;
        }
        goto LABEL_83;
      }
    }
LABEL_92:
    v57 = &v142;
    goto LABEL_83;
  }
LABEL_13:
  v16 = *v6;
  if ( *v6 )
  {
    v6[1] = nullptr;
    qfree(v16, a2, a3, a4, v4);
    *v6 = nullptr;
    v6[2] = nullptr;
  }
  v17 = v140;
  v18 = 0;
  v19 = 1;
  v20 = *(unsigned int *)(dbg + 48);
  if ( v7 != v8 )
  {
    do
    {
      if ( (v19 & (unsigned int)v20) == 0 )
        goto LABEL_21;
      v24 = 24 * v18;
      v23 = v17 + 24 * v18;
      a3 = *(_QWORD *)(v23 + 8);
      if ( a3 <= 1 )
        goto LABEL_21;
      v4 = (unsigned __int64)v6[1];
      v25 = a3 - 1;
      if ( v4 > 1 )
      {
        a2 = *v6;
        v21 = v4 - 1;
        v22 = v4 + 1;
        if ( (unsigned __int64)v6[2] < v4 + 1 )
        {
          v106 = (unsigned __int64)v6[1];
          v96 = v20;
          v87 = v4 + 1;
          v61 = qvector_reserve(v6, a2, v22, 1);
          v4 = v106;
          v20 = v96;
          *v6 = (const char *)v61;
          a2 = (const char *)v61;
          v22 = v87;
        }
        v6[1] = (const char *)v22;
        a2[v21] = 32;
        (*v6)[v4] = 0;
        v17 = v140;
        v23 = v140 + v24;
        a3 = *(_QWORD *)(v140 + v24 + 8);
        if ( !a3 )
          goto LABEL_20;
        v25 = a3 - 1;
        if ( a3 == 1 )
          goto LABEL_20;
        v4 = (unsigned __int64)v6[1];
      }
      v26 = v25;
      if ( v4 )
      {
        --v4;
        v26 = v25 + v4;
        a3 = v25 + v4 + 1;
      }
      v27 = (__int64)*v6;
      if ( (unsigned __int64)v6[2] < a3 )
      {
        v120 = v4;
        v112 = v26;
        v108 = v20;
        v98 = v25;
        v88 = a3;
        v63 = qvector_reserve(v6, v27, a3, 1);
        v4 = v120;
        v26 = v112;
        *v6 = (const char *)v63;
        v27 = v63;
        LODWORD(v20) = v108;
        v25 = v98;
        a3 = v88;
      }
      v6[1] = (const char *)a3;
      *(_BYTE *)(v27 + v26) = 0;
      a2 = *(const char **)v23;
      v77 = v20;
      memcpy((void *)&(*v6)[v4], *(const void **)v23, v25);
      v17 = v140;
      v20 = v77;
      v23 = v140 + v24;
LABEL_20:
      *(_QWORD *)(v23 + 8) = 0;
LABEL_21:
      ++v18;
      v19 *= 2;
    }
    while ( v18 < v10 );
  }
  v28 = (unsigned __int64)v6[1];
  v29 = v17 + 24 * v141;
  if ( v29 != v17 )
  {
    v30 = v17;
    do
    {
      while ( 1 )
      {
        v31 = *(_QWORD *)(v30 + 8);
        if ( v31 > 1 )
        {
          v20 = v31 - 1;
          if ( v28 <= 1 )
            break;
          a2 = *v6;
          if ( (unsigned __int64)v6[2] < v28 + 1 )
          {
            v40 = qvector_reserve(v6, a2, v28 + 1, 1);
            *v6 = (const char *)v40;
            a2 = (const char *)v40;
          }
          v6[1] = (const char *)(v28 + 1);
          a2[v28 - 1] = 32;
          (*v6)[v28] = 0;
          v31 = *(_QWORD *)(v30 + 8);
          v28 = (unsigned __int64)v6[1];
          if ( v31 )
          {
            v20 = v31 - 1;
            if ( v31 != 1 )
              break;
          }
        }
        v30 += 24LL;
        if ( v29 == v30 )
          goto LABEL_43;
      }
      v32 = v20;
      if ( v28 )
      {
        --v28;
        v32 = v20 + v28;
        v31 = v20 + v28 + 1;
      }
      v33 = (__int64)*v6;
      if ( (unsigned __int64)v6[2] < v31 )
      {
        v107 = v32;
        v97 = v20;
        v62 = qvector_reserve(v6, v33, v31, 1);
        v32 = v107;
        v20 = v97;
        *v6 = (const char *)v62;
        v33 = v62;
      }
      v6[1] = (const char *)v31;
      v30 += 24LL;
      *(_BYTE *)(v33 + v32) = 0;
      a2 = *(const char **)(v30 - 24);
      memcpy((void *)&(*v6)[v28], a2, v20);
      v28 = (unsigned __int64)v6[1];
    }
    while ( v29 != v30 );
LABEL_43:
    v17 = v140;
  }
  v34 = (v28 == 0) + v28 - 1;
  if ( v17 )
  {
    v35 = v141;
    if ( (_QWORD)v141 )
    {
      v36 = 0;
      a3 = v17;
      do
      {
        v37 = (__int64 *)(a3 + 24 * v36);
        v38 = *v37;
        if ( *v37 )
        {
          v37[1] = 0;
          qfree(v38, a2, a3, a4, v4, v20);
          a3 = v140;
        }
        ++v36;
      }
      while ( v35 != v36 );
      v17 = a3;
    }
    *(_QWORD *)&v141 = 0;
    qfree(v17, a2, a3, a4, v4, v20);
  }
  return v34;
}
