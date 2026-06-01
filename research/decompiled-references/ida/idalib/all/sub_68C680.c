__int64 __fastcall sub_68C680(__m128i *a1, unsigned __int64 a2, const char *a3, _QWORD *a4)
{
  const char *v4; // r13
  unsigned __int64 v6; // rbx
  _QWORD *v8; // r15
  unsigned int v9; // r14d
  __int64 result; // rax
  const char *v11; // rdi
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // si
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  char *v22; // r13
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm0
  unsigned __int64 v31; // rax
  char *v32; // rax
  char v33; // di
  char v34; // al
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  unsigned __int16 v38; // ax
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  unsigned __int16 v42; // ax
  __int64 v43; // rax
  char *v44; // r13
  _QWORD *v45; // rax
  char *v46; // r10
  __int64 first_dref_from; // rax
  char *v48; // rax
  char byte; // al
  unsigned __int64 v50; // r13
  char v51; // al
  int v52; // eax
  int insn; // eax
  char *v54; // rax
  char *v55; // rax
  int v56; // r8d
  int v57; // r9d
  char *v58; // r10
  unsigned __int64 v59; // rsi
  char v60; // al
  __int64 v61; // rdx
  const char *v62; // rax
  int v63; // eax
  char *v64; // rax
  __int32 v65; // r9d
  char *v66; // rax
  __int32 v67; // r9d
  __int64 v68; // rax
  char *v69; // r13
  __int64 v70; // rdx
  void *v71; // rsi
  _DWORD *v72; // rsi
  char *v73; // rax
  char v74; // al
  char v75; // al
  int v76; // esi
  char *v77; // rdx
  int v78; // ecx
  int v79; // eax
  char v80; // al
  __int64 sreg; // rax
  __int64 group_selector; // rax
  __int64 v83; // rax
  int v84; // r13d
  unsigned __int8 default_reftype; // al
  char v86; // al
  char *v87; // rax
  unsigned __int64 v88; // rsi
  unsigned __int64 v89; // rcx
  __int64 v90; // rax
  __m128i v91; // xmm0
  __m128i v92; // xmm2
  __int64 v93; // rax
  _QWORD *v94; // rsi
  __int64 v95; // rax
  void *v96; // rdi
  char v97; // al
  int v98; // eax
  char v99; // al
  int v100; // edx
  char *v101; // rax
  unsigned __int64 v102; // rdx
  __int64 v103; // r13
  __m128i v104; // xmm0
  __m128i v105; // xmm1
  __int64 v106; // rcx
  __int64 v107; // rsi
  __int64 v108; // rax
  void *v109; // rdi
  __int64 v110; // rdx
  __int64 v111; // rax
  unsigned __int64 v112; // rsi
  unsigned int v113; // eax
  __int64 v114; // rax
  _DWORD *v115; // rsi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  int v120; // edx
  char v121; // al
  char *v122; // rcx
  __int64 first_fcref_from; // rax
  __int64 v124; // r8
  __int64 v125; // rdi
  char *v126; // rax
  __int64 v127; // rax
  __m128i v128; // xmm0
  __int64 v129; // rdx
  unsigned __int64 v130; // rax
  char *v131; // rax
  __int64 v132; // r13
  __int64 wide_byte; // rax
  char v134; // al
  char *v135; // rcx
  int i; // edx
  char *v137; // rax
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // r9
  __int64 v142; // r8
  __int64 v143; // rax
  char *v144; // r10
  char *v145; // rdi
  _WORD *v146; // rax
  _WORD *v147; // rdx
  unsigned int v148; // eax
  _BYTE *v149; // rsi
  __int64 v150; // rax
  __int64 v151; // r10
  unsigned __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rax
  _BYTE *v155; // rsi
  unsigned __int64 v156; // rdx
  __int64 v157; // r10
  __int64 v158; // rax
  void *v159; // r11
  __int64 v160; // r8
  char *v161; // rdx
  char *v162; // rax
  __int64 v163; // r9
  const void *v164; // rsi
  unsigned int dword; // eax
  const char *v167; // rdi
  _QWORD *v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  _QWORD *v171; // rcx
  bool v172; // [rsp+8h] [rbp-BB0h]
  int v173[2]; // [rsp+8h] [rbp-BB0h]
  int v174[2]; // [rsp+8h] [rbp-BB0h]
  int v175[2]; // [rsp+8h] [rbp-BB0h]
  void *v176; // [rsp+10h] [rbp-BA8h]
  char *v177; // [rsp+18h] [rbp-BA0h]
  __m128i n; // [rsp+20h] [rbp-B98h] BYREF
  __int64 v179; // [rsp+30h] [rbp-B88h]
  int v180[2]; // [rsp+38h] [rbp-B80h]
  _QWORD *v181; // [rsp+40h] [rbp-B78h]
  void *v182; // [rsp+48h] [rbp-B70h]
  _QWORD *v183; // [rsp+50h] [rbp-B68h]
  _QWORD *v184; // [rsp+58h] [rbp-B60h]
  __m128i s2; // [rsp+60h] [rbp-B58h] BYREF
  char v186; // [rsp+72h] [rbp-B46h]
  char v187; // [rsp+73h] [rbp-B45h]
  int v188; // [rsp+74h] [rbp-B44h]
  __int64 v189; // [rsp+78h] [rbp-B40h]
  __m128i v190; // [rsp+80h] [rbp-B38h] BYREF
  __int64 v191; // [rsp+90h] [rbp-B28h]
  __int64 v192; // [rsp+98h] [rbp-B20h]
  char v193; // [rsp+AEh] [rbp-B0Ah] BYREF
  char v194; // [rsp+AFh] [rbp-B09h] BYREF
  __int64 v195; // [rsp+B0h] [rbp-B08h] BYREF
  __int64 v196; // [rsp+B8h] [rbp-B00h] BYREF
  void *v197; // [rsp+C0h] [rbp-AF8h] BYREF
  __int128 v198; // [rsp+C8h] [rbp-AF0h]
  void *v199; // [rsp+E0h] [rbp-AD8h] BYREF
  __int128 v200; // [rsp+E8h] [rbp-AD0h]
  void *v201; // [rsp+100h] [rbp-AB8h] BYREF
  __int128 v202; // [rsp+108h] [rbp-AB0h]
  void *v203; // [rsp+120h] [rbp-A98h] BYREF
  __int128 v204; // [rsp+128h] [rbp-A90h]
  _BYTE s1[24]; // [rsp+140h] [rbp-A78h] BYREF
  _BYTE *v206; // [rsp+158h] [rbp-A60h]
  _BYTE *v207; // [rsp+160h] [rbp-A58h]
  __int64 v208; // [rsp+168h] [rbp-A50h]
  _QWORD v209[5]; // [rsp+170h] [rbp-A48h] BYREF
  __int16 v210; // [rsp+198h] [rbp-A20h]
  __int128 v211; // [rsp+1A0h] [rbp-A18h]
  __int64 v212; // [rsp+1B0h] [rbp-A08h]
  __int64 v213; // [rsp+1B8h] [rbp-A00h]
  int v214; // [rsp+1C0h] [rbp-9F8h]
  __int64 v215; // [rsp+1C8h] [rbp-9F0h]
  int v216; // [rsp+1D0h] [rbp-9E8h]
  __int64 v217; // [rsp+1D8h] [rbp-9E0h]
  int v218; // [rsp+1E0h] [rbp-9D8h]
  __int64 v219; // [rsp+1E8h] [rbp-9D0h]
  int v220; // [rsp+1F0h] [rbp-9C8h]
  __int64 v221; // [rsp+1F8h] [rbp-9C0h]
  __int128 v222; // [rsp+200h] [rbp-9B8h] BYREF
  __int64 v223; // [rsp+210h] [rbp-9A8h]
  __int64 v224; // [rsp+218h] [rbp-9A0h]
  __int64 v225; // [rsp+220h] [rbp-998h]
  char v226; // [rsp+228h] [rbp-990h] BYREF
  char v227[8]; // [rsp+368h] [rbp-850h] BYREF
  char v228[1024]; // [rsp+370h] [rbp-848h] BYREF
  char v229[1032]; // [rsp+770h] [rbp-448h] BYREF
  unsigned __int64 v230; // [rsp+B78h] [rbp-40h]

  v230 = __readfsqword(0x28u);
  if ( a4[5] > 0x3E8u )
    return 0;
  v4 = a3;
  if ( !a3 )
    return 0;
  v6 = a2;
  v8 = *(_QWORD **)(a1->m128i_i64[0] + 1776);
  if ( !(unsigned __int8)sub_3C0260(a1, a2) )
    return 0;
  v197 = nullptr;
  v198 = 0;
  v9 = sub_689730((__int64 *)&v197, v4);
  v176 = v197;
  if ( !(_BYTE)v9 )
  {
    if ( (debug & 4) != 0 )
      sub_3879F0();
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  if ( (debug & 4) != 0 )
  {
    if ( !(_QWORD)v198 )
      sub_3879F0();
    sub_3879F0();
  }
  if ( (_QWORD)v198 )
    v11 = (const char *)v197;
  else
    v11 = haystack;
  v177 = (char *)sub_816DD0(v11);
  if ( !v177 )
    goto LABEL_6;
  sub_61B480((__int64)v11);
  v182 = nullptr;
  *(_QWORD *)v180 = -1;
  *((_QWORD *)v177 + 11) = sub_61B5A0;
  v181 = a4 + 1;
  v186 = 0;
  n.m128i_i8[0] = 0;
  v183 = v8 + 1;
LABEL_19:
  v12 = (_QWORD *)a4[2];
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = v12[4];
      v14 = 0;
      v15 = (_QWORD *)v12[3];
      if ( v6 < v13 )
      {
        v15 = (_QWORD *)v12[2];
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
    v12 = v181;
  }
  if ( v12 == (_QWORD *)a4[3] )
    goto LABEL_27;
  *(_QWORD *)v174 = v12;
  v28 = std::_Rb_tree_decrement(v12);
  v12 = *(_QWORD **)v174;
  v13 = *(_QWORD *)(v28 + 32);
LABEL_26:
  if ( v13 >= v6 )
  {
    v9 = 0;
    goto LABEL_41;
  }
LABEL_27:
  v172 = v9;
  if ( v12 != v181 )
    v172 = v6 < v12[4];
  n.m128i_i64[1] = (__int64)v12;
  v16 = operator new(0x28u);
  *(_QWORD *)(v16 + 32) = v6;
  std::_Rb_tree_insert_and_rebalance(v172, v16, n.m128i_i64[1], v181);
  ++a4[5];
  v209[0] = v6;
  v212 = 0xFFFFFFFFLL;
  v209[1] = -1;
  v209[2] = 512;
  v209[3] = -1;
  v209[4] = 0;
  v210 = 0;
  v213 = 0;
  v214 = 0;
  v215 = 0;
  v216 = 0;
  v217 = 0;
  v218 = 0;
  v219 = 0;
  v220 = 0;
  v221 = 0;
  v195 = -1;
  v196 = -1;
  v211 = 0;
  if ( sub_3792E0(0x37u, v209, &v195, &v196) == 1 )
  {
    v113 = sub_68C680(a1, v195, v4, a4);
    if ( (_BYTE)v113 )
    {
      v9 = v113;
      goto LABEL_41;
    }
  }
  v17 = (_QWORD *)sub_814BA0(a1->m128i_i64[0], v177, v6, &v193);
  v18 = v17;
  if ( v17 )
  {
    sub_68A440(a1, (__int64)v177, v6, 0, v17, 1);
    v19 = v18[2];
    if ( (int)v19 <= 0 )
    {
LABEL_191:
      *(_QWORD *)v175 = v18[2];
      if ( *(_DWORD *)(get_ph(a1, v177) + 4) != 13 || (unsigned __int8)getinf_flag(3, 4) || v175[0] <= 0 )
      {
LABEL_51:
        sub_68A350(v8);
        if ( *(_QWORD *)v180 != -1 )
          sub_6883F0((int)a1, v180[0], v182);
        goto LABEL_41;
      }
      v20 = v18[1];
      v110 = v20 + 32LL * (unsigned int)(v175[0] - 1) + 32;
      while ( *(_DWORD *)(v20 + 24) != 1 )
      {
        v20 += 32;
        if ( v20 == v110 )
          goto LABEL_51;
      }
    }
    else
    {
      v20 = v18[1];
      v21 = v20 + 32LL * (unsigned int)(v19 - 1) + 32;
      while ( *(_DWORD *)(v20 + 24) )
      {
        v20 += 32;
        if ( v21 == v20 )
          goto LABEL_191;
      }
    }
    v22 = *(char **)v20;
    if ( !*(_QWORD *)v20 )
      goto LABEL_51;
    while ( 1 )
    {
      while ( 1 )
      {
        v23 = strchr(v22, 58);
        if ( v23 )
          break;
        if ( v22[1] == 61 )
        {
          *(_QWORD *)v173 = 0;
LABEL_46:
          switch ( *v22 )
          {
            case 'M':
              v186 = v9;
              goto LABEL_55;
            case 'S':
            case 's':
LABEL_55:
              if ( (unsigned int)qsscanf((int)v22 + 2, (unsigned int)"%x", (unsigned int)&v203, v25, v26, v27) != 1 )
                goto LABEL_50;
              v6 += (unsigned int)v203;
              if ( *v22 != 115 )
                goto LABEL_57;
              if ( !(unsigned int)sub_577F80(a1, (void *)v6, nullptr) )
                goto LABEL_50;
              *(_QWORD *)s1 = -1;
              s1[8] = 0;
              sub_3E1CA0(a1, (__int64)s1, v6);
              v6 = *(_QWORD *)s1;
LABEL_57:
              v32 = strchr(v22, 47);
              v4 = v32;
              if ( !v32 )
                goto LABEL_50;
              if ( v32[1] == 45 && !v32[2] )
              {
                sub_68A350(v8);
                n.m128i_i8[0] = v9;
                goto LABEL_19;
              }
              v206 = &s1[8];
              *(_DWORD *)&s1[8] = 0;
              *(_QWORD *)&s1[16] = 0;
              v207 = &s1[8];
              v208 = 0;
              sub_68C680(a1, v6, v32 + 1, s1);
              sub_687ED0(*(_QWORD **)&s1[16]);
              goto LABEL_50;
            case 'a':
              if ( !(unsigned __int16)sub_631AD0(a1->m128i_i64[0], 7, v24, v25, v26, v27) )
              {
                qsscanf((_DWORD)v22 + 2, (unsigned int)"%x", (unsigned int)s1, v39, v40, v41);
                setinf(7, *(unsigned __int16 *)s1);
                v42 = getinf(7);
                sub_687CC0(v229, (__int64)&unk_2B376C0, 9, v42);
                sub_6403C0("Application type: %s");
              }
              goto LABEL_50;
            case 'c':
              v33 = v22[2];
              if ( v33 != 103 )
                goto LABEL_62;
              if ( sub_631C90(a1->m128i_i64[0], 3, 4, v25, v26, v27)
                && (unsigned int)sub_631AD0(a1->m128i_i64[0], 5, v116, v117, v118, v119) == 11 )
              {
                v125 = a1->m128i_i64[0];
                *(_OWORD *)s1 = 0;
                sub_630CA0(v125, 98, s1, 0x10u, v124);
                s1[0] = 1;
                set_compiler((const __m128i *)s1, (_BYTE *)&dword_0 + 1, "mingw");
              }
              else
              {
                v33 = v22[2];
LABEL_62:
                v34 = sub_5EE760(v33);
                *(_OWORD *)s1 = 0;
                s1[0] = v34;
                set_compiler((const __m128i *)s1, (_BYTE *)&dword_0 + 2, nullptr);
              }
              goto LABEL_50;
            case 'i':
              v6 = sub_68C0A0(v6, v22 + 2);
              goto LABEL_50;
            case 'l':
              sub_7BE7C0(*(_QWORD *)(a1->m128i_i64[0] + 1672) + 2752LL, a1->m128i_i64[0], -1, v22 + 2, 0, 83);
              goto LABEL_50;
            case 'm':
              v43 = a1->m128i_i64[0];
              v187 = 0;
              v44 = v22 + 2;
              v199 = nullptr;
              s2.m128i_i64[1] = v43;
              v45 = *(_QWORD **)(v43 + 1776);
              v201 = nullptr;
              v184 = v45;
              v203 = nullptr;
              v182 = nullptr;
              *(_QWORD *)v180 = -1;
              v188 = 0;
              n.m128i_i64[0] = -1;
              LODWORD(v179) = 0;
              v200 = 0;
              v202 = 0;
              v204 = 0;
LABEL_70:
              if ( (debug & 4) != 0 )
                sub_3879F0();
              return result;
            case 'o':
              if ( !(unsigned __int16)sub_631AD0(a1->m128i_i64[0], 6, v24, v25, v26, v27) )
              {
                qsscanf((_DWORD)v22 + 2, (unsigned int)"%x", (unsigned int)s1, v35, v36, v37);
                setinf(6, *(unsigned __int16 *)s1);
                v38 = getinf(6);
                sub_687CC0(v228, (__int64)&unk_2B37760, 4, v38);
                sub_6403C0("OS type         : %s");
              }
              goto LABEL_50;
            default:
              goto LABEL_50;
          }
          v46 = v44 + 1;
          switch ( *v44 )
          {
            case 0:
              goto LABEL_78;
            case 33:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              insn = create_insn(v6);
              v46 = (char *)n.m128i_i64[1];
              if ( insn )
                goto LABEL_91;
              goto LABEL_73;
            case 35:
              v74 = v44[1];
              if ( v74 != 50 && v74 != 52 )
                goto LABEL_76;
              create_data(v6);
              sub_410D30(s2.m128i_i64[1], v6);
              v44 += 2;
              goto LABEL_70;
            case 36:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              v73 = strchr(v44 + 1, 36);
              if ( !v73 )
                goto LABEL_76;
              *v73 = 0;
              v44 = v73 + 1;
              v6 = sub_68C0A0(v6, (const char *)n.m128i_i64[1]);
              goto LABEL_70;
            case 37:
              v187 = v9;
              goto LABEL_85;
            case 38:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              create_xrefs_from(v6);
              first_dref_from = get_first_dref_from(v6);
              v46 = (char *)n.m128i_i64[1];
              v6 = first_dref_from;
              if ( first_dref_from == -1 )
                goto LABEL_73;
              goto LABEL_91;
            case 40:
              if ( n.m128i_i64[0] != -1 )
                goto LABEL_76;
              n.m128i_i64[0] = v6;
              goto LABEL_91;
            case 41:
              v6 = n.m128i_i64[0];
              LODWORD(v179) = 1;
              ++v44;
              n.m128i_i64[0] = -1;
              goto LABEL_70;
            case 42:
              n.m128i_i32[2] = v44[1] - 48;
              if ( n.m128i_i32[2] > 1u )
                goto LABEL_76;
              v80 = v44[2];
              if ( v80 == 99 )
              {
                v223 = -1;
                v137 = &v226;
                v224 = 0;
                v225 = 0;
                v222 = -1;
                do
                {
                  *(_WORD *)v137 = 0;
                  v137 += 40;
                  *((_WORD *)v137 - 19) = 0;
                  *((_WORD *)v137 - 18) = 0;
                  *((_DWORD *)v137 - 2) = 0;
                  *((_WORD *)v137 - 17) = 0;
                  *((_OWORD *)v137 - 2) = 0;
                  *((_QWORD *)v137 - 2) = 0;
                }
                while ( v137 != v227 );
                s2.m128i_i64[0] = (__int64)(v44 + 3);
                v138 = decode_insn(&v222, v6, v227, 0, 0, v27, 0.0);
                v46 = (char *)s2.m128i_i64[0];
                if ( v138 <= 0 )
                  goto LABEL_73;
                v139 = map_code_ea(&v222, v6, n.m128i_u32[2]);
                v46 = (char *)s2.m128i_i64[0];
                v84 = (v139 - v6) >> 4;
LABEL_157:
                s2.m128i_i64[0] = (__int64)v46;
                default_reftype = get_default_reftype(v6);
                v86 = op_offset(v6, n.m128i_i32[2], default_reftype, -1, v84, 0);
                v46 = (char *)s2.m128i_i64[0];
                if ( v86 )
                  goto LABEL_91;
                goto LABEL_73;
              }
              if ( v80 != 100 )
                goto LABEL_76;
              s2.m128i_i64[0] = (__int64)(v44 + 3);
              sreg = get_sreg(v6, *(unsigned int *)(s2.m128i_i64[1] + 1012));
              group_selector = get_group_selector(sreg);
              v83 = sel2para(group_selector);
              v46 = (char *)s2.m128i_i64[0];
              v84 = v83;
              if ( v83 != -1 )
                goto LABEL_157;
              v169 = calc_offset_base((__int64 *)v6, n.m128i_i32[2]);
              v46 = (char *)s2.m128i_i64[0];
              v84 = v169;
              if ( v169 != -1 )
                goto LABEL_157;
              goto LABEL_73;
            case 43:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              v44 = sub_687BE0(v44 + 1, s1);
              if ( (char *)n.m128i_i64[1] == v44 )
                goto LABEL_76;
              v79 = *(_DWORD *)s1;
              goto LABEL_150;
            case 45:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              v44 = sub_687BE0(v44 + 1, s1);
              if ( (char *)n.m128i_i64[1] == v44 )
                goto LABEL_76;
              v79 = -*(_DWORD *)s1;
LABEL_150:
              v6 += v79;
              goto LABEL_70;
            case 47:
              v75 = v44[1];
              if ( v75 == 47 )
              {
                v75 = v44[2];
                v46 = v44 + 2;
                if ( !v75 )
                {
                  *(_QWORD *)v180 = v6;
                  v44 += 2;
                  v182 = "_main";
                  goto LABEL_70;
                }
                v76 = 0;
                goto LABEL_140;
              }
              if ( v75 )
              {
                v76 = 1;
LABEL_140:
                v77 = v46;
                v78 = 0;
                while ( 1 )
                {
                  if ( v75 == 41 )
                  {
                    if ( !v78 )
                    {
LABEL_224:
                      *v77 = 0;
                      v126 = "_main";
                      v44 = v77 + 1;
                      if ( *v46 )
                        v126 = v46;
                      v182 = v126;
LABEL_146:
                      *(_QWORD *)v180 = v6;
                      if ( v76 )
                        goto LABEL_78;
                      goto LABEL_70;
                    }
                    --v78;
                  }
                  else
                  {
                    if ( v75 == 59 )
                      goto LABEL_224;
                    v78 += v75 == 40;
                  }
                  v75 = *++v77;
                  if ( !v75 )
                  {
                    v182 = v46;
                    v44 = v77;
                    goto LABEL_146;
                  }
                }
              }
              *(_QWORD *)v180 = v6;
              v182 = "_main";
              goto LABEL_78;
            case 63:
              v97 = v44[1];
              if ( v97 == 63 )
              {
                v98 = v179;
                v46 = v44 + 2;
LABEL_169:
                if ( v98 )
                  goto LABEL_238;
                goto LABEL_170;
              }
              if ( v97 == 47 )
              {
                v98 = v188;
                v46 = v44 + 2;
                goto LABEL_169;
              }
              v131 = sub_687BE0(v44 + 1, s1);
              v132 = *(int *)s1;
              n.m128i_i64[1] = (__int64)v131;
              if ( *(_DWORD *)s1 > 0xFFu )
                goto LABEL_76;
              wide_byte = get_wide_byte(v6);
              v46 = (char *)n.m128i_i64[1];
              if ( wide_byte == v132 )
              {
LABEL_238:
                v134 = *v46;
                v135 = v46;
                for ( i = 0; v134; v134 = *++v135 )
                {
                  if ( v134 == 41 )
                  {
                    if ( !i )
                      break;
                    --i;
                  }
                  else
                  {
                    if ( v134 == 59 )
                    {
                      *v135 = 0;
                      break;
                    }
                    i += v134 == 40;
                  }
                }
LABEL_91:
                v44 = v46;
                goto LABEL_70;
              }
LABEL_170:
              v99 = *v46;
              if ( *v46 )
              {
                v100 = 0;
                do
                {
                  if ( v99 == 41 )
                  {
                    if ( !v100 )
                      break;
                    --v100;
                  }
                  else
                  {
                    if ( v99 == 59 )
                    {
                      v44 = v46 + 1;
                      goto LABEL_70;
                    }
                    v100 += v99 == 40;
                  }
                  v99 = *++v46;
                }
                while ( v99 );
              }
LABEL_73:
              v6 = n.m128i_i64[0];
              if ( n.m128i_i64[0] != -1 )
              {
                v48 = strchr(v46, 41);
                if ( v48 )
                {
                  n.m128i_i64[0] = -1;
                  v44 = v48 + 1;
                  LODWORD(v179) = 0;
                  goto LABEL_70;
                }
LABEL_76:
                sub_378D50();
              }
              v6 = -1;
LABEL_78:
              if ( v203 )
              {
                *(_QWORD *)&v204 = 0;
                qfree(v203);
              }
              if ( v201 )
              {
                *(_QWORD *)&v202 = 0;
                qfree(v201);
              }
              if ( v199 )
              {
                *(_QWORD *)&v200 = 0;
                qfree(v199);
              }
              goto LABEL_50;
            case 64:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              v87 = strchr(v44 + 1, 64);
              if ( !v87 )
                goto LABEL_76;
              *v87 = 0;
              v44 = v87 + 1;
              v190.m128i_i64[1] = n.m128i_i64[1];
              memset(s1, 0, sizeof(s1));
              v189 = (__int64)(v184 + 1);
              s2.m128i_i64[0] = strlen((const char *)n.m128i_i64[1]);
              v190.m128i_i64[0] = s2.m128i_i64[0] + 1;
              n.m128i_i64[1] = (__int64)s1;
              *(_QWORD *)s1 = qvector_reserve(s1, 0, s2.m128i_i64[0] + 1, 1);
              *(_QWORD *)&s1[8] = v190.m128i_i64[0];
              memmove(*(void **)s1, (const void *)v190.m128i_i64[1], s2.m128i_u64[0]);
              *(_BYTE *)(*(_QWORD *)s1 + s2.m128i_i64[0]) = 0;
              v88 = v184[1];
              v89 = v184[3];
              if ( n.m128i_i64[1] < v88 || n.m128i_i64[1] >= v88 + 24 * v89 )
              {
                v127 = v184[2];
                if ( v89 < v127 + 1 )
                {
                  v88 = qvector_reserve(v189, v88, v127 + 1, 24);
                  v168 = v184;
                  v184[1] = v88;
                  v127 = v168[2];
                }
                v128 = _mm_loadu_si128((const __m128i *)&s1[8]);
                v129 = *(_QWORD *)s1;
                *(_QWORD *)&s1[16] = 0;
                v130 = v88 + 24 * v127;
                *(__m128i *)(v130 + 8) = v128;
                *(_QWORD *)v130 = v129;
                ++v184[2];
                goto LABEL_70;
              }
              v90 = *(_QWORD *)s1;
              v91 = _mm_loadl_epi64((const __m128i *)&s1[8]);
              memset(s1, 0, sizeof(s1));
              v92 = _mm_loadl_epi64((const __m128i *)&s1[16]);
              n.m128i_i64[1] = v90;
              v93 = v184[2];
              if ( v89 < v93 + 1 )
              {
                v190.m128i_i64[0] = v92.m128i_i64[0];
                s2.m128i_i64[0] = v91.m128i_i64[0];
                v170 = qvector_reserve(v189, v184[1], v93 + 1, 24);
                v171 = v184;
                v91 = _mm_loadl_epi64(&s2);
                v92 = _mm_loadl_epi64(&v190);
                v184[1] = v170;
                v93 = v171[2];
              }
              v94 = v184;
              v95 = v184[1] + 24 * v93;
              *(_QWORD *)v95 = n.m128i_i64[1];
              *(__m128i *)(v95 + 8) = _mm_unpacklo_epi64(v91, v92);
              v96 = *(void **)s1;
              ++v94[2];
              if ( !v96 )
                goto LABEL_70;
              goto LABEL_165;
            case 91:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              v101 = strchr(v44 + 1, 93);
              if ( !v101 )
                goto LABEL_76;
              *v101 = 0;
              if ( v44[1] )
              {
                *(_QWORD *)v180 = v6;
                v44 = v101 + 1;
                v182 = (void *)n.m128i_i64[1];
              }
              else
              {
                *(_QWORD *)v180 = v6;
                v44 = v101 + 1;
                v182 = "WINMAIN";
              }
              goto LABEL_70;
            case 94:
LABEL_85:
              if ( !*(_DWORD *)(s2.m128i_i64[1] + 932) )
              {
                n.m128i_i64[1] = (__int64)(v44 + 1);
                byte = get_byte(v6);
                v50 = v6 + ((byte == 14) | (unsigned __int8)(byte == -112));
                v51 = get_byte(v50);
                v46 = (char *)n.m128i_i64[1];
                v6 = v50 + ((v51 == 14) | (unsigned __int8)(v51 == -112));
              }
              n.m128i_i64[1] = (__int64)v46;
              v52 = create_insn(v6);
              v46 = (char *)n.m128i_i64[1];
              if ( v52 )
              {
                first_fcref_from = get_first_fcref_from(v6);
                if ( first_fcref_from != -1 )
                {
                  v6 = first_fcref_from;
                  v44 = (char *)n.m128i_i64[1];
                  goto LABEL_70;
                }
                del_items(v6, 0, 1, 0);
                v46 = (char *)n.m128i_i64[1];
                if ( v187 )
                {
LABEL_89:
                  v187 = 0;
                  v44 = v46;
                  goto LABEL_70;
                }
              }
              else if ( v187 )
              {
                goto LABEL_89;
              }
              goto LABEL_73;
            case 95:
              n.m128i_i64[1] = (__int64)(v44 + 1);
              v64 = sub_687BE0(v44 + 1, s1);
              if ( (char *)n.m128i_i64[1] == v64 )
                goto LABEL_76;
              if ( *v64 != 95 )
                goto LABEL_76;
              n.m128i_i32[2] = *(_DWORD *)s1;
              if ( *(int *)s1 <= 0 )
                goto LABEL_76;
              v44 = v64 + 1;
              v65 = 0;
              v190.m128i_i64[0] = (__int64)&v199;
              break;
            case 126:
              v190.m128i_i64[0] = (__int64)(v44 + 1);
              v54 = strchr(v44 + 1, 47);
              if ( !v54 )
                goto LABEL_76;
              *v54 = 0;
              s2.m128i_i64[0] = (__int64)(v54 + 1);
              n.m128i_i64[1] = (__int64)v54;
              v55 = strchr(v54 + 1, 126);
              v190.m128i_i64[1] = (__int64)v55;
              if ( !v55 )
                goto LABEL_76;
              *v55 = 0;
              v58 = (char *)v190.m128i_i64[0];
              v59 = v6;
              v189 = (__int64)(v55 + 1);
              v60 = *(_BYTE *)(n.m128i_i64[1] + 1);
              if ( v60 == 43 )
              {
                qsscanf(n.m128i_i32[2] + 2, (unsigned int)"%4x", (unsigned int)s1, n.m128i_i32[2], v56, v57);
                v58 = (char *)v190.m128i_i64[0];
                s2.m128i_i64[0] = n.m128i_i64[1] + 6;
                v59 = v6 - *(int *)s1;
                v60 = *(_BYTE *)(n.m128i_i64[1] + 6);
              }
              if ( !v44[1] )
              {
                v58 = "-";
                if ( v184[2] )
                {
                  v61 = v184[1];
                  if ( *(_QWORD *)(v61 + 8) )
                  {
                    v58 = *(char **)v61;
                    if ( !*(_QWORD *)v61 || !*v58 )
                      v58 = "-";
                  }
                }
              }
              if ( !v60 )
              {
                v62 = "WINMAIN";
                if ( v182 )
                  v62 = (const char *)v182;
                s2.m128i_i64[0] = (__int64)v62;
              }
              if ( (debug & 4) != 0 )
              {
                v190.m128i_i64[0] = (__int64)v58;
                n.m128i_i64[1] = v59;
                sub_3879F0();
              }
              if ( *v58 != 45 || v58[1] )
                apply_idasgn_to(v58, v59, 0);
              memset(s1, 0, sizeof(s1));
              n.m128i_i64[1] = (__int64)s1;
              get_ea_name(s1, v6, 0, 0);
              if ( (debug & 4) != 0 )
                sub_3879F0();
              if ( *(_QWORD *)&s1[8] > 1u )
              {
                v63 = strcmp(*(const char **)s1, (const char *)s2.m128i_i64[0]);
                v188 |= v63 == 0;
                if ( !v63 )
                  goto LABEL_111;
              }
              if ( !*(_DWORD *)(s2.m128i_i64[1] + 932)
                && (unsigned __int8)get_byte(v6) == 0xFF
                && (unsigned __int8)get_byte(v6 + 1) == 37 )
              {
                dword = get_dword(v6 + 2);
                if ( get_ea_name(n.m128i_i64[1], dword, 0, 0) > 0 )
                {
                  v167 = haystack;
                  if ( *(_QWORD *)&s1[8] )
                    v167 = *(const char **)s1;
                  if ( !strcmp(v167, (const char *)s2.m128i_i64[0]) )
                  {
LABEL_111:
                    if ( (debug & 4) != 0 )
                      sub_3879F0();
                    if ( *(_QWORD *)s1 )
                    {
                      *(_QWORD *)&s1[8] = 0;
                      qfree(*(void **)s1);
                    }
                    v44 = (char *)v189;
                    goto LABEL_70;
                  }
                }
              }
              v46 = (char *)v189;
              v120 = 0;
              v121 = *(_BYTE *)(v190.m128i_i64[1] + 1);
              if ( !v121 )
                goto LABEL_217;
              v122 = (char *)v189;
              while ( 2 )
              {
                if ( v121 != 41 )
                {
                  if ( v121 == 59 )
                  {
                    v96 = *(void **)s1;
                    v44 = v122 + 1;
                    if ( *(_QWORD *)s1 )
                    {
LABEL_165:
                      *(_QWORD *)&s1[8] = 0;
                      qfree(v96);
                    }
                    goto LABEL_70;
                  }
                  v120 += v121 == 40;
LABEL_215:
                  v121 = *++v122;
                  if ( !v121 )
                    goto LABEL_216;
                  continue;
                }
                break;
              }
              if ( v120 )
              {
                --v120;
                goto LABEL_215;
              }
LABEL_216:
              v46 = v122;
LABEL_217:
              if ( *(_QWORD *)s1 )
              {
                n.m128i_i64[1] = (__int64)v46;
                *(_QWORD *)&s1[8] = 0;
                qfree(*(void **)s1);
                v46 = (char *)n.m128i_i64[1];
              }
              goto LABEL_73;
            default:
              goto LABEL_73;
          }
          while ( 2 )
          {
            if ( *v44 == 43 )
            {
              v71 = v199;
              v69 = v44 + 1;
              v70 = v200 + 1;
              if ( *((_QWORD *)&v200 + 1) < (unsigned __int64)(v200 + 1) )
              {
                s2.m128i_i32[0] = 0;
LABEL_128:
                LODWORD(v189) = v65;
                v199 = (void *)qvector_reserve(v190.m128i_i64[0], v71, v70, 4);
                v72 = (char *)v199 + 4 * v200;
                *(_QWORD *)&v200 = v200 + 1;
                v66 = sub_687BE0(v69, v72);
                v67 = v189;
                if ( s2.m128i_i32[0] )
                  goto LABEL_120;
              }
              else
              {
                v115 = (char *)v199 + 4 * v200;
                s2.m128i_i32[0] = v65;
                *(_QWORD *)&v200 = v200 + 1;
                v66 = sub_687BE0(v69, v115);
                v67 = s2.m128i_i32[0];
              }
            }
            else
            {
              if ( *v44 != 45 )
                goto LABEL_76;
              v68 = v200;
              v69 = v44 + 1;
              v70 = v200 + 1;
              if ( *((_QWORD *)&v200 + 1) < (unsigned __int64)(v200 + 1) )
              {
                s2.m128i_i32[0] = 1;
                v71 = v199;
                goto LABEL_128;
              }
              s2.m128i_i32[0] = v65;
              *(_QWORD *)&v200 = v200 + 1;
              v66 = sub_687BE0(v69, (_DWORD *)v199 + v68);
              v67 = s2.m128i_i32[0];
LABEL_120:
              *((_DWORD *)v199 + v200 - 1) = -*((_DWORD *)v199 + v200 - 1);
            }
            if ( v69 == v66 || *v66 != 95 )
              goto LABEL_76;
            v44 = v66 + 1;
            v65 = v67 + 1;
            if ( n.m128i_i32[2] == v65 )
            {
              s2.m128i_i64[0] = 0;
              v140 = n.m128i_i32[2];
              n.m128i_i64[1] = 0;
              v192 = v140;
              v189 = 4 * v140;
              do
              {
                v141 = *((_QWORD *)&v202 + 1);
                v142 = *(int *)((char *)v199 + n.m128i_i64[1]) + v6;
                v143 = v202;
                if ( *((_QWORD *)&v202 + 1) < (unsigned __int64)(v202 + 1) )
                {
                  v191 = *((_QWORD *)&v202 + 1);
                  v190.m128i_i64[1] = v142;
                  v157 = qvector_reserve(&v201, 0, v202 + 1, 360);
                  v158 = *((_QWORD *)&v202 + 1);
                  v159 = v201;
                  v160 = v190.m128i_i64[1];
                  v161 = (char *)v157;
                  *((_QWORD *)&v202 + 1) = v191;
                  v190.m128i_i64[0] = v158;
                  v162 = (char *)v201;
                  v163 = v202 - 1;
                  if ( (__int64)v202 - 1 >= 0 )
                  {
                    do
                    {
                      v164 = v162;
                      v162 += 360;
                      qmemcpy(v161, v164, 0x168u);
                      v161 += 360;
                    }
                    while ( v163-- != 0 );
                  }
                  v191 = v160;
                  v190.m128i_i64[1] = v157;
                  qfree(v159);
                  v144 = (char *)v190.m128i_i64[1];
                  v142 = v191;
                  *((_QWORD *)&v202 + 1) = v190.m128i_i64[0];
                  v143 = v202;
                  v201 = (void *)v190.m128i_i64[1];
                }
                else
                {
                  v144 = (char *)v201;
                }
                v145 = &v144[360 * v143];
                *(_OWORD *)v145 = -1;
                v146 = v145 + 40;
                v147 = v145 + 360;
                *((_QWORD *)v145 + 2) = -1;
                *((_QWORD *)v145 + 3) = 0;
                *((_QWORD *)v145 + 4) = 0;
                do
                {
                  *v146 = 0;
                  v146 += 20;
                  *(v146 - 19) = 0;
                  *(v146 - 18) = 0;
                  *((_DWORD *)v146 - 2) = 0;
                  *(v146 - 17) = 0;
                  *((_OWORD *)v146 - 2) = 0;
                  *((_QWORD *)v146 - 2) = 0;
                }
                while ( v147 != v146 );
                *(_QWORD *)&v202 = v202 + 1;
                if ( (unsigned int)decode_insn(v145, v142, v147, 0, v142, v141, 0.0) )
                {
                  v148 = has_insn_feature(
                           *(unsigned __int16 *)((char *)v201 + s2.m128i_i64[0] + 24),
                           (_BYTE *)&dword_0 + 2);
                  v194 = v148;
                  v27 = v148;
                  v149 = v203;
                  v150 = v204;
                  v151 = v204;
                  v152 = v204 + 1;
                  if ( &v194 < v203 || &v194 >= (char *)v203 + *((_QWORD *)&v204 + 1) )
                  {
                    if ( *((_QWORD *)&v204 + 1) < v152 )
                    {
                      v190.m128i_i8[0] = v27;
                      v203 = (void *)qvector_reserve(&v203, v203, v152, 1);
                      v151 = v204;
                      v149 = v203;
                      v27 = v190.m128i_u8[0];
                    }
                    v149[v151] = v27;
                  }
                  else
                  {
                    if ( *((_QWORD *)&v204 + 1) < v152 )
                    {
                      v190.m128i_i8[0] = v27;
                      v203 = (void *)qvector_reserve(&v203, v203, v152, 1);
                      v149 = v203;
                      v27 = v190.m128i_u8[0];
                      v150 = v204;
                    }
                    v149[v150] = v27;
                  }
                }
                else
                {
                  v154 = v204;
                  v155 = v203;
                  v194 = 0;
                  v27 = v204;
                  v156 = v204 + 1;
                  if ( &v194 < v203 || &v194 >= (char *)v203 + *((_QWORD *)&v204 + 1) )
                  {
                    if ( *((_QWORD *)&v204 + 1) < v156 )
                    {
                      v203 = (void *)qvector_reserve(&v203, v203, v156, 1);
                      v27 = v204;
                      v155 = v203;
                    }
                    v155[v27] = 0;
                  }
                  else
                  {
                    if ( *((_QWORD *)&v204 + 1) < v156 )
                    {
                      v203 = (void *)qvector_reserve(&v203, v203, v156, 1);
                      v155 = v203;
                      v154 = v204;
                    }
                    v155[v154] = 0;
                  }
                }
                n.m128i_i64[1] += 4;
                *(_QWORD *)&v204 = v204 + 1;
                s2.m128i_i64[0] += 360;
              }
              while ( n.m128i_i64[1] != v189 );
              v153 = 0;
              do
              {
                if ( *((_BYTE *)v203 + v153) )
                  v6 += *((int *)v199 + v153);
                ++v153;
              }
              while ( v153 != v192 );
              goto LABEL_70;
            }
            continue;
          }
        }
        if ( !*v22 )
          goto LABEL_51;
        *(_QWORD *)v173 = 0;
LABEL_184:
        memset(s1, 0, sizeof(s1));
        n.m128i_i64[0] = strlen(v22);
        v179 = n.m128i_i64[0] + 1;
        n.m128i_i64[1] = (__int64)s1;
        *(_QWORD *)s1 = qvector_reserve(s1, 0, n.m128i_i64[0] + 1, 1);
        *(_QWORD *)&s1[8] = v179;
        memmove(*(void **)s1, v22, n.m128i_u64[0]);
        *(_BYTE *)(*(_QWORD *)s1 + n.m128i_i64[0]) = 0;
        v112 = v8[1];
        v102 = v8[3];
        if ( n.m128i_i64[1] < v112 || n.m128i_i64[1] >= v112 + 24 * v102 )
        {
          v29 = v8[2];
          if ( v102 < v29 + 1 )
          {
            v111 = qvector_reserve(v183, v112, v29 + 1, 24);
            v8[1] = v111;
            v112 = v111;
            v29 = v8[2];
          }
          v30 = _mm_loadu_si128((const __m128i *)&s1[8]);
          *(_QWORD *)&s1[16] = 0;
          v31 = v112 + 24 * v29;
          *(_QWORD *)v31 = *(_QWORD *)s1;
          *(__m128i *)(v31 + 8) = v30;
          ++v8[2];
        }
        else
        {
          v103 = *(_QWORD *)s1;
          v104 = _mm_loadl_epi64((const __m128i *)&s1[8]);
          memset(s1, 0, sizeof(s1));
          v105 = _mm_loadl_epi64((const __m128i *)&s1[16]);
          v106 = v8[2];
          v107 = v8[1];
          if ( v102 < v106 + 1 )
          {
            n.m128i_i64[1] = v105.m128i_i64[0];
            n.m128i_i64[0] = v104.m128i_i64[0];
            v114 = qvector_reserve(v183, v107, v106 + 1, 24);
            v8[1] = v114;
            v106 = v8[2];
            v107 = v114;
            v105 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
            v104 = _mm_loadl_epi64(&n);
          }
          v108 = v107 + 24 * v106;
          *(_QWORD *)v108 = v103;
          *(__m128i *)(v108 + 8) = _mm_unpacklo_epi64(v104, v105);
          v109 = *(void **)s1;
          ++v8[2];
          if ( v109 )
          {
            *(_QWORD *)&s1[8] = 0;
            qfree(v109);
          }
        }
LABEL_50:
        v22 = *(char **)v173;
        if ( !*(_QWORD *)v173 )
          goto LABEL_51;
      }
      *v23 = 0;
      v25 = (__int64)(v23 + 1);
      *(_QWORD *)v173 = v23 + 1;
      if ( v22[1] == 61 )
        goto LABEL_46;
      if ( *v22 )
        goto LABEL_184;
      v22 = v23 + 1;
    }
  }
  if ( v186 )
  {
    sub_68A350(v8);
    if ( *(_QWORD *)v180 != -1 )
      sub_6883F0((int)a1, v180[0], v182);
  }
  v9 = n.m128i_u8[0];
LABEL_41:
  free_idasgn(v177);
LABEL_7:
  if ( v176 )
    qfree(v176);
  return v9;
}
