__int64 __fastcall sub_867640(__int64 a1, __int64 a2)
{
  unsigned int *v4; // rbx
  char *v5; // rdi
  int v6; // r12d
  unsigned __int8 *v7; // rdx
  char v8; // r15
  char v9; // cl
  unsigned __int8 v10; // dl
  int v11; // esi
  __int64 result; // rax
  __int64 *i; // rcx
  __int64 v14; // rdx
  int *m; // r10
  _BOOL4 v16; // edx
  bool v17; // al
  int v18; // r8d
  unsigned __int8 *v19; // r14
  bool v20; // al
  int v21; // r15d
  unsigned int v22; // r12d
  unsigned int v23; // eax
  _QWORD *v24; // rax
  unsigned int *v25; // rdi
  _QWORD *v26; // rax
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r12
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 *n; // rcx
  __int64 v33; // rdx
  int *v34; // r10
  __int64 v35; // r11
  int *v36; // r10
  __int64 v37; // r11
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __m128 *v41; // rax
  __m128 *v42; // rax
  char v43; // cl
  unsigned int *v44; // rdi
  __int64 v45; // r14
  _QWORD *v46; // rax
  __int64 *k; // rcx
  __int64 v48; // rdx
  unsigned int *v49; // r14
  unsigned int *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // r14
  unsigned int *v53; // r14
  unsigned int *v54; // rdi
  int v55; // esi
  _QWORD *v56; // rax
  int v57; // eax
  int v58; // eax
  unsigned __int8 *v59; // r12
  __int64 v60; // r9
  int v61; // r8d
  _BOOL4 v62; // r14d
  __int64 v63; // r12
  _QWORD *v64; // rax
  unsigned __int8 *v65; // rdx
  int v66; // esi
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // edi
  unsigned __int8 v70; // al
  __int64 *j; // rcx
  __int64 v72; // rdx
  unsigned int *v73; // r14
  unsigned int *v74; // rdi
  __int64 v75; // rbp
  _QWORD *v76; // rax
  unsigned int *v77; // r14
  unsigned int *v78; // rdi
  char *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rdx
  unsigned int *v82; // r14
  unsigned int *v83; // rdi
  unsigned int *v84; // r14
  unsigned int *v85; // rdi
  unsigned __int8 v86; // al
  __int64 v87; // rsi
  unsigned int *v88; // r14
  unsigned int *v89; // rdi
  __int64 v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rcx
  __m128 *v94; // rax
  __m128 *v95; // rax
  _QWORD *v96; // r14
  _QWORD *v97; // rax
  unsigned int *v98; // r14
  unsigned int *v99; // rdi
  unsigned int *v100; // r14
  unsigned int *v101; // rdi
  unsigned int *v102; // r14
  unsigned int *v103; // rdi
  __int64 v104; // rcx
  __int64 v105; // r14
  _QWORD *v106; // rax
  int v107; // r14d
  int v108; // edx
  unsigned __int8 *v109; // rax
  int v110; // ecx
  unsigned int *v111; // rdi
  __int64 v112; // r14
  _QWORD *v113; // rax
  __int64 v114; // r12
  _QWORD *v115; // rax
  __int64 v116; // rbp
  _QWORD *v117; // rax
  unsigned int *v118; // rbx
  unsigned int *v119; // rdi
  __int64 *v120; // rcx
  __int64 v121; // rdx
  unsigned int *v122; // rbp
  unsigned int *v123; // rdi
  unsigned int *v124; // rbx
  __int64 v125; // rbp
  unsigned int *v126; // rdi
  unsigned int *v127; // r12
  unsigned int *v128; // rdi
  __int64 v129; // rbp
  unsigned int *v130; // r12
  unsigned int *v131; // rdi
  unsigned int *v132; // r14
  unsigned int *v133; // rdi
  _QWORD *v134; // rax
  unsigned int *v135; // rdi
  __int64 v136; // r10
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rcx
  __m128 *v140; // rax
  __m128 *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rcx
  __m128 *v145; // rax
  __m128 *v146; // rax
  unsigned int *v147; // r14
  unsigned int *v148; // rdi
  __int64 v149; // r14
  _QWORD *v150; // rax
  unsigned int *v151; // r14
  unsigned int *v152; // rdi
  _QWORD *v153; // rax
  __int64 v154; // [rsp-10h] [rbp-F8h]
  int v155; // [rsp+8h] [rbp-E0h]
  char v156; // [rsp+10h] [rbp-D8h]
  char v157; // [rsp+10h] [rbp-D8h]
  __int64 v158; // [rsp+10h] [rbp-D8h]
  __int64 v159; // [rsp+10h] [rbp-D8h]
  int *v160; // [rsp+10h] [rbp-D8h]
  int v161; // [rsp+18h] [rbp-D0h]
  int *v162; // [rsp+18h] [rbp-D0h]
  unsigned __int8 *v163; // [rsp+20h] [rbp-C8h]
  unsigned int v164; // [rsp+28h] [rbp-C0h]
  int *v165; // [rsp+28h] [rbp-C0h]
  __int64 v166; // [rsp+28h] [rbp-C0h]
  int *v167; // [rsp+28h] [rbp-C0h]
  __int64 v168; // [rsp+28h] [rbp-C0h]
  __int64 v169; // [rsp+28h] [rbp-C0h]
  __int64 v170; // [rsp+28h] [rbp-C0h]
  int v171; // [rsp+30h] [rbp-B8h]
  int v172; // [rsp+34h] [rbp-B4h]
  int v173; // [rsp+38h] [rbp-B0h]
  int v174; // [rsp+3Ch] [rbp-ACh]
  int v175; // [rsp+40h] [rbp-A8h]
  int v176; // [rsp+44h] [rbp-A4h]
  _QWORD *v177; // [rsp+48h] [rbp-A0h]
  unsigned __int8 *v178; // [rsp+50h] [rbp-98h]
  unsigned int *v179; // [rsp+50h] [rbp-98h]
  _QWORD *v180; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v181; // [rsp+50h] [rbp-98h]
  int v182; // [rsp+58h] [rbp-90h]
  char v183; // [rsp+5Dh] [rbp-8Bh]
  char v184; // [rsp+5Eh] [rbp-8Ah]
  bool v185; // [rsp+5Fh] [rbp-89h]
  __int64 v186; // [rsp+60h] [rbp-88h]
  _QWORD *v187; // [rsp+68h] [rbp-80h]
  _QWORD *v188; // [rsp+70h] [rbp-78h]
  _QWORD *v189; // [rsp+78h] [rbp-70h]
  _QWORD *v190; // [rsp+80h] [rbp-68h]
  int v191; // [rsp+88h] [rbp-60h]
  int v192; // [rsp+8Ch] [rbp-5Ch]
  _QWORD *v193; // [rsp+90h] [rbp-58h]
  _QWORD *v194; // [rsp+98h] [rbp-50h]
  int *v195; // [rsp+A0h] [rbp-48h]

  v4 = *(unsigned int **)a1;
  v5 = *(char **)(a2 + 32);
  v183 = -119;
  v6 = (unsigned __int8)*v5;
  v163 = (unsigned __int8 *)v5;
  v173 = *(_DWORD *)(a2 + 80);
  if ( (unsigned __int8)(v6 + 103) <= 1u )
  {
    v183 = *v5;
    v163 = (unsigned __int8 *)(v5 + 1);
    v6 = (unsigned __int8)v5[1];
  }
  v7 = v163;
  do
  {
    v7 += (unsigned __int16)__ROL2__(*(_WORD *)(v7 + 1), 8);
    v8 = *v7;
  }
  while ( *v7 == 121 );
  if ( v8 == 122 )
  {
    v67 = *(_QWORD *)(a1 + 16);
    v68 = *(_QWORD *)(a1 + 24);
    v175 = *(_DWORD *)(v68 + 4LL * (_QWORD)&v7[-v67]);
    if ( v175 )
    {
      v69 = *(_DWORD *)(v68 + 4LL * (_QWORD)&v7[-v67 + 2]);
      v171 = v69;
      v192 = *(_DWORD *)(v68 + 4LL * (_QWORD)&v7[-v67 + 3]);
      if ( v69 == 39 )
      {
        v156 = 1;
        v9 = 1;
        v8 = 123;
      }
      else
      {
        v156 = 0;
        v9 = 0;
        if ( v69 == 40 )
        {
          v156 = 1;
          v9 = 1;
          v8 = 124;
        }
      }
    }
    else
    {
      v192 = 0;
      v9 = 0;
      v171 = 0;
      v156 = 0;
    }
  }
  else
  {
    v156 = 1;
    v9 = 0;
    v192 = 0;
    v171 = 0;
    v175 = 0;
  }
  v178 = &v163[(unsigned __int16)__ROL2__(*(_WORD *)(v163 + 1), 8)];
  v10 = *v178;
  if ( v6 == 141 || v6 == 146 )
  {
    if ( (unsigned __int8)(v163[3] + 0x80) <= 3u || *(_QWORD *)(a2 + 64) )
    {
      if ( v6 == 141 )
      {
        if ( (unsigned __int8)(v10 - 123) > 1u )
        {
          v155 = 0;
          if ( v10 != 121 )
          {
            v161 = 1;
            v176 = 1;
            v182 = 0;
            goto LABEL_15;
          }
          goto LABEL_181;
        }
      }
      else if ( v10 == 121 )
      {
        v155 = 0;
        v6 = 146;
        goto LABEL_181;
      }
      v161 = 1;
      v176 = 1;
      v155 = 0;
    }
    else
    {
      if ( v6 != 141 )
      {
        v161 = 0;
        v6 = 146;
        v176 = 0;
        v155 = 0;
        v182 = 0;
        goto LABEL_15;
      }
      v161 = 0;
      v176 = 0;
      v155 = 0;
      if ( (unsigned __int8)(v10 - 123) > 1u )
        goto LABEL_426;
    }
    v6 = 146;
LABEL_426:
    v182 = 0;
    goto LABEL_15;
  }
  if ( v6 != 144 && v6 != 139 )
  {
    if ( v10 != 121 )
    {
      v176 = 0;
      v155 = 0;
      v161 = 0;
      goto LABEL_13;
    }
    v155 = 0;
LABEL_181:
    v65 = v178;
    v66 = 1;
    do
    {
      ++v66;
      v65 += (unsigned __int16)__ROL2__(*(_WORD *)(v65 + 1), 8);
    }
    while ( *v65 == 121 );
    v161 = v66;
    v176 = 1;
LABEL_13:
    v182 = 0;
    if ( v6 == 135 )
    {
      v11 = *(_DWORD *)(a2 + 64) & 1;
      *(int *)(a2 + 64) >>= 1;
      v182 = v11;
    }
LABEL_15:
    if ( !v9 )
      goto LABEL_16;
    goto LABEL_113;
  }
  v155 = 2 * (unsigned __int16)__ROL2__(*(_WORD *)(v163 + 3), 8);
  if ( v10 == 121 )
    goto LABEL_181;
  v161 = 0;
  v176 = 0;
  v182 = 0;
  if ( !v9 )
  {
LABEL_16:
    if ( v8 != 123 )
      goto LABEL_17;
LABEL_117:
    if ( v183 != -103 )
      goto LABEL_20;
    sub_847F60(v4, 32, 1, 0, 140, 0);
    v53 = *(unsigned int **)a1;
    if ( !**(_DWORD **)a1 )
    {
      v54 = *(unsigned int **)a1;
      v53[36] = 0;
      if ( (unsigned int)sub_848C40(v54, 12, 0, 12, 0, 127, 8) == 4 )
        sub_8498A0(v53, 0x5030100u, 12, 0, 12, 0, 127, 8);
    }
    v55 = 0;
    goto LABEL_122;
  }
LABEL_113:
  sub_847F60(v4, 32, 1, 0, 140, 0);
  v49 = *(unsigned int **)a1;
  if ( **(_DWORD **)a1
    || (v50 = *(unsigned int **)a1, v49[36] = 0, (unsigned int)sub_848C40(v50, 12, 0, 12, 0, 127, 8) != 4) )
  {
    v51 = v175;
    v52 = v175;
    if ( v171 != 39 )
      goto LABEL_116;
LABEL_229:
    v166 = v51;
    sub_849F80(v4, 0x40u, 142, v51, 1, 0, 0x7Fu, 1);
    if ( v8 != 123 )
    {
      if ( v8 != 124 )
      {
        if ( v183 != -103 )
          goto LABEL_20;
LABEL_232:
        sub_847F60(v4, 32, 1, 0, 140, 0);
        v82 = *(unsigned int **)a1;
        if ( !**(_DWORD **)a1 )
        {
          v83 = *(unsigned int **)a1;
          v82[36] = 0;
          if ( (unsigned int)sub_848C40(v83, 12, 0, 12, 0, 127, 8) == 4 )
            sub_8498A0(v82, 0x5030100u, 12, 0, 12, 0, 127, 8);
        }
        v55 = 1;
LABEL_122:
        v189 = nullptr;
        v190 = sub_84A700(v4, v55, 1, 0, 127, 0);
        v193 = nullptr;
        if ( !v155 )
        {
LABEL_123:
          if ( v6 != 134 )
            goto LABEL_24;
LABEL_124:
          sub_847F60(v4, 32, 1, 0, 13, 0);
          sub_847F60(v4, 32, 13, 0, 142, v173 + 8LL);
          sub_847F60(v4, 32, 142, v173 + 8LL, 1, 0);
          if ( !*(_DWORD *)(a1 + 112) )
            *(_DWORD *)(a1 + 112) = v173 + 8;
          goto LABEL_27;
        }
LABEL_22:
        if ( *(_DWORD *)(a1 + 116) )
        {
          sub_847F60(v4, 32, 1, 0, 140, 0);
          sub_847F60(v4, 32, 4, 0, 140, 8);
          sub_847F60(v4, 32, 142, *(int *)(a1 + 116), 1, 0);
          sub_847F60(v4, 32, 1, 0, 140, 16);
          v100 = *(unsigned int **)a1;
          if ( !**(_DWORD **)a1 )
          {
            v101 = *(unsigned int **)a1;
            v100[36] = 0;
            if ( (unsigned int)sub_848C40(v101, 12, 0, 12, 0, 127, 24) == 4 )
              sub_8498A0(v100, 0x5030100u, 12, 0, 12, 0, 127, 24);
          }
          sub_847F60(v4, 32, 142, 8 * v155 + *(_DWORD *)(a1 + 76), 4, 0);
          sub_847F60(v4, 32, 142, 8 * v155 + *(_DWORD *)(a1 + 76) + 8, 1, 0);
        }
        else if ( ((unsigned __int8)(1 << ((v155 >> 1) & 7)) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + (v155 >> 4))) == 0 )
        {
          sub_847F60(v4, 32, 1, 0, 140, 0);
          sub_847F60(v4, 32, 4, 0, 140, 8);
          v102 = *(unsigned int **)a1;
          if ( !**(_DWORD **)a1 )
          {
            v103 = *(unsigned int **)a1;
            v102[36] = 0;
            if ( (unsigned int)sub_848C40(v103, 12, 0, 12, 0, 127, 16) == 4 )
              sub_8498A0(v102, 0x5030100u, 12, 0, 12, 0, 127, 16);
          }
          sub_847F60(v4, 32, 142, 8 * v155 + *(_DWORD *)(a1 + 76), 1, 0);
          sub_847F60(v4, 32, 142, 8 * v155 + *(_DWORD *)(a1 + 76) + 8, 4, 0);
        }
LABEL_24:
        if ( v6 != 135 )
          goto LABEL_25;
LABEL_302:
        v107 = *(_DWORD *)(a2 + 64);
        if ( v107 <= 0 )
        {
LABEL_303:
          v187 = nullptr;
          v194 = sub_8452F0((__int64)v4, 36);
          goto LABEL_29;
        }
        sub_847F60(v4, 32, 12, 0, 142, v173);
        sub_8452F0((__int64)v4, 37);
        if ( !*v4 )
        {
          v142 = *((_QWORD *)v4 + 10);
          v143 = *(_QWORD *)(v142 + 8);
          v144 = v143 + 16;
          if ( (unsigned __int64)(v143 + 16) <= 0xFF0 )
          {
            v146 = (__m128 *)(v142 + v143 + 16);
            *(_QWORD *)(v142 + 8) = v144;
            if ( !v146 )
              goto LABEL_405;
          }
          else
          {
            v145 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v4 + 7))(
                               4096,
                               *(_QWORD *)(*((_QWORD *)v4 + 7) + 16LL));
            if ( !v145 )
            {
              *v4 = 2;
              goto LABEL_405;
            }
            v145->m128_u64[0] = *((_QWORD *)v4 + 10);
            *((_QWORD *)v4 + 10) = v145;
            v146 = v145 + 1;
            v146[-1].m128_u64[1] = 16;
          }
          *v146 = _mm_loadh_ps((const double *)(a1 + 400));
          *(_QWORD *)(a1 + 400) = v146;
        }
LABEL_405:
        sub_849F80(v4, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (v107 - 1));
        goto LABEL_303;
      }
      if ( v183 != -102 )
      {
        sub_847F60(v4, 32, 2, 0, 140, 0);
        goto LABEL_379;
      }
      v153 = sub_845240((__int64)v4);
      v104 = v166;
      v193 = v153;
LABEL_295:
      v52 = v104;
LABEL_386:
      sub_849F80(v4, 0x40u, 142, v52, 142, v52, 0x7Fu, 1);
      v189 = nullptr;
      v190 = nullptr;
      goto LABEL_21;
    }
    goto LABEL_117;
  }
  sub_8498A0(v49, 0x5030100u, 12, 0, 12, 0, 127, 8);
  v51 = v175;
  v52 = v175;
  if ( v171 == 39 )
    goto LABEL_229;
LABEL_116:
  sub_847F60(v4, 32, 142, v51, 1, 0);
  if ( v8 == 123 )
    goto LABEL_117;
LABEL_17:
  if ( v8 != 124 )
  {
    if ( v183 != -103 )
    {
      if ( v171 != 41 )
      {
LABEL_20:
        v189 = nullptr;
        v193 = nullptr;
        v190 = nullptr;
        goto LABEL_21;
      }
      sub_847F60(v4, 32, 142, v175, 127, 1);
      v193 = nullptr;
      v189 = sub_845240((__int64)v4);
      v190 = nullptr;
LABEL_21:
      if ( v155 )
        goto LABEL_22;
      goto LABEL_123;
    }
    goto LABEL_232;
  }
  if ( v183 == -102 )
  {
    v189 = nullptr;
    v193 = sub_845240((__int64)v4);
    v190 = nullptr;
    if ( !v171 )
      goto LABEL_21;
    v104 = v175;
    goto LABEL_295;
  }
  sub_847F60(v4, 32, 2, 0, 140, 0);
  if ( v171 )
  {
    v52 = v175;
LABEL_379:
    v168 = *(_QWORD *)(a2 + 48);
    v134 = sub_84A700(v4, 1, 1, 0, 127, 0);
    if ( v134 && v168 )
    {
      v134[2] &= ~1uLL;
      v134[3] = v168;
    }
    if ( v6 == 135
      || (v135 = *(unsigned int **)a1, **(_DWORD **)a1)
      || (v135[36] = 0, (unsigned int)sub_848C40(v135, 12, 0, 12, 0, 127, 8) != 4) )
    {
      v193 = sub_845240((__int64)v4);
    }
    else
    {
      sub_8498A0(v135, 0x5030100u, 12, 0, 12, 0, 127, 8);
      v193 = sub_845240((__int64)v4);
    }
    goto LABEL_386;
  }
  if ( v6 > 141 || v6 == 135 )
  {
    if ( v6 != 135 )
    {
      v149 = *(_QWORD *)(a2 + 48);
      v150 = sub_84A700(v4, 1, 2, 0, 142, v173);
      if ( v150 && v149 )
      {
        v150[2] &= ~1uLL;
        v150[3] = v149;
      }
      v151 = *(unsigned int **)a1;
      if ( **(_DWORD **)a1
        || (v152 = *(unsigned int **)a1, v151[36] = 0, (unsigned int)sub_848C40(v152, 12, 0, 12, 0, 127, 8) != 4) )
      {
        v189 = nullptr;
        v193 = sub_845240((__int64)v4);
        v190 = nullptr;
        if ( !v155 )
          goto LABEL_26;
      }
      else
      {
        sub_8498A0(v151, 0x5030100u, 12, 0, 12, 0, 127, 8);
        v193 = sub_845240((__int64)v4);
        v189 = nullptr;
        v190 = nullptr;
        if ( !v155 )
          goto LABEL_26;
      }
      goto LABEL_22;
    }
    if ( *(int *)(a2 + 64) >= 0 )
    {
      sub_847F60(v4, 32, 1, 0, 142, v173);
      v105 = *(_QWORD *)(a2 + 48);
      v106 = sub_84A700(v4, 1, 2, 0, 129, 8 * (-2 - *(_DWORD *)(a2 + 64)));
      if ( v106 && v105 )
        goto LABEL_300;
    }
    else
    {
      v105 = *(_QWORD *)(a2 + 48);
      v106 = sub_84A700(v4, 1, 2, 0, 142, v173);
      if ( v105 && v106 )
      {
LABEL_300:
        v106[2] &= ~1uLL;
        v106[3] = v105;
      }
    }
    v189 = nullptr;
    v193 = sub_845240((__int64)v4);
    v190 = nullptr;
    if ( !v155 )
      goto LABEL_302;
    goto LABEL_22;
  }
  v96 = *(_QWORD **)(a2 + 48);
  v190 = v96;
  v97 = sub_8452F0((__int64)v4, 36);
  v189 = v97;
  if ( !v97 )
  {
    v190 = nullptr;
    v193 = sub_845240((__int64)v4);
    if ( v155 )
      goto LABEL_22;
    goto LABEL_274;
  }
  if ( v96 )
  {
    v97[2] &= ~1uLL;
    v97[3] = v96;
    v189 = nullptr;
    v193 = sub_845240((__int64)v4);
    v190 = nullptr;
    if ( v155 )
      goto LABEL_22;
LABEL_274:
    if ( v6 == 134 )
      goto LABEL_124;
    goto LABEL_25;
  }
  v189 = nullptr;
  v193 = sub_845240((__int64)v4);
  if ( v155 )
    goto LABEL_22;
  if ( v6 == 134 )
  {
    v189 = nullptr;
    goto LABEL_124;
  }
LABEL_25:
  if ( v6 == 141 )
    goto LABEL_280;
LABEL_26:
  if ( v6 == 146 )
  {
LABEL_280:
    v187 = nullptr;
    v194 = nullptr;
    if ( v176 )
    {
      sub_847F60(v4, 32, 1, 0, 140, 0);
      v98 = *(unsigned int **)a1;
      if ( !**(_DWORD **)a1 )
      {
        v99 = *(unsigned int **)a1;
        v98[36] = 0;
        if ( (unsigned int)sub_848C40(v99, 12, 0, 12, 0, 127, 8) == 4 )
          sub_8498A0(v98, 0x5030100u, 12, 0, 12, 0, 127, 8);
      }
      v161 = 2;
      v187 = sub_84A700(v4, 1, 1, 0, 127, 0);
      v194 = nullptr;
    }
    goto LABEL_29;
  }
LABEL_27:
  if ( !v176 )
  {
LABEL_28:
    v194 = nullptr;
    v187 = nullptr;
    goto LABEL_29;
  }
  sub_847F60(v4, 32, 1, 0, 140, 0);
  v77 = *(unsigned int **)a1;
  if ( !**(_DWORD **)a1
    && (v78 = *(unsigned int **)a1, v77[36] = 0, (unsigned int)sub_848C40(v78, 12, 0, 12, 0, 127, 8) == 4) )
  {
    sub_8498A0(v77, 0x5030100u, 12, 0, 12, 0, 127, 8);
    if ( v161 > 3 )
    {
LABEL_216:
      if ( !*v4 )
      {
        v4[36] = 1;
        v79 = sub_844340((__int64)v4, 1u, 0, 0, 1, 0);
        if ( v79 )
        {
          v79[1] |= 0x20u;
          *v79 = -1;
        }
      }
      v80 = sub_845240((__int64)v4);
      v81 = *(_QWORD *)(a2 + 72);
      if ( v80 && v81 )
      {
        *(_QWORD *)(v81 + 16) &= ~1uLL;
        *(_QWORD *)(v81 + 24) = v80;
      }
      goto LABEL_28;
    }
  }
  else if ( v161 > 3 )
  {
    goto LABEL_216;
  }
  v194 = nullptr;
  v187 = sub_84A700(v4, 1, 1, 0, 127, 0);
LABEL_29:
  result = sub_865160(a1, *(_QWORD *)(a2 + 16));
  if ( *v4 )
    return result;
  if ( *(_QWORD *)(a2 + 24) )
  {
    result = (__int64)sub_845240((__int64)v4);
    for ( i = *(__int64 **)(a2 + 24); i; i = (__int64 *)i[1] )
    {
      v14 = *i;
      if ( *i && result )
      {
        *(_QWORD *)(v14 + 16) &= ~1uLL;
        *(_QWORD *)(v14 + 24) = result;
      }
    }
  }
  if ( v6 != 146 && v6 != 141 )
  {
    if ( !v176 )
      goto LABEL_95;
    m = nullptr;
    goto LABEL_40;
  }
  m = *(int **)(a2 + 64);
  v70 = v163[3];
  if ( (unsigned __int8)(v70 + 0x80) <= 3u )
  {
    if ( m[12] <= 0 || (v70 & 0xFD) != 0x80 )
    {
LABEL_191:
      v165 = (int *)sub_8452F0((__int64)v4, 36);
      result = (__int64)sub_845240((__int64)v4);
      m = v165;
      for ( j = *(__int64 **)(*(_QWORD *)(a2 + 64) + 40LL); j; j = (__int64 *)j[1] )
      {
        v72 = *j;
        if ( *j && result )
        {
          *(_QWORD *)(v72 + 16) &= ~1uLL;
          *(_QWORD *)(v72 + 24) = result;
        }
      }
      goto LABEL_196;
    }
    v169 = *(_QWORD *)(a2 + 64);
    sub_847F60(v4, 32, 12, 0, 142, m[13]);
    sub_8452F0((__int64)v4, 37);
    v136 = v169;
    if ( !*v4 )
    {
      v137 = *((_QWORD *)v4 + 10);
      v138 = *(_QWORD *)(v137 + 8);
      v139 = v138 + 16;
      if ( (unsigned __int64)(v138 + 16) <= 0xFF0 )
      {
        v141 = (__m128 *)(v137 + v138 + 16);
        *(_QWORD *)(v137 + 8) = v139;
        if ( !v141 )
          goto LABEL_398;
      }
      else
      {
        v140 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v4 + 7))(
                           4096,
                           *(_QWORD *)(*((_QWORD *)v4 + 7) + 16LL));
        v136 = v169;
        if ( !v140 )
        {
          *v4 = 2;
          goto LABEL_398;
        }
        v140->m128_u64[0] = *((_QWORD *)v4 + 10);
        *((_QWORD *)v4 + 10) = v140;
        v141 = v140 + 1;
        v141[-1].m128_u64[1] = 16;
      }
      *v141 = _mm_loadh_ps((const double *)(a1 + 400));
      *(_QWORD *)(a1 + 400) = v141;
    }
LABEL_398:
    v170 = v136;
    sub_847F60(v4, 32, 1, 0, 140, -16);
    sub_849F80(v4, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (*(_DWORD *)(v170 + 48) - 1));
    sub_847F60(v4, 32, 142, *(int *)(v170 + 52), 1, 0);
    goto LABEL_191;
  }
  if ( !m )
  {
    if ( !v176 )
    {
      if ( v155 )
        goto LABEL_198;
      result = 1LL << ((unsigned __int8)v6 + 124);
      if ( (result & 0x4413) != 0 )
        goto LABEL_252;
LABEL_100:
      if ( (result & 4) != 0 )
      {
        sub_847F60(v4, 32, 1, 0, 140, 0);
        sub_847F60(v4, 32, 4, 0, 140, 8);
        sub_847F60(v4, 32, 13, 0, 142, v173 + 8LL);
        sub_847F60(v4, 32, 142, v173, 1, 0);
        sub_847F60(v4, 32, 142, v173 + 8LL, 4, 0);
        v44 = *(unsigned int **)a1;
        v45 = 8 * v176 + 16;
        if ( !**(_DWORD **)a1 )
        {
          v44[36] = 0;
          if ( (unsigned int)sub_848C40(v44, 12, 0, 12, 0, 127, v45) == 4 )
            sub_8498A0(v44, 0x5030100u, 12, 0, 12, 0, 127, v45);
        }
        v46 = sub_845240((__int64)v4);
        for ( k = *(__int64 **)(a2 + 64); k; k = (__int64 *)k[1] )
        {
          v48 = *k;
          if ( *k && v46 )
          {
            *(_QWORD *)(v48 + 16) &= ~1uLL;
            *(_QWORD *)(v48 + 24) = v46;
          }
        }
        result = (unsigned int)(v173 + 8);
        if ( *(_DWORD *)(a1 + 112) == (_DWORD)result )
          *(_DWORD *)(a1 + 112) = 0;
      }
      goto LABEL_203;
    }
    goto LABEL_40;
  }
  v167 = (int *)sub_8452F0((__int64)v4, 36);
  result = (__int64)sub_845240((__int64)v4);
  v120 = *(__int64 **)(a2 + 64);
  for ( m = v167; v120; v120 = (__int64 *)v120[1] )
  {
    v121 = *v120;
    if ( *v120 && result )
    {
      *(_QWORD *)(v121 + 16) &= ~1uLL;
      *(_QWORD *)(v121 + 24) = result;
    }
  }
LABEL_196:
  if ( !v176 )
  {
    if ( v155 )
      goto LABEL_198;
LABEL_97:
    v43 = v6 + 124;
    if ( (unsigned int)(v6 - 132) > 0xE )
      goto LABEL_203;
    result = 1LL << v43;
    if ( ((1LL << v43) & 0x4413) != 0 )
      goto LABEL_252;
    if ( v6 != 135 )
      goto LABEL_100;
    v108 = *(_DWORD *)(a2 + 64);
    v109 = &v163[(unsigned __int16)__ROL2__(*(_WORD *)(v163 + 1), 8)];
    if ( v108 < 0 )
    {
      if ( v8 == 123 || *v109 == 121 && v8 != 124 )
      {
        ++v182;
        goto LABEL_313;
      }
    }
    else
    {
      v110 = 2;
      if ( v8 == 122 )
        v110 = (*v109 == 121) + 1;
      v182 += v108 + v110;
    }
    if ( v182 <= 0 )
    {
LABEL_316:
      v113 = sub_845240((__int64)v4);
      if ( v194 && v113 )
      {
        v194[2] &= ~1uLL;
        v194[3] = v113;
      }
      result = *(unsigned int *)(a2 + 64);
      if ( (int)result >= 0 )
      {
        result = sub_847F60(v4, 32, 142, v173, 140, 8 * ~(_DWORD)result);
        goto LABEL_203;
      }
      if ( v8 == 124 )
      {
        sub_847F60(v4, 32, 1, 0, 140, 8);
        v122 = *(unsigned int **)a1;
        if ( !**(_DWORD **)a1 )
        {
          v123 = *(unsigned int **)a1;
          v122[36] = 0;
          if ( (unsigned int)sub_848C40(v123, 12, 0, 12, 0, 127, 16) == 4 )
            sub_8498A0(v122, 0x5030100u, 12, 0, 12, 0, 127, 16);
        }
        sub_847F60(v4, 32, 142, v173, 1, 0);
        if ( v171 == 41 )
          goto LABEL_242;
        goto LABEL_348;
      }
      if ( v171 == 41 )
        goto LABEL_242;
      if ( v8 != 123 )
        goto LABEL_206;
      goto LABEL_323;
    }
LABEL_313:
    v111 = *(unsigned int **)a1;
    v112 = 8 * v182;
    if ( !**(_DWORD **)a1 )
    {
      v111[36] = 0;
      if ( (unsigned int)sub_848C40(v111, 12, 0, 12, 0, 127, v112) == 4 )
        sub_8498A0(v111, 0x5030100u, 12, 0, 12, 0, 127, v112);
    }
    goto LABEL_316;
  }
LABEL_40:
  v177 = nullptr;
  v16 = v171 == 40;
  v195 = m;
  v17 = v183 != -119;
  v18 = v16 + 1;
  v184 = v8;
  if ( !(v17 | (unsigned __int8)v156) )
    v18 = v171 == 40;
  v157 = v17 | v156;
  v19 = v178;
  v164 = v18;
  v191 = v18 + 1;
  v186 = 8 * v16;
  v20 = v8 == 123;
  v21 = v6;
  v172 = 1;
  v185 = v20 && v155 != 0;
  v174 = 1 << ((v155 >> 1) & 7);
  while ( 1 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    *(_OWORD *)(a2 + 8) = 0;
    if ( *v19 != 121 )
      goto LABEL_44;
    v59 = v19 + 3;
    v181 = &v19[(unsigned __int16)__ROL2__(*(_WORD *)(v19 + 1), 8)];
    switch ( v21 )
    {
      case 130:
      case 133:
        sub_847F60(v4, 32, 2, 0, 142, v173);
        v86 = v19[3];
        if ( (unsigned __int8)(v86 - 126) > 1u )
          goto LABEL_166;
        v87 = (__int64)(v19 + 3);
        v62 = v86 == 127;
        v59 = (unsigned __int8 *)sub_84D160(a1, v87, a2);
        break;
      case 134:
        sub_847F60(v4, 32, 2, 0, 140, 16);
        v19 = v181;
        goto LABEL_143;
      case 135:
        v19 = v181;
        goto LABEL_266;
      case 141:
      case 146:
        goto LABEL_166;
      default:
        if ( v173 )
        {
          v60 = v173;
          v61 = 142;
        }
        else
        {
          v60 = 0;
          v61 = 140;
        }
        sub_847F60(v4, 32, 2, 0, v61, v60);
LABEL_166:
        v62 = 0;
        break;
    }
    result = sub_85C540(a1, v59, v181, a2);
    if ( *v4 )
      return result;
    switch ( v21 )
    {
      case 133:
        if ( v62 )
        {
          sub_84A700(v4, 2, 2, 0, 13, 0);
          v90 = *(_QWORD *)(a2 + 16);
          if ( !*v4 )
          {
            v91 = *((_QWORD *)v4 + 10);
            v92 = *(_QWORD *)(v91 + 8);
            v93 = v92 + 16;
            if ( (unsigned __int64)(v92 + 16) <= 0xFF0 )
            {
              v95 = (__m128 *)(v91 + v92 + 16);
              *(_QWORD *)(v91 + 8) = v93;
              if ( v95 )
                goto LABEL_259;
            }
            else
            {
              v94 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v4 + 7))(
                                4096,
                                *(_QWORD *)(*((_QWORD *)v4 + 7) + 16LL));
              if ( v94 )
              {
                v94->m128_u64[0] = *((_QWORD *)v4 + 10);
                *((_QWORD *)v4 + 10) = v94;
                v95 = v94 + 1;
                v95[-1].m128_u64[1] = 16;
LABEL_259:
                *v95 = _mm_loadh_ps((const double *)(v90 + 8));
                *(_QWORD *)(v90 + 8) = v95;
                goto LABEL_224;
              }
              *v4 = 2;
            }
          }
        }
LABEL_224:
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * (_QWORD)&v163[-*(_QWORD *)(a1 + 16) + 1]) )
          sub_847F60(v4, 32, 13, 0, 142, v173 + 8LL);
LABEL_172:
        v19 = v181;
        if ( v171 != 40 )
          goto LABEL_173;
        goto LABEL_134;
      case 136:
        sub_84B950(*(unsigned int **)a1, v173, a2);
        goto LABEL_172;
      case 132:
        sub_847F60(v4, 32, 2, 0, 142, v173);
        goto LABEL_172;
    }
    v19 = v181;
LABEL_44:
    if ( v21 != 135 )
    {
      if ( v171 != 40 )
      {
        if ( !v157 )
        {
          if ( v155 )
            goto LABEL_48;
          v23 = 0;
          v22 = 0;
          goto LABEL_52;
        }
LABEL_173:
        if ( v155 )
          goto LABEL_48;
        v22 = v164;
        v23 = v164;
        goto LABEL_52;
      }
LABEL_134:
      sub_847F60(v4, 32, 4, 0, 142, v175);
      if ( !v157 )
      {
        if ( v155 )
          goto LABEL_48;
        v23 = v164;
        goto LABEL_140;
      }
      if ( v155 )
        goto LABEL_48;
      v22 = v164;
      v23 = v164;
      if ( v21 == 135 )
        goto LABEL_53;
LABEL_52:
      ++v23;
      goto LABEL_53;
    }
LABEL_130:
    sub_84EED0(a1, v184, *(_DWORD *)(a2 + 64), v173, 1u, v182);
    if ( v171 == 40 )
      goto LABEL_134;
    if ( v157 )
    {
      if ( !v155 )
      {
        v22 = v164;
        v23 = v164;
        goto LABEL_53;
      }
LABEL_48:
      v22 = v164;
      v23 = v164;
      if ( *(_DWORD *)(a1 + 116) )
        v23 = v191;
      if ( ((unsigned __int8)v174 & *(_BYTE *)(*(_QWORD *)(a1 + 40) + (v155 >> 4))) == 0 )
      {
        v23 += 2;
        if ( v21 != 135 )
          goto LABEL_52;
LABEL_53:
        v179 = *(unsigned int **)a1;
        sub_849F80(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, (int)(8 * v23));
        v24 = sub_84A700(v179, 2, 12, 0, 11, 0);
        v25 = *(unsigned int **)a1;
        v188 = v24;
        if ( !**(_DWORD **)a1 )
        {
          v26 = sub_8451D0((__int64)v25, 24);
          if ( v26 )
          {
            v180 = v26;
            *v26 = v188;
            v26[1] = sub_845240((__int64)v25);
            v180[2] = *(_QWORD *)(a1 + 312);
            *(_QWORD *)(a1 + 312) = v180;
          }
        }
        if ( v171 == 40 )
LABEL_179:
          sub_849F80(v4, 0x42u, 140, 0, 4, 0, 0x7Fu, 1);
        if ( v157 )
        {
LABEL_58:
          v27 = 2;
          if ( v184 == 122 )
            v27 = 127;
          sub_847F60(v4, 32, 140, v186, v27, 0);
        }
        if ( !v155 )
        {
          if ( v21 != 135 )
          {
            v28 = (int)(8 * v22);
            if ( v161 > 3 )
            {
              v177 = sub_847D30((__int64)v4, (int)(8 * v22));
              goto LABEL_65;
            }
LABEL_148:
            sub_847F60(v4, 32, 140, v28, 127, v172);
            goto LABEL_149;
          }
          break;
        }
        goto LABEL_159;
      }
LABEL_140:
      if ( v21 == 135 )
        goto LABEL_154;
      v22 = v164;
      goto LABEL_52;
    }
    if ( v155 )
      goto LABEL_48;
    v23 = v164;
LABEL_154:
    if ( v23 )
    {
      v22 = v164;
      goto LABEL_53;
    }
    if ( v171 == 40 )
    {
      v22 = v164;
      goto LABEL_179;
    }
    if ( v157 )
    {
      v22 = v164;
      goto LABEL_58;
    }
    if ( !v155 )
      break;
    v22 = v164;
LABEL_159:
    v57 = sub_8480F0(a1, v22, v155, v173);
    if ( v21 != 135 )
    {
      v58 = 8 * v57;
      v28 = v58;
      if ( v161 <= 3 )
        goto LABEL_148;
      v177 = sub_847D30((__int64)v4, v58);
    }
LABEL_149:
    if ( v185 && ((unsigned __int8)v174 & *(_BYTE *)(*(_QWORD *)(a1 + 40) + (v155 >> 4))) != 0 )
      sub_847F60(v4, 32, 142, *(_DWORD *)(a1 + 76) + 8 * v155 + 8, 2, 0);
LABEL_65:
    v29 = *(_QWORD *)(a2 + 40);
    v30 = sub_8452F0((__int64)v4, 36);
    if ( v29 && v30 )
    {
      v30[2] &= ~1uLL;
      v30[3] = v29;
    }
    if ( v21 == 135 )
    {
      sub_865160(a1, *(_QWORD *)(a2 + 16));
      result = *v4;
      if ( (_DWORD)result )
        return result;
      if ( *(_QWORD *)(a2 + 24) )
      {
        result = (__int64)sub_845240((__int64)v4);
        n = *(__int64 **)(a2 + 24);
        if ( n )
          goto LABEL_78;
      }
      if ( *v19 != 121 )
        goto LABEL_83;
      *(_OWORD *)(a2 + 8) = 0;
      if ( *v19 == 121 )
      {
LABEL_265:
        v59 = v19 + 3;
        v19 += (unsigned __int16)__ROL2__(*(_WORD *)(v19 + 1), 8);
LABEL_266:
        sub_847F60(v4, 32, 2, 0, 140, 8LL * v182);
LABEL_143:
        sub_85C540(a1, v59, v19, a2);
        result = *v4;
        if ( (_DWORD)result )
          return result;
        goto LABEL_44;
      }
      goto LABEL_130;
    }
    if ( v161 > 3 )
    {
      v56 = sub_845240((__int64)v4);
      if ( v177 && v56 )
      {
        v177[2] &= ~1uLL;
        v177[3] = v56;
      }
    }
    else
    {
      v31 = sub_845240((__int64)v4);
      if ( v31 && v187 )
      {
        v187[2] &= ~1uLL;
        v187[3] = v31;
      }
      if ( v161 > ++v172 )
        v187 = sub_84A700(v4, 1, 1, 0, 127, 1);
    }
LABEL_75:
    sub_865160(a1, *(_QWORD *)(a2 + 16));
    result = *v4;
    if ( (_DWORD)result )
      return result;
    if ( *(_QWORD *)(a2 + 24) )
    {
      result = (__int64)sub_845240((__int64)v4);
      for ( n = *(__int64 **)(a2 + 24); n; n = (__int64 *)n[1] )
      {
LABEL_78:
        v33 = *n;
        if ( *n && result )
        {
          *(_QWORD *)(v33 + 16) &= ~1uLL;
          *(_QWORD *)(v33 + 24) = result;
        }
      }
    }
    if ( *v19 != 121 )
      goto LABEL_83;
  }
  v63 = *(_QWORD *)(a2 + 40);
  v64 = sub_8452F0((__int64)v4, 36);
  if ( v64 && v63 )
  {
    v64[2] &= ~1uLL;
    v64[3] = v63;
    goto LABEL_75;
  }
  result = sub_865160(a1, *(_QWORD *)(a2 + 16));
  if ( *v4 )
    return result;
  if ( *(_QWORD *)(a2 + 24) )
  {
    result = (__int64)sub_845240((__int64)v4);
    n = *(__int64 **)(a2 + 24);
    if ( n )
      goto LABEL_78;
  }
  if ( *v19 == 121 )
  {
    *(_OWORD *)(a2 + 8) = 0;
    if ( *v19 == 121 )
      goto LABEL_265;
    goto LABEL_130;
  }
LABEL_83:
  v34 = v195;
  v6 = v21;
  v8 = v184;
  if ( v195 )
  {
    if ( (v163[3] & 0xFD) == 0x81 )
    {
      v35 = *(_QWORD *)(a2 + 64);
      if ( *(int *)(v35 + 48) > 0 )
      {
        v158 = *(_QWORD *)(a2 + 64);
        sub_847F60(v4, 32, 12, 0, 142, *(int *)(v35 + 52));
        sub_8452F0((__int64)v4, 37);
        v36 = v195;
        v37 = v158;
        if ( !*v4 )
        {
          v38 = *((_QWORD *)v4 + 10);
          v39 = *(_QWORD *)(v38 + 8);
          v40 = v39 + 16;
          if ( (unsigned __int64)(v39 + 16) <= 0xFF0 )
          {
            v42 = (__m128 *)(v38 + v39 + 16);
            *(_QWORD *)(v38 + 8) = v40;
            if ( v42 )
            {
LABEL_90:
              *v42 = _mm_loadh_ps((const double *)(a1 + 400));
              *(_QWORD *)(a1 + 400) = v42;
            }
          }
          else
          {
            v41 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v4 + 7))(
                              4096,
                              *(_QWORD *)(*((_QWORD *)v4 + 7) + 16LL));
            v37 = v158;
            v36 = v195;
            if ( v41 )
            {
              v41->m128_u64[0] = *((_QWORD *)v4 + 10);
              *((_QWORD *)v4 + 10) = v41;
              v42 = v41 + 1;
              v42[-1].m128_u64[1] = 16;
              goto LABEL_90;
            }
            *v4 = 2;
          }
        }
        v162 = v36;
        v159 = v37;
        sub_847F60(v4, 32, 1, 0, 140, -16);
        sub_849F80(v4, 0x40u, 12, 0, 12, 0, 0x7Fu, 8LL * (*(_DWORD *)(v159 + 48) - 1));
        sub_847F60(v4, 32, 142, *(int *)(v159 + 52), 1, 0);
        v34 = v162;
      }
    }
    v160 = v34;
    result = (__int64)sub_845240((__int64)v4);
    if ( result )
    {
      *((_QWORD *)v160 + 2) &= ~1uLL;
      *((_QWORD *)v160 + 3) = result;
    }
  }
  if ( !v173 )
  {
    v132 = *(unsigned int **)a1;
    if ( !**(_DWORD **)a1 )
    {
      v133 = *(unsigned int **)a1;
      v132[36] = 0;
      result = sub_848C40(v133, 12, 0, 12, 0, 127, 8);
      if ( (_DWORD)result == 4 )
      {
        sub_8498A0(v132, 0x5030100u, 12, 0, 12, 0, 127, 8);
        result = v154;
      }
    }
  }
LABEL_95:
  if ( !v155 )
  {
    if ( v6 != 133 )
      goto LABEL_97;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * (_QWORD)&v163[-*(_QWORD *)(a1 + 16) + 1]) )
    {
      sub_847F60(v4, 32, 1, 0, 140, 0);
      sub_847F60(v4, 32, 4, 0, 140, 8);
      sub_847F60(v4, 32, 13, 0, 142, v173 + 8LL);
      sub_847F60(v4, 32, 142, v173, 1, 0);
      result = sub_847F60(v4, 32, 142, v173 + 8LL, 4, 0);
      v147 = *(unsigned int **)a1;
      if ( !**(_DWORD **)a1 )
      {
        v148 = *(unsigned int **)a1;
        v147[36] = 0;
        result = sub_848C40(v148, 12, 0, 12, 0, 127, 32);
        if ( (_DWORD)result == 4 )
          result = sub_8498A0(v147, 0x5030100u, 12, 0, 12, 0, 127, 32);
      }
    }
    else
    {
LABEL_252:
      result = sub_847F60(v4, 32, 142, v173, 140, 0);
      v88 = *(unsigned int **)a1;
      if ( !**(_DWORD **)a1 )
      {
        v89 = *(unsigned int **)a1;
        v88[36] = 0;
        result = sub_848C40(v89, 12, 0, 12, 0, 127, 8);
        if ( (_DWORD)result == 4 )
          result = sub_8498A0(v88, 0x5030100u, 12, 0, 12, 0, 127, 8);
      }
    }
LABEL_203:
    if ( v171 != 41 )
      goto LABEL_204;
LABEL_242:
    sub_849F80(v4, 0x40u, 1, 0, 142, v175, 0x7Fu, 1);
    sub_847F60(v4, 32, 142, v175, 1, 0);
    result = (__int64)sub_84A700(v4, 5, 1, 0, 127, v192);
    if ( v189 && result )
    {
      *(_QWORD *)(result + 16) &= ~1uLL;
      *(_QWORD *)(result + 24) = v189;
    }
    return result;
  }
LABEL_198:
  if ( ((unsigned __int8)(1 << ((v155 >> 1) & 7)) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + (v155 >> 4))) == 0 )
  {
    sub_847F60(v4, 32, 1, 0, 140, 0);
    v73 = *(unsigned int **)a1;
    if ( !**(_DWORD **)a1 )
    {
      v74 = *(unsigned int **)a1;
      v73[36] = 0;
      if ( (unsigned int)sub_848C40(v74, 12, 0, 12, 0, 127, 8) == 4 )
        sub_8498A0(v73, 0x5030100u, 12, 0, 12, 0, 127, 8);
    }
    result = sub_847F60(v4, 32, 142, v173, 1, 0);
    goto LABEL_203;
  }
  sub_847F60(v4, 32, 1, 0, 140, 0);
  sub_847F60(v4, 32, 4, 0, 140, 8);
  v84 = *(unsigned int **)a1;
  if ( !**(_DWORD **)a1 )
  {
    v85 = *(unsigned int **)a1;
    v84[36] = 0;
    if ( (unsigned int)sub_848C40(v85, 12, 0, 12, 0, 127, 16) == 4 )
      sub_8498A0(v84, 0x5030100u, 12, 0, 12, 0, 127, 16);
  }
  sub_847F60(v4, 32, 142, 8 * v155 + *(_DWORD *)(a1 + 76), 1, 0);
  result = sub_847F60(v4, 32, 142, 8 * v155 + *(_DWORD *)(a1 + 76) + 8, 4, 0);
  if ( v171 == 41 )
    goto LABEL_242;
LABEL_204:
  if ( v8 == 123 )
  {
LABEL_323:
    sub_847F60(v4, 32, 2, 0, 140, 0);
    if ( v183 != -103 )
    {
      v127 = *(unsigned int **)a1;
      if ( !**(_DWORD **)a1 )
      {
        v128 = *(unsigned int **)a1;
        v127[36] = 0;
        if ( (unsigned int)sub_848C40(v128, 12, 0, 12, 0, 127, 8) == 4 )
          sub_8498A0(v127, 0x5030100u, 12, 0, 12, 0, 127, 8);
      }
      v129 = *(_QWORD *)(a2 + 48);
      result = (__int64)sub_84A700(v4, 1, 2, 0, 127, 0);
      if ( v129 && result )
      {
        *(_QWORD *)(result + 16) &= ~1uLL;
        *(_QWORD *)(result + 24) = v129;
      }
      return result;
    }
    v114 = *(_QWORD *)(a2 + 48);
    v115 = sub_84A700(v4, 1, 2, 0, 127, 0);
    if ( v115 && v114 )
    {
      v115[2] &= ~1uLL;
      v115[3] = v114;
    }
    sub_847F60(v4, 32, 2, 0, 140, 8);
    v116 = *(_QWORD *)(a2 + 56);
    v117 = sub_8452F0((__int64)v4, 36);
    if ( v116 && v117 )
    {
      v117[2] &= ~1uLL;
      v117[3] = v116;
    }
    result = (__int64)sub_845240((__int64)v4);
    if ( v190 && result )
    {
      v190[2] &= ~1uLL;
      v190[3] = result;
    }
    goto LABEL_333;
  }
  if ( v8 != 124 )
  {
LABEL_206:
    if ( v183 == -103 )
    {
      sub_847F60(v4, 32, 2, 0, 140, 0);
      v75 = *(_QWORD *)(a2 + 56);
      v76 = sub_8452F0((__int64)v4, 36);
      if ( v76 && v75 )
      {
        v76[2] &= ~1uLL;
        v76[3] = v75;
      }
      result = (__int64)sub_845240((__int64)v4);
      if ( result )
      {
        if ( v190 )
        {
          v190[2] &= ~1uLL;
          v190[3] = result;
        }
      }
    }
    return result;
  }
LABEL_348:
  sub_847F60(v4, 32, 1, 0, 140, 0);
  if ( v6 == 135 )
  {
    result = (__int64)sub_84A700(v4, 1, 1, 0, 127, 0);
    if ( result && v193 )
    {
      *(_QWORD *)(result + 16) &= ~1uLL;
      *(_QWORD *)(result + 24) = v193;
    }
    v124 = *(unsigned int **)a1;
    v125 = 8LL * (v183 == -102) + 8;
    if ( !**(_DWORD **)a1 )
    {
      v126 = *(unsigned int **)a1;
      v124[36] = 0;
      result = sub_848C40(v126, 12, 0, 12, 0, 127, v125);
      if ( (_DWORD)result == 4 )
        return sub_8498A0(v124, 0x5030100u, 12, 0, 12, 0, 127, v125);
    }
    return result;
  }
  v130 = *(unsigned int **)a1;
  if ( !**(_DWORD **)a1 )
  {
    v131 = *(unsigned int **)a1;
    v130[36] = 0;
    if ( (unsigned int)sub_848C40(v131, 12, 0, 12, 0, 127, 8) == 4 )
      sub_8498A0(v130, 0x5030100u, 12, 0, 12, 0, 127, 8);
  }
  result = (__int64)sub_84A700(v4, 1, 1, 0, 127, 0);
  if ( result && v193 )
  {
    *(_QWORD *)(result + 16) &= ~1uLL;
    *(_QWORD *)(result + 24) = v193;
  }
  if ( v183 == -102 )
  {
LABEL_333:
    v118 = *(unsigned int **)a1;
    if ( !**(_DWORD **)a1 )
    {
      v119 = *(unsigned int **)a1;
      v118[36] = 0;
      result = sub_848C40(v119, 12, 0, 12, 0, 127, 8);
      if ( (_DWORD)result == 4 )
        return sub_8498A0(v118, 0x5030100u, 12, 0, 12, 0, 127, 8);
    }
  }
  return result;
}

