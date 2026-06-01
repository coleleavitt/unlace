__int64 __fastcall sub_4D2890(__int64 *a1, __int64 *a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v4; // rax
  __int64 v8; // rcx
  int v9; // r14d
  __int64 v10; // rbx
  char v12; // r15
  unsigned __int64 v13; // rdx
  char v14; // al
  __int64 v15; // rbx
  char v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rsi
  size_t v22; // r8
  __int64 v23; // rbx
  size_t v24; // r10
  __int64 v25; // rsi
  size_t v26; // rax
  __int64 v27; // r12
  size_t v28; // r8
  size_t v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rbx
  unsigned __int64 v33; // rbp
  __int64 v34; // rsi
  unsigned __int64 v35; // rbp
  __int64 v36; // rbx
  __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  char v40; // al
  __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  unsigned __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rsi
  int v47; // r8d
  size_t v48; // r10
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  __int64 v51; // rsi
  size_t v52; // r10
  __int64 v53; // r8
  size_t v54; // r11
  __int64 v55; // rsi
  __int64 v56; // r8
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rbx
  size_t v60; // r11
  __int64 v61; // rsi
  char *i; // rcx
  __int64 v63; // r15
  unsigned __int64 v64; // rdx
  __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  __int64 v67; // r15
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rbx
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  unsigned __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rbx
  unsigned __int64 v86; // rdx
  __int64 v87; // rsi
  unsigned __int64 v88; // rdx
  __int64 v89; // rbx
  __int64 v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned __int64 *v97; // rax
  unsigned __int64 v98; // rbx
  __int64 v99; // rax
  __int64 v100; // rax
  size_t v101; // rax
  size_t v102; // r14
  _QWORD *v103; // rax
  const char *v104; // rsi
  void *v105; // rdi
  size_t v106; // rdx
  __int64 v108; // [rsp+8h] [rbp-4F8h]
  size_t v109; // [rsp+8h] [rbp-4F8h]
  char v110; // [rsp+17h] [rbp-4E9h]
  unsigned __int64 v111; // [rsp+18h] [rbp-4E8h]
  int v112; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v113; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v114; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v115; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v116; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v117; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v118; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v119; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v120; // [rsp+18h] [rbp-4E8h]
  unsigned __int64 v121; // [rsp+18h] [rbp-4E8h]
  __int64 v122; // [rsp+28h] [rbp-4D8h]
  unsigned __int64 v123; // [rsp+28h] [rbp-4D8h]
  unsigned __int64 v124; // [rsp+28h] [rbp-4D8h]
  unsigned __int64 v125; // [rsp+28h] [rbp-4D8h]
  int v126; // [rsp+28h] [rbp-4D8h]
  unsigned __int64 v127; // [rsp+28h] [rbp-4D8h]
  unsigned __int64 v128; // [rsp+28h] [rbp-4D8h]
  size_t v129; // [rsp+28h] [rbp-4D8h]
  size_t v130; // [rsp+28h] [rbp-4D8h]
  unsigned __int64 v131; // [rsp+28h] [rbp-4D8h]
  __int64 v132; // [rsp+30h] [rbp-4D0h]
  __int64 v133; // [rsp+30h] [rbp-4D0h]
  size_t v134; // [rsp+30h] [rbp-4D0h]
  size_t v135; // [rsp+30h] [rbp-4D0h]
  size_t v136; // [rsp+30h] [rbp-4D0h]
  int v137; // [rsp+38h] [rbp-4C8h]
  __int64 v138; // [rsp+38h] [rbp-4C8h]
  size_t v139; // [rsp+38h] [rbp-4C8h]
  size_t v140; // [rsp+40h] [rbp-4C0h]
  unsigned __int64 v141; // [rsp+50h] [rbp-4B0h] BYREF
  void *dest; // [rsp+58h] [rbp-4A8h] BYREF
  __int128 v143; // [rsp+60h] [rbp-4A0h]
  void *v144; // [rsp+78h] [rbp-488h] BYREF
  __int128 v145; // [rsp+80h] [rbp-480h]
  void *src; // [rsp+98h] [rbp-468h] BYREF
  __int128 v147; // [rsp+A0h] [rbp-460h]
  char s[1032]; // [rsp+B8h] [rbp-448h] BYREF
  unsigned __int64 v149; // [rsp+4C0h] [rbp-40h]

  v4 = -1;
  v149 = __readfsqword(0x28u);
  v8 = a1[3];
  v143 = 0;
  dest = nullptr;
  v9 = *(_DWORD *)(v8 + 24);
  v144 = nullptr;
  src = nullptr;
  v141 = -1;
  v145 = 0;
  v147 = 0;
  if ( v9 == 8 || (v4 = 0x100000000LL, (*(_WORD *)(a1[2] + 8) & 0x2002) != 0) )
  {
    if ( a3 >= v4 )
    {
LABEL_4:
      v10 = 0;
      if ( (a4 & 0xC0) != 0 )
        goto LABEL_5;
      v13 = v147;
      if ( (unsigned __int64)v147 <= 1 )
      {
        v16 = -1;
        goto LABEL_34;
      }
      if ( (a4 & 2) != 0 )
      {
        v110 = 0;
        v22 = v147 - 1;
        v16 = -1;
        v108 = -1;
        goto LABEL_29;
      }
      v110 = 0;
      v108 = -1;
      goto LABEL_19;
    }
  }
  else if ( a3 >= 0x100000000LL )
  {
    goto LABEL_4;
  }
  v12 = sub_3BD540((__int64)a1, a3);
  if ( v12 )
  {
    v122 = a3;
    if ( (sub_3BE900(a1, a3, 4) & 0x600) == 0x200 )
      v122 = sub_3C2650(a1, a3);
    v141 = v122;
    if ( (a4 & 8) != 0 || (v97 = (unsigned __int64 *)sub_5CAA10(a1)) == nullptr )
    {
      if ( (a4 & 1) != 0 )
      {
        if ( (a4 & 4) != 0 )
        {
          if ( (a4 & 0x100) != 0 )
          {
            if ( (a4 & 0x40) != 0 || (a4 & 0x80u) != 0 )
              goto LABEL_11;
            goto LABEL_91;
          }
          v111 = -1;
          v110 = 0;
          v108 = -1;
          goto LABEL_59;
        }
        v111 = -1;
        v110 = 0;
        v108 = -1;
        goto LABEL_151;
      }
      v111 = -1;
      v110 = 0;
      v108 = -1;
    }
    else
    {
      v98 = *v97;
      v111 = *v97;
      if ( get_ea_name(&v144, *v97, 85, 0) <= 0 )
      {
        v110 = 0;
        v108 = -1;
      }
      else
      {
        v110 = v12;
        v108 = a3 - v98;
      }
      if ( (a4 & 1) != 0 || (a4 & 0x10) == 0 && v111 != -1 )
      {
LABEL_56:
        if ( (a4 & 4) != 0 )
          goto LABEL_153;
        if ( a3 == v111 )
        {
          if ( (a4 & 0x100) != 0 )
            goto LABEL_64;
          goto LABEL_59;
        }
LABEL_151:
        if ( get_ea_name(&src, v122, 85, 0) > 0 )
        {
          v110 = v12;
          v108 = a3 - v122;
        }
LABEL_153:
        if ( (a4 & 0x100) != 0 )
        {
LABEL_62:
          if ( (a4 & 0x40) != 0 && v111 == -1 )
            goto LABEL_11;
LABEL_64:
          if ( (a4 & 0x80u) != 0 )
          {
            if ( !v110 )
              goto LABEL_11;
            v38 = v143;
            if ( (unsigned __int64)v143 > 1 )
            {
LABEL_93:
              if ( (a4 & 2) != 0 )
              {
                v52 = v38 - 1;
                v16 = -1;
LABEL_95:
                v53 = a2[1];
                v54 = v52;
                if ( v53 )
                {
                  v54 = --v53 + v52;
                  v38 = v53 + v52 + 1;
                }
                v55 = *a2;
                if ( a2[2] < v38 )
                {
                  v140 = v52;
                  v138 = v53;
                  v136 = v54;
                  v131 = v38;
                  v96 = qvector_reserve(a2, v55, v38, 1);
                  *a2 = v96;
                  v52 = v140;
                  v55 = v96;
                  v53 = v138;
                  v54 = v136;
                  v38 = v131;
                }
                a2[1] = v38;
                *(_BYTE *)(v55 + v54) = 0;
                memcpy((void *)(v53 + *a2), dest, v52);
                goto LABEL_100;
              }
              v63 = a2[1];
              v64 = 2;
              if ( v63 )
                v64 = v63-- + 1;
              v65 = *a2;
              if ( a2[2] < v64 )
              {
                v124 = v64;
                v79 = qvector_reserve(a2, v65, v64, 1);
                *a2 = v79;
                v64 = v124;
                v65 = v79;
              }
              a2[1] = v64;
              v66 = 2;
              *(_BYTE *)(v65 + v63) = 1;
              *(_BYTE *)(*a2 + v63 + 1) = 0;
              v67 = a2[1];
              if ( v67 )
                v66 = v67-- + 1;
              v68 = *a2;
              if ( a2[2] < v66 )
              {
                v125 = v66;
                v82 = qvector_reserve(a2, v68, v66, 1);
                *a2 = v82;
                v66 = v125;
                v68 = v82;
              }
              a2[1] = v66;
              *(_BYTE *)(v68 + v67) = 19;
              *(_BYTE *)(*a2 + v67 + 1) = 0;
              v38 = v143;
              if ( (_QWORD)v143 )
              {
                v16 = 19;
                v52 = v143 - 1;
                if ( (_QWORD)v143 != 1 )
                  goto LABEL_95;
              }
              else
              {
                v16 = 19;
              }
LABEL_100:
              v56 = a2[1];
              v57 = 2;
              if ( v56 )
                v57 = v56-- + 1;
              v58 = *a2;
              if ( a2[2] < v57 )
              {
                v133 = v56;
                v123 = v57;
                v69 = qvector_reserve(a2, v58, v57, 1);
                *a2 = v69;
                v56 = v133;
                v58 = v69;
                v57 = v123;
              }
              a2[1] = v57;
              *(_BYTE *)(v58 + v56) = 58;
              *(_BYTE *)(*a2 + v56 + 1) = 0;
              v39 = v145;
              if ( (unsigned __int64)v145 <= 1 )
              {
                v13 = v147;
                if ( (unsigned __int64)v147 <= 1 )
                  goto LABEL_113;
                if ( (a4 & 2) != 0 )
                {
                  v22 = v147 - 1;
                  goto LABEL_29;
                }
              }
              else if ( (a4 & 2) != 0 )
              {
                v48 = v145 - 1;
                v47 = 2;
                goto LABEL_107;
              }
              v70 = a2[1];
              v71 = 2;
              if ( v70 )
                v71 = v70-- + 1;
              v72 = *a2;
              if ( a2[2] < v71 )
              {
                v127 = v71;
                v92 = qvector_reserve(a2, v72, v71, 1);
                *a2 = v92;
                v71 = v127;
                v72 = v92;
              }
              a2[1] = v71;
              v73 = 2;
              *(_BYTE *)(v72 + v70) = 2;
              *(_BYTE *)(*a2 + v70 + 1) = 0;
              v74 = a2[1];
              if ( v74 )
                v73 = v74-- + 1;
              v75 = *a2;
              if ( a2[2] < v73 )
              {
                v128 = v73;
                v93 = qvector_reserve(a2, v75, v73, 1);
                *a2 = v93;
                v73 = v128;
                v75 = v93;
              }
              a2[1] = v73;
              *(_BYTE *)(v75 + v74) = v16;
              *(_BYTE *)(*a2 + v74 + 1) = 0;
              if ( (unsigned __int64)v145 <= 1 )
              {
                if ( (unsigned __int64)v147 <= 1 )
                {
                  if ( !v110 )
                    goto LABEL_34;
                  if ( !v108 )
                  {
LABEL_39:
                    v32 = a2[1];
                    v33 = 2;
                    if ( v32 )
                      v33 = v32-- + 1;
                    v34 = *a2;
                    if ( a2[2] < v33 )
                    {
                      v77 = qvector_reserve(a2, v34, v33, 1);
                      *a2 = v77;
                      v34 = v77;
                    }
                    a2[1] = v33;
                    v35 = 2;
                    *(_BYTE *)(v34 + v32) = 2;
                    *(_BYTE *)(*a2 + v32 + 1) = 0;
                    v36 = a2[1];
                    if ( v36 )
                      v35 = v36-- + 1;
                    v37 = *a2;
                    if ( a2[2] < v35 )
                    {
                      v78 = qvector_reserve(a2, v37, v35, 1);
                      *a2 = v78;
                      v37 = v78;
                    }
                    a2[1] = v35;
                    *(_BYTE *)(v37 + v36) = v16;
                    *(_BYTE *)(*a2 + v36 + 1) = 0;
                    goto LABEL_119;
                  }
LABEL_115:
                  b2a64(s);
                  for ( i = s; *i == 48; ++i )
                    ;
                  sub_35A910(a2);
LABEL_118:
                  if ( (a4 & 2) != 0 )
                  {
LABEL_119:
                    v10 = (a2[1] == 0) + a2[1] - 1;
                    goto LABEL_12;
                  }
                  goto LABEL_39;
                }
                goto LABEL_19;
              }
LABEL_69:
              v40 = sub_4CA840(a1, v111, v111);
              v41 = a2[1];
              v16 = v40;
              v42 = 2;
              if ( v41 )
                v42 = v41-- + 1;
              v43 = *a2;
              if ( a2[2] < v42 )
              {
                v115 = v42;
                v83 = qvector_reserve(a2, v43, v42, 1);
                *a2 = v83;
                v42 = v115;
                v43 = v83;
              }
              a2[1] = v42;
              v44 = 2;
              *(_BYTE *)(v43 + v41) = 1;
              *(_BYTE *)(*a2 + v41 + 1) = 0;
              v45 = a2[1];
              if ( v45 )
                v44 = v45-- + 1;
              v46 = *a2;
              if ( a2[2] < v44 )
              {
                v116 = v44;
                v84 = qvector_reserve(a2, v46, v44, 1);
                *a2 = v84;
                v44 = v116;
                v46 = v84;
              }
              a2[1] = v44;
              v47 = 0;
              *(_BYTE *)(v46 + v45) = v16;
              *(_BYTE *)(*a2 + v45 + 1) = 0;
              v39 = v145;
              if ( !(_QWORD)v145 )
              {
LABEL_112:
                if ( (unsigned __int64)v147 <= 1 )
                  goto LABEL_113;
                goto LABEL_80;
              }
              v48 = v145 - 1;
              if ( (_QWORD)v145 == 1 )
              {
                if ( (unsigned __int64)v147 <= 1 )
                  goto LABEL_113;
LABEL_80:
                v49 = a2[1];
                v50 = 2;
                if ( v49 )
                  v50 = v49-- + 1;
                v51 = *a2;
                if ( a2[2] < v50 )
                {
                  v126 = v47;
                  v117 = v50;
                  v91 = qvector_reserve(a2, v51, v50, 1);
                  *a2 = v91;
                  v47 = v126;
                  v51 = v91;
                  v50 = v117;
                }
                a2[1] = v50;
                *(_BYTE *)(v51 + v49) = 58;
                *(_BYTE *)(*a2 + v49 + 1) = 0;
                if ( v47 )
                {
                  v13 = v147;
                  v22 = v147 - 1;
                  if ( (unsigned __int64)v147 > 1 )
                    goto LABEL_29;
                  goto LABEL_113;
                }
                v85 = a2[1];
                v86 = 2;
                if ( v85 )
                  v86 = v85-- + 1;
                v87 = *a2;
                if ( a2[2] < v86 )
                {
                  v120 = v86;
                  v99 = qvector_reserve(a2, v87, v86, 1);
                  *a2 = v99;
                  v86 = v120;
                  v87 = v99;
                }
                a2[1] = v86;
                v88 = 2;
                *(_BYTE *)(v87 + v85) = 2;
                *(_BYTE *)(*a2 + v85 + 1) = 0;
                v89 = a2[1];
                if ( v89 )
                  v88 = v89-- + 1;
                v90 = *a2;
                if ( a2[2] < v88 )
                {
                  v121 = v88;
                  v100 = qvector_reserve(a2, v90, v88, 1);
                  *a2 = v100;
                  v88 = v121;
                  v90 = v100;
                }
                a2[1] = v88;
                *(_BYTE *)(v90 + v89) = v16;
                *(_BYTE *)(*a2 + v89 + 1) = 0;
                if ( (unsigned __int64)v147 <= 1 )
                  goto LABEL_113;
LABEL_19:
                v14 = sub_4CA840(a1, v141, v141);
                v15 = a2[1];
                v16 = v14;
                v17 = 2;
                if ( v15 )
                  v17 = v15-- + 1;
                v18 = *a2;
                if ( a2[2] < v17 )
                {
                  v114 = v17;
                  v81 = qvector_reserve(a2, v18, v17, 1);
                  *a2 = v81;
                  v17 = v114;
                  v18 = v81;
                }
                a2[1] = v17;
                v19 = 2;
                *(_BYTE *)(v18 + v15) = 1;
                *(_BYTE *)(*a2 + v15 + 1) = 0;
                v20 = a2[1];
                if ( v20 )
                  v19 = v20-- + 1;
                v21 = *a2;
                if ( a2[2] < v19 )
                {
                  v113 = v19;
                  v80 = qvector_reserve(a2, v21, v19, 1);
                  *a2 = v80;
                  v19 = v113;
                  v21 = v80;
                }
                a2[1] = v19;
                *(_BYTE *)(v21 + v20) = v16;
                *(_BYTE *)(*a2 + v20 + 1) = 0;
                v13 = v147;
                if ( (_QWORD)v147 )
                {
                  v22 = v147 - 1;
                  if ( (_QWORD)v147 != 1 )
                  {
LABEL_29:
                    v23 = a2[1];
                    v24 = v22;
                    if ( v23 )
                    {
                      v24 = --v23 + v22;
                      v13 = v23 + v22 + 1;
                    }
                    v25 = *a2;
                    if ( a2[2] < v13 )
                    {
                      v134 = v24;
                      v129 = v22;
                      v118 = v13;
                      v94 = qvector_reserve(a2, v25, v13, 1);
                      *a2 = v94;
                      v24 = v134;
                      v25 = v94;
                      v22 = v129;
                      v13 = v118;
                    }
                    a2[1] = v13;
                    *(_BYTE *)(v25 + v24) = 0;
                    memcpy((void *)(v23 + *a2), src, v22);
                    if ( !v110 )
                    {
LABEL_34:
                      b2a64(s);
                      v26 = strlen(s);
                      v27 = a2[1];
                      v28 = v26;
                      v29 = v26;
                      if ( v27 )
                      {
                        --v27;
                        v29 = v26 + v27;
                      }
                      v30 = *a2;
                      v31 = v29 + 1;
                      if ( a2[2] < v29 + 1 )
                      {
                        v109 = v26;
                        v76 = qvector_reserve(a2, v30, v31, 1);
                        *a2 = v76;
                        v28 = v109;
                        v30 = v76;
                        v31 = v29 + 1;
                      }
                      a2[1] = v31;
                      *(_BYTE *)(v30 + v29) = 0;
                      memmove((void *)(v27 + *a2), s, v28);
                      if ( (a4 & 2) != 0 )
                        goto LABEL_119;
                      goto LABEL_39;
                    }
LABEL_114:
                    if ( !v108 )
                      goto LABEL_118;
                    goto LABEL_115;
                  }
                }
LABEL_113:
                if ( !v110 )
                  goto LABEL_34;
                goto LABEL_114;
              }
LABEL_107:
              v59 = a2[1];
              v60 = v48;
              if ( v59 )
              {
                v60 = --v59 + v48;
                v39 = v59 + v48 + 1;
              }
              v61 = *a2;
              if ( a2[2] < v39 )
              {
                v137 = v47;
                v135 = v60;
                v130 = v48;
                v119 = v39;
                v95 = qvector_reserve(a2, v61, v39, 1);
                *a2 = v95;
                v47 = v137;
                v61 = v95;
                v60 = v135;
                v48 = v130;
                v39 = v119;
              }
              a2[1] = v39;
              *(_BYTE *)(v61 + v60) = 0;
              v112 = v47;
              memcpy((void *)(v59 + *a2), v144, v48);
              v47 = v112;
              goto LABEL_112;
            }
LABEL_67:
            v39 = v145;
            if ( (unsigned __int64)v145 <= 1 )
            {
              v13 = v147;
              if ( (unsigned __int64)v147 <= 1 )
              {
                v16 = -1;
                goto LABEL_113;
              }
              v22 = v147 - 1;
              v16 = -1;
              if ( (a4 & 2) != 0 )
                goto LABEL_29;
              goto LABEL_19;
            }
            if ( (a4 & 2) != 0 )
            {
              v48 = v145 - 1;
              v16 = -1;
              v47 = 2;
              goto LABEL_107;
            }
            goto LABEL_69;
          }
LABEL_92:
          v38 = v143;
          if ( (unsigned __int64)v143 > 1 )
            goto LABEL_93;
          goto LABEL_67;
        }
LABEL_59:
        if ( ((unsigned __int64)v145 <= 1 || (a4 & 0x200) != 0)
          && (unsigned __int64)v147 <= 1
          && sub_4CF380((__int64)a1, (__int64 *)&src, &v141, 3u) > 0 )
        {
          v103 = (_QWORD *)sub_505D70(a1 + 203, a3);
          if ( v103 && v141 >= *v103 && v141 < v103[1] )
          {
            v104 = haystack;
            v108 = a3 - v141;
            if ( (_QWORD)v147 )
              v104 = (const char *)src;
            if ( (int)demangle_name(&src, v104, 0, 2) > 0 )
              sub_4CFA10(*a1, (__int64)&src);
            if ( v144 )
            {
              *(_QWORD *)&v145 = 0;
              qfree(v144);
              v144 = nullptr;
              *((_QWORD *)&v145 + 1) = 0;
            }
            if ( (a4 & 0x40) != 0 && v111 == -1 )
              goto LABEL_11;
            v110 = v12;
            goto LABEL_92;
          }
          if ( src )
          {
            *(_QWORD *)&v147 = 0;
            qfree(src);
            src = nullptr;
            *((_QWORD *)&v147 + 1) = 0;
          }
        }
        goto LABEL_62;
      }
    }
    v132 = sub_505D70(a1 + 203, a3);
    get_segm_para(v132);
    if ( v132 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        b2a64(s);
        v101 = strlen(s);
        v102 = v101;
        if ( v101 )
        {
          v105 = dest;
          v106 = v101 + 1;
          if ( *((_QWORD *)&v143 + 1) < v101 + 1 )
          {
            v139 = v101 + 1;
            dest = (void *)qvector_reserve(&dest, dest, v106, 1);
            v106 = v139;
            v105 = dest;
          }
          *(_QWORD *)&v143 = v106;
          memmove(v105, s, v102);
          *((_BYTE *)dest + v102) = 0;
        }
        else
        {
          *(_QWORD *)&v143 = 0;
        }
      }
      else
      {
        sub_510BD0(a1, &dest, v132, 0);
      }
    }
    goto LABEL_56;
  }
  if ( (a4 & 0xC0) == 0 )
  {
LABEL_91:
    v110 = 0;
    v111 = -1;
    v108 = -1;
    goto LABEL_92;
  }
LABEL_11:
  v10 = 0;
LABEL_12:
  if ( src )
  {
    *(_QWORD *)&v147 = 0;
    qfree(src);
  }
  if ( v144 )
  {
    *(_QWORD *)&v145 = 0;
    qfree(v144);
  }
LABEL_5:
  if ( dest )
  {
    *(_QWORD *)&v143 = 0;
    qfree(dest);
  }
  return v10;
}
