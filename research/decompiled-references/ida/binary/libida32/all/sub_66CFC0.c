__int64 __fastcall sub_66CFC0(__m128i *a1, unsigned int a2, const char *a3, _QWORD *a4)
{
  const char *v4; // r13
  unsigned __int32 v6; // ebx
  _QWORD *v8; // r15
  unsigned int v9; // r14d
  __int64 result; // rax
  const char *v11; // rdi
  __int64 v12; // rdx
  unsigned __int32 v13; // ecx
  char v14; // si
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // r13
  char *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i v29; // xmm0
  unsigned __int64 v30; // rax
  char *v31; // rax
  char v32; // di
  char v33; // al
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  unsigned __int16 v37; // ax
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  unsigned __int16 v41; // ax
  __int64 v42; // rax
  char *v43; // r13
  _QWORD *v44; // rax
  char *v45; // r10
  char byte; // al
  unsigned __int32 v47; // r13d
  char v48; // al
  int v49; // eax
  char *v50; // rax
  int insn; // eax
  char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  int v55; // r8d
  int v56; // r9d
  char *v57; // r10
  __int32 v58; // esi
  char v59; // al
  __int64 v60; // rdx
  const char *v61; // rax
  int v62; // eax
  char *v63; // rax
  char v64; // al
  unsigned __int32 first_dref_from; // eax
  char v66; // al
  int v67; // esi
  char *v68; // rdx
  int v69; // ecx
  char v70; // al
  unsigned int sreg; // eax
  unsigned int group_selector; // eax
  int v73; // eax
  char v74; // al
  char *v75; // rax
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // rcx
  __int64 v78; // rax
  __m128i v79; // xmm0
  __m128i v80; // xmm2
  __int64 v81; // rax
  _QWORD *v82; // rcx
  __int64 v83; // rax
  void *v84; // rdi
  char v85; // al
  int v86; // eax
  char v87; // al
  int v88; // edx
  char *v89; // rax
  __int32 v90; // r9d
  char *v91; // rax
  __int32 v92; // r9d
  char *v93; // r8
  __int64 v94; // rax
  char *v95; // r13
  __int64 v96; // rdx
  void *v97; // rsi
  _DWORD *v98; // rsi
  char *v99; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // r13
  __m128i v102; // xmm0
  __m128i v103; // xmm1
  __int64 v104; // rcx
  __int64 v105; // rsi
  __int64 v106; // rax
  void *v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // rax
  unsigned __int64 v110; // rsi
  unsigned int v111; // eax
  __int64 v112; // rax
  _DWORD *v113; // rsi
  char *v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  int v119; // edx
  char v120; // al
  char *v121; // rcx
  unsigned __int32 first_fcref_from; // eax
  __int64 v123; // r8
  __int64 v124; // rdi
  char *v125; // rax
  __int64 v126; // rax
  __m128i v127; // xmm0
  __int64 v128; // rdx
  unsigned __int64 v129; // rax
  char *v130; // rax
  __int64 v131; // r13
  __int64 wide_byte; // rax
  char v133; // al
  char *v134; // rcx
  int i; // edx
  char *v136; // rax
  int v137; // eax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // r9
  char *v141; // rsi
  char *v142; // rdi
  _WORD *v143; // rdx
  _WORD *v144; // rax
  unsigned int v145; // eax
  _BYTE *v146; // rsi
  __int64 v147; // rax
  __int64 v148; // r10
  unsigned __int64 v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rax
  _BYTE *v152; // rsi
  unsigned __int64 v153; // rdx
  __int64 v154; // rsi
  __int64 v155; // rdx
  __int64 v156; // r11
  __int32 v157; // r9d
  void *v158; // r10
  __int64 v159; // rcx
  const __m128i *v160; // rax
  __m128i v161; // xmm0
  unsigned int dword; // eax
  const char *v164; // rdi
  _QWORD *v165; // rax
  int v166; // eax
  __int64 v167; // rax
  _QWORD *v168; // rcx
  char v169; // [rsp+0h] [rbp-B08h]
  int v170[2]; // [rsp+8h] [rbp-B00h]
  int v171[2]; // [rsp+8h] [rbp-B00h]
  int v172[2]; // [rsp+8h] [rbp-B00h]
  void *v173; // [rsp+10h] [rbp-AF8h]
  char *v174; // [rsp+18h] [rbp-AF0h]
  __m128i n; // [rsp+20h] [rbp-AE8h] BYREF
  __int64 v176; // [rsp+30h] [rbp-AD8h]
  int v177; // [rsp+3Ch] [rbp-ACCh]
  _QWORD *v178; // [rsp+40h] [rbp-AC8h]
  void *v179; // [rsp+48h] [rbp-AC0h]
  _QWORD *v180; // [rsp+50h] [rbp-AB8h]
  _QWORD *v181; // [rsp+58h] [rbp-AB0h]
  __m128i s2; // [rsp+60h] [rbp-AA8h] BYREF
  char v183; // [rsp+72h] [rbp-A96h]
  char v184; // [rsp+73h] [rbp-A95h]
  int v185; // [rsp+74h] [rbp-A94h]
  __int64 v186; // [rsp+78h] [rbp-A90h]
  __m128i v187; // [rsp+80h] [rbp-A88h] BYREF
  __int64 v188; // [rsp+90h] [rbp-A78h]
  __int64 v189; // [rsp+98h] [rbp-A70h]
  char v190; // [rsp+A6h] [rbp-A62h] BYREF
  char v191; // [rsp+A7h] [rbp-A61h] BYREF
  unsigned int v192; // [rsp+A8h] [rbp-A60h] BYREF
  int v193; // [rsp+ACh] [rbp-A5Ch] BYREF
  void *v194; // [rsp+B0h] [rbp-A58h] BYREF
  __int128 v195; // [rsp+B8h] [rbp-A50h]
  void *v196; // [rsp+D0h] [rbp-A38h] BYREF
  __int128 v197; // [rsp+D8h] [rbp-A30h]
  void *v198; // [rsp+F0h] [rbp-A18h] BYREF
  __int128 v199; // [rsp+F8h] [rbp-A10h]
  void *v200; // [rsp+110h] [rbp-9F8h] BYREF
  __int128 v201; // [rsp+118h] [rbp-9F0h]
  _BYTE s1[24]; // [rsp+130h] [rbp-9D8h] BYREF
  _BYTE *v203; // [rsp+148h] [rbp-9C0h]
  _BYTE *v204; // [rsp+150h] [rbp-9B8h]
  __int64 v205; // [rsp+158h] [rbp-9B0h]
  _DWORD v206[2]; // [rsp+160h] [rbp-9A8h] BYREF
  __int64 v207; // [rsp+168h] [rbp-9A0h]
  __int64 v208; // [rsp+170h] [rbp-998h]
  __int16 v209; // [rsp+178h] [rbp-990h]
  __m128i si128; // [rsp+17Ch] [rbp-98Ch]
  __int64 v211; // [rsp+190h] [rbp-978h]
  int v212; // [rsp+198h] [rbp-970h]
  __int64 v213; // [rsp+1A0h] [rbp-968h]
  int v214; // [rsp+1A8h] [rbp-960h]
  __int64 v215; // [rsp+1B0h] [rbp-958h]
  int v216; // [rsp+1B8h] [rbp-950h]
  __int64 v217; // [rsp+1C0h] [rbp-948h]
  int v218; // [rsp+1C8h] [rbp-940h]
  __int64 v219; // [rsp+1D0h] [rbp-938h]
  _QWORD v220[3]; // [rsp+1E0h] [rbp-928h] BYREF
  char v221; // [rsp+1F8h] [rbp-910h] BYREF
  char v222[8]; // [rsp+2B8h] [rbp-850h] BYREF
  char v223[1024]; // [rsp+2C0h] [rbp-848h] BYREF
  char v224[1032]; // [rsp+6C0h] [rbp-448h] BYREF
  unsigned __int64 v225; // [rsp+AC8h] [rbp-40h]

  v225 = __readfsqword(0x28u);
  if ( a4[5] > 0x3E8u )
    return 0;
  v4 = a3;
  if ( !a3 )
    return 0;
  v6 = a2;
  v8 = *(_QWORD **)(a1->m128i_i64[0] + 1584);
  if ( !(unsigned __int8)sub_3BB2F0((__int64)a1, a2) )
    return 0;
  v194 = nullptr;
  v195 = 0;
  v9 = sub_66A120((__int64 *)&v194, v4);
  v173 = v194;
  if ( !(_BYTE)v9 )
  {
    if ( (debug & 4) != 0 )
      sub_383DA0();
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  if ( (debug & 4) != 0 )
  {
    if ( !(_QWORD)v195 )
      sub_383DA0();
    sub_383DA0();
  }
  if ( (_QWORD)v195 )
    v11 = (const char *)v194;
  else
    v11 = haystack;
  v174 = (char *)sub_7F3A90(v11);
  if ( !v174 )
    goto LABEL_6;
  sub_5FF200((__int64)v11);
  v179 = nullptr;
  v177 = -1;
  *((_QWORD *)v174 + 11) = sub_5FF320;
  v178 = a4 + 1;
  v183 = 0;
  n.m128i_i8[0] = 0;
  v180 = v8 + 1;
LABEL_19:
  v12 = a4[2];
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v12 + 32);
      v14 = 0;
      v15 = *(_QWORD *)(v12 + 24);
      if ( v6 < v13 )
      {
        v15 = *(_QWORD *)(v12 + 16);
        v14 = v9;
      }
      if ( !v15 )
        break;
      v12 = v15;
    }
    if ( !v14 )
      goto LABEL_26;
  }
  else
  {
    v12 = (__int64)v178;
  }
  if ( v12 == a4[3] )
    goto LABEL_27;
  *(_QWORD *)v171 = v12;
  v27 = std::_Rb_tree_decrement();
  v12 = *(_QWORD *)v171;
  v13 = *(_DWORD *)(v27 + 32);
LABEL_26:
  if ( v13 >= v6 )
  {
    v9 = 0;
    goto LABEL_39;
  }
LABEL_27:
  n.m128i_i64[1] = v12;
  *(_DWORD *)(operator new(0x28u) + 32) = v6;
  std::_Rb_tree_insert_and_rebalance();
  ++a4[5];
  v206[0] = v6;
  v208 = 0xFFFFFFFFLL;
  v206[1] = -1;
  v207 = 512;
  v209 = 0;
  v211 = 0;
  v212 = 0;
  v213 = 0;
  v214 = 0;
  v215 = 0;
  v216 = 0;
  v217 = 0;
  v218 = 0;
  v219 = 0;
  v192 = -1;
  v193 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23836A0);
  if ( sub_375980(0x37u, v206, &v192, &v193) == 1 )
  {
    v111 = sub_66CFC0(a1, v192, v4, a4);
    if ( (_BYTE)v111 )
    {
      v9 = v111;
      goto LABEL_39;
    }
  }
  v16 = sub_7F1870(a1->m128i_i64[0], v174, v6, &v190);
  v17 = v16;
  if ( v16 )
  {
    sub_66AE40(a1, (__int64)v174, v6, 0, v16, 1);
    v18 = *(_QWORD *)(v17 + 16);
    if ( (int)v18 <= 0 )
    {
LABEL_189:
      *(_QWORD *)v172 = *(_QWORD *)(v17 + 16);
      if ( *(_DWORD *)(get_ph(a1, v174) + 4) != 13 || (unsigned __int8)getinf_flag(3, 4) || v172[0] <= 0 )
      {
LABEL_49:
        sub_66AD40(v8);
        if ( v177 != -1 )
          sub_669210((int)a1, v177, v179);
        goto LABEL_39;
      }
      v19 = *(_QWORD *)(v17 + 8);
      v108 = v19 + 32LL * (unsigned int)(v172[0] - 1) + 32;
      while ( *(_DWORD *)(v19 + 24) != 1 )
      {
        v19 += 32;
        if ( v19 == v108 )
          goto LABEL_49;
      }
    }
    else
    {
      v19 = *(_QWORD *)(v17 + 8);
      v20 = v19 + 32LL * (unsigned int)(v18 - 1) + 32;
      while ( *(_DWORD *)(v19 + 24) )
      {
        v19 += 32;
        if ( v20 == v19 )
          goto LABEL_189;
      }
    }
    v21 = *(char **)v19;
    if ( !*(_QWORD *)v19 )
      goto LABEL_49;
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = strchr(v21, 58);
        if ( v22 )
          break;
        if ( v21[1] == 61 )
        {
          *(_QWORD *)v170 = 0;
LABEL_44:
          switch ( *v21 )
          {
            case 'M':
              v183 = v9;
              goto LABEL_53;
            case 'S':
            case 's':
LABEL_53:
              if ( (unsigned int)qsscanf((int)v21 + 2, (int)"%x", (int)&v200, v24, v25, v26, v169) != 1 )
                goto LABEL_48;
              v6 += (unsigned int)v200;
              if ( *v21 != 115 )
                goto LABEL_55;
              n.m128i_i32[0] = v6;
              if ( !(unsigned int)sub_55E700(a1, v6, nullptr) )
                goto LABEL_48;
              *(_DWORD *)s1 = -1;
              s1[4] = 0;
              sub_3DC190(a1, (__int64)s1, n.m128i_u32[0]);
              v6 = *(_DWORD *)s1;
LABEL_55:
              v31 = strchr(v21, 47);
              v4 = v31;
              if ( !v31 )
                goto LABEL_48;
              if ( v31[1] == 45 && !v31[2] )
              {
                sub_66AD40(v8);
                n.m128i_i8[0] = v9;
                goto LABEL_19;
              }
              v203 = &s1[8];
              *(_DWORD *)&s1[8] = 0;
              *(_QWORD *)&s1[16] = 0;
              v204 = &s1[8];
              v205 = 0;
              sub_66CFC0(a1, v6, v31 + 1, s1);
              sub_668CF0(*(_QWORD **)&s1[16]);
              goto LABEL_48;
            case 'a':
              if ( !(unsigned __int16)sub_614FB0(a1->m128i_i64[0], 7, v23, v24, v25, v26) )
              {
                qsscanf((_DWORD)v21 + 2, (int)"%x", (int)s1, v38, v39, v40, v169);
                setinf(7, *(unsigned __int16 *)s1);
                v41 = getinf(7);
                sub_668AE0(v224, (__int64)&unk_2B0D700, 9, v41);
                sub_623150((__int64)"Application type: %s", v224);
              }
              goto LABEL_48;
            case 'c':
              v32 = v21[2];
              if ( v32 != 103 )
                goto LABEL_60;
              if ( sub_615160(a1->m128i_i64[0], 3, 4, v24, v25, v26)
                && (unsigned int)sub_614FB0(a1->m128i_i64[0], 5, v115, v116, v117, v118) == 11 )
              {
                v124 = a1->m128i_i64[0];
                *(_OWORD *)s1 = 0;
                sub_6141A0(v124, 98, s1, 0x10u, v123);
                s1[0] = 1;
                set_compiler();
              }
              else
              {
                v32 = v21[2];
LABEL_60:
                v33 = sub_5D2940(v32);
                *(_OWORD *)s1 = 0;
                s1[0] = v33;
                set_compiler();
              }
              goto LABEL_48;
            case 'i':
              v6 = sub_66C9D0(v6, v21 + 2);
              goto LABEL_48;
            case 'l':
              sub_79B440(*(_QWORD *)(a1->m128i_i64[0] + 1480) + 2556LL, a1->m128i_i64[0], 0xFFFFFFFFLL, v21 + 2, 0, 83);
              goto LABEL_48;
            case 'm':
              v42 = a1->m128i_i64[0];
              v184 = 0;
              v43 = v21 + 2;
              v196 = nullptr;
              s2.m128i_i64[1] = v42;
              v44 = *(_QWORD **)(v42 + 1584);
              v198 = nullptr;
              v181 = v44;
              v200 = nullptr;
              v179 = nullptr;
              v177 = -1;
              v185 = 0;
              n.m128i_i32[0] = -1;
              LODWORD(v176) = 0;
              v197 = 0;
              v199 = 0;
              v201 = 0;
LABEL_68:
              if ( (debug & 4) != 0 )
                sub_383DA0();
              return result;
            case 'o':
              if ( !(unsigned __int16)sub_614FB0(a1->m128i_i64[0], 6, v23, v24, v25, v26) )
              {
                qsscanf((_DWORD)v21 + 2, (int)"%x", (int)s1, v34, v35, v36, v169);
                setinf(6, *(unsigned __int16 *)s1);
                v37 = getinf(6);
                sub_668AE0(v223, (__int64)&unk_2B0D7A0, 4, v37);
                sub_623150((__int64)"OS type         : %s", v223);
              }
              goto LABEL_48;
            default:
              goto LABEL_48;
          }
          v45 = v43 + 1;
          switch ( *v43 )
          {
            case 0:
              goto LABEL_81;
            case 33:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              insn = create_insn(v6);
              v45 = (char *)n.m128i_i64[1];
              if ( insn )
                goto LABEL_88;
              goto LABEL_76;
            case 35:
              v64 = v43[1];
              if ( v64 != 50 && v64 != 52 )
                goto LABEL_79;
              create_data(v6);
              sub_3FDA70(s2.m128i_i64[1], v6);
              v43 += 2;
              goto LABEL_68;
            case 36:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              v63 = strchr(v43 + 1, 36);
              if ( !v63 )
                goto LABEL_79;
              *v63 = 0;
              v43 = v63 + 1;
              v6 = sub_66C9D0(v6, (const char *)n.m128i_i64[1]);
              goto LABEL_68;
            case 37:
              v184 = v9;
              goto LABEL_71;
            case 38:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              create_xrefs_from(v6);
              first_dref_from = get_first_dref_from(v6);
              v45 = (char *)n.m128i_i64[1];
              v6 = first_dref_from;
              if ( first_dref_from != -1 )
                goto LABEL_88;
              goto LABEL_76;
            case 40:
              if ( n.m128i_i32[0] != -1 )
                goto LABEL_79;
              n.m128i_i32[0] = v6;
              goto LABEL_88;
            case 41:
              v6 = n.m128i_i32[0];
              LODWORD(v176) = 1;
              ++v43;
              n.m128i_i32[0] = -1;
              goto LABEL_68;
            case 42:
              n.m128i_i32[2] = v43[1] - 48;
              if ( n.m128i_i32[2] > 1u )
                goto LABEL_79;
              v70 = v43[2];
              if ( v70 == 99 )
              {
                v220[0] = -1;
                v220[2] = 0;
                v220[1] = 0xFFFFFFFFLL;
                v136 = &v221;
                do
                {
                  *(_WORD *)v136 = 0;
                  v136 += 24;
                  *((_WORD *)v136 - 11) = 0;
                  *((_WORD *)v136 - 10) = 0;
                  *((_DWORD *)v136 - 1) = 0;
                  *((_WORD *)v136 - 9) = 0;
                  *((_QWORD *)v136 - 2) = 0;
                  *((_DWORD *)v136 - 2) = 0;
                }
                while ( v136 != v222 );
                s2.m128i_i64[0] = (__int64)(v43 + 3);
                v137 = decode_insn(v220, v6, v222, 0, 0, v26);
                v45 = (char *)s2.m128i_i64[0];
                if ( v137 <= 0 )
                  goto LABEL_76;
                map_code_ea(v220, v6, n.m128i_u32[2]);
                v45 = (char *)s2.m128i_i64[0];
LABEL_143:
                s2.m128i_i64[0] = (__int64)v45;
                get_default_reftype(v6);
                v74 = op_offset(v6, n.m128i_i32[2]);
                v45 = (char *)s2.m128i_i64[0];
                if ( v74 )
                  goto LABEL_88;
                goto LABEL_76;
              }
              if ( v70 != 100 )
                goto LABEL_79;
              s2.m128i_i64[0] = (__int64)(v43 + 3);
              sreg = get_sreg(v6, *(unsigned int *)(s2.m128i_i64[1] + 844));
              group_selector = get_group_selector(sreg);
              v73 = sel2para(group_selector);
              v45 = (char *)s2.m128i_i64[0];
              if ( v73 != -1 )
                goto LABEL_143;
              v166 = calc_offset_base(v6, n.m128i_u32[2]);
              v45 = (char *)s2.m128i_i64[0];
              if ( v166 != -1 )
                goto LABEL_143;
              goto LABEL_76;
            case 43:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              v43 = sub_668A00(v43 + 1, s1);
              if ( (char *)n.m128i_i64[1] == v43 )
                goto LABEL_79;
              v6 += *(_DWORD *)s1;
              goto LABEL_68;
            case 45:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              v43 = sub_668A00(v43 + 1, s1);
              if ( (char *)n.m128i_i64[1] == v43 )
                goto LABEL_79;
              v6 -= *(_DWORD *)s1;
              goto LABEL_68;
            case 47:
              v66 = v43[1];
              if ( v66 == 47 )
              {
                v66 = v43[2];
                v45 = v43 + 2;
                if ( !v66 )
                {
                  v177 = v6;
                  v43 += 2;
                  v179 = "_main";
                  goto LABEL_68;
                }
                v67 = 0;
                goto LABEL_127;
              }
              if ( v66 )
              {
                v67 = 1;
LABEL_127:
                v68 = v45;
                v69 = 0;
                while ( 1 )
                {
                  if ( v66 == 41 )
                  {
                    if ( !v69 )
                    {
LABEL_222:
                      *v68 = 0;
                      v125 = "_main";
                      v43 = v68 + 1;
                      if ( *v45 )
                        v125 = v45;
                      v179 = v125;
LABEL_133:
                      v177 = v6;
                      if ( v67 )
                        goto LABEL_81;
                      goto LABEL_68;
                    }
                    --v69;
                  }
                  else
                  {
                    if ( v66 == 59 )
                      goto LABEL_222;
                    v69 += v66 == 40;
                  }
                  v66 = *++v68;
                  if ( !v66 )
                  {
                    v179 = v45;
                    v43 = v68;
                    goto LABEL_133;
                  }
                }
              }
              v177 = v6;
              v179 = "_main";
              goto LABEL_81;
            case 63:
              v85 = v43[1];
              if ( v85 == 63 )
              {
                v86 = v176;
                v45 = v43 + 2;
LABEL_155:
                if ( v86 )
                  goto LABEL_238;
                goto LABEL_156;
              }
              if ( v85 == 47 )
              {
                v86 = v185;
                v45 = v43 + 2;
                goto LABEL_155;
              }
              v130 = sub_668A00(v43 + 1, s1);
              v131 = *(int *)s1;
              n.m128i_i64[1] = (__int64)v130;
              if ( *(_DWORD *)s1 > 0xFFu )
                goto LABEL_79;
              wide_byte = get_wide_byte(v6);
              v45 = (char *)n.m128i_i64[1];
              if ( wide_byte == v131 )
              {
LABEL_238:
                v133 = *v45;
                v134 = v45;
                for ( i = 0; v133; v133 = *++v134 )
                {
                  if ( v133 == 41 )
                  {
                    if ( !i )
                      break;
                    --i;
                  }
                  else
                  {
                    if ( v133 == 59 )
                    {
                      *v134 = 0;
                      break;
                    }
                    i += v133 == 40;
                  }
                }
LABEL_88:
                v43 = v45;
                goto LABEL_68;
              }
LABEL_156:
              v87 = *v45;
              if ( *v45 )
              {
                v88 = 0;
                do
                {
                  if ( v87 == 41 )
                  {
                    if ( !v88 )
                      break;
                    --v88;
                  }
                  else
                  {
                    if ( v87 == 59 )
                    {
                      v43 = v45 + 1;
                      goto LABEL_68;
                    }
                    v88 += v87 == 40;
                  }
                  v87 = *++v45;
                }
                while ( v87 );
              }
LABEL_76:
              v6 = n.m128i_i32[0];
              if ( n.m128i_i32[0] != -1 )
              {
                v50 = strchr(v45, 41);
                if ( v50 )
                {
                  n.m128i_i32[0] = -1;
                  v43 = v50 + 1;
                  LODWORD(v176) = 0;
                  goto LABEL_68;
                }
LABEL_79:
                sub_375400();
              }
              v6 = -1;
LABEL_81:
              if ( v200 )
              {
                *(_QWORD *)&v201 = 0;
                qfree(v200);
              }
              if ( v198 )
              {
                *(_QWORD *)&v199 = 0;
                qfree(v198);
              }
              if ( v196 )
              {
                *(_QWORD *)&v197 = 0;
                qfree(v196);
              }
              goto LABEL_48;
            case 64:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              v75 = strchr(v43 + 1, 64);
              if ( !v75 )
                goto LABEL_79;
              *v75 = 0;
              v43 = v75 + 1;
              v187.m128i_i64[1] = n.m128i_i64[1];
              memset(s1, 0, sizeof(s1));
              v186 = (__int64)(v181 + 1);
              s2.m128i_i64[0] = strlen((const char *)n.m128i_i64[1]);
              v187.m128i_i64[0] = s2.m128i_i64[0] + 1;
              n.m128i_i64[1] = (__int64)s1;
              *(_QWORD *)s1 = qvector_reserve(s1, 0, s2.m128i_i64[0] + 1, 1);
              *(_QWORD *)&s1[8] = v187.m128i_i64[0];
              memmove(*(void **)s1, (const void *)v187.m128i_i64[1], s2.m128i_u64[0]);
              *(_BYTE *)(*(_QWORD *)s1 + s2.m128i_i64[0]) = 0;
              v76 = v181[1];
              v77 = v181[3];
              if ( n.m128i_i64[1] < v76 || n.m128i_i64[1] >= v76 + 24 * v77 )
              {
                v126 = v181[2];
                if ( v77 < v126 + 1 )
                {
                  v76 = qvector_reserve(v186, v76, v126 + 1, 24);
                  v165 = v181;
                  v181[1] = v76;
                  v126 = v165[2];
                }
                v127 = _mm_loadu_si128((const __m128i *)&s1[8]);
                v128 = *(_QWORD *)s1;
                *(_QWORD *)&s1[16] = 0;
                v129 = v76 + 24 * v126;
                *(__m128i *)(v129 + 8) = v127;
                *(_QWORD *)v129 = v128;
                ++v181[2];
                goto LABEL_68;
              }
              v78 = *(_QWORD *)s1;
              v79 = _mm_loadl_epi64((const __m128i *)&s1[8]);
              memset(s1, 0, sizeof(s1));
              v80 = _mm_loadl_epi64((const __m128i *)&s1[16]);
              n.m128i_i64[1] = v78;
              v81 = v181[2];
              if ( v77 < v81 + 1 )
              {
                v187.m128i_i64[0] = v80.m128i_i64[0];
                s2.m128i_i64[0] = v79.m128i_i64[0];
                v167 = qvector_reserve(v186, v181[1], v81 + 1, 24);
                v168 = v181;
                v79 = _mm_loadl_epi64(&s2);
                v80 = _mm_loadl_epi64(&v187);
                v181[1] = v167;
                v81 = v168[2];
              }
              v82 = v181;
              v83 = v181[1] + 24 * v81;
              *(_QWORD *)v83 = n.m128i_i64[1];
              *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64(v79, v80);
              v84 = *(void **)s1;
              ++v82[2];
              if ( !v84 )
                goto LABEL_68;
              goto LABEL_151;
            case 91:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              v52 = strchr(v43 + 1, 93);
              if ( !v52 )
                goto LABEL_79;
              *v52 = 0;
              if ( v43[1] )
              {
                v177 = v6;
                v43 = v52 + 1;
                v179 = (void *)n.m128i_i64[1];
              }
              else
              {
                v177 = v6;
                v43 = v52 + 1;
                v179 = "WINMAIN";
              }
              goto LABEL_68;
            case 94:
LABEL_71:
              if ( !*(_DWORD *)(s2.m128i_i64[1] + 764) )
              {
                n.m128i_i64[1] = (__int64)(v43 + 1);
                byte = get_byte(v6);
                v47 = v6 + (byte == 14 || byte == -112);
                v48 = get_byte(v47);
                v45 = (char *)n.m128i_i64[1];
                v6 = v47 + (v48 == 14 || v48 == -112);
              }
              n.m128i_i64[1] = (__int64)v45;
              v49 = create_insn(v6);
              v45 = (char *)n.m128i_i64[1];
              if ( v49 )
              {
                first_fcref_from = get_first_fcref_from(v6);
                if ( first_fcref_from != -1 )
                {
                  v6 = first_fcref_from;
                  v43 = (char *)n.m128i_i64[1];
                  goto LABEL_68;
                }
                del_items(v6, 0, 1, 0);
                v45 = (char *)n.m128i_i64[1];
                if ( v184 )
                {
LABEL_230:
                  v184 = 0;
                  v43 = v45;
                  goto LABEL_68;
                }
              }
              else if ( v184 )
              {
                goto LABEL_230;
              }
              v184 = 0;
              goto LABEL_76;
            case 95:
              n.m128i_i64[1] = (__int64)(v43 + 1);
              v89 = sub_668A00(v43 + 1, s1);
              if ( (char *)n.m128i_i64[1] == v89 )
                goto LABEL_79;
              if ( *v89 != 95 )
                goto LABEL_79;
              n.m128i_i32[2] = *(_DWORD *)s1;
              if ( *(int *)s1 <= 0 )
                goto LABEL_79;
              v43 = v89 + 1;
              v90 = 0;
              v187.m128i_i64[0] = (__int64)&v196;
              break;
            case 126:
              v187.m128i_i64[0] = (__int64)(v43 + 1);
              v53 = strchr(v43 + 1, 47);
              if ( !v53 )
                goto LABEL_79;
              *v53 = 0;
              s2.m128i_i64[0] = (__int64)(v53 + 1);
              n.m128i_i64[1] = (__int64)v53;
              v54 = strchr(v53 + 1, 126);
              v187.m128i_i64[1] = (__int64)v54;
              if ( !v54 )
                goto LABEL_79;
              *v54 = 0;
              v57 = (char *)v187.m128i_i64[0];
              v58 = v6;
              v186 = (__int64)(v54 + 1);
              v59 = *(_BYTE *)(n.m128i_i64[1] + 1);
              if ( v59 == 43 )
              {
                qsscanf(n.m128i_i32[2] + 2, (int)"%4x", (int)s1, n.m128i_i32[2], v55, v56, v169);
                v57 = (char *)v187.m128i_i64[0];
                v58 = v6 - *(_DWORD *)s1;
                s2.m128i_i64[0] = n.m128i_i64[1] + 6;
                v59 = *(_BYTE *)(n.m128i_i64[1] + 6);
              }
              if ( !v43[1] )
              {
                v57 = "-";
                if ( v181[2] )
                {
                  v60 = v181[1];
                  if ( *(_QWORD *)(v60 + 8) )
                  {
                    v57 = *(char **)v60;
                    if ( !*(_QWORD *)v60 || !*v57 )
                      v57 = "-";
                  }
                }
              }
              if ( !v59 )
              {
                v61 = "WINMAIN";
                if ( v179 )
                  v61 = (const char *)v179;
                s2.m128i_i64[0] = (__int64)v61;
              }
              if ( (debug & 4) != 0 )
              {
                v187.m128i_i64[0] = (__int64)v57;
                n.m128i_i32[2] = v58;
                sub_383DA0();
              }
              if ( *v57 != 45 || v57[1] )
                apply_idasgn_to(v57);
              memset(s1, 0, sizeof(s1));
              n.m128i_i64[1] = (__int64)s1;
              get_ea_name(s1, v6, 0, 0);
              if ( (debug & 4) != 0 )
                sub_383DA0();
              if ( *(_QWORD *)&s1[8] > 1u )
              {
                v62 = strcmp(*(const char **)s1, (const char *)s2.m128i_i64[0]);
                v185 |= v62 == 0;
                if ( !v62 )
                  goto LABEL_111;
              }
              if ( !*(_DWORD *)(s2.m128i_i64[1] + 764)
                && (unsigned __int8)get_byte(v6) == 0xFF
                && (unsigned __int8)get_byte(v6 + 1) == 37 )
              {
                dword = get_dword(v6 + 2);
                if ( get_ea_name(n.m128i_i64[1], dword, 0, 0) > 0 )
                {
                  v164 = haystack;
                  if ( *(_QWORD *)&s1[8] )
                    v164 = *(const char **)s1;
                  if ( !strcmp(v164, (const char *)s2.m128i_i64[0]) )
                  {
LABEL_111:
                    if ( (debug & 4) != 0 )
                      sub_383DA0();
                    if ( *(_QWORD *)s1 )
                    {
                      *(_QWORD *)&s1[8] = 0;
                      qfree(*(void **)s1);
                    }
                    v43 = (char *)v186;
                    goto LABEL_68;
                  }
                }
              }
              v45 = (char *)v186;
              v119 = 0;
              v120 = *(_BYTE *)(v187.m128i_i64[1] + 1);
              if ( !v120 )
                goto LABEL_215;
              v121 = (char *)v186;
              while ( 2 )
              {
                if ( v120 != 41 )
                {
                  if ( v120 == 59 )
                  {
                    v84 = *(void **)s1;
                    v43 = v121 + 1;
                    if ( *(_QWORD *)s1 )
                    {
LABEL_151:
                      *(_QWORD *)&s1[8] = 0;
                      qfree(v84);
                    }
                    goto LABEL_68;
                  }
                  v119 += v120 == 40;
LABEL_213:
                  v120 = *++v121;
                  if ( !v120 )
                    goto LABEL_214;
                  continue;
                }
                break;
              }
              if ( v119 )
              {
                --v119;
                goto LABEL_213;
              }
LABEL_214:
              v45 = v121;
LABEL_215:
              if ( *(_QWORD *)s1 )
              {
                n.m128i_i64[1] = (__int64)v45;
                *(_QWORD *)&s1[8] = 0;
                qfree(*(void **)s1);
                v45 = (char *)n.m128i_i64[1];
              }
              goto LABEL_76;
            default:
              goto LABEL_76;
          }
          while ( 2 )
          {
            if ( *v43 == 43 )
            {
              v97 = v196;
              v95 = v43 + 1;
              v96 = v197 + 1;
              if ( *((_QWORD *)&v197 + 1) < (unsigned __int64)(v197 + 1) )
              {
                s2.m128i_i32[0] = 0;
LABEL_176:
                LODWORD(v186) = v90;
                v196 = (void *)qvector_reserve(v187.m128i_i64[0], v97, v96, 4);
                v98 = (char *)v196 + 4 * v197;
                *(_QWORD *)&v197 = v197 + 1;
                v99 = sub_668A00(v95, v98);
                v92 = v186;
                v93 = v99;
                if ( s2.m128i_i32[0] )
                  goto LABEL_168;
              }
              else
              {
                v113 = (char *)v196 + 4 * v197;
                s2.m128i_i32[0] = v90;
                *(_QWORD *)&v197 = v197 + 1;
                v114 = sub_668A00(v95, v113);
                v92 = s2.m128i_i32[0];
                v93 = v114;
              }
            }
            else
            {
              if ( *v43 != 45 )
                goto LABEL_79;
              v94 = v197;
              v95 = v43 + 1;
              v96 = v197 + 1;
              if ( *((_QWORD *)&v197 + 1) < (unsigned __int64)(v197 + 1) )
              {
                s2.m128i_i32[0] = 1;
                v97 = v196;
                goto LABEL_176;
              }
              s2.m128i_i32[0] = v90;
              *(_QWORD *)&v197 = v197 + 1;
              v91 = sub_668A00(v95, (_DWORD *)v196 + v94);
              v92 = s2.m128i_i32[0];
              v93 = v91;
LABEL_168:
              *((_DWORD *)v196 + v197 - 1) = -*((_DWORD *)v196 + v197 - 1);
            }
            if ( v95 == v93 || *v93 != 95 )
              goto LABEL_79;
            v43 = v93 + 1;
            v90 = v92 + 1;
            if ( n.m128i_i32[2] == v90 )
            {
              s2.m128i_i64[0] = 0;
              v138 = n.m128i_i32[2];
              n.m128i_i64[1] = 0;
              v189 = v138;
              v186 = 4 * v138;
              do
              {
                v139 = v199;
                v140 = v6 + *(_DWORD *)((char *)v196 + n.m128i_i64[1]);
                if ( *((_QWORD *)&v199 + 1) < (unsigned __int64)(v199 + 1) )
                {
                  v187.m128i_i64[1] = *((_QWORD *)&v199 + 1);
                  v187.m128i_i32[0] = v140;
                  v154 = qvector_reserve(&v198, 0, v199 + 1, 216);
                  v155 = v154;
                  v156 = *((_QWORD *)&v199 + 1);
                  v157 = v187.m128i_i32[0];
                  *((_QWORD *)&v199 + 1) = v187.m128i_i64[1];
                  v158 = v198;
                  v159 = v199 - 1;
                  v160 = (const __m128i *)v198;
                  if ( (__int64)v199 - 1 >= 0 )
                  {
                    do
                    {
                      v161 = _mm_loadu_si128(v160);
                      v155 += 216;
                      v160 = (const __m128i *)((char *)v160 + 216);
                      *(__m128i *)(v155 - 216) = v161;
                      *(__m128i *)(v155 - 200) = _mm_loadu_si128((const __m128i *)((char *)v160 - 200));
                      *(__m128i *)(v155 - 184) = _mm_loadu_si128((const __m128i *)((char *)v160 - 184));
                      *(__m128i *)(v155 - 168) = _mm_loadu_si128((const __m128i *)((char *)v160 - 168));
                      *(__m128i *)(v155 - 152) = _mm_loadu_si128((const __m128i *)((char *)v160 - 152));
                      *(__m128i *)(v155 - 136) = _mm_loadu_si128((const __m128i *)((char *)v160 - 136));
                      *(__m128i *)(v155 - 120) = _mm_loadu_si128((const __m128i *)((char *)v160 - 120));
                      *(__m128i *)(v155 - 104) = _mm_loadu_si128((const __m128i *)((char *)v160 - 104));
                      *(__m128i *)(v155 - 88) = _mm_loadu_si128((const __m128i *)((char *)v160 - 88));
                      *(__m128i *)(v155 - 72) = _mm_loadu_si128((const __m128i *)((char *)v160 - 72));
                      *(__m128i *)(v155 - 56) = _mm_loadu_si128((const __m128i *)((char *)v160 - 56));
                      *(__m128i *)(v155 - 40) = _mm_loadu_si128((const __m128i *)((char *)v160 - 40));
                      *(__m128i *)(v155 - 24) = _mm_loadu_si128((const __m128i *)((char *)v160 - 24));
                      *(_QWORD *)(v155 - 8) = v160[-1].m128i_i64[1];
                    }
                    while ( v159-- != 0 );
                  }
                  v188 = v156;
                  v187.m128i_i32[2] = v157;
                  v187.m128i_i64[0] = v154;
                  qfree(v158);
                  v141 = (char *)v187.m128i_i64[0];
                  v140 = v187.m128i_u32[2];
                  v139 = v199;
                  v198 = (void *)v187.m128i_i64[0];
                  *((_QWORD *)&v199 + 1) = v188;
                }
                else
                {
                  v141 = (char *)v198;
                }
                v142 = &v141[216 * v139];
                *((_QWORD *)v142 + 2) = 0;
                v143 = v142 + 216;
                *(_QWORD *)v142 = -1;
                *((_QWORD *)v142 + 1) = 0xFFFFFFFFLL;
                v144 = v142 + 24;
                do
                {
                  *v144 = 0;
                  v144 += 12;
                  *(v144 - 11) = 0;
                  *(v144 - 10) = 0;
                  *((_DWORD *)v144 - 1) = 0;
                  *(v144 - 9) = 0;
                  *((_QWORD *)v144 - 2) = 0;
                  *((_DWORD *)v144 - 2) = 0;
                }
                while ( v143 != v144 );
                *(_QWORD *)&v199 = v199 + 1;
                if ( (unsigned int)decode_insn(v142, (unsigned int)v140, v143, 0, v93, v140) )
                {
                  v145 = has_insn_feature(*(unsigned __int16 *)((char *)v198 + s2.m128i_i64[0] + 12), 2);
                  v191 = v145;
                  v26 = v145;
                  v146 = v200;
                  v147 = v201;
                  v148 = v201;
                  v149 = v201 + 1;
                  if ( &v191 < v200 || &v191 >= (char *)v200 + *((_QWORD *)&v201 + 1) )
                  {
                    if ( *((_QWORD *)&v201 + 1) < v149 )
                    {
                      v187.m128i_i8[0] = v26;
                      v200 = (void *)qvector_reserve(&v200, v200, v149, 1);
                      v148 = v201;
                      v146 = v200;
                      v26 = v187.m128i_u8[0];
                    }
                    v146[v148] = v26;
                  }
                  else
                  {
                    if ( *((_QWORD *)&v201 + 1) < v149 )
                    {
                      v187.m128i_i8[0] = v26;
                      v200 = (void *)qvector_reserve(&v200, v200, v149, 1);
                      v146 = v200;
                      v26 = v187.m128i_u8[0];
                      v147 = v201;
                    }
                    v146[v147] = v26;
                  }
                }
                else
                {
                  v151 = v201;
                  v152 = v200;
                  v191 = 0;
                  v26 = v201;
                  v153 = v201 + 1;
                  if ( &v191 < v200 || &v191 >= (char *)v200 + *((_QWORD *)&v201 + 1) )
                  {
                    if ( *((_QWORD *)&v201 + 1) < v153 )
                    {
                      v200 = (void *)qvector_reserve(&v200, v200, v153, 1);
                      v26 = v201;
                      v152 = v200;
                    }
                    v152[v26] = 0;
                  }
                  else
                  {
                    if ( *((_QWORD *)&v201 + 1) < v153 )
                    {
                      v200 = (void *)qvector_reserve(&v200, v200, v153, 1);
                      v152 = v200;
                      v151 = v201;
                    }
                    v152[v151] = 0;
                  }
                }
                n.m128i_i64[1] += 4;
                *(_QWORD *)&v201 = v201 + 1;
                s2.m128i_i64[0] += 216;
              }
              while ( n.m128i_i64[1] != v186 );
              v150 = 0;
              do
              {
                if ( *((_BYTE *)v200 + v150) )
                  v6 += *((_DWORD *)v196 + v150);
                ++v150;
              }
              while ( v150 != v189 );
              goto LABEL_68;
            }
            continue;
          }
        }
        if ( !*v21 )
          goto LABEL_49;
        *(_QWORD *)v170 = 0;
LABEL_182:
        memset(s1, 0, sizeof(s1));
        n.m128i_i64[0] = strlen(v21);
        v176 = n.m128i_i64[0] + 1;
        n.m128i_i64[1] = (__int64)s1;
        *(_QWORD *)s1 = qvector_reserve(s1, 0, n.m128i_i64[0] + 1, 1);
        *(_QWORD *)&s1[8] = v176;
        memmove(*(void **)s1, v21, n.m128i_u64[0]);
        *(_BYTE *)(*(_QWORD *)s1 + n.m128i_i64[0]) = 0;
        v110 = v8[1];
        v100 = v8[3];
        if ( n.m128i_i64[1] < v110 || n.m128i_i64[1] >= v110 + 24 * v100 )
        {
          v28 = v8[2];
          if ( v100 < v28 + 1 )
          {
            v109 = qvector_reserve(v180, v110, v28 + 1, 24);
            v8[1] = v109;
            v110 = v109;
            v28 = v8[2];
          }
          v29 = _mm_loadu_si128((const __m128i *)&s1[8]);
          *(_QWORD *)&s1[16] = 0;
          v30 = v110 + 24 * v28;
          *(_QWORD *)v30 = *(_QWORD *)s1;
          *(__m128i *)(v30 + 8) = v29;
          ++v8[2];
        }
        else
        {
          v101 = *(_QWORD *)s1;
          v102 = _mm_loadl_epi64((const __m128i *)&s1[8]);
          memset(s1, 0, sizeof(s1));
          v103 = _mm_loadl_epi64((const __m128i *)&s1[16]);
          v104 = v8[2];
          v105 = v8[1];
          if ( v100 < v104 + 1 )
          {
            n.m128i_i64[1] = v103.m128i_i64[0];
            n.m128i_i64[0] = v102.m128i_i64[0];
            v112 = qvector_reserve(v180, v105, v104 + 1, 24);
            v8[1] = v112;
            v104 = v8[2];
            v105 = v112;
            v103 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
            v102 = _mm_loadl_epi64(&n);
          }
          v106 = v105 + 24 * v104;
          *(_QWORD *)v106 = v101;
          *(__m128i *)(v106 + 8) = _mm_unpacklo_epi64(v102, v103);
          v107 = *(void **)s1;
          ++v8[2];
          if ( v107 )
          {
            *(_QWORD *)&s1[8] = 0;
            qfree(v107);
          }
        }
LABEL_48:
        v21 = *(char **)v170;
        if ( !*(_QWORD *)v170 )
          goto LABEL_49;
      }
      *v22 = 0;
      v24 = (__int64)(v22 + 1);
      *(_QWORD *)v170 = v22 + 1;
      if ( v21[1] == 61 )
        goto LABEL_44;
      if ( *v21 )
        goto LABEL_182;
      v21 = v22 + 1;
    }
  }
  if ( v183 )
  {
    sub_66AD40(v8);
    if ( v177 != -1 )
      sub_669210((int)a1, v177, v179);
  }
  v9 = n.m128i_u8[0];
LABEL_39:
  free_idasgn(v174);
LABEL_7:
  if ( v173 )
    qfree(v173);
  return v9;
}

