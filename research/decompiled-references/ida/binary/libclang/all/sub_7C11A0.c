unsigned __int64 __fastcall sub_7C11A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // dl
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  unsigned int v11; // edi
  int v12; // r8d
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned int i; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rax
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // rax
  bool v33; // r12
  unsigned int v34; // ecx
  unsigned __int64 v35; // r13
  unsigned int v36; // r10d
  _QWORD *v37; // r14
  int v38; // r9d
  int v39; // eax
  unsigned __int64 v40; // r11
  unsigned __int64 *v41; // r8
  int v42; // edi
  int v43; // r15d
  unsigned int v44; // eax
  unsigned int v45; // eax
  _QWORD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 *v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // r12
  __int64 v56; // rdi
  int v57; // esi
  const __m128i *v58; // r12
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned __int64 v62; // rsi
  __m128i *v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rsi
  unsigned int v69; // ecx
  int v70; // edx
  _QWORD *v71; // r11
  _QWORD *v72; // rdi
  __int64 v73; // r15
  int v74; // r8d
  int v75; // r11d
  int v76; // r8d
  int v77; // esi
  __int64 v78; // rbx
  unsigned int m; // eax
  unsigned int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // r10d
  int v84; // edx
  unsigned __int64 *v85; // r11
  unsigned __int64 v86; // rcx
  unsigned int n; // ecx
  unsigned int v88; // ecx
  unsigned __int64 v89; // rdi
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  int v93; // ecx
  __int64 v94; // r8
  _QWORD *v95; // rdx
  __int64 v96; // r10
  _QWORD *v97; // rdi
  _QWORD *v98; // r14
  __int64 v99; // r12
  int v100; // r8d
  int v101; // r11d
  int v102; // r8d
  int v103; // esi
  __int64 v104; // rbx
  unsigned int j; // eax
  unsigned int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  int v109; // ecx
  int v110; // r10d
  unsigned __int64 *v111; // r11
  unsigned int k; // edx
  unsigned int v113; // edx
  unsigned __int64 v114; // rdi
  char *v115; // r12
  _QWORD *v116; // r8
  _QWORD *v117; // r8
  __int64 v118; // rcx
  unsigned __int64 v119; // rdx
  int v120; // esi
  int v121; // eax
  __int64 v122; // rax
  unsigned __int64 v123; // rdi
  const __m128i *v124; // r13
  __int64 v125; // rsi
  unsigned __int64 v126; // rdx
  __m128i *v127; // rax
  char *v128; // r13
  __int64 v130; // [rsp+0h] [rbp-B8h]
  __int64 v131; // [rsp+0h] [rbp-B8h]
  __int64 v132; // [rsp+0h] [rbp-B8h]
  __int64 v133; // [rsp+0h] [rbp-B8h]
  __int64 v134; // [rsp+0h] [rbp-B8h]
  __int64 v135; // [rsp+0h] [rbp-B8h]
  __int64 v136; // [rsp+0h] [rbp-B8h]
  __int64 v137; // [rsp+0h] [rbp-B8h]
  __int64 v138; // [rsp+0h] [rbp-B8h]
  __int64 v139; // [rsp+0h] [rbp-B8h]
  __int64 v140; // [rsp+8h] [rbp-B0h]
  int v141; // [rsp+8h] [rbp-B0h]
  int v142; // [rsp+8h] [rbp-B0h]
  _QWORD *v143; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v144; // [rsp+18h] [rbp-A0h]
  unsigned __int64 *v145; // [rsp+18h] [rbp-A0h]
  unsigned int v146; // [rsp+20h] [rbp-98h]
  unsigned __int64 v147; // [rsp+20h] [rbp-98h]
  unsigned int v148; // [rsp+20h] [rbp-98h]
  unsigned int v149; // [rsp+20h] [rbp-98h]
  _BOOL4 v150; // [rsp+20h] [rbp-98h]
  unsigned int v151; // [rsp+28h] [rbp-90h]
  unsigned int v152; // [rsp+30h] [rbp-88h]
  __int64 v153; // [rsp+40h] [rbp-78h] BYREF
  _BOOL4 v154; // [rsp+48h] [rbp-70h]
  int v155; // [rsp+50h] [rbp-68h]
  unsigned __int64 v156; // [rsp+60h] [rbp-58h] BYREF
  int v157; // [rsp+68h] [rbp-50h]
  __int64 v158; // [rsp+70h] [rbp-48h]

  v2 = a1;
  v3 = sub_79C190(a1 + 48);
  v4 = a2;
  v5 = v3;
  if ( !v3 )
    goto LABEL_19;
  while ( (*(_BYTE *)(v5 + 28) & 0x7F) != 0x49 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    v5 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v6 <= 7 )
      goto LABEL_19;
  }
LABEL_5:
  v7 = *(_QWORD *)(v5 + 40);
  v8 = (*(_BYTE *)(v5 + 73) & 0x40) != 0;
  if ( (v7 & 7) != 0 )
  {
    v10 = 0;
    LODWORD(v9) = 0;
  }
  else
  {
    v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v9;
  }
  v11 = *(_DWORD *)(a2 + 16);
  v12 = v8;
  v153 = v10;
  v154 = v8;
  v155 = 0;
  if ( !v11 )
  {
    v156 = 0;
    v120 = 0;
    goto LABEL_217;
  }
  v13 = *(_QWORD *)a2;
  v14 = 1;
  v15 = 0;
  v16 = 0xBF58476D1CE4E5B9LL
      * ((v8 ? 0x25 : 0) | ((unsigned __int64)(((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4)) << 32));
  for ( i = (v11 - 1) & ((v16 >> 31) ^ v16); ; i = (v11 - 1) & v18 )
  {
    v19 = v13 + 24LL * i;
    v20 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 == v10 && v12 == *(_DWORD *)(v19 + 8) )
    {
      v21 = *(unsigned int *)(v19 + 16);
      goto LABEL_15;
    }
    if ( v20 == -4096 )
      break;
    if ( v20 == -8192 && *(_DWORD *)(v19 + 8) == -2 && !v15 )
      v15 = v13 + 24LL * i;
LABEL_11:
    v18 = v14 + i;
    ++v14;
  }
  if ( *(_DWORD *)(v19 + 8) != -1 )
    goto LABEL_11;
  v120 = 2 * v11;
  if ( !v15 )
    v15 = v13 + 24LL * i;
  v121 = *(_DWORD *)(a2 + 8) + 1;
  v156 = v15;
  if ( 4 * v121 >= 3 * v11 )
  {
LABEL_217:
    v141 = v12;
    sub_7C0AC0((__int64 *)a2, v120);
    sub_7C0160((__int64 *)a2, &v153, &v156);
    v15 = v156;
    v12 = v141;
    ++*(_DWORD *)(a2 + 8);
    if ( *(_QWORD *)v15 != -4096 )
      goto LABEL_208;
    goto LABEL_218;
  }
  if ( v11 >> 3 >= v11 - *(_DWORD *)(a2 + 12) - v121 )
  {
    v142 = v12;
    sub_7C0AC0((__int64 *)a2, v11);
    sub_7C0160((__int64 *)a2, &v153, &v156);
    v15 = v156;
    v12 = v142;
    v121 = *(_DWORD *)(a2 + 8) + 1;
  }
  *(_DWORD *)(a2 + 8) = v121;
  if ( *(_QWORD *)v15 != -4096 )
  {
LABEL_208:
    --*(_DWORD *)(a2 + 12);
    goto LABEL_209;
  }
LABEL_218:
  if ( *(_DWORD *)(v15 + 8) != -1 )
    goto LABEL_208;
LABEL_209:
  *(_QWORD *)v15 = v10;
  *(_DWORD *)(v15 + 8) = v12;
  *(_DWORD *)(v15 + 16) = 0;
  v122 = *(unsigned int *)(a2 + 32);
  v123 = *(unsigned int *)(a2 + 36);
  v156 = v10;
  v124 = (const __m128i *)&v156;
  v125 = v122 + 1;
  v157 = v12;
  v126 = *(_QWORD *)(a2 + 24);
  v158 = 0;
  if ( v123 < v122 + 1 )
  {
    if ( (unsigned __int64)&v156 < v126 || (unsigned __int64)&v156 >= v126 + 24 * v122 )
    {
      sub_25D6060(a2 + 24, a2 + 40, v125, 24);
      v126 = *(_QWORD *)(a2 + 24);
      v122 = *(unsigned int *)(a2 + 32);
    }
    else
    {
      v128 = (char *)&v156 - v126;
      sub_25D6060(a2 + 24, a2 + 40, v125, 24);
      v126 = *(_QWORD *)(a2 + 24);
      v122 = *(unsigned int *)(a2 + 32);
      v124 = (const __m128i *)&v128[v126];
    }
  }
  v127 = (__m128i *)(v126 + 24 * v122);
  *v127 = _mm_loadu_si128(v124);
  v127[1].m128i_i64[0] = v124[1].m128i_i64[0];
  v21 = *(unsigned int *)(a2 + 32);
  *(_DWORD *)(a2 + 32) = v21 + 1;
  *(_DWORD *)(v15 + 16) = v21;
LABEL_15:
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24 * v21 + 16) = v5;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v5 + 8);
    v5 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v22 <= 7 )
      break;
    if ( (*(_BYTE *)(v5 + 28) & 0x7F) == 0x49 )
      goto LABEL_5;
  }
  v4 = a2;
LABEL_19:
  result = *(_QWORD *)(v2 + 120);
  if ( !result )
  {
    v133 = v4;
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v2 + 96) + 88LL), *(_QWORD *)(v2 + 96));
    result = *(_QWORD *)(v2 + 120);
    v4 = v133;
    if ( result > 7 )
      goto LABEL_21;
    if ( result )
      return result;
LABEL_222:
    v134 = v4;
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v2 + 96) + 88LL), *(_QWORD *)(v2 + 96));
    result = *(_QWORD *)(v2 + 120);
    v4 = v134;
    if ( result <= 7 )
    {
LABEL_223:
      if ( result )
        return result;
      v135 = v4;
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v2 + 96) + 88LL), *(_QWORD *)(v2 + 96));
      result = *(_QWORD *)(v2 + 120);
      if ( result <= 7 )
        return result;
      v4 = v135;
      v54 = 0;
LABEL_198:
      v119 = result & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)((result & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
      {
        if ( *(_DWORD *)(v119 + 48) )
        {
LABEL_200:
          v53 = *(__int64 **)(v119 + 40);
          goto LABEL_58;
        }
LABEL_236:
        result &= 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(result + 72) & 1) != 0 )
        {
          v139 = v4;
          sub_7B7DB0(v2);
          v4 = v139;
          result = *(_QWORD *)(v2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
        }
        v53 = *(__int64 **)(result + 16);
        goto LABEL_58;
      }
      goto LABEL_232;
    }
LABEL_54:
    v51 = result & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)((result & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      v132 = v4;
      sub_7B7DB0(v2);
      result = *(_QWORD *)(v2 + 120);
      v4 = v132;
      v51 = result & 0xFFFFFFFFFFFFFFF8LL;
      v118 = *(unsigned int *)((result & 0xFFFFFFFFFFFFFFF8LL) + 48);
      if ( (_DWORD)v118 )
      {
        v53 = *(__int64 **)(v51 + 40);
        v54 = (__int64)&v53[v118];
        if ( result )
        {
          if ( result > 7 )
          {
LABEL_57:
            if ( (*(_BYTE *)(v51 + 72) & 1) == 0 )
              goto LABEL_58;
LABEL_232:
            v137 = v4;
            sub_7B7DB0(v2);
            result = *(_QWORD *)(v2 + 120);
            v4 = v137;
            v119 = result & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_DWORD *)((result & 0xFFFFFFFFFFFFFFF8LL) + 48) )
              goto LABEL_200;
            if ( !result )
            {
              sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v2 + 96) + 88LL), *(_QWORD *)(v2 + 96));
              result = *(_QWORD *)(v2 + 120);
              v4 = v137;
            }
            v53 = nullptr;
            if ( result > 7 )
              goto LABEL_236;
LABEL_58:
            if ( (__int64 *)v54 == v53 )
              return result;
            goto LABEL_59;
          }
          v53 = nullptr;
        }
        else
        {
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v2 + 96) + 88LL), *(_QWORD *)(v2 + 96));
          result = *(_QWORD *)(v2 + 120);
          v4 = v132;
          if ( result > 7 )
            goto LABEL_198;
          v53 = nullptr;
        }
LABEL_59:
        v55 = v4;
        do
        {
          v56 = *v53++;
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 104LL))(v56, v55);
        }
        while ( (__int64 *)v54 != v53 );
        return result;
      }
      if ( result )
      {
        if ( result <= 7 )
          return result;
      }
      else
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v2 + 96) + 88LL), *(_QWORD *)(v2 + 96));
        result = *(_QWORD *)(v2 + 120);
        v4 = v132;
        v51 = result & 0xFFFFFFFFFFFFFFF8LL;
        if ( result <= 7 )
          goto LABEL_223;
      }
    }
    else
    {
      v52 = *(unsigned int *)(v51 + 48);
      if ( (_DWORD)v52 )
      {
        v53 = *(__int64 **)(v51 + 40);
        v54 = (__int64)&v53[v52];
        goto LABEL_57;
      }
    }
    if ( (*(_BYTE *)(v51 + 72) & 1) != 0 )
    {
      v138 = v4;
      sub_7B7DB0(v2);
      result = *(_QWORD *)(v2 + 120);
      v4 = v138;
      v54 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF8LL) + 16)
          + 8LL * *(unsigned int *)((result & 0xFFFFFFFFFFFFFFF8LL) + 24);
      if ( !result )
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(v2 + 96) + 88LL), *(_QWORD *)(v2 + 96));
        result = *(_QWORD *)(v2 + 120);
        v4 = v138;
      }
      v53 = nullptr;
      if ( result <= 7 )
        goto LABEL_58;
    }
    else
    {
      v54 = *(_QWORD *)(v51 + 16) + 8LL * *(unsigned int *)(v51 + 24);
    }
    goto LABEL_198;
  }
  if ( result <= 7 )
    return result;
LABEL_21:
  if ( (*(_BYTE *)((result & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
  {
    v136 = v4;
    sub_7B7DB0(v2);
    result = *(_QWORD *)(v2 + 120);
    v4 = v136;
    v24 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF8LL) + 56);
    if ( !v24 )
      goto LABEL_52;
  }
  else
  {
    v24 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFF8LL) + 56);
    if ( !v24 )
      goto LABEL_53;
  }
  while ( 1 )
  {
    if ( *(char *)(v24 + 28) >= 0 )
    {
      v25 = *(_QWORD *)(v24 + 40);
      if ( (v25 & 7) != 0 || v25 <= 7 )
        break;
    }
    v24 = *(_QWORD *)(v24 + 128);
    if ( !v24 )
      goto LABEL_52;
  }
  v26 = v24;
LABEL_27:
  v130 = v4;
  v27 = sub_79C190(v26 + 48);
  v4 = v130;
  v28 = v27;
  if ( !v27 )
    goto LABEL_46;
  while ( (*(_BYTE *)(v28 + 28) & 0x7F) != 0x49 )
  {
    v29 = *(_QWORD *)(v28 + 8);
    v28 = v29 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v29 <= 7 )
      goto LABEL_46;
  }
  v140 = v2;
  v30 = v28;
  v131 = v26;
  v31 = v4;
LABEL_32:
  v32 = *(_QWORD *)(v30 + 40);
  v33 = (*(_BYTE *)(v30 + 73) & 0x40) != 0;
  if ( (v32 & 7) != 0 )
  {
    v35 = 0;
    v34 = 0;
  }
  else
  {
    v34 = v32 & 0xFFFFFFF8;
    v35 = v32 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v36 = *(_DWORD *)(v31 + 16);
  v37 = *(_QWORD **)v31;
  v38 = v33;
  v39 = 0;
  if ( v36 )
  {
    v40 = v36 - 1;
    v41 = nullptr;
    v42 = 1;
    v43 = ((0xBF58476D1CE4E5B9LL
          * (((*(_BYTE *)(v30 + 73) & 0x40) != 0 ? 0x25 : 0) | ((unsigned __int64)((v34 >> 9) ^ (v34 >> 4)) << 32))) >> 31)
        ^ (484763065 * ((*(_BYTE *)(v30 + 73) & 0x40) != 0 ? 0x25 : 0));
    v44 = v43 & (v36 - 1);
    while ( 2 )
    {
      v46 = &v37[3 * v44];
      v47 = *v46;
      if ( *v46 == v35 && v33 == *((_DWORD *)v46 + 2) )
      {
        v48 = *((unsigned int *)v46 + 4);
        goto LABEL_42;
      }
      if ( v47 != -4096 )
      {
        if ( v47 == -8192 && *((_DWORD *)v46 + 2) == -2 && !v41 )
          v41 = &v37[3 * v44];
        goto LABEL_38;
      }
      if ( *((_DWORD *)v46 + 2) != -1 )
      {
LABEL_38:
        v45 = v42 + v44;
        ++v42;
        v44 = v40 & v45;
        continue;
      }
      break;
    }
    if ( !v41 )
      v41 = &v37[3 * v44];
    v57 = *(_DWORD *)(v31 + 8) + 1;
    v39 = 2 * v36;
    if ( 4 * v57 < 3 * v36 )
    {
      if ( v36 >> 3 < v36 - *(_DWORD *)(v31 + 12) - v57 )
        goto LABEL_69;
      v149 = *(_DWORD *)(v31 + 16);
      v90 = (((((((((v40 | (v40 >> 1)) >> 2) | v40 | (v40 >> 1)) >> 4) | ((v40 | (v40 >> 1)) >> 2) | v40 | (v40 >> 1)) >> 8)
             | ((((v40 | (v40 >> 1)) >> 2) | v40 | (v40 >> 1)) >> 4)
             | ((v40 | (v40 >> 1)) >> 2)
             | v40
             | (v40 >> 1)) >> 16)
           | ((((((v40 | (v40 >> 1)) >> 2) | v40 | (v40 >> 1)) >> 4) | ((v40 | (v40 >> 1)) >> 2) | v40 | (v40 >> 1)) >> 8)
           | ((((v40 | (v40 >> 1)) >> 2) | v40 | (v40 >> 1)) >> 4)
           | ((v40 | (v40 >> 1)) >> 2)
           | v40
           | (v40 >> 1))
          + 1;
      if ( (unsigned int)v90 < 0x40 )
        LODWORD(v90) = 64;
      *(_DWORD *)(v31 + 16) = v90;
      v91 = (_QWORD *)sub_25CC9C0(24LL * (unsigned int)v90, 8);
      v92 = *(unsigned int *)(v31 + 16);
      v38 = v33;
      *(_QWORD *)v31 = v91;
      v93 = v92;
      v94 = 24 * v92;
      v95 = &v91[3 * v92];
      if ( v37 )
      {
        *(_QWORD *)(v31 + 8) = 0;
        v96 = 3LL * v149;
        if ( v94 )
        {
          if ( (((_BYTE)v95 - (_BYTE)v91) & 8) == 0 || (*v91 = -4096, v91 += 3, *(v91 - 2) = 0xFFFFFFFFLL, v91 != v95) )
          {
            do
            {
              *v91 = -4096;
              v91 += 6;
              *(v91 - 5) = 0xFFFFFFFFLL;
              *(v91 - 3) = -4096;
              *(v91 - 2) = 0xFFFFFFFFLL;
            }
            while ( v91 != v95 );
          }
        }
        v144 = v30;
        v97 = v37;
        v150 = v33;
        v98 = &v37[v96];
        while ( 1 )
        {
          v99 = *v97;
          if ( *v97 == -4096 )
          {
            if ( *((_DWORD *)v97 + 2) == -1 )
              goto LABEL_144;
          }
          else if ( v99 == -8192 && *((_DWORD *)v97 + 2) == -2 )
          {
            goto LABEL_144;
          }
          v100 = *(_DWORD *)(v31 + 16);
          if ( !v100 )
          {
            *(_QWORD *)&dword_0 = *v97;
            BUG();
          }
          v101 = *((_DWORD *)v97 + 2);
          v102 = v100 - 1;
          v103 = 1;
          v104 = 0;
          for ( j = v102
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)(37 * v101)
                      | ((unsigned __int64)(((unsigned int)v99 >> 9) ^ ((unsigned int)v99 >> 4)) << 32))) >> 31)
                   ^ (756364221 * v101)); ; j = v102 & v106 )
          {
            v107 = *(_QWORD *)v31 + 24LL * j;
            v108 = *(_QWORD *)v107;
            if ( v99 == *(_QWORD *)v107 && v101 == *(_DWORD *)(v107 + 8) )
              goto LABEL_143;
            if ( v108 == -4096 )
              break;
            if ( v108 == -8192 && *(_DWORD *)(v107 + 8) == -2 && !v104 )
              v104 = *(_QWORD *)v31 + 24LL * j;
LABEL_140:
            v106 = v103 + j;
            ++v103;
          }
          if ( *(_DWORD *)(v107 + 8) != -1 )
            goto LABEL_140;
          if ( v104 )
            v107 = v104;
LABEL_143:
          *(_QWORD *)v107 = v99;
          *(_DWORD *)(v107 + 8) = *((_DWORD *)v97 + 2);
          *(_DWORD *)(v107 + 16) = *((_DWORD *)v97 + 4);
          ++*(_DWORD *)(v31 + 8);
LABEL_144:
          v97 += 3;
          if ( v98 == v97 )
          {
            v30 = v144;
            operator delete();
            v91 = *(_QWORD **)v31;
            v93 = *(_DWORD *)(v31 + 16);
            v38 = v150;
            v57 = *(_DWORD *)(v31 + 8) + 1;
            goto LABEL_146;
          }
        }
      }
      *(_QWORD *)(v31 + 8) = 0;
      v117 = v91;
      if ( v91 != v95 )
      {
        if ( (((_BYTE)v95 - (_BYTE)v91) & 8) == 0
          || (v117 = v91 + 3, *v91 = -4096, v91[1] = 0xFFFFFFFFLL, v91 + 3 != v95) )
        {
          do
          {
            *v117 = -4096;
            v117 += 6;
            *(v117 - 5) = 0xFFFFFFFFLL;
            *(v117 - 3) = -4096;
            *(v117 - 2) = 0xFFFFFFFFLL;
          }
          while ( v117 != v95 );
        }
      }
      v57 = 1;
LABEL_146:
      if ( v93 )
      {
        v109 = v93 - 1;
        v110 = 1;
        v111 = nullptr;
        for ( k = v109 & v43; ; k = v109 & v113 )
        {
          v41 = &v91[3 * k];
          v114 = *v41;
          if ( *v41 == v35 )
          {
            if ( v38 == *((_DWORD *)v41 + 2) )
              goto LABEL_69;
            if ( v114 != -4096 )
            {
LABEL_149:
              if ( v114 == -8192 && *((_DWORD *)v41 + 2) == -2 && !v111 )
                v111 = &v91[3 * k];
              goto LABEL_150;
            }
          }
          else if ( v114 != -4096 )
          {
            goto LABEL_149;
          }
          if ( *((_DWORD *)v41 + 2) == -1 )
          {
            if ( v111 )
              v41 = v111;
            goto LABEL_69;
          }
LABEL_150:
          v113 = v110 + k;
          ++v110;
        }
      }
LABEL_252:
      *(_DWORD *)(v31 + 8) = v57;
      BUG();
    }
  }
  v151 = *(_DWORD *)(v31 + 16);
  v146 = v34;
  v64 = (unsigned int)(v39 - 1) | ((unsigned __int64)(unsigned int)(v39 - 1) >> 1);
  v65 = (((v64 >> 2) | v64) >> 4) | (v64 >> 2) | v64;
  v66 = ((((v65 >> 8) | v65) >> 16) | (v65 >> 8) | v65) + 1;
  if ( (unsigned int)v66 < 0x40 )
    LODWORD(v66) = 64;
  *(_DWORD *)(v31 + 16) = v66;
  v67 = (_QWORD *)sub_25CC9C0(24LL * (unsigned int)v66, 8);
  v68 = *(unsigned int *)(v31 + 16);
  v38 = v33;
  v69 = v146;
  *(_QWORD *)v31 = v67;
  v70 = v68;
  v71 = &v67[3 * v68];
  if ( v37 )
  {
    *(_QWORD *)(v31 + 8) = 0;
    v143 = &v37[3 * v151];
    if ( 24 * v68 )
    {
      if ( ((24 * (_BYTE)v68) & 8) == 0 || (*v67 = -4096, v67 += 3, *(v67 - 2) = 0xFFFFFFFFLL, v67 != v71) )
      {
        do
        {
          *v67 = -4096;
          v67 += 6;
          *(v67 - 5) = 0xFFFFFFFFLL;
          *(v67 - 3) = -4096;
          *(v67 - 2) = 0xFFFFFFFFLL;
        }
        while ( v67 != v71 );
      }
    }
    v72 = v37;
    if ( v37 != v143 )
    {
      v147 = v30;
      v152 = v69;
      while ( 1 )
      {
        v73 = *v72;
        if ( *v72 == -4096 )
        {
          if ( *((_DWORD *)v72 + 2) != -1 )
            goto LABEL_91;
        }
        else if ( v73 != -8192 || *((_DWORD *)v72 + 2) != -2 )
        {
LABEL_91:
          v74 = *(_DWORD *)(v31 + 16);
          if ( !v74 )
          {
            *(_QWORD *)&dword_0 = *v72;
            BUG();
          }
          v75 = *((_DWORD *)v72 + 2);
          v76 = v74 - 1;
          v77 = 1;
          v78 = 0;
          for ( m = v76
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)(37 * v75)
                      | ((unsigned __int64)(((unsigned int)v73 >> 9) ^ ((unsigned int)v73 >> 4)) << 32))) >> 31)
                   ^ (756364221 * v75)); ; m = v76 & v80 )
          {
            v81 = *(_QWORD *)v31 + 24LL * m;
            v82 = *(_QWORD *)v81;
            if ( v73 == *(_QWORD *)v81 && v75 == *(_DWORD *)(v81 + 8) )
              break;
            if ( v82 == -4096 )
            {
              if ( *(_DWORD *)(v81 + 8) == -1 )
              {
                if ( v78 )
                  v81 = v78;
                break;
              }
            }
            else if ( v82 == -8192 && *(_DWORD *)(v81 + 8) == -2 && !v78 )
            {
              v78 = *(_QWORD *)v31 + 24LL * m;
            }
            v80 = v77 + m;
            ++v77;
          }
          *(_QWORD *)v81 = v73;
          *(_DWORD *)(v81 + 8) = *((_DWORD *)v72 + 2);
          *(_DWORD *)(v81 + 16) = *((_DWORD *)v72 + 4);
          ++*(_DWORD *)(v31 + 8);
        }
        v72 += 3;
        if ( v143 == v72 )
        {
          v30 = v147;
          v69 = v152;
          break;
        }
      }
    }
    v148 = v69;
    operator delete();
    v67 = *(_QWORD **)v31;
    v70 = *(_DWORD *)(v31 + 16);
    v38 = v33;
    v57 = *(_DWORD *)(v31 + 8) + 1;
    v69 = v148;
  }
  else
  {
    *(_QWORD *)(v31 + 8) = 0;
    v116 = v67;
    if ( v67 != v71 )
    {
      if ( ((24 * (_BYTE)v68) & 8) == 0 || (v116 = v67 + 3, *v67 = -4096, v67[1] = 0xFFFFFFFFLL, v67 + 3 != v71) )
      {
        do
        {
          *v116 = -4096;
          v116 += 6;
          *(v116 - 5) = 0xFFFFFFFFLL;
          *(v116 - 3) = -4096;
          *(v116 - 2) = 0xFFFFFFFFLL;
        }
        while ( v116 != v71 );
      }
    }
    v57 = 1;
  }
  if ( !v70 )
    goto LABEL_252;
  v83 = 1;
  v84 = v70 - 1;
  v85 = nullptr;
  v86 = 0xBF58476D1CE4E5B9LL * ((v33 ? 0x25 : 0) | ((unsigned __int64)((v69 >> 4) ^ (v69 >> 9)) << 32));
  for ( n = v84 & ((v86 >> 31) ^ v86); ; n = v84 & v88 )
  {
    v41 = &v67[3 * n];
    v89 = *v41;
    if ( *v41 == v35 )
      break;
    if ( v89 == -4096 )
      goto LABEL_110;
LABEL_105:
    if ( v89 == -8192 && *((_DWORD *)v41 + 2) == -2 && !v85 )
      v85 = &v67[3 * n];
LABEL_106:
    v88 = v83 + n;
    ++v83;
  }
  if ( v38 == *((_DWORD *)v41 + 2) )
    goto LABEL_69;
  if ( v89 != -4096 )
    goto LABEL_105;
LABEL_110:
  if ( *((_DWORD *)v41 + 2) != -1 )
    goto LABEL_106;
  if ( v85 )
    v41 = v85;
LABEL_69:
  *(_DWORD *)(v31 + 8) = v57;
  if ( *v41 != -4096 || *((_DWORD *)v41 + 2) != -1 )
    --*(_DWORD *)(v31 + 12);
  *v41 = v35;
  v58 = (const __m128i *)&v156;
  *((_DWORD *)v41 + 2) = v38;
  *((_DWORD *)v41 + 4) = 0;
  v59 = *(unsigned int *)(v31 + 32);
  v60 = *(unsigned int *)(v31 + 36);
  v156 = v35;
  v61 = v59 + 1;
  v157 = v38;
  v62 = *(_QWORD *)(v31 + 24);
  v158 = 0;
  if ( v60 < v59 + 1 )
  {
    if ( (unsigned __int64)&v156 < v62 )
    {
      v145 = v41;
    }
    else
    {
      v145 = v41;
      if ( (unsigned __int64)&v156 < v62 + 24 * v59 )
      {
        v115 = (char *)&v156 - v62;
        sub_25D6060(v31 + 24, v31 + 40, v61, 24);
        v62 = *(_QWORD *)(v31 + 24);
        v59 = *(unsigned int *)(v31 + 32);
        v41 = v145;
        v58 = (const __m128i *)&v115[v62];
        goto LABEL_72;
      }
    }
    sub_25D6060(v31 + 24, v31 + 40, v61, 24);
    v62 = *(_QWORD *)(v31 + 24);
    v59 = *(unsigned int *)(v31 + 32);
    v41 = v145;
  }
LABEL_72:
  v63 = (__m128i *)(v62 + 24 * v59);
  *v63 = _mm_loadu_si128(v58);
  v63[1].m128i_i64[0] = v58[1].m128i_i64[0];
  v48 = *(unsigned int *)(v31 + 32);
  *(_DWORD *)(v31 + 32) = v48 + 1;
  *((_DWORD *)v41 + 4) = v48;
LABEL_42:
  *(_QWORD *)(*(_QWORD *)(v31 + 24) + 24 * v48 + 16) = v30;
  while ( 1 )
  {
    v49 = *(_QWORD *)(v30 + 8);
    v30 = v49 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v49 <= 7 )
      break;
    if ( (*(_BYTE *)(v30 + 28) & 0x7F) == 0x49 )
      goto LABEL_32;
  }
  v4 = v31;
  v2 = v140;
  v26 = v131;
LABEL_46:
  while ( 1 )
  {
    v26 = *(_QWORD *)(v26 + 128);
    if ( !v26 )
      break;
    while ( *(char *)(v26 + 28) >= 0 )
    {
      v50 = *(_QWORD *)(v26 + 40);
      if ( (v50 & 7) != 0 || v50 <= 7 )
        goto LABEL_27;
      v26 = *(_QWORD *)(v26 + 128);
      if ( !v26 )
        goto LABEL_51;
    }
  }
LABEL_51:
  result = *(_QWORD *)(v2 + 120);
LABEL_52:
  if ( !result )
    goto LABEL_222;
LABEL_53:
  if ( result > 7 )
    goto LABEL_54;
  return result;
}

