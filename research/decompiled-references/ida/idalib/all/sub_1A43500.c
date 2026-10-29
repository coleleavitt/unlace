void __fastcall sub_1A43500(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbp
  unsigned __int64 v3; // rcx
  char *v4; // rax
  char *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbx
  _BYTE *v9; // rdi
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  unsigned __int8 v18; // al
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  char v25; // di
  _QWORD *v26; // rdx
  __int64 v27; // r10
  unsigned int v28; // ecx
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // r14d
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  unsigned __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // r15
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // r10
  char *v46; // r14
  char *v47; // r15
  int v48; // r12d
  __int64 v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rsi
  __int64 v56; // rax
  _QWORD *v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  _QWORD *v61; // rdx
  _BYTE *v62; // rdi
  unsigned int v63; // r9d
  unsigned int v64; // edx
  unsigned __int64 *v65; // rcx
  unsigned __int64 v66; // rax
  unsigned int v67; // esi
  _QWORD *v68; // r15
  _QWORD *v69; // r12
  _QWORD *v70; // r14
  unsigned __int64 v71; // r15
  unsigned __int8 v72; // al
  unsigned __int64 v73; // rax
  __int64 v74; // rdi
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // r13
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned int v82; // eax
  unsigned int v83; // edi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  _QWORD *v87; // rdx
  unsigned __int8 v88; // al
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  unsigned int v99; // eax
  __int64 v100; // rdx
  unsigned int v101; // r14d
  unsigned int v102; // eax
  bool v103; // cf
  unsigned int v104; // r14d
  unsigned int v105; // eax
  unsigned int v106; // ebx
  int v107; // r14d
  __int64 v108; // rbp
  __int64 v109; // rax
  unsigned int v110; // edx
  bool v111; // zf
  bool v112; // sf
  __int64 v113; // rcx
  __int64 v114; // r10
  unsigned int v115; // r9d
  unsigned __int64 v116; // rbx
  unsigned int v117; // edx
  unsigned __int64 *v118; // rcx
  unsigned __int64 v119; // rax
  unsigned int v120; // esi
  char v121; // al
  int v122; // r10d
  __int64 *v123; // r12
  unsigned __int64 v124; // r12
  bool v125; // al
  __int64 v126; // rax
  unsigned __int64 v127; // rdx
  unsigned int v128; // esi
  __int64 v129; // rax
  unsigned int v130; // [rsp+Ch] [rbp-37Ch]
  __int64 v131; // [rsp+10h] [rbp-378h]
  __int64 v132; // [rsp+18h] [rbp-370h]
  unsigned __int64 v133; // [rsp+30h] [rbp-358h]
  _QWORD *v134; // [rsp+30h] [rbp-358h]
  __int64 v135; // [rsp+30h] [rbp-358h]
  unsigned int v136; // [rsp+38h] [rbp-350h]
  char v137; // [rsp+3Eh] [rbp-34Ah]
  char v138; // [rsp+3Fh] [rbp-349h]
  __int64 v139; // [rsp+40h] [rbp-348h]
  __int64 v140; // [rsp+58h] [rbp-330h]
  bool v141; // [rsp+60h] [rbp-328h]
  char v142; // [rsp+61h] [rbp-327h]
  bool v143; // [rsp+62h] [rbp-326h]
  char v144; // [rsp+63h] [rbp-325h]
  __int64 v145; // [rsp+68h] [rbp-320h]
  __int64 v146; // [rsp+70h] [rbp-318h]
  __int64 v147; // [rsp+78h] [rbp-310h]
  _QWORD *v148; // [rsp+88h] [rbp-300h] BYREF
  unsigned __int64 v149; // [rsp+90h] [rbp-2F8h] BYREF
  int v150; // [rsp+98h] [rbp-2F0h]
  __m128 v151; // [rsp+A0h] [rbp-2E8h] BYREF
  void *v152; // [rsp+B0h] [rbp-2D8h] BYREF
  __int64 v153; // [rsp+B8h] [rbp-2D0h]
  _BYTE v154[32]; // [rsp+C0h] [rbp-2C8h] BYREF
  void *ptr; // [rsp+E0h] [rbp-2A8h] BYREF
  __int64 v156; // [rsp+E8h] [rbp-2A0h]
  _BYTE v157[48]; // [rsp+F0h] [rbp-298h] BYREF
  unsigned int v158; // [rsp+120h] [rbp-268h]
  __int64 v159; // [rsp+130h] [rbp-258h] BYREF
  _QWORD *v160; // [rsp+138h] [rbp-250h] BYREF
  unsigned int v161; // [rsp+140h] [rbp-248h]
  char v162; // [rsp+238h] [rbp-150h] BYREF
  __int64 v163; // [rsp+240h] [rbp-148h] BYREF
  _QWORD *v164; // [rsp+248h] [rbp-140h] BYREF
  unsigned int v165; // [rsp+250h] [rbp-138h]
  char v166; // [rsp+348h] [rbp-40h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v136 = v1;
  if ( !v1 )
    return;
  v2 = a1;
  if ( v1 == 1 )
  {
    v121 = *(_BYTE *)(sub_16C47B0(**(_QWORD **)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
    if ( v121 == 71 )
    {
      *(_DWORD *)a1 = 3;
    }
    else if ( v121 == 28 )
    {
      *(_DWORD *)a1 = 4;
    }
    return;
  }
  if ( *(_DWORD *)a1 == 5 )
    return;
  v3 = (unsigned __int64)&v162;
  v4 = (char *)&v160;
  v159 = 1;
  do
  {
    *(_QWORD *)v4 = -4096;
    v4 += 16;
  }
  while ( v4 != &v162 );
  v5 = (char *)&v164;
  v163 = 1;
  do
  {
    *(_QWORD *)v5 = 0;
    v5 += 16;
  }
  while ( v5 != &v166 );
  v6 = (__int64)v157;
  v152 = v154;
  v153 = 0x400000000LL;
  ptr = v157;
  v7 = (v136 + 63) >> 6;
  v156 = 0x600000000LL;
  if ( (unsigned int)v7 > 6 )
  {
    sub_2237220(&ptr, v157, (v136 + 63) >> 6, 8);
    v6 = 0;
    memset(ptr, 0, 8 * v7);
    LODWORD(v156) = (v136 + 63) >> 6;
  }
  else
  {
    if ( (_DWORD)v7 )
    {
      v3 = 0;
      v99 = 0;
      do
      {
        v100 = v99;
        v99 += 8;
        *(_QWORD *)&v157[v100] = 0;
      }
      while ( v99 < 8 * (int)v7 );
    }
    LODWORD(v156) = (v136 + 63) >> 6;
  }
  v138 = 0;
  v8 = 0;
  v139 = 0;
  v158 = v136;
  v132 = v136 - 1;
  v144 = 0;
  v142 = 0;
  v137 = 0;
  v143 = 0;
  v141 = 0;
  while ( 1 )
  {
    v130 = v8;
    v131 = 8 * v8;
    v9 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v8) & 0xFFFFFFFFFFFFFFF8LL);
    v10 = v9[28] & 0x7F;
    v11 = (unsigned int)v10 - 53;
    if ( (unsigned int)v11 <= 1 || ((v10 + 52) & 0x7Fu) <= 1 )
      v9 = (_BYTE *)sub_B72ED0((__int64)v9);
    v12 = (*(__int64 (__fastcall **)(_BYTE *, __int64, __int64, unsigned __int64))(*(_QWORD *)v9 + 32LL))(
            v9,
            v6,
            v11,
            v3);
    v17 = v12;
    if ( *(char *)(v12 + 28) < 0 )
      break;
    v18 = *(_BYTE *)(v12 + 28) & 0x7F;
    if ( v18 == 25 )
      break;
LABEL_17:
    v19 = v18 - 58;
    if ( *(_BYTE *)(v2 + 162) && v19 <= 4 )
    {
      v68 = *(_QWORD **)(v2 + 8);
      v69 = &v68[*(unsigned int *)(v2 + 16)];
      if ( v69 != v68 )
      {
        v135 = v17;
        v70 = *(_QWORD **)(v2 + 8);
        while ( 1 )
        {
          v71 = *v70 & 0xFFFFFFFFFFFFFFF8LL;
          v72 = *(_BYTE *)(v71 + 28) & 0x7F;
          if ( ((v72 + 52) & 0x7Fu) <= 1 || (v13 = (unsigned int)v72 - 53, (unsigned int)v13 <= 1) )
            v72 = *(_BYTE *)(sub_B72ED0(*v70 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7F;
          v73 = (v72 + 100) & 0x7F;
          if ( (unsigned __int8)v73 <= 0x2Bu )
          {
            v74 = 0x80000E7FFE1LL;
            if ( _bittest64(&v74, v73) )
            {
              if ( *(char *)(v71 + 28) >= 0 )
              {
                v75 = sub_1A37C50(v71);
                v76 = sub_1A37C50(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v8) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v76 )
                {
                  v77 = sub_B91570(v75, v131, v13, (__int64)v14, v15, v16);
                  if ( v77 == sub_B91570(v76, v131, v78, v79, v80, v81) )
                    goto LABEL_29;
                }
              }
            }
          }
          if ( v69 == ++v70 )
          {
            v17 = v135;
            v19 = (*(_BYTE *)(v135 + 28) & 0x7F) - 58;
            goto LABEL_19;
          }
        }
      }
    }
    else
    {
LABEL_19:
      if ( v19 > 9 )
        goto LABEL_65;
    }
    v20 = *(_QWORD *)(v17 + 48);
    if ( v20 )
    {
      v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
      v22 = v21;
    }
    else
    {
      v21 = sub_A7AA70(*(_QWORD *)(*(_QWORD *)(v2 + 112) + 248LL), v17, v13, (__int64)v14, v15, v16);
      v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v23 = *(_QWORD *)(v22 + 8);
    v150 = v8;
    v24 = v23 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v23 | (unsigned __int8)v21) & 7;
    v149 = v24;
    v25 = v163 & 1;
    if ( (v163 & 1) != 0 )
    {
      v26 = &v164;
      v27 = 32;
      v16 = 15;
      v28 = ((unsigned __int8)v24 ^ (unsigned __int8)(v24 >> 9)) & 0xF;
      v29 = (__int64 *)&(&v164)[2 * (((unsigned __int8)v24 ^ (unsigned __int8)(v24 >> 9)) & 0xF)];
      v15 = *v29;
      if ( *v29 == v24 )
        goto LABEL_24;
    }
    else
    {
      v45 = v165;
      if ( !v165 )
      {
        v151.m128_u64[0] = 0;
        v50 = ((unsigned int)v163 >> 1) + 1;
LABEL_57:
        v51 = (unsigned int)(3 * v45);
        goto LABEL_58;
      }
      v16 = v165 - 1;
      v26 = v164;
      v28 = v16 & (v24 ^ (v24 >> 9));
      v29 = &v164[2 * v28];
      v15 = *v29;
      if ( v24 == *v29 )
      {
LABEL_50:
        v27 = 2 * v45;
LABEL_24:
        sub_A86860(&v151, v29, &v26[v27], (__int64)&v163, 1);
        v30 = *(unsigned int *)(v151.m128_u64[0] + 8);
        goto LABEL_25;
      }
    }
    v122 = 1;
    v123 = nullptr;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( !v123 && v15 == -1 )
          v123 = v29;
        v28 = v16 & (v122 + v28);
        v29 = &v26[2 * v28];
        v15 = *v29;
        if ( *v29 == v24 )
          break;
        if ( !v15 )
        {
          if ( v123 )
            v29 = v123;
          goto LABEL_172;
        }
        ++v122;
      }
      if ( !v25 )
      {
        v26 = v164;
        v45 = v165;
        goto LABEL_50;
      }
      v27 = 32;
      v26 = &v164;
      goto LABEL_24;
    }
LABEL_172:
    v151.m128_u64[0] = (unsigned __int64)v29;
    v50 = ((unsigned int)v163 >> 1) + 1;
    if ( !v25 )
    {
      LODWORD(v45) = v165;
      goto LABEL_57;
    }
    v51 = 48;
    LODWORD(v45) = 16;
LABEL_58:
    v52 = 4 * v50;
    if ( (unsigned int)v52 >= (unsigned int)v51 )
    {
      sub_1A40540((__int64)&v163, 2 * v45, v51, v52, v15, v16);
LABEL_177:
      sub_1A3ABD0((__int64)&v163, &v149, &v151);
      v50 = ((unsigned int)v163 >> 1) + 1;
      goto LABEL_60;
    }
    v53 = (_DWORD)v45 - HIDWORD(v163) - v50;
    v54 = (unsigned int)v45 >> 3;
    if ( (unsigned int)v53 <= (unsigned int)v54 )
    {
      sub_1A40540((__int64)&v163, v45, v53, v54, v15, v16);
      goto LABEL_177;
    }
LABEL_60:
    v55 = v151.m128_u64[0];
    LODWORD(v163) = v163 & 1 | (2 * v50);
    if ( *(_QWORD *)v151.m128_u64[0] )
      --HIDWORD(v163);
    *(_QWORD *)v151.m128_u64[0] = v149;
    *(_DWORD *)(v55 + 8) = v150;
    if ( (v163 & 1) != 0 )
    {
      v56 = 32;
      v57 = &v164;
    }
    else
    {
      v57 = v164;
      v56 = 2LL * v165;
    }
    sub_A86860(&v151, (_QWORD *)v55, &v57[v56], (__int64)&v163, 1);
LABEL_65:
    v149 = v17;
    v150 = v8;
    if ( (unsigned __int8)sub_1A3AC90((__int64)&v159, (__int64 *)&v149, &v148) )
    {
      if ( (v159 & 1) != 0 )
      {
        v60 = 32;
        v61 = &v160;
      }
      else
      {
        v61 = v160;
        v60 = 2LL * v161;
      }
      sub_A8BC90(&v151, v148, &v61[v60], (__int64)&v159, 1);
      v30 = *(unsigned int *)(v151.m128_u64[0] + 8);
LABEL_25:
      v31 = *(_QWORD *)(v2 + 8);
      v32 = *(_DWORD *)(v2 + 152);
      v140 = 8 * v30;
      v33 = (_QWORD *)(v31 + 8 * v30);
      v34 = (_QWORD *)(v131 + v31);
      v35 = *v34 & 0xFFFFFFFFFFFFFFF8LL;
      v133 = *v33 & 0xFFFFFFFFFFFFFFF8LL;
      v36 = *(_QWORD *)(v2 + 112);
      v145 = v36;
      if ( v32 == 8 )
      {
        v36 = (*(_BYTE *)(v35 + 28) & 0x7Fu) - 53;
        if ( (unsigned int)v36 <= 1 )
        {
          v36 = (*(_BYTE *)(v133 + 28) & 0x7Fu) - 53;
          if ( (unsigned int)v36 > 1 )
            goto LABEL_121;
        }
      }
      v37 = sub_16C47B0(v35);
      v38 = sub_16C47B0(v133);
      v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL))(v37);
      if ( v39 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38) )
      {
        v43 = ((*(_BYTE *)(v38 + 28) & 0x7Fu) - 58 <= 4) ^ ((v32 & 0xFFFFFFFB) == 1);
        goto LABEL_28;
      }
      v89 = *(_BYTE *)(v37 + 28) & 0x7F;
      if ( (unsigned int)(v89 - 34) <= 5 )
      {
        v101 = sub_B770E0(v37, v36);
        v102 = sub_B770E0(v38, v36);
        v103 = v101 < v102;
        if ( v101 != v102 )
          goto LABEL_152;
        v89 = *(_BYTE *)(v37 + 28) & 0x7F;
      }
      if ( (unsigned int)(v89 - 68) > 6 )
      {
LABEL_115:
        v90 = (unsigned int)(v89 - 40);
        if ( (unsigned int)v90 <= 6 )
        {
          if ( !sub_F62670(*(_QWORD *)(*(_QWORD *)(v38 + 48) & 0xFFFFFFFFFFFFFFF0LL), nullptr, v90, v40, v41, v42)
            || sub_F62670(*(_QWORD *)(*(_QWORD *)(v37 + 48) & 0xFFFFFFFFFFFFFFF0LL), nullptr, v91, v92, v93, v94)
            || (*(_BYTE *)(v37 + 8) & 6) != 0 && !sub_1A42350(v145, v37, 0, v95, v96, v97) )
          {
            goto LABEL_29;
          }
LABEL_120:
          v98 = *(_QWORD *)(v2 + 8);
          v34 = (_QWORD *)(v98 + v131);
          v33 = (_QWORD *)(v140 + v98);
LABEL_121:
          *v33 = *v34;
          goto LABEL_29;
        }
        if ( (unsigned int)(v89 - 34) <= 5 )
        {
          v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 48LL))(v37);
          if ( !v129 )
            goto LABEL_29;
          while ( v38 != v129 )
          {
            v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v129 + 48LL))(v129);
            if ( !v129 )
              goto LABEL_29;
          }
          goto LABEL_120;
        }
        if ( (*(_BYTE *)(v133 + 8) & 6) == 0 )
          goto LABEL_29;
        v43 = sub_1A42350(v145, v133, 0, v40, v41, v42) ^ 1;
LABEL_28:
        if ( !v43 )
        {
LABEL_29:
          v6 = (__int64)ptr;
          v3 = v130;
          *((_QWORD *)ptr + (v130 >> 6)) |= 1LL << v130;
          goto LABEL_30;
        }
        goto LABEL_120;
      }
      v104 = sub_BBD6F0(*(_QWORD *)(v37 + 56));
      v105 = sub_BBD6F0(*(_QWORD *)(v38 + 56));
      v103 = v104 < v105;
      if ( v104 == v105 )
      {
        if ( v104 != (*(_DWORD *)(*(_QWORD *)(v37 + 56) + 20LL) & 0x1FFFFFFF) )
        {
          v146 = v8;
          v106 = v104;
          v107 = *(_DWORD *)(*(_QWORD *)(v37 + 56) + 20LL) & 0x1FFFFFFF;
          v147 = v2;
          while ( 1 )
          {
            v108 = 8LL * v106;
            if ( !sub_1A42CC0(v145, *(_QWORD *)(*(_QWORD *)(v38 + 56) + v108 + 24), 0, 0, v106, v42) )
            {
              if ( sub_1A42CC0(v145, *(_QWORD *)(*(_QWORD *)(v37 + 56) + v108 + 24), 0, 0, v41, v42) )
                break;
            }
            if ( v107 == ++v106 )
            {
              v8 = v146;
              v2 = v147;
              goto LABEL_114;
            }
          }
          v2 = v147;
          v8 = v146;
          v109 = *(_QWORD *)(v147 + 8);
          v34 = (_QWORD *)(v109 + v131);
          v33 = (_QWORD *)(v140 + v109);
          goto LABEL_121;
        }
LABEL_114:
        v89 = *(_BYTE *)(v37 + 28) & 0x7F;
        goto LABEL_115;
      }
LABEL_152:
      v43 = v103;
      goto LABEL_28;
    }
    v6 = (__int64)v148;
    v151.m128_u64[0] = (unsigned __int64)v148;
    v82 = ((unsigned int)v159 >> 1) + 1;
    if ( (v159 & 1) != 0 )
    {
      v84 = 48;
      v83 = 16;
    }
    else
    {
      v83 = v161;
      v84 = 3 * v161;
    }
    v85 = 4 * v82;
    if ( (unsigned int)v85 >= (unsigned int)v84 )
    {
      v128 = 2 * v83;
    }
    else
    {
      v85 = v83 - (v82 + HIDWORD(v159));
      v84 = v83 >> 3;
      if ( (unsigned int)v85 > (unsigned int)v84 )
        goto LABEL_105;
      v128 = v83;
    }
    sub_1A40D70((__int64)&v159, v128, v84, v85, v58, v59);
    sub_1A3AC90((__int64)&v159, (__int64 *)&v149, &v151);
    v6 = v151.m128_u64[0];
    v82 = ((unsigned int)v159 >> 1) + 1;
LABEL_105:
    LODWORD(v159) = v159 & 1 | (2 * v82);
    if ( *(_QWORD *)v6 != -4096 )
      --HIDWORD(v159);
    *(_QWORD *)v6 = v149;
    v148 = (_QWORD *)v6;
    *(_DWORD *)(v6 + 8) = v150;
    if ( (v159 & 1) != 0 )
    {
      v86 = 32;
      v87 = &v160;
    }
    else
    {
      v87 = v160;
      v86 = 2LL * v161;
    }
    sub_A8BC90(&v151, (_QWORD *)v6, &v87[v86], (__int64)&v159, 1);
    v88 = *(_BYTE *)(v17 + 28) & 0x7F;
    if ( v88 == 28 )
    {
      v138 = 1;
    }
    else
    {
      v3 = (unsigned int)v88 - 58;
      if ( (unsigned int)v3 > 4 )
      {
        if ( v88 == 71 )
        {
          v144 = 1;
          v142 = 1;
        }
        else if ( (unsigned int)v88 - 34 <= 5 )
        {
          v142 = 1;
        }
        else
        {
          v6 = v139;
          if ( v139 )
          {
            if ( (unsigned __int8)sub_1BD6B00(*(_QWORD *)(v2 + 112), v139, v17) )
            {
              v126 = (unsigned int)v153;
              v127 = (unsigned int)v153 + 1LL;
              if ( v127 > HIDWORD(v153) )
              {
                sub_2237220(&v152, v154, v127, 8);
                v126 = (unsigned int)v153;
              }
              *((_QWORD *)v152 + v126) = v17;
              LODWORD(v153) = v153 + 1;
              goto LABEL_29;
            }
            v6 = *(_QWORD *)(*(_QWORD *)(v2 + 112) + 232LL);
            v141 = sub_B72A20(v17, v6);
            if ( v141 )
            {
              v124 = sub_1A37C50(v17);
              v6 = v141;
              v139 = v17;
              v111 = v124 == sub_1A37C50(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v8) & 0xFFFFFFFFFFFFFFF8LL);
              v125 = v143;
              if ( v111 )
                v125 = v141;
              v143 = v125;
            }
            else
            {
              v139 = v17;
              v141 = 1;
            }
          }
          else
          {
            v139 = v17;
          }
        }
      }
      else if ( v137 )
      {
        v141 = v137;
      }
      else
      {
        v137 = 1;
      }
    }
LABEL_30:
    v44 = v8 + 1;
    if ( v132 == v8 )
      goto LABEL_71;
LABEL_31:
    v8 = v44;
  }
  v14 = ptr;
  v46 = (char *)ptr + 8 * (unsigned int)v156;
  v134 = ptr;
  if ( v46 != ptr )
  {
    v47 = (char *)ptr;
    v48 = 0;
    do
    {
      v49 = *(_QWORD *)v47;
      v47 += 8;
      v48 += __popcountdi2(v49, v6, v13, v14, v15, v16);
    }
    while ( v46 != v47 );
    if ( v136 - v48 <= 1 )
    {
      v18 = *(_BYTE *)(v17 + 28) & 0x7F;
      goto LABEL_17;
    }
  }
  v6 = (unsigned int)v8;
  v3 = (unsigned int)v8;
  v134[(unsigned int)v8 >> 6] |= 1LL << v8;
  v44 = v8 + 1;
  if ( v132 != v8 )
    goto LABEL_31;
LABEL_71:
  if ( (_DWORD)v153 && !v141 )
    sub_1BDD0B0(*(_QWORD *)(v2 + 112), *(unsigned int *)(v2 + 128), v139, v152);
  v62 = ptr;
  if ( v158 )
  {
    v63 = (v158 - 1) >> 6;
    v64 = v63 + 1;
    v65 = (unsigned __int64 *)((char *)ptr + 8 * v63);
    while ( 1 )
    {
      v66 = *v65;
      v67 = v64 - 1;
      if ( v63 == v64 - 1 )
        v66 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v158) & *v65;
      if ( v66 )
        break;
      --v65;
      --v64;
      if ( !v67 )
        goto LABEL_80;
    }
    _BitScanReverse64(&v66, v66);
    v110 = v64 << 6;
    LODWORD(v66) = v66 ^ 0xFFFFFFC0;
    v111 = v110 + (_DWORD)v66 == 0;
    v112 = (int)(v110 + v66) < 0;
    LODWORD(v66) = v110 + v66;
    LODWORD(v113) = v66;
    if ( !v112 )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL * (int)v66) = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v132);
      if ( v111 )
      {
        v62 = ptr;
        --v136;
      }
      else
      {
        LODWORD(v114) = v136 - 1;
        do
        {
          v62 = ptr;
          v115 = (unsigned int)(v113 - 1) >> 6;
          v116 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v113;
          v117 = v115 + 1;
          v118 = (unsigned __int64 *)((char *)ptr + 8 * v115);
          while ( 1 )
          {
            v119 = *v118;
            v120 = v117 - 1;
            if ( v115 == v117 - 1 )
              v119 = v116 & *v118;
            if ( v119 )
              break;
            --v118;
            --v117;
            if ( !v120 )
            {
              v136 = v114;
              goto LABEL_80;
            }
          }
          _BitScanReverse64(&v119, v119);
          v114 = (unsigned int)(v114 - 1);
          v113 = ((unsigned int)v119 ^ 0xFFFFFFC0) + (v117 << 6);
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v113) = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8 * v114);
        }
        while ( (_DWORD)v113 );
        v136 = v114;
        v62 = ptr;
      }
    }
  }
LABEL_80:
  *(_DWORD *)(v2 + 16) = v136;
  if ( v139 )
  {
    if ( v142 || v138 || *(_BYTE *)(v2 + 162) && v137 )
      goto LABEL_37;
LABEL_36:
    if ( v141 )
      goto LABEL_37;
    if ( v138 )
    {
      *(_DWORD *)v2 = 4;
    }
    else if ( v136 > 1 || v144 )
    {
      *(_DWORD *)v2 = 3;
    }
    else
    {
      *(_DWORD *)v2 = 2;
    }
  }
  else
  {
    if ( !*(_BYTE *)(v2 + 162) || !v137 || !v142 && !v138 )
      goto LABEL_36;
LABEL_37:
    if ( v143 )
      *(_QWORD *)v2 = 0x300000005LL;
    else
      *(_QWORD *)v2 = 0x200000005LL;
  }
  if ( v62 != v157 )
    free(v62);
  if ( v152 != v154 )
    free(v152);
  if ( (v163 & 1) == 0 )
    operator delete(v164, 16LL * v165, 8);
  if ( (v159 & 1) == 0 )
    operator delete(v160, 16LL * v161, 8);
}
