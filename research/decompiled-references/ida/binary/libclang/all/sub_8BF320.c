__int64 __fastcall sub_8BF320(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int8 v9; // di
  __int64 v10; // rax
  _BYTE *v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebp
  bool v21; // al
  int *v22; // rax
  __int64 v23; // rdi
  __m128 v24; // xmm0
  unsigned __int32 v25; // r12d
  __int64 v26; // rdx
  int v27; // ecx
  __int64 *v28; // rdx
  __int64 v29; // rbx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r14
  _WORD *v34; // r12
  char v35; // bp
  int v36; // eax
  __int64 v37; // rdx
  char v38; // bp
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // r12
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdi
  void *v52; // rdi
  char v53; // al
  _BYTE *v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int16 *v57; // rdx
  int v58; // ecx
  __int64 v59; // rsi
  __int16 v60; // di
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rdi
  int v64; // edx
  char v65; // bl
  __int64 v66; // rdx
  char v67; // al
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // r14
  _QWORD *v71; // rbp
  __int64 v72; // r15
  __int64 v73; // rdi
  int *v74; // rsi
  __int64 v75; // rsi
  __m128i v76; // xmm0
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rax
  __int32 v80; // eax
  char v81; // al
  __int64 v82; // rax
  unsigned __int64 v83; // rbx
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  _QWORD *v86; // rdx
  _QWORD *v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rsi
  char v90; // al
  __int64 *v91; // rdx
  int v92; // r8d
  int v93; // r9d
  __int64 v94; // rcx
  char v95; // al
  __int64 v96; // rcx
  int v97; // r8d
  int v98; // r9d
  __int64 *v99; // rdx
  __int64 v100; // rsi
  __int64 v101; // rax
  bool v102; // al
  __int64 v103; // rax
  unsigned __int64 v104; // rbx
  __int64 v105; // rbp
  char v106; // bl
  char v107; // al
  __int64 v108; // rax
  __int64 *v109; // rcx
  _QWORD *v110; // r15
  __int64 v111; // r14
  __int64 v112; // rcx
  __int64 v113; // rdi
  int *v114; // rsi
  int v115; // ecx
  __int64 v116; // rcx
  __m128i v117; // xmm0
  __int64 v118; // r14
  __int64 v119; // rax
  __int32 v120; // r14d
  __int64 v121; // rsi
  unsigned int v122; // eax
  void *v123; // rax
  __int64 v124; // r11
  unsigned __int64 v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rdx
  unsigned int v129; // esi
  __int64 v130; // r15
  unsigned int v131; // eax
  char v132; // r15
  __int64 v133; // rcx
  unsigned int v134; // eax
  char v135; // r15
  char v136; // r12
  unsigned __int8 **v137; // rdi
  __int64 v138; // rdi
  char v139; // bp
  unsigned int v140; // eax
  _QWORD *v141; // rdx
  _QWORD *v142; // rsi
  __int64 v143; // rdi
  __int64 v144; // [rsp+0h] [rbp-8F8h]
  __int64 v145; // [rsp+8h] [rbp-8F0h]
  unsigned __int64 v146; // [rsp+8h] [rbp-8F0h]
  __int64 v147; // [rsp+8h] [rbp-8F0h]
  char v148; // [rsp+8h] [rbp-8F0h]
  unsigned __int8 v149; // [rsp+8h] [rbp-8F0h]
  __int32 v150; // [rsp+10h] [rbp-8E8h]
  __int64 v151; // [rsp+10h] [rbp-8E8h]
  __int64 *v152; // [rsp+10h] [rbp-8E8h]
  __int32 v153; // [rsp+18h] [rbp-8E0h]
  __int64 v154[2]; // [rsp+28h] [rbp-8D0h] BYREF
  __int64 v155; // [rsp+38h] [rbp-8C0h] BYREF
  void *v156; // [rsp+40h] [rbp-8B8h]
  unsigned int v157; // [rsp+48h] [rbp-8B0h]
  char v158; // [rsp+4Ch] [rbp-8ACh]
  void *v159; // [rsp+50h] [rbp-8A8h] BYREF
  unsigned int v160; // [rsp+58h] [rbp-8A0h]
  char v161; // [rsp+5Ch] [rbp-89Ch]
  void *v162; // [rsp+60h] [rbp-898h] BYREF
  unsigned int v163; // [rsp+68h] [rbp-890h]
  char v164; // [rsp+6Ch] [rbp-88Ch]
  void *v165; // [rsp+70h] [rbp-888h] BYREF
  unsigned int v166; // [rsp+78h] [rbp-880h]
  char v167; // [rsp+7Ch] [rbp-87Ch]
  void *v168; // [rsp+80h] [rbp-878h] BYREF
  unsigned __int64 v169; // [rsp+88h] [rbp-870h]
  __int64 *v170; // [rsp+90h] [rbp-868h]
  __m128i *v171; // [rsp+98h] [rbp-860h]
  void **v172; // [rsp+A0h] [rbp-858h]
  void **v173; // [rsp+A8h] [rbp-850h]
  _BYTE v174[48]; // [rsp+C0h] [rbp-838h] BYREF
  char v175; // [rsp+F8h] [rbp-800h]
  __m128i v176; // [rsp+100h] [rbp-7F8h] BYREF
  __int64 v177; // [rsp+110h] [rbp-7E8h]
  unsigned int v178[4]; // [rsp+118h] [rbp-7E0h] BYREF
  __int64 v179; // [rsp+128h] [rbp-7D0h]
  _BYTE *v180; // [rsp+130h] [rbp-7C8h]
  __int64 v181; // [rsp+138h] [rbp-7C0h]
  _BYTE v182[80]; // [rsp+140h] [rbp-7B8h] BYREF
  __m128i v183; // [rsp+190h] [rbp-768h] BYREF
  __int64 v184; // [rsp+1A0h] [rbp-758h] BYREF
  _QWORD v185[13]; // [rsp+1A8h] [rbp-750h] BYREF
  char v186; // [rsp+211h] [rbp-6E7h]
  __m128 v187; // [rsp+8A0h] [rbp-58h]
  int *v188; // [rsp+8B0h] [rbp-48h]

  v7 = a2;
  v154[0] = a2;
  v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v9 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v8 - 21) <= 0xA )
  {
    sub_828330(*a1, a2, 110);
    v10 = *a1;
    a5 = *(unsigned int *)(*a1 + 48);
    if ( !(_DWORD)a5 )
      return 0;
    v11 = *(_BYTE **)(v10 + 24);
    if ( *(_BYTE *)(v10 + 962) )
    {
      *v11 = 1;
    }
    else
    {
      v53 = *(_BYTE *)(v10 + 963);
      *v11 |= v53;
      if ( !v53 )
        return 0;
    }
    v7 = v154[0];
    v8 = (*(_WORD *)(v154[0] + 2) >> 3) & 0x3F;
    v9 = (*(_WORD *)(v154[0] + 2) >> 3) & 0x3F;
  }
  v12 = 0xFFFFFFFEFFE7FFFFLL;
  if ( !_bittest64((const __int64 *)&v12, v8) )
    goto LABEL_18;
  if ( (*(_BYTE *)(v7 + 1) & 6) != 0 )
    goto LABEL_8;
  if ( !sub_83CAB0(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL))
    || !sub_83CAB0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v7 = v154[0];
    goto LABEL_127;
  }
  v21 = sub_83CAB0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  v7 = v154[0];
  if ( !v21 )
  {
LABEL_127:
    LODWORD(v8) = (*(_WORD *)(v7 + 2) >> 3) & 0x3F;
    v9 = (*(_WORD *)(v7 + 2) >> 3) & 0x3F;
LABEL_8:
    if ( (unsigned int)(v8 - 9) <= 6 )
    {
      v63 = *a1;
      v176.m128i_i64[0] = (__int64)a1;
      v183.m128i_i64[0] = (__int64)v154;
      v183.m128i_i64[1] = (__int64)a1;
      return (unsigned int)sub_8BCD40(v63, v7, v176.m128i_i64, (__int64 **)&v183, a5, a6);
    }
    v13 = *(_QWORD *)(v7 + 16);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 41
      || (v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v14 + 16) != 41)
      || (_DWORD)v8 != 6 )
    {
      if ( v9 > 1u )
      {
        if ( v9 == 32 )
        {
          sub_857160(*a1, v13);
          return (unsigned int)sub_87BEE0(a1, *(_QWORD *)(v7 + 24), v15, v16, v17, v18);
        }
        sub_828330(*a1, v7, 110);
        return 0;
      }
      v50 = *a1;
      v19 = 0;
      LOBYTE(v185[0]) |= 1u;
      v185[4] = 0x800000000LL;
      v183 = 0u;
      v184 = 0;
      v185[2] = 0;
      v185[3] = &v185[5];
      v186 = 0;
      if ( sub_89E210(v50, v7, (__int64)&v183, 1, a5, a6) )
      {
        v51 = *a1;
        v176.m128i_i8[4] &= ~1u;
        v176.m128i_i32[0] = 0;
        v19 = sub_85F440(v51, (_DWORD *)v7, *(_QWORD *)(v7 + 8), (__int64)&v183, (__int64)&v176, 0);
        if ( (_BYTE)v19 )
          sub_825510(a1[1], (unsigned int *)&v176);
        if ( v176.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v176);
      }
      v52 = (void *)v185[3];
      if ( (_QWORD *)v185[3] == &v185[5] )
        return v19;
LABEL_78:
      free(v52);
      return v19;
    }
    LOBYTE(v178[0]) |= 1u;
    LOBYTE(v185[0]) |= 1u;
    v181 = 0x800000000LL;
    v185[4] = 0x800000000LL;
    v88 = *a1;
    v176 = 0u;
    v177 = 0;
    v179 = 0;
    v180 = v182;
    v182[65] = 0;
    v183 = 0u;
    v184 = 0;
    v185[2] = 0;
    v185[3] = &v185[5];
    v186 = 0;
    v89 = *(_QWORD *)(v7 + 16);
    *(_QWORD *)&v174[8] = &v176;
    *(_QWORD *)v174 = v88;
    v174[16] = 0;
    v90 = sub_871080((__int64)v174, v89, (__int64 *)v14, (__int64)&v176, a5, a6);
    v94 = *a1;
    if ( !v90 )
    {
      if ( *(_DWORD *)(v94 + 48) )
      {
        v95 = sub_820420(*(unsigned __int8 *)(v94 + 962), *(unsigned __int8 *)(v94 + 963));
        v99 = *(__int64 **)(v96 + 24);
        *(_BYTE *)v99 |= v95;
        if ( v95 )
        {
          v100 = *(_QWORD *)(v154[0] + 24);
          v101 = *a1;
          *(_QWORD *)&v174[8] = &v183;
          v174[16] = 0;
          *(_QWORD *)v174 = v101;
          sub_871080((__int64)v174, v100, v99, v96, v97, v98);
        }
      }
      goto LABEL_166;
    }
    v121 = *(_QWORD *)(v154[0] + 24);
    *(_QWORD *)v174 = *a1;
    *(_QWORD *)&v174[8] = &v183;
    v174[16] = 0;
    v149 = sub_871080((__int64)v174, v121, v91, v94, v92, v93);
    if ( !v149 )
    {
LABEL_166:
      v19 = 0;
      goto LABEL_167;
    }
    LOBYTE(v122) = sub_820230(&v176, &v183);
    v19 = v122;
    if ( !(_BYTE)v122 )
    {
      if ( v184 | v177 )
      {
        sub_828330(*a1, v154[0], 110);
      }
      else
      {
        if ( v176.m128i_i64[0] )
        {
          v123 = nullptr;
          if ( (v176.m128i_i8[0] & 3) == 1 )
            v123 = (void *)(v176.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
        }
        else
        {
          v123 = nullptr;
        }
        v162 = v123;
        if ( !v183.m128i_i64[0] || (v183.m128i_i8[0] & 3) != 1 )
        {
          v169 = (unsigned __int64)a1;
          v165 = nullptr;
          v171 = &v183;
          v168 = &v176;
          v170 = v154;
          v172 = &v162;
          v173 = &v165;
LABEL_217:
          sub_83ADB0((__int64 *)&v168, 0x8DAu);
          goto LABEL_167;
        }
        v169 = (unsigned __int64)a1;
        v165 = (void *)(v183.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
        v168 = &v176;
        v170 = v154;
        v172 = &v162;
        v171 = &v183;
        v173 = &v165;
        if ( (v183.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) == 0 || !v123 )
          goto LABEL_217;
        if ( (unsigned __int8)sub_822B60(*a1, v176.m128i_i64, v183.m128i_i64) )
        {
          sub_83ADB0((__int64 *)&v168, 0x8AEu);
        }
        else
        {
          if ( (*(_WORD *)v162 & 0x1FF) != 0x80 || (*(_WORD *)v165 & 0x1FF) != 0x80 )
            goto LABEL_280;
          v141 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v162 + 3) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(*((_QWORD *)v162 + 3) + 16LL) & 4) != 0 )
            v141 = (_QWORD *)*v141;
          v142 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v165 + 3) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(*((_QWORD *)v165 + 3) + 16LL) & 4) != 0 )
            v142 = (_QWORD *)*v142;
          if ( v142 == v141 )
          {
            v143 = a1[1];
            v174[4] &= ~1u;
            *(_DWORD *)v174 = 13;
            *(__m128i *)&v174[8] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v162, (__m128i)(unsigned __int64)v165);
            sub_6A63E0(v143, (__int64)v174);
            if ( *(_DWORD *)v174 > 1u )
              sub_69F740((__int64)v174);
            v19 = v149;
          }
          else
          {
LABEL_280:
            sub_828330(*a1, v154[0], 110);
          }
        }
      }
LABEL_167:
      if ( (_QWORD *)v185[3] != &v185[5] )
        free((void *)v185[3]);
      v52 = v180;
      if ( v180 == v182 )
        return v19;
      goto LABEL_78;
    }
    if ( ((LOBYTE(v185[0]) | LOBYTE(v178[0])) & 1) == 0 )
    {
      if ( (*(__m128i *)v174 = _mm_load_si128(&v176),
            v138 = sub_69F240((__int64 *)v174),
            (unsigned int)v181 != (unsigned __int64)LODWORD(v185[4]))
        || (v139 = v178[0] & 8, (v178[0] & 8) != 0) && (unsigned int)v181 != (unsigned __int64)(v178[0] >> 4)
        || (v140 = sub_821780(v138, (__int64)v178, (__int64)v185, v174),
            v140 < (v139 == 0) + (unsigned __int64)(unsigned int)v181 - 1) )
      {
        sub_A2E240(*a1, v154[0], 2274, 0);
      }
    }
    v124 = v154[0];
    v125 = *(_QWORD *)(*(_QWORD *)(v154[0] + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v126 = *(_QWORD *)v125;
    if ( *(_BYTE *)(*(_QWORD *)v125 + 16LL) != 41 )
    {
      v127 = sub_B0D320(v126);
      v124 = v154[0];
      v126 = v127;
    }
    v128 = *(_QWORD *)(v126 + 32);
    v129 = *(_DWORD *)(v124 + 4);
    v155 = 0;
    v144 = v128;
    v19 = sub_81FCD0(*a1, v129, v128, &v155, 0);
    if ( !(_BYTE)v19 )
      goto LABEL_166;
    v130 = v155;
    if ( !v155 )
    {
      v137 = (unsigned __int8 **)sub_A2E130(*a1, v154[0], 2275, 0);
      if ( v137 )
        sub_8356A0(v137, v144, 8u);
      goto LABEL_166;
    }
    *(_DWORD *)&v174[8] = 65;
    sub_2585A50(v174, v177, 1);
    v158 = 0;
    v157 = *(_DWORD *)&v174[8];
    *(_DWORD *)&v174[8] = 65;
    v156 = *(void **)v174;
    sub_2585A50(v174, v184, 1);
    v131 = *(_DWORD *)&v174[8];
    v161 = 0;
    *(_DWORD *)&v174[8] = 65;
    v160 = v131;
    v159 = *(void **)v174;
    sub_2585A50(v174, v130, 1);
    v164 = 0;
    v132 = v158;
    v163 = *(_DWORD *)&v174[8];
    v162 = *(void **)v174;
    *(_DWORD *)&v174[8] = v157;
    if ( v157 > 0x40 )
      sub_2585B30(v174);
    else
      *(_QWORD *)v174 = v156;
    sub_25863C0(v174, &v159);
    BYTE4(v169) = v132;
    LODWORD(v169) = *(_DWORD *)&v174[8];
    v168 = *(void **)v174;
    if ( v132 )
    {
      sub_2588A50(v174, &v168, &v162, v133, &v168);
      v167 = 1;
    }
    else
    {
      sub_2588D90(v174, &v168, &v162);
      v167 = 0;
    }
    v166 = *(_DWORD *)&v174[8];
    v165 = *(void **)v174;
    if ( (unsigned int)v169 > 0x40 && v168 )
      operator delete[](v168);
    v134 = sub_70B280(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v154[0] + 8));
    v135 = v167;
    sub_25877E0(v174, &v165, v134);
    BYTE4(v169) = v135;
    LODWORD(v169) = *(_DWORD *)&v174[8];
    v168 = *(void **)v174;
    sub_831A30((__int64)v174, (__int64)&v168, 65);
    if ( *(_DWORD *)&v174[8] <= 0x40u )
    {
      if ( *(void **)v174 == v165 )
        goto LABEL_254;
      v136 = sub_82CA30(*a1, v154[0], (__int64)&v165, *(_QWORD *)(v154[0] + 8)) ^ 1;
    }
    else
    {
      if ( (unsigned __int8)sub_2586760(v174, &v165) )
        v136 = 0;
      else
        v136 = sub_82CA30(*a1, v154[0], (__int64)&v165, *(_QWORD *)(v154[0] + 8)) ^ 1;
      if ( *(_QWORD *)v174 )
        operator delete[](*(void **)v174);
    }
    if ( v136 )
    {
      v19 = 0;
      goto LABEL_238;
    }
LABEL_254:
    sub_822A10((__int64)&v168, a1[1]);
LABEL_238:
    if ( (unsigned int)v169 > 0x40 && v168 )
      operator delete[](v168);
    if ( v166 > 0x40 && v165 )
      operator delete[](v165);
    if ( v163 > 0x40 && v162 )
      operator delete[](v162);
    if ( v160 > 0x40 && v159 )
      operator delete[](v159);
    if ( v157 > 0x40 && v156 )
      operator delete[](v156);
    goto LABEL_167;
  }
LABEL_18:
  v22 = (int *)a1[1];
  v23 = v7;
  v24 = _mm_loadh_ps((const double *)a1);
  v25 = 1;
  v183.m128i_i64[0] = (__int64)&v184;
  v188 = v22;
  v187 = v24;
  v174[4] &= ~1u;
  v26 = sub_80F230(v23);
  *(_DWORD *)v174 = 0;
  memset(v185, 0, sizeof(v185));
  v27 = 0;
  v184 = v26;
  v28 = &v184;
  v183.m128i_i64[1] = 0x1000000001LL;
  v29 = 1;
  v175 = 0;
  while ( 1 )
  {
    v33 = (__int64)&v28[14 * v29 - 14];
    if ( v27 == 1 )
      break;
    if ( v27 == 2 )
    {
      v34 = *(_WORD **)v33;
      v176.m128i_i32[0] = 0;
      v176.m128i_i8[4] &= ~1u;
      LOBYTE(v181) = 0;
      sub_6A0310(v176.m128i_i32, (int *)v174);
      v35 = v175;
      v175 = 0;
      LOBYTE(v181) = v35;
      v36 = (v34[1] >> 3) & 0x3F;
      if ( v36 == 32 )
      {
        if ( v35 )
          goto LABEL_32;
        sub_6A63E0((__int64)v174, (__int64)&v176);
        goto LABEL_69;
      }
      v37 = (unsigned int)(v36 - 19);
      if ( (unsigned int)v37 > 1 )
      {
        v38 = *(_BYTE *)(v33 + 64) | v35;
        if ( v38 )
        {
LABEL_32:
          v38 = 1;
LABEL_33:
          v175 = v38;
          --v183.m128i_i32[2];
          v39 = v183.m128i_i64[0] + 112LL * v183.m128i_u32[2];
          v40 = *(_QWORD *)(v39 + 80);
          if ( v40 )
          {
            *(__m128i *)*(_QWORD *)(v40 + 24) = _mm_loadu_si128((const __m128i *)(v39 + 88));
            *(_DWORD *)(*(_QWORD *)(v39 + 80) + 948LL) = *(_DWORD *)(v39 + 104);
          }
          if ( *(_DWORD *)(v39 + 8) > 1u )
            sub_69F740(v39 + 8);
          if ( v176.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v176);
LABEL_24:
          v25 = v183.m128i_u32[2];
          goto LABEL_25;
        }
        v64 = *(_DWORD *)(v33 + 8);
        if ( (unsigned int)(v36 - 5) > 1 )
        {
LABEL_103:
          if ( v64 == 2 && v176.m128i_i32[0] == 2 )
          {
            v106 = sub_B101F0(*(_QWORD *)(*((_QWORD *)v34 + 1) & 0xFFFFFFFFFFFFFFF0LL));
            v166 = sub_70B280(*(_QWORD *)(v187.m128_u64[1] + 16), *((_QWORD *)v34 + 1));
            if ( v166 > 0x40 )
              sub_2585A50(&v165, 0, 0);
            else
              v165 = nullptr;
            v167 = v106;
            LODWORD(v169) = v177;
            if ( (unsigned int)v177 > 0x40 )
              sub_2585B30(&v168);
            else
              v168 = (void *)v176.m128i_i64[1];
            BYTE4(v169) = BYTE4(v177);
            v107 = sub_83E020(
                     v187.m128_i64[1],
                     (__int64)v34,
                     v33 + 16,
                     (v34[1] >> 3) & 0x3F,
                     (__int64)&v168,
                     (__int64)&v165);
            if ( (unsigned int)v169 > 0x40 && v168 )
            {
              v148 = v107;
              operator delete[](v168);
              v107 = v148;
            }
            if ( v107 )
              sub_822A10((__int64)&v165, (__int64)v174);
            else
              v38 = 1;
            if ( v166 > 0x40 && v165 )
              operator delete[](v165);
            goto LABEL_33;
          }
LABEL_105:
          sub_828330(*(_QWORD *)v187.m128_u64[0], (__int64)v34, 110);
          goto LABEL_32;
        }
        if ( v64 != 7 )
        {
          if ( v36 == 5 && v176.m128i_i32[0] == 7 )
          {
            if ( v64 == 2 )
            {
              v38 = 0;
              sub_6A63E0((__int64)v174, (__int64)&v176);
              sub_821D60((__int64)v174, v33 + 16, 0);
              goto LABEL_33;
            }
            goto LABEL_105;
          }
          goto LABEL_103;
        }
        if ( v176.m128i_i32[0] == 2 )
        {
          sub_6A63E0((__int64)v174, v33 + 8);
          v38 = 0;
          sub_821D60((__int64)v174, (__int64)&v176.m128i_i64[1], ((v34[1] >> 3) & 0x3F) == 6);
          goto LABEL_33;
        }
        if ( v36 == 5 || v176.m128i_i32[0] != 7 )
          goto LABEL_105;
        if ( *(_QWORD *)sub_6A34F0(v33 + 8) || *(_QWORD *)sub_6A34F0((__int64)&v176) )
          goto LABEL_32;
        v82 = sub_6A34D0(v33 + 8);
        if ( v82 )
        {
          v83 = 0;
          if ( (v82 & 3) == 1 )
            v83 = v82 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          v83 = 0;
        }
        v84 = sub_6A34D0((__int64)&v176);
        if ( !v84 )
          goto LABEL_32;
        if ( (v84 & 3) != 1 )
          goto LABEL_32;
        v85 = v84 & 0xFFFFFFFFFFFFFFFCLL;
        if ( !v83 || !v85 || (*(_WORD *)v83 & 0x1FF) != 0x80 || (*(_WORD *)v85 & 0x1FF) != 0x80 )
          goto LABEL_32;
        v86 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 + 24) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(*(_QWORD *)(v83 + 24) + 16LL) & 4) != 0 )
          v86 = (_QWORD *)*v86;
        v87 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v85 + 24) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(*(_QWORD *)(v85 + 24) + 16LL) & 4) != 0 )
          v87 = (_QWORD *)*v87;
        if ( v87 != v86 )
          goto LABEL_32;
        BYTE4(v168) &= ~1u;
        v169 = v83;
        LODWORD(v168) = 13;
        v170 = (__int64 *)v85;
        sub_6A01B0((__int64)v174, (__int64)&v168);
        if ( (unsigned int)v168 > 1 )
        {
          v38 = 0;
          sub_69F740((__int64)&v168);
          goto LABEL_33;
        }
LABEL_69:
        v38 = 0;
        goto LABEL_33;
      }
      v65 = sub_81FDC0(v33 + 8, &v165, v37);
      v67 = sub_81FDC0((__int64)&v176, &v168, v66);
      v38 = v67;
      if ( !v65 )
      {
        if ( v67 )
        {
          if ( (_BYTE)v168 == (((v34[1] >> 3) & 0x3F) == 20) )
          {
            v38 = 0;
            sub_8236A0(*(_QWORD *)v187.m128_u64[0], (void *)(unsigned __int8)v168, *((_QWORD *)v34 + 1), (__int64)v174);
          }
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      if ( !v67 )
      {
        v38 = v65;
        goto LABEL_33;
      }
      if ( ((v34[1] >> 3) & 0x3F) == 0x14 )
      {
        v68 = 1;
        if ( (_BYTE)v165 )
          goto LABEL_111;
      }
      else
      {
        v68 = 0;
        if ( !(_BYTE)v165 )
        {
LABEL_111:
          v38 = 0;
          sub_8236A0(*(_QWORD *)v187.m128_u64[0], (void *)v68, *((_QWORD *)v34 + 1), (__int64)v174);
          goto LABEL_33;
        }
      }
      v68 = (unsigned __int8)v168;
      goto LABEL_111;
    }
    v30 = *(_QWORD *)v33;
    if ( ((**(_WORD **)v33 + 393) & 0x1FFu) <= 1 )
    {
      v62 = (*(_WORD *)(v30 + 2) >> 3) & 0x3F;
      if ( v62 == 32 || (unsigned int)(v62 - 19) <= 1 )
        goto LABEL_174;
      if ( (*(_BYTE *)(v30 + 1) & 6) == 0 )
      {
        v146 = *(_QWORD *)v33;
        if ( sub_83CAB0(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL))
          && sub_83CAB0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v102 = sub_83CAB0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v146 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
          v30 = v146;
          if ( v102 )
          {
            v29 = v183.m128i_u32[2];
            v25 = v183.m128i_u32[2];
LABEL_174:
            *(_DWORD *)(v33 + 72) = 1;
            v147 = sub_80F230(*(_QWORD *)(v30 + 16));
            v103 = v29;
            v104 = v29 + 1;
            if ( v183.m128i_u32[3] < v104 )
            {
              v108 = sub_25D5F70(&v183, &v184, v104, 112, &v176);
              v109 = (__int64 *)v183.m128i_i64[0];
              v105 = v108;
              v110 = (_QWORD *)v183.m128i_i64[0];
              v111 = v108 + 8;
              v151 = v183.m128i_i64[0] + 112LL * v183.m128i_u32[2];
              if ( v183.m128i_i64[0] != v151 )
              {
                do
                {
                  v112 = *v110;
                  v113 = v111;
                  v114 = (int *)(v110 + 1);
                  v111 += 112;
                  v110 += 14;
                  *(_QWORD *)(v111 - 120) = v112;
                  sub_69F700(v113, v114);
                  *(_BYTE *)(v111 - 56) = *((_BYTE *)v110 - 48);
                  v115 = *((_DWORD *)v110 - 10);
                  *(_WORD *)(v111 - 32) = 0;
                  *(_QWORD *)(v111 - 24) = 0;
                  *(_DWORD *)(v111 - 48) = v115;
                  v116 = *(v110 - 4);
                  v117 = _mm_loadu_si128((const __m128i *)(v110 - 3));
                  *(v110 - 4) = 0;
                  *(_QWORD *)(v111 - 40) = v116;
                  LODWORD(v116) = *((_DWORD *)v110 - 2);
                  *(__m128i *)(v111 - 32) = v117;
                  *(_DWORD *)(v111 - 16) = v116;
                }
                while ( (_QWORD *)v151 != v110 );
                v109 = (__int64 *)v183.m128i_i64[0];
                v118 = v183.m128i_i64[0] + 112LL * v183.m128i_u32[2];
                if ( v183.m128i_i64[0] != v118 )
                {
                  do
                  {
                    v119 = *(_QWORD *)(v118 - 32);
                    v118 -= 112;
                    if ( v119 )
                    {
                      *(__m128i *)*(_QWORD *)(v119 + 24) = _mm_loadu_si128((const __m128i *)(v118 + 88));
                      *(_DWORD *)(*(_QWORD *)(v118 + 80) + 948LL) = *(_DWORD *)(v118 + 104);
                    }
                    if ( *(_DWORD *)(v118 + 8) > 1u )
                    {
                      v152 = v109;
                      sub_69F740(v118 + 8);
                      v109 = v152;
                    }
                  }
                  while ( v109 != (__int64 *)v118 );
                  v109 = (__int64 *)v183.m128i_i64[0];
                }
              }
              v120 = v176.m128i_i32[0];
              if ( v109 != &v184 )
                free(v109);
              v183.m128i_i64[0] = v105;
              v103 = v183.m128i_u32[2];
              v183.m128i_i32[3] = v120;
            }
            else
            {
              v105 = v183.m128i_i64[0];
            }
            if ( 112 * v103 != 112 * v104 )
            {
              memset(
                (void *)(v105 + 112 * v103),
                0,
                112 * (((0xDB6DB6DB6DB6DB7LL * ((112 * v104 - 112 - 112 * v103) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 1));
              v105 = v183.m128i_i64[0];
            }
            v183.m128i_i32[2] = v25 + 1;
            *(_QWORD *)(v105 + 112LL * (unsigned int)v104 - 112) = v147;
            goto LABEL_47;
          }
        }
        v30 = *(_QWORD *)v33;
      }
    }
    v175 = sub_856400((__int64)v174, v187.m128_i64[1], v30) ^ 1;
    if ( v175 )
    {
      v176.m128i_i8[4] &= ~1u;
      v176.m128i_i32[0] = 0;
      sub_6A01B0((__int64)v174, (__int64)&v176);
      if ( v176.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v176);
    }
    --v183.m128i_i32[2];
    v31 = v183.m128i_i64[0] + 112LL * v183.m128i_u32[2];
    v32 = *(_QWORD *)(v31 + 80);
    if ( v32 )
    {
LABEL_22:
      *(__m128i *)*(_QWORD *)(v32 + 24) = _mm_loadu_si128((const __m128i *)(v31 + 88));
      *(_DWORD *)(*(_QWORD *)(v31 + 80) + 948LL) = *(_DWORD *)(v31 + 104);
    }
LABEL_23:
    if ( *(_DWORD *)(v31 + 8) <= 1u )
      goto LABEL_24;
    sub_69F740(v31 + 8);
    v25 = v183.m128i_u32[2];
LABEL_25:
    if ( !v25 )
      goto LABEL_48;
LABEL_26:
    v29 = v25;
    v28 = (__int64 *)v183.m128i_i64[0];
    v27 = *(_DWORD *)(v183.m128i_i64[0] + 112LL * v25 - 40);
  }
  v41 = *(_QWORD *)v33;
  v42 = (*(_WORD *)(*(_QWORD *)v33 + 2LL) >> 3) & 0x3F;
  if ( v42 == 32 )
  {
    if ( !v175 )
      goto LABEL_42;
    v49 = v187.m128_u64[1];
    **(_BYTE **)(v187.m128_u64[1] + 24) = 1;
    if ( *(_DWORD *)(v49 + 964) > 2u || *(_BYTE *)(v49 + 962) || *(_BYTE *)(v49 + 963) )
      goto LABEL_42;
    goto LABEL_64;
  }
  if ( (unsigned int)(v42 - 19) > 1 )
  {
    if ( !v175 )
      goto LABEL_42;
    if ( *(_DWORD *)(v187.m128_u64[1] + 48) )
    {
      v54 = *(_BYTE **)(v187.m128_u64[1] + 24);
      if ( *(_BYTE *)(v187.m128_u64[1] + 962) )
      {
        *v54 = 1;
        goto LABEL_42;
      }
      v81 = *(_BYTE *)(v187.m128_u64[1] + 963);
      *v54 |= v81;
      if ( v81 )
        goto LABEL_42;
      goto LABEL_64;
    }
LABEL_65:
    v183.m128i_i32[2] = v25 - 1;
    v31 = (__int64)&v28[14 * v25 - 14];
    v32 = *(_QWORD *)(v31 + 80);
    if ( v32 )
      goto LABEL_22;
    goto LABEL_23;
  }
  if ( !v175 && (unsigned __int8)sub_81FDC0((__int64)v174, &v176, (__int64)v28) )
  {
    if ( v176.m128i_i8[0] != (((*(_WORD *)(v41 + 2) >> 3) & 0x3F) == 20) )
      goto LABEL_42;
    sub_8236A0(*(_QWORD *)v187.m128_u64[0], (void *)v176.m128i_u8[0], *(_QWORD *)(v41 + 8), (__int64)v174);
    v25 = v183.m128i_u32[2];
    v28 = (__int64 *)v183.m128i_i64[0];
    goto LABEL_65;
  }
  v55 = v187.m128_u64[1];
  v175 = 1;
  **(_BYTE **)(v187.m128_u64[1] + 24) = 1;
  if ( *(_DWORD *)(v55 + 964) <= 2u && !*(_BYTE *)(v55 + 962) && !*(_BYTE *)(v55 + 963) )
  {
LABEL_64:
    v25 = v183.m128i_u32[2];
    v28 = (__int64 *)v183.m128i_i64[0];
    goto LABEL_65;
  }
  v56 = v187.m128_u64[1];
  v57 = *(__int16 **)(v187.m128_u64[1] + 24);
  v58 = *(_DWORD *)(v187.m128_u64[1] + 948);
  v59 = *((_QWORD *)v57 + 1);
  v60 = *v57;
  *((_QWORD *)v57 + 1) = 0;
  *(_DWORD *)(v56 + 948) = *(_DWORD *)(v56 + 40) + 1;
  v61 = *(_QWORD *)(v33 + 80);
  if ( v61 )
  {
    *(__m128i *)*(_QWORD *)(v61 + 24) = _mm_loadu_si128((const __m128i *)(v33 + 88));
    *(_DWORD *)(*(_QWORD *)(v33 + 80) + 948LL) = *(_DWORD *)(v33 + 104);
  }
  *(_QWORD *)(v33 + 80) = v56;
  *(_WORD *)(v33 + 88) = v60;
  *(_QWORD *)(v33 + 96) = v59;
  *(_DWORD *)(v33 + 104) = v58;
LABEL_42:
  sub_6A0310((int *)(v33 + 8), (int *)v174);
  *(_BYTE *)(v33 + 64) = v175;
  v175 = 0;
  *(_DWORD *)(v33 + 72) = 2;
  v145 = sub_80F230(*(_QWORD *)(v41 + 24));
  v43 = v183.m128i_u32[2];
  v44 = v183.m128i_u32[2] + 1LL;
  v150 = v183.m128i_i32[2];
  if ( v183.m128i_u32[3] < v44 )
  {
    v45 = sub_25D5F70(&v183, &v184, v183.m128i_u32[2] + 1LL, 112, &v176);
    v69 = 112LL * v183.m128i_u32[2];
    v70 = v183.m128i_i64[0] + v69;
    if ( v183.m128i_i64[0] != v183.m128i_i64[0] + v69 )
    {
      v71 = (_QWORD *)v183.m128i_i64[0];
      v72 = v45 + 8;
      do
      {
        v73 = v72;
        v72 += 112;
        *(_QWORD *)(v72 - 120) = *v71;
        v74 = (int *)(v71 + 1);
        v71 += 14;
        sub_69F700(v73, v74);
        *(_BYTE *)(v72 - 56) = *((_BYTE *)v71 - 48);
        LODWORD(v74) = *((_DWORD *)v71 - 10);
        *(_WORD *)(v72 - 32) = 0;
        *(_QWORD *)(v72 - 24) = 0;
        *(_DWORD *)(v72 - 48) = (_DWORD)v74;
        v75 = *(v71 - 4);
        v76 = _mm_loadu_si128((const __m128i *)(v71 - 3));
        *(v71 - 4) = 0;
        *(_QWORD *)(v72 - 40) = v75;
        LODWORD(v75) = *((_DWORD *)v71 - 2);
        *(__m128i *)(v72 - 32) = v76;
        *(_DWORD *)(v72 - 16) = v75;
      }
      while ( (_QWORD *)v70 != v71 );
      v77 = v183.m128i_i64[0];
      v78 = 112LL * v183.m128i_u32[2];
      v70 = v183.m128i_i64[0] + v78;
      if ( v183.m128i_i64[0] != v183.m128i_i64[0] + v78 )
      {
        do
        {
          v79 = *(_QWORD *)(v70 - 32);
          v70 -= 112;
          if ( v79 )
          {
            *(__m128i *)*(_QWORD *)(v79 + 24) = _mm_loadu_si128((const __m128i *)(v70 + 88));
            *(_DWORD *)(*(_QWORD *)(v70 + 80) + 948LL) = *(_DWORD *)(v70 + 104);
          }
          if ( *(_DWORD *)(v70 + 8) > 1u )
            sub_69F740(v70 + 8);
        }
        while ( v77 != v70 );
        v70 = v183.m128i_i64[0];
      }
    }
    v80 = v176.m128i_i32[0];
    if ( (__int64 *)v70 != &v184 )
    {
      v153 = v176.m128i_i32[0];
      free((void *)v70);
      v80 = v153;
    }
    v183.m128i_i32[3] = v80;
    v43 = v183.m128i_u32[2];
    v183.m128i_i64[0] = v45;
  }
  else
  {
    v45 = v183.m128i_i64[0];
  }
  if ( 112 * v43 != 112 * v44 )
  {
    memset(
      (void *)(v45 + 112 * v43),
      0,
      112 * (((0xDB6DB6DB6DB6DB7LL * ((112 * v44 - 112 - 112 * v43) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 1));
    v45 = v183.m128i_i64[0];
  }
  v183.m128i_i32[2] = v150 + 1;
  *(_QWORD *)(v45 + 112LL * (unsigned int)v44 - 112) = v145;
LABEL_47:
  v25 = v183.m128i_u32[2];
  *(_DWORD *)(v183.m128i_i64[0] + 112LL * v183.m128i_u32[2] - 40) = 0;
  if ( v25 )
    goto LABEL_26;
LABEL_48:
  v19 = 0;
  if ( v175 )
  {
    if ( *(_DWORD *)v174 <= 1u )
      goto LABEL_50;
LABEL_87:
    sub_69F740((__int64)v174);
  }
  else
  {
    v19 = 1;
    sub_6A0310(v188, (int *)v174);
    if ( *(_DWORD *)v174 > 1u )
      goto LABEL_87;
  }
LABEL_50:
  v46 = v183.m128i_i64[0];
  v47 = v183.m128i_i64[0] + 112LL * v183.m128i_u32[2];
  if ( v183.m128i_i64[0] != v47 )
  {
    do
    {
      v48 = *(_QWORD *)(v47 - 32);
      v47 -= 112;
      if ( v48 )
      {
        *(__m128i *)*(_QWORD *)(v48 + 24) = _mm_loadu_si128((const __m128i *)(v47 + 88));
        *(_DWORD *)(*(_QWORD *)(v47 + 80) + 948LL) = *(_DWORD *)(v47 + 104);
      }
      if ( *(_DWORD *)(v47 + 8) > 1u )
        sub_69F740(v47 + 8);
    }
    while ( v46 != v47 );
    v47 = v183.m128i_i64[0];
  }
  if ( (__int64 *)v47 != &v184 )
    free((void *)v47);
  return v19;
}

