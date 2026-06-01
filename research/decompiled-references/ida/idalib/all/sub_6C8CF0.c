unsigned __int64 __fastcall sub_6C8CF0(__int64 a1, __int64 *a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  char v9; // al
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  void *v12; // rdi
  __m128i v14; // xmm0
  bool v15; // zf
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int *v19; // r8
  __int64 v20; // rax
  const char *v21; // r14
  const char *v22; // r15
  unsigned __int64 v23; // rcx
  char v24; // r14
  int *v25; // r12
  int *v26; // r15
  const char *v27; // rsi
  int *v28; // r14
  const char *v29; // rdi
  int v30; // eax
  int *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // rdx
  unsigned __int64 v37; // r12
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r12
  size_t v42; // r8
  int *v43; // rdi
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // rax
  const char *v48; // rsi
  const char *v49; // rdi
  int *v50; // r15
  __int64 v51; // r14
  int *v52; // rbx
  int *v53; // r12
  const char *v54; // rsi
  int *v55; // rbp
  const char *v56; // rdi
  int v57; // eax
  int *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rbp
  const char *v62; // rdx
  __int64 v63; // rax
  int *v64; // r15
  __int64 v65; // r15
  __int64 v66; // r14
  int *v67; // rbx
  int *v68; // r12
  const char *v69; // rsi
  int *v70; // rbp
  const char *v71; // rdi
  int v72; // eax
  int *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  int *v76; // r9
  const char *v77; // rsi
  const char *v78; // rdi
  int v79; // eax
  int *v80; // rax
  __int64 v81; // rax
  const char *v82; // rsi
  const char *v83; // rdi
  int v84; // eax
  const char *v85; // rsi
  const char *v86; // rdi
  int v87; // eax
  int *v88; // rax
  __int64 v89; // rax
  const char *v90; // rsi
  const char *v91; // rdi
  int v92; // eax
  int *v93; // r12
  int *v94; // r12
  const void *v95; // r15
  void *v96; // rax
  __int64 v97; // [rsp+0h] [rbp-138h]
  unsigned __int64 v98; // [rsp+10h] [rbp-128h]
  char v99; // [rsp+18h] [rbp-120h]
  int *v100; // [rsp+18h] [rbp-120h]
  _QWORD *v101; // [rsp+18h] [rbp-120h]
  __int64 v102; // [rsp+20h] [rbp-118h]
  __int64 v104; // [rsp+30h] [rbp-108h]
  unsigned __int64 v105; // [rsp+38h] [rbp-100h]
  unsigned __int64 v106; // [rsp+38h] [rbp-100h]
  unsigned __int64 v107; // [rsp+38h] [rbp-100h]
  unsigned __int64 v108; // [rsp+38h] [rbp-100h]
  int *v109; // [rsp+38h] [rbp-100h]
  unsigned __int64 v110; // [rsp+38h] [rbp-100h]
  int *v111; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v112; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v113; // [rsp+40h] [rbp-F8h]
  int *v114; // [rsp+40h] [rbp-F8h]
  unsigned __int64 v115; // [rsp+40h] [rbp-F8h]
  __int64 v116; // [rsp+48h] [rbp-F0h]
  __int64 v117; // [rsp+48h] [rbp-F0h]
  __int64 v118; // [rsp+50h] [rbp-E8h]
  char v119; // [rsp+5Eh] [rbp-DAh]
  __int64 v120; // [rsp+60h] [rbp-D8h] BYREF
  _DWORD *v121; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v122[2]; // [rsp+70h] [rbp-C8h] BYREF
  int v123; // [rsp+80h] [rbp-B8h] BYREF
  void *v124; // [rsp+88h] [rbp-B0h]
  int *v125; // [rsp+90h] [rbp-A8h]
  int *v126; // [rsp+98h] [rbp-A0h]
  __int128 v127; // [rsp+A0h] [rbp-98h]
  __int64 v128; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v129; // [rsp+B8h] [rbp-80h] BYREF
  int v130; // [rsp+C0h] [rbp-78h] BYREF
  int *v131; // [rsp+C8h] [rbp-70h]
  int *v132; // [rsp+D0h] [rbp-68h]
  int *v133; // [rsp+D8h] [rbp-60h]
  __int128 v134; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v135; // [rsp+F8h] [rbp-40h]

  v5 = a1;
  v6 = *a2;
  v135 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(v6 + 1864);
  v123 = 0;
  v125 = &v123;
  v126 = &v123;
  LOBYTE(v6) = *(_BYTE *)(a1 + 32);
  v124 = nullptr;
  v9 = v6 & 0x3F;
  v127 = 0;
  v122[0] = a3;
  if ( v9 != 45 )
    goto LABEL_8;
  if ( *(_BYTE *)(v8 + 8) || !*(_QWORD *)(a1 + 48) )
    goto LABEL_99;
  v61 = 0;
  do
  {
    while ( sub_6C86E0(v122, a1, v61) != -1 )
    {
      if ( ++v61 >= *(_QWORD *)(a1 + 48) )
        goto LABEL_98;
    }
    v62 = haystack;
    v63 = *(_QWORD *)(a1 + 40) + 32 * v61;
    if ( *(_QWORD *)(v63 + 8) )
      v62 = *(const char **)v63;
    sub_6514C0(a2, a2[1], v62, 0, nullptr);
    ++v61;
  }
  while ( v61 < *(_QWORD *)(a1 + 48) );
LABEL_98:
  v9 = *(_BYTE *)(a1 + 32) & 0x3F;
  if ( v9 == 45 )
  {
LABEL_99:
    v119 = *(_BYTE *)(a3 + 32) & 0x3F;
    if ( v119 != 45 )
      goto LABEL_3;
  }
  else
  {
LABEL_8:
    if ( (v9 & 0xEF) != 0xD || (*(_BYTE *)(a3 + 32) & 0x2F) != 0xD )
      goto LABEL_3;
    v119 = *(_BYTE *)(a3 + 32) & 0x3F;
  }
  v14.m128i_i64[0] = 0;
  v15 = *(_QWORD *)(a1 + 48) == 0;
  v128 = a1;
  v130 = 0;
  v131 = nullptr;
  v132 = &v130;
  v133 = &v130;
  v134 = 0;
  if ( !v15 )
  {
    v16 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v97 = *(_QWORD *)(v5 + 40) + 32 * v16;
        if ( *(_QWORD *)(v97 + 24) == -1 )
          goto LABEL_53;
        v17 = sub_6C86E0(v122, v5, v16);
        if ( v17 != -1 )
        {
          v18 = v122[0];
          v98 = v17;
          if ( (*(_BYTE *)(v122[0] + 32) & 0x3F) != 0x2D )
            break;
          v18 = *(_QWORD *)(v122[0] + 120);
          if ( *(_QWORD *)(v18 + 8 * v17) == *(_QWORD *)(*(_QWORD *)(v5 + 120) + 8 * v16) )
            break;
        }
        v45 = sub_6B9340(v122, v5, v16, v18, (__int64)v19);
        v46 = v45;
        if ( v45 != -1 )
        {
          v98 = v45;
          v47 = sub_6C86E0(&v128, a3, v45);
          if ( v47 == -1 )
            break;
          if ( (*(_BYTE *)(v128 + 32) & 0x3F) == 0x2D )
          {
            v18 = *(_QWORD *)(v128 + 120);
            if ( *(_QWORD *)(v18 + 8 * v47) != *(_QWORD *)(*(_QWORD *)(a3 + 120) + 8 * v46) )
              break;
          }
        }
        sub_6BFC90(v5, a2, v16++);
        if ( v16 >= *(_QWORD *)(v5 + 48) )
          goto LABEL_54;
      }
      v104 = *(_QWORD *)(a3 + 40) + 32 * v98;
      v20 = *(_QWORD *)(v104 + 8);
      if ( !*(_QWORD *)(v97 + 8) )
        break;
      v21 = *(const char **)v97;
      if ( v20 )
        goto LABEL_61;
      if ( !*v21 )
        goto LABEL_37;
      v22 = haystack;
      v23 = *(_QWORD *)(v97 + 24);
LABEL_19:
      sub_6BF450(a2, v21, v22, v23);
      v24 = *(_BYTE *)(a3 + 32);
      if ( (v24 & 0x3F) == 0x2D )
        v102 = v104;
      else
        v102 = *(_QWORD *)(a3 + 144) + 144 * v98 + 16;
      v25 = v131;
      if ( !v131 )
        goto LABEL_74;
      v99 = *(_BYTE *)(a3 + 32);
      v26 = &v130;
      v111 = v131;
      v118 = *(_QWORD *)(v102 + 8);
      while ( 1 )
      {
        v32 = *((_QWORD *)v25 + 5);
        if ( !v118 )
          break;
        v27 = *(const char **)v102;
        v28 = v25;
        v29 = haystack;
        if ( v32 )
          goto LABEL_24;
LABEL_25:
        v30 = strcmp(v29, v27);
        v31 = *((int **)v25 + 2);
        v25 = *((int **)v25 + 3);
        if ( v30 >= 0 )
        {
          v26 = v28;
          v25 = v31;
        }
        if ( !v25 )
        {
          v24 = v99;
          v19 = v26;
          v25 = v111;
          goto LABEL_70;
        }
      }
      if ( v32 )
      {
LABEL_32:
        v27 = haystack;
LABEL_24:
        v29 = *((const char **)v25 + 4);
        v28 = v25;
        goto LABEL_25;
      }
      while ( 1 )
      {
        v33 = *((_QWORD *)v25 + 2);
        if ( !v33 )
          break;
        v26 = v25;
        v25 = *((int **)v25 + 2);
        if ( *(_QWORD *)(v33 + 40) )
          goto LABEL_32;
      }
      v64 = v25;
      v24 = v99;
      v25 = v111;
      v19 = v64;
LABEL_70:
      if ( v19 == &v130 )
        goto LABEL_74;
      if ( *((_QWORD *)v19 + 5) )
      {
        v48 = *((const char **)v19 + 4);
        v49 = haystack;
        if ( !v118 )
          goto LABEL_73;
        goto LABEL_89;
      }
      v48 = haystack;
      if ( !v118 )
        goto LABEL_34;
LABEL_89:
      v49 = *(const char **)v102;
LABEL_73:
      v100 = v19;
      if ( strcmp(v49, v48) >= 0 )
      {
        v19 = v100;
LABEL_34:
        v18 = *((_QWORD *)v19 + 7);
        goto LABEL_35;
      }
LABEL_74:
      v18 = *((_QWORD *)&v134 + 1);
      v101 = (_QWORD *)v128;
      if ( (*(_BYTE *)(v128 + 32) & 0x2F) != 0xD )
      {
        if ( *((_QWORD *)&v134 + 1) >= *(_QWORD *)(v128 + 48) )
          goto LABEL_38;
        while ( 2 )
        {
          v65 = v101[5] + 32 * v18;
          if ( !v25 )
          {
            v19 = &v130;
            goto LABEL_137;
          }
          v66 = *(_QWORD *)(v101[5] + 32 * v18 + 8);
          v117 = v5;
          v67 = v25;
          v106 = v16;
          v113 = v18;
          v68 = &v130;
LABEL_114:
          v74 = *((_QWORD *)v67 + 5);
          if ( v66 )
          {
            v69 = *(const char **)v65;
            v70 = v67;
            v71 = haystack;
            if ( v74 )
              goto LABEL_110;
          }
          else
          {
            if ( !v74 )
            {
              while ( 1 )
              {
                v75 = *((_QWORD *)v67 + 2);
                if ( !v75 )
                  break;
                v68 = v67;
                v67 = *((int **)v67 + 2);
                if ( *(_QWORD *)(v75 + 40) )
                  goto LABEL_118;
              }
              v94 = v67;
              v16 = v106;
              v18 = v113;
              v5 = v117;
              v19 = v94;
LABEL_132:
              if ( v19 == &v130 )
                goto LABEL_137;
              if ( *((_QWORD *)v19 + 5) )
              {
                v85 = *((const char **)v19 + 4);
                v86 = haystack;
                if ( v66 )
                  goto LABEL_135;
LABEL_136:
                v115 = v18;
                v109 = v19;
                v87 = strcmp(v86, v85);
                v19 = v109;
                v18 = v115;
                if ( v87 < 0 )
                {
LABEL_137:
                  v110 = v18;
                  v120 = v65;
                  v88 = (int *)sub_6C8580(&v129, v19, &v120);
                  v18 = v110;
                  v19 = v88;
                }
              }
              else
              {
                v85 = haystack;
                if ( v66 )
                {
LABEL_135:
                  v86 = *(const char **)v65;
                  goto LABEL_136;
                }
              }
              *((_QWORD *)v19 + 7) = v18;
              v89 = *(_QWORD *)(v65 + 8);
              if ( *(_QWORD *)(v102 + 8) )
              {
                v90 = *(const char **)v102;
                v91 = haystack;
                if ( !v89 )
                  goto LABEL_140;
                goto LABEL_150;
              }
              if ( v89 )
              {
                v90 = haystack;
LABEL_150:
                v91 = *(const char **)v65;
LABEL_140:
                v92 = strcmp(v91, v90);
                v18 = *((_QWORD *)&v134 + 1);
                if ( v92 )
                {
                  v18 = *((_QWORD *)&v134 + 1) + 1LL;
                  *((_QWORD *)&v134 + 1) = v18;
                  if ( v18 >= v101[6] )
                    goto LABEL_37;
                  v25 = v131;
                  continue;
                }
LABEL_35:
                if ( v18 != -1 && v18 != v16 )
                {
                  v18 = *(_QWORD *)(v5 + 40) + 32 * v18;
                  *(_QWORD *)(v18 + 24) = -1;
                }
                goto LABEL_37;
              }
LABEL_157:
              v18 = *((_QWORD *)&v134 + 1);
              goto LABEL_35;
            }
LABEL_118:
            v69 = haystack;
LABEL_110:
            v71 = *((const char **)v67 + 4);
            v70 = v67;
          }
          break;
        }
        v72 = strcmp(v71, v69);
        v73 = *((int **)v67 + 2);
        v67 = *((int **)v67 + 3);
        if ( v72 >= 0 )
        {
          v68 = v70;
          v67 = v73;
        }
        if ( !v67 )
        {
          v16 = v106;
          v18 = v113;
          v19 = v68;
          v5 = v117;
          goto LABEL_132;
        }
        goto LABEL_114;
      }
      if ( *((_QWORD *)&v134 + 1) >= *(_QWORD *)(v128 + 152) )
        goto LABEL_38;
      while ( 2 )
      {
        v19 = (int *)(v101[18] + 144 * v18);
        v50 = v19;
        if ( !v25 )
        {
          v76 = &v130;
          goto LABEL_125;
        }
        v51 = *((_QWORD *)v19 + 3);
        v116 = v5;
        v52 = v25;
        v105 = v16;
        v112 = v18;
        v53 = &v130;
        while ( 2 )
        {
          v59 = *((_QWORD *)v52 + 5);
          if ( v51 )
          {
            v54 = *((const char **)v50 + 2);
            v55 = v52;
            v56 = haystack;
            if ( v59 )
              goto LABEL_79;
            goto LABEL_80;
          }
          if ( v59 )
          {
LABEL_87:
            v55 = v52;
            v54 = haystack;
LABEL_79:
            v56 = *((const char **)v52 + 4);
LABEL_80:
            v57 = strcmp(v56, v54);
            v58 = *((int **)v52 + 2);
            v52 = *((int **)v52 + 3);
            if ( v57 >= 0 )
            {
              v53 = v55;
              v52 = v58;
            }
            if ( !v52 )
            {
              v16 = v105;
              v18 = v112;
              v76 = v53;
              v5 = v116;
              goto LABEL_120;
            }
            continue;
          }
          break;
        }
        while ( 1 )
        {
          v60 = *((_QWORD *)v52 + 2);
          if ( !v60 )
            break;
          v53 = v52;
          v52 = *((int **)v52 + 2);
          if ( *(_QWORD *)(v60 + 40) )
            goto LABEL_87;
        }
        v93 = v52;
        v16 = v105;
        v18 = v112;
        v5 = v116;
        v76 = v93;
LABEL_120:
        if ( v76 == &v130 )
          goto LABEL_125;
        if ( *((_QWORD *)v76 + 5) )
        {
          v77 = *((const char **)v76 + 4);
          v78 = haystack;
          if ( v51 )
            goto LABEL_123;
LABEL_124:
          v114 = v76;
          v107 = v18;
          v79 = strcmp(v78, v77);
          v18 = v107;
          v76 = v114;
          if ( v79 < 0 )
          {
LABEL_125:
            v108 = v18;
            v121 = v50 + 4;
            v80 = (int *)sub_6C8580(&v129, v76, (__int64 *)&v121);
            v18 = v108;
            v76 = v80;
          }
        }
        else
        {
          v77 = haystack;
          if ( v51 )
          {
LABEL_123:
            v78 = *((const char **)v50 + 2);
            goto LABEL_124;
          }
        }
        *((_QWORD *)v76 + 7) = v18;
        v81 = *((_QWORD *)v50 + 3);
        if ( *(_QWORD *)(v102 + 8) )
        {
          v82 = *(const char **)v102;
          v83 = haystack;
          if ( !v81 )
            goto LABEL_128;
          goto LABEL_145;
        }
        if ( !v81 )
          goto LABEL_157;
        v82 = haystack;
LABEL_145:
        v83 = *((const char **)v50 + 2);
LABEL_128:
        v84 = strcmp(v83, v82);
        v18 = *((_QWORD *)&v134 + 1);
        if ( !v84 )
          goto LABEL_35;
        v18 = *((_QWORD *)&v134 + 1) + 1LL;
        *((_QWORD *)&v134 + 1) = v18;
        if ( v18 < v101[19] )
        {
          v25 = v131;
          continue;
        }
        break;
      }
LABEL_37:
      v24 = *(_BYTE *)(a3 + 32);
LABEL_38:
      if ( (v24 & 0x2F) != 0xD )
        goto LABEL_53;
      v34 = *(_QWORD *)(v5 + 144) + 144 * v16;
      v35 = *(_QWORD *)(a3 + 144) + 144 * v98;
      if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v34 + 64), *(_QWORD *)(v35 + 64), 0, v18, v19) )
        goto LABEL_44;
      v36 = 2304;
      if ( _bittest64(&v36, *(_QWORD *)(v34 + 72) & 0xFLL) )
      {
        v37 = sub_6BB440(*(_QWORD **)(qword_2CCB598 + 1672), 0, *(_DWORD *)(v34 + 88));
        v38 = 2304;
        if ( _bittest64(&v38, *(_QWORD *)(v35 + 72) & 0xFLL) )
          goto LABEL_42;
        v39 = -1;
        goto LABEL_43;
      }
      if ( _bittest64(&v36, *(_QWORD *)(v35 + 72) & 0xFLL) )
      {
        v37 = -1;
LABEL_42:
        v39 = sub_6BB440(*(_QWORD **)(qword_2CCB598 + 1672), 0, *(_DWORD *)(v35 + 88));
LABEL_43:
        if ( v37 != v39 )
        {
LABEL_44:
          sub_6BB530(a2, *(_QWORD *)(v97 + 24), v34);
          sub_6BB600(a2, *(_QWORD *)(v97 + 24), v35, *(double *)v14.m128i_i64, a5);
        }
      }
      if ( *(_BYTE *)(v5 + 32) == *(_BYTE *)(a3 + 32) )
      {
        v40 = *(_QWORD *)v34;
        if ( *(_QWORD *)(v35 + 8) == *(_QWORD *)(v34 + 8) )
        {
          if ( v119 == 29 || *(_QWORD *)v35 == v40 )
          {
            *(__m128i *)(v34 + 72) = _mm_loadu_si128((const __m128i *)(v35 + 72));
            *(__m128i *)(v34 + 88) = _mm_loadu_si128((const __m128i *)(v35 + 88));
            v14 = _mm_loadu_si128((const __m128i *)(v35 + 104));
            *(__m128i *)(v34 + 104) = v14;
            *(_DWORD *)(v34 + 120) = *(_DWORD *)(v35 + 120);
            goto LABEL_47;
          }
        }
        else
        {
LABEL_47:
          if ( *(_QWORD *)v35 == v40 || v119 == 29 )
            goto LABEL_49;
        }
        sub_6BF220(a2, *(_QWORD *)(v97 + 24), 0);
        v44 = *(_QWORD *)(v104 + 24);
        if ( *(_QWORD *)(v97 + 24) != v44 )
          sub_6BF220(a2, v44, 0);
      }
LABEL_49:
      if ( v34 + 16 == v35 + 16 )
      {
LABEL_53:
        if ( ++v16 >= *(_QWORD *)(v5 + 48) )
          goto LABEL_54;
      }
      else
      {
        v41 = *(_QWORD *)(v35 + 24);
        if ( !v41 || (v42 = v41 - 1, v41 == 1) )
        {
          *(_QWORD *)(v34 + 24) = 0;
          goto LABEL_53;
        }
        v95 = *(const void **)(v35 + 16);
        v96 = *(void **)(v34 + 16);
        if ( *(_QWORD *)(v34 + 32) < v41 )
        {
          v96 = (void *)qvector_reserve(v34 + 16, *(_QWORD *)(v34 + 16), v41, 1);
          *(_QWORD *)(v34 + 16) = v96;
          v42 = v41 - 1;
        }
        *(_QWORD *)(v34 + 24) = v41;
        ++v16;
        memmove(v96, v95, v42);
        *(_BYTE *)(*(_QWORD *)(v34 + 16) + v41 - 1) = 0;
        if ( v16 >= *(_QWORD *)(v5 + 48) )
        {
LABEL_54:
          v43 = v131;
          goto LABEL_55;
        }
      }
    }
    v21 = haystack;
    if ( !v20 )
      goto LABEL_37;
LABEL_61:
    v22 = *(const char **)v104;
    if ( !strcmp(*(const char **)v104, v21) )
      goto LABEL_37;
    v23 = *(_QWORD *)(v97 + 24);
    goto LABEL_19;
  }
  v43 = nullptr;
LABEL_55:
  sub_6B8880(v43);
LABEL_3:
  v10 = v124;
  if ( v124 )
  {
    do
    {
      v11 = v10;
      sub_6B8880((_QWORD *)v10[3]);
      v12 = (void *)v10[4];
      v10 = (_QWORD *)v10[2];
      if ( v12 )
      {
        v11[5] = 0;
        qfree(v12);
      }
      operator delete(v11, 0x40u);
    }
    while ( v10 );
  }
  return v135 - __readfsqword(0x28u);
}
