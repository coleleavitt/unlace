unsigned __int64 __fastcall sub_3BBF50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rax
  const char *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  char v34; // al
  char v35; // r14
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rdx
  int v42; // eax
  char v43; // al
  const char *v44; // rcx
  const char *v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rax
  const char *v48; // rcx
  int v49; // r9d
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  char v54; // r14
  __int64 v55; // r8
  __int64 v56; // r9
  _DWORD *v57; // r10
  int v58; // r14d
  const char *v59; // rcx
  const char *v60; // rcx
  char v61; // al
  const char *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // [rsp+0h] [rbp-128h]
  __int64 v76; // [rsp+0h] [rbp-128h]
  __int64 v77; // [rsp+0h] [rbp-128h]
  __int64 v78; // [rsp+0h] [rbp-128h]
  __int64 v79; // [rsp+0h] [rbp-128h]
  __int64 v80; // [rsp+0h] [rbp-128h]
  int v81; // [rsp+0h] [rbp-128h]
  __int64 v82; // [rsp+0h] [rbp-128h]
  __int64 v83; // [rsp+0h] [rbp-128h]
  __int64 v84; // [rsp+0h] [rbp-128h]
  int v85; // [rsp+0h] [rbp-128h]
  __int64 v86; // [rsp+0h] [rbp-128h]
  __int64 v87; // [rsp+0h] [rbp-128h]
  __int64 v88; // [rsp+0h] [rbp-128h]
  __int64 v89; // [rsp+0h] [rbp-128h]
  __int64 v90; // [rsp+0h] [rbp-128h]
  __int64 v91; // [rsp+0h] [rbp-128h]
  int v92; // [rsp+0h] [rbp-128h]
  __int64 v93; // [rsp+0h] [rbp-128h]
  __int64 v94; // [rsp+8h] [rbp-120h]
  __int128 *v95; // [rsp+8h] [rbp-120h]
  __int64 v96; // [rsp+8h] [rbp-120h]
  __int64 v97; // [rsp+8h] [rbp-120h]
  __int64 v98; // [rsp+8h] [rbp-120h]
  __int128 *v99; // [rsp+8h] [rbp-120h]
  __int64 v100; // [rsp+8h] [rbp-120h]
  int v101; // [rsp+8h] [rbp-120h]
  __int64 v102; // [rsp+8h] [rbp-120h]
  __int64 v103; // [rsp+8h] [rbp-120h]
  __int64 v104; // [rsp+8h] [rbp-120h]
  int v105; // [rsp+8h] [rbp-120h]
  __int64 v106; // [rsp+8h] [rbp-120h]
  __int64 v107; // [rsp+8h] [rbp-120h]
  __int64 v108; // [rsp+8h] [rbp-120h]
  __int64 v109; // [rsp+8h] [rbp-120h]
  __int64 v110; // [rsp+8h] [rbp-120h]
  __int64 v111; // [rsp+8h] [rbp-120h]
  __int64 v112; // [rsp+8h] [rbp-120h]
  __int64 v113; // [rsp+8h] [rbp-120h]
  __int64 v114; // [rsp+10h] [rbp-118h]
  __int64 tinfo_property; // [rsp+10h] [rbp-118h]
  __int64 v116; // [rsp+10h] [rbp-118h]
  __int64 v117; // [rsp+10h] [rbp-118h]
  __int64 v118; // [rsp+10h] [rbp-118h]
  __int64 v119; // [rsp+10h] [rbp-118h]
  int v120; // [rsp+10h] [rbp-118h]
  __int64 v121; // [rsp+10h] [rbp-118h]
  __int64 v122; // [rsp+10h] [rbp-118h]
  __int64 v123; // [rsp+10h] [rbp-118h]
  __int64 v124; // [rsp+10h] [rbp-118h]
  int v125; // [rsp+10h] [rbp-118h]
  __int64 v126; // [rsp+10h] [rbp-118h]
  __int64 v127; // [rsp+10h] [rbp-118h]
  __int64 v128; // [rsp+10h] [rbp-118h]
  __int64 v129; // [rsp+10h] [rbp-118h]
  __int64 v130; // [rsp+10h] [rbp-118h]
  __int64 v131; // [rsp+10h] [rbp-118h]
  __int64 v132; // [rsp+10h] [rbp-118h]
  __int64 v133; // [rsp+18h] [rbp-110h]
  __int64 v134; // [rsp+18h] [rbp-110h]
  __int64 v135; // [rsp+18h] [rbp-110h]
  __int64 v136; // [rsp+18h] [rbp-110h]
  __int64 v137; // [rsp+18h] [rbp-110h]
  __int64 v138; // [rsp+18h] [rbp-110h]
  int v139; // [rsp+18h] [rbp-110h]
  __int64 v140; // [rsp+18h] [rbp-110h]
  __int64 v141; // [rsp+18h] [rbp-110h]
  __int64 v142; // [rsp+18h] [rbp-110h]
  int v143; // [rsp+18h] [rbp-110h]
  __int64 v144; // [rsp+18h] [rbp-110h]
  __int64 v145; // [rsp+18h] [rbp-110h]
  __int64 v146; // [rsp+18h] [rbp-110h]
  __int64 v147; // [rsp+18h] [rbp-110h]
  __int64 v148; // [rsp+18h] [rbp-110h]
  __int64 v149; // [rsp+18h] [rbp-110h]
  __int64 v150; // [rsp+18h] [rbp-110h]
  __int64 v151; // [rsp+20h] [rbp-108h] BYREF
  int v152; // [rsp+28h] [rbp-100h]
  __int64 v153; // [rsp+30h] [rbp-F8h] BYREF
  int v154; // [rsp+38h] [rbp-F0h]
  __int64 v155; // [rsp+40h] [rbp-E8h] BYREF
  int v156; // [rsp+48h] [rbp-E0h]
  __int128 v157; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v158; // [rsp+60h] [rbp-C8h]
  __int128 v159; // [rsp+68h] [rbp-C0h]
  __int64 v160; // [rsp+78h] [rbp-B0h]
  __int128 v161; // [rsp+80h] [rbp-A8h]
  __int128 v162; // [rsp+90h] [rbp-98h]
  int v163; // [rsp+A0h] [rbp-88h]
  int v164; // [rsp+A8h] [rbp-80h]
  __int64 v165; // [rsp+B0h] [rbp-78h]
  __int64 v166; // [rsp+C0h] [rbp-68h]
  int v167; // [rsp+C8h] [rbp-60h]
  __int64 v168; // [rsp+D0h] [rbp-58h]
  char v169; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v170; // [rsp+E8h] [rbp-40h]

  v170 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, const char *, _QWORD, _QWORD))callui)(131, a1, a2, "EditCopy", 0, 0);
  callui(131, a1, a2, 0, 0, 0, v75, v94, v114, v133);
  v76 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 216LL);
  sub_385640(a3);
  v6 = sub_3880B0(a3);
  if ( v6 )
  {
    v7 = (unsigned __int64 *)v6;
    if ( (unsigned __int8)is_enum() )
      goto LABEL_3;
    if ( !(unsigned __int8)is_char() )
    {
      if ( (unsigned __int8)is_stroff() )
      {
LABEL_3:
        if ( !(unsigned __int8)is_numop() )
          goto LABEL_4;
LABEL_132:
        if ( (unsigned int)get_radix() == 16 )
        {
LABEL_6:
          if ( !(unsigned __int8)is_numop() || (unsigned int)get_radix() != 10 )
            callui(131, a1, a2, "hx:Dec", 0, 0, v76, v95, tinfo_property, v134);
          v8 = *v7;
          goto LABEL_9;
        }
LABEL_4:
        if ( *v7 > 9 )
          callui(131, a1, a2, "hx:Hex", 0, 0, v76, v95, tinfo_property, v134);
        goto LABEL_6;
      }
      if ( (unsigned __int8)is_numop() && (unsigned int)get_radix() == 8 )
      {
        if ( *v7 <= 7 )
        {
LABEL_10:
          if ( !(unsigned __int8)is_char() )
            callui(131, a1, a2, "hx:Char", 0, 0, v76, v95, tinfo_property, v134);
          callui(131, a1, a2, "hx:Enum", 0, 0, v76, v95, tinfo_property, v134);
          if ( *v7 )
            callui(131, a1, a2, "hx:InvertSign", 0, 0, v77, v96, v116, v135);
          callui(131, a1, a2, "hx:BitwiseNegate", 0, 0, v77, v96, v116, v135);
          v9 = "hx:StrucOffset";
          goto LABEL_15;
        }
      }
      else
      {
        v8 = *v7;
        if ( *v7 <= 9 )
        {
LABEL_9:
          if ( v8 > 7
            && (!(unsigned __int8)is_numop()
             || (unsigned int)get_radix() != 8
             || (unsigned __int8)is_enum()
             || (unsigned __int8)is_char()
             || (unsigned __int8)is_stroff()) )
          {
            callui(131, a1, a2, "hx:Oct", 0, 0, v76, v95, tinfo_property, v134);
          }
          goto LABEL_10;
        }
      }
    }
    if ( !(unsigned __int8)is_numop() )
      goto LABEL_4;
    goto LABEL_132;
  }
  if ( *(int *)(*(_QWORD *)(v76 + 872) + 368LL) > 3 )
    goto LABEL_16;
  v9 = "hx:DelContainingRecord";
LABEL_15:
  callui(131, a1, a2, v9, 0, 0, v76, v95, tinfo_property, v134);
LABEL_16:
  v10 = (_QWORD *)sub_3894C0(*(_QWORD *)(a3 + 32), a3 + 80);
  v11 = v10;
  if ( !v10 || *v10 == -1 )
    goto LABEL_23;
  if ( *(_DWORD *)(v10[3] + 8LL) != 68 )
  {
    if ( !sub_3C0830(*(_QWORD *)(a3 + 24) + 1312LL) )
    {
      callui(131, a1, a2, "hx:SetCallType", 0, 0, v76, v95, tinfo_property, v134);
      if ( (unsigned int)sub_386FC0(a3, v11[4]) == -1 )
      {
        v64 = v11[3];
        if ( v64 == *(_QWORD *)(a3 + 88) )
        {
          *(_QWORD *)&v157 = get_tinfo_property();
          if ( (get_tinfo_property() & 0x3F) == 1 )
          {
            v95 = &v157;
            clear_tinfo_t();
          }
          else
          {
            clear_tinfo_t();
            sub_3B66C0(a1, a2, 1, v72, v73, v74, v76, (__int64)&v157, tinfo_property, v134);
          }
          v64 = v11[3];
LABEL_128:
          if ( *(_DWORD *)(v64 + 8) == 48 )
          {
            *(_QWORD *)&v157 = 0;
            *(_QWORD *)&v157 = get_tinfo_property();
            tinfo_property = get_tinfo_property();
            clear_tinfo_t();
            if ( (tinfo_property & 0xF) == 0xC )
              callui(131, a1, a2, "hx:ForceCallType", 0, 0, v76, v95, tinfo_property, v134);
          }
          goto LABEL_20;
        }
LABEL_127:
        v95 = &v157;
        goto LABEL_128;
      }
      sub_3B66C0(a1, a2, 0, v65, v66, v67, v76, v113, tinfo_property, v134);
    }
    v64 = v11[3];
    goto LABEL_127;
  }
  v95 = &v157;
LABEL_20:
  sub_2421A0(v95, v11);
  v12 = get_tinfo_property();
  LOBYTE(tinfo_property) = (v12 & 0xFFFFFFF0) == 208 || (v12 & 0xFFFFFFF0) == 64;
  clear_tinfo_t();
  if ( (_BYTE)tinfo_property )
  {
    callui(131, a1, a2, "hx:AddVarArg", 0, 0, v76, v95, tinfo_property, v134);
    if ( (unsigned __int64)(int)get_tinfo_property() < *(_QWORD *)(v11[4] + 8LL) )
      callui(131, a1, a2, "hx:DelVarArg", 0, 0, v76, v95, tinfo_property, v134);
  }
LABEL_23:
  v13 = sub_388F20(a3 + 80);
  v16 = v13;
  if ( v13 )
  {
    if ( (*(_BYTE *)(v13 + 26) & 2) == 0 )
      callui(131, a1, a2, "hx:Rename", 0, 0, v76, v95, tinfo_property, v134);
    callui(131, a1, a2, "hx:SetType", 0, 0, v76, v95, tinfo_property, v134);
    if ( (get_tinfo_property() & 0xF) == 0xA )
      callui(131, a1, a2, "hx:ResetPtrType", 0, 0, v78, v97, v117, v136);
    if ( *(_DWORD *)(v16 + 88) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 128) + 112LL) + 80LL) )
      callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v78, v97, v117, v136);
    if ( (unsigned __int8)sub_254A00(
                            *(_QWORD *)(a3 + 32),
                            (int)a3 + 80,
                            0,
                            v17,
                            v18,
                            v19,
                            v78,
                            v97,
                            v117,
                            v136,
                            v151,
                            v152,
                            v153,
                            v154,
                            v155,
                            v156,
                            v157,
                            DWORD2(v157),
                            v158,
                            v159,
                            DWORD2(v159),
                            v160,
                            v161,
                            DWORD2(v161),
                            v162,
                            DWORD2(v162),
                            v163,
                            v164,
                            v165) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v79, v98, v118, v137);
    if ( (unsigned __int8)sub_2138E0(*(_QWORD *)(a3 + 24), v16, 0, 0) )
      callui(131, a1, a2, "hx:Map2OtherVar", 0, 0, v79, v98, v118, v137);
    v22 = *(_DWORD *)(v16 + 24);
    if ( (v22 & 0x2000) != 0 )
    {
      callui(131, a1, a2, "hx:UnmapVar", 0, 0, v79, v98, v118, v137);
      v22 = *(_DWORD *)(v16 + 24);
    }
    if ( (v22 & 0x8000000) == 0 )
      callui(131, a1, a2, "hx:NopropVar", 0, 0, v79, v98, v118, v137);
    if ( *(_DWORD *)(a3 + 80) == 2 && (*(_BYTE *)(sub_388F20(a3 + 80) + 25) & 1) != 0 )
      sub_3B66C0(a1, a2, 0, v68, v20, v21, v79, v98, v118, v137);
    sub_3B78E0(a1, a2, a3, v16, v20, v21, v79, v98, v118, v137);
    v23 = *(_DWORD *)(a3 + 80);
    v99 = &v157;
  }
  else
  {
    v23 = *(_DWORD *)(a3 + 80);
    v99 = &v157;
    if ( v23 == 3 )
    {
      v63 = *(_QWORD *)(a3 + 24);
      v155 = 0;
      tinfo_property = (__int64)&v155;
      if ( (unsigned __int8)sub_37CA60(v76, *(_QWORD *)(v63 + 40), &v155, 2) )
      {
        *(_QWORD *)&v157 = 0;
        *(_QWORD *)&v157 = get_tinfo_property();
        if ( (get_tinfo_property() & 0x3F) == 1 )
        {
          v99 = &v157;
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          sub_3B66C0(a1, a2, 1, v69, v70, v71, v76, (__int64)&v157, (__int64)&v155, v134);
        }
      }
      else
      {
        v99 = &v157;
      }
      clear_tinfo_t();
      v23 = *(_DWORD *)(a3 + 80);
    }
  }
  if ( v23 == 1 && *(int *)(*(_QWORD *)(a3 + 88) + 8LL) <= 69 )
  {
    if ( (unsigned __int8)sub_20E3F0(*(_QWORD *)(a3 + 32)) )
    {
      v62 = "Quick rename variable";
    }
    else
    {
      v61 = sub_20E440(*(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 88));
      v62 = "Quick rename formal function argument";
      if ( !v61 )
        goto LABEL_41;
    }
    callui(140, "hx:QuickRename", 1, v62, v14, v15, v76, v99, tinfo_property, v134);
    callui(131, a1, a2, "hx:QuickRename", 0, 0, v93, v112, v132, v150);
  }
LABEL_41:
  v158 = 0;
  v160 = 0;
  v166 = 1;
  v167 = -1;
  v168 = 0;
  v169 = 0;
  v157 = 0;
  v159 = 0;
  v161 = 0;
  v162 = 0;
  if ( (unsigned int)sub_388BD0((int)a3 + 80, (_DWORD)v99, 0, 0, v14, v15) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v76, v99, tinfo_property, v134);
    callui(131, a1, a2, "hx:SetType", 0, 0, v80, v100, v119, v138);
    if ( (unsigned __int8)sub_254A00(
                            *(_QWORD *)(a3 + 32),
                            (int)a3 + 80,
                            0,
                            v24,
                            v25,
                            v26,
                            v81,
                            v101,
                            v120,
                            v139,
                            v151,
                            v152,
                            v153,
                            v154,
                            v155,
                            v156,
                            v157,
                            DWORD2(v157),
                            v158,
                            v159,
                            DWORD2(v159),
                            v160,
                            v161,
                            DWORD2(v161),
                            v162,
                            DWORD2(v162),
                            v163,
                            v164,
                            v165) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v82, v102, v121, v140);
    if ( (unsigned __int8)sub_3894B0(a3 + 80, *(_QWORD *)(a3 + 32)) )
      callui(131, a1, a2, "hx:SelUnionField", 0, 0, v82, v102, v121, v140);
    v27 = *(_QWORD *)(v82 + 112);
    if ( *((_QWORD *)&v157 + 1) == 8 * *(_DWORD *)(v27 + 84) )
    {
      v121 = 8 * *(_DWORD *)(v27 + 84);
      v155 = 0;
      v155 = get_tinfo_property();
      if ( v121 == get_tinfo_size() )
      {
        clear_tinfo_t();
        callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v82, v102, v121, v140);
      }
      else
      {
        clear_tinfo_t();
      }
    }
    callui(131, a1, a2, "hx:JmpStrucDef", 0, 0, v82, v102, v121, v140);
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v83, v103, v122, v141);
  }
  if ( (unsigned __int8)sub_3A8720(a3, 0, 0) )
    callui(131, a1, a2, "hx:JumpGlobalXref", 0, 0, v76, v99, tinfo_property, v134);
  v123 = sub_388F60(a3 + 80);
  if ( v123 != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v76, v99, v123, v134);
    callui(131, a1, a2, "hx:SetType", 0, 0, v84, v104, v124, v142);
    if ( (unsigned __int8)sub_254A00(
                            *(_QWORD *)(a3 + 32),
                            (int)a3 + 80,
                            0,
                            v28,
                            v29,
                            v30,
                            v85,
                            v105,
                            v125,
                            v143,
                            v151,
                            v152,
                            v153,
                            v154,
                            v155,
                            v156,
                            v157,
                            DWORD2(v157),
                            v158,
                            v159,
                            DWORD2(v159),
                            v160,
                            v161,
                            DWORD2(v161),
                            v162,
                            DWORD2(v162),
                            v163,
                            v164,
                            v165) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v76, v99, v123, v134);
  }
  if ( (int)sub_3B9560(v76, a3 + 80) > 0 )
    callui(131, a1, a2, "hx:JmpLocalType", 0, 0, v76, v99, v123, v134);
  v31 = *(__int64 **)(a3 + 32);
  if ( *(_DWORD *)(a3 + 80) == 3 )
  {
    v32 = *v31;
  }
  else
  {
    v51 = sub_3894C0(v31, a3 + 80);
    if ( !v51 )
      goto LABEL_59;
    v52 = *(_QWORD *)(v51 + 24);
    if ( *(_DWORD *)(v52 + 8) != 64 )
      goto LABEL_59;
    v32 = *(_QWORD *)(v52 + 24);
    if ( v32 == -1 )
      goto LABEL_59;
  }
  if ( sub_3A8B80(0, v32, 1) )
    callui(131, a1, a2, "hx:CallDecomp", 0, 0, v76, v99, v123, v134);
LABEL_59:
  if ( *(_DWORD *)(a3 + 80) == 1 && *(int *)(*(_QWORD *)(a3 + 88) + 8LL) <= 69 )
  {
    v33 = sub_2524E0();
    if ( *(_DWORD *)(v33 + 8) == 64 )
    {
      if ( sub_3A8D50(0, *(_QWORD *)(v33 + 24), 1) )
        callui(131, a1, a2, "hx:XrefDecomp", 0, 0, v76, v99, v123, v134);
    }
  }
  if ( v123 != -1 || v16 )
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v76, v99, v123, v134);
  if ( (unsigned int)sub_388FA0(a3 + 80, 3) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v76, v99, v123, v134);
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v86, v106, v126, v144);
  }
  sub_387930(a3);
  if ( sub_3C0830(*(_QWORD *)(a3 + 24) + 1312LL) )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v76, v99, v123, v134);
    callui(131, a1, a2, "hx:SetType", 0, 0, v87, v107, v127, v145);
  }
  callui(131, a1, a2, "hx:JumpNextParen", 0, 0, v76, v99, v123, v134);
  v34 = sub_386E90(a3, *(int *)(a3 + 44), 31);
  v35 = v34;
  if ( (v34 & 0x10) != 0 || (v34 & 1) != 0 || (v34 & 8) != 0 )
    callui(131, a1, a2, "hx:EditCmt", 0, 0, v88, v108, v128, v146);
  if ( (v35 & 6) != 0 )
  {
    callui(131, a1, a2, "hx:EditBlockCmt", 0, 0, v88, v108, v128, v146);
    callui(131, a1, a2, "hx:StockComments", 0, 0, v89, v109, v129, v147);
  }
  if ( (unsigned __int8)sub_252E80(*(_QWORD *)(a3 + 32)) )
    callui(131, a1, a2, "hx:DelOrphanCmts", 0, 0, v88, v108, v128, v146);
  v38 = *(_DWORD *)(a3 + 80) == 3;
  v151 = 0;
  v152 = 0;
  v153 = 0;
  v154 = 0;
  if ( v38 || (unsigned __int8)callui(8, *(_QWORD *)(a3 + 8), &v151, &v153, v36, v37, v88, v108, v128, v146) )
    callui(131, a1, a2, "hx:GenHtml", 0, 0, v88, v108, v128, v146);
  callui(131, a1, a2, "MoveFunctionToFolder", 0, 0, v88, v108, v128, v146);
  if ( (unsigned __int8)sub_387D30(a3) )
  {
    v39 = *(_QWORD *)(a3 + 88);
    v40 = *(_QWORD *)(a3 + 32);
    if ( v39 )
    {
      v41 = *(_QWORD *)v39;
      v42 = *(_DWORD *)(v39 + 8);
    }
    else
    {
      v41 = -1;
      v42 = 0;
    }
    v155 = v41;
    v156 = v42;
    v43 = sub_2553E0(v40, &v155);
    v44 = "hx:ExpandItem";
    if ( (v43 & 1) == 0 )
      v44 = "hx:CollapseItem";
    callui(131, a1, a2, v44, 0, 0, v90, v110, v130, v148);
  }
  if ( (unsigned __int8)sub_387D60(a3) )
  {
    v45 = "hx:ExpandDecls";
    if ( (*(_BYTE *)(*(_QWORD *)(a3 + 32) + 108LL) & 4) == 0 )
      v45 = "hx:CollapseDecls";
    callui(131, a1, a2, v45, 0, 0, v90, v110, v130, v148);
  }
  v46 = *(_QWORD *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 80) != 1 )
  {
    v47 = sub_1CBEA0(v46);
    if ( !v47 || (v48 = "hx:UnmarkDecompiled", *(_DWORD *)(v47 + 64) != *(_DWORD *)(*(_QWORD *)(a3 + 128) + 588LL)) )
      v48 = "hx:MarkDecompiled";
    callui(131, a1, a2, v48, 0, 0, v90, v110, v130, v148);
    callui(131, a1, a2, "hx:Copy2Asm", 0, 0, v91, v111, v131, v149);
    goto LABEL_94;
  }
  v53 = **(_QWORD **)(a3 + 88);
  v156 = 0;
  v155 = v53;
  v54 = sub_135150(v46, (__int64)&v155);
  v57 = (_DWORD *)sub_387D90(a3);
  v58 = v54 & 7;
  if ( !v57 )
  {
    if ( !v58 )
      goto LABEL_115;
    goto LABEL_109;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 8LL) != 51 || (unsigned int)(*v57 - 1) > 1 )
  {
    if ( !v58 )
      goto LABEL_137;
LABEL_109:
    HIBYTE(v148) = 0;
    v59 = "hx:UnsplitExpr";
    goto LABEL_110;
  }
  if ( !v58 )
    goto LABEL_113;
  HIBYTE(v148) = 1;
  v59 = "hx:UnsplitMemAccess";
LABEL_110:
  callui(131, a1, a2, v59, 0, 0, v90, v110, v57, v148);
  if ( v58 != 1 && v130 )
  {
    if ( HIBYTE(v148) )
    {
LABEL_113:
      v60 = "hx:SplitMemAccess";
LABEL_114:
      callui(131, a1, a2, v60, 0, 0, v90, v110, v130, v148);
      goto LABEL_115;
    }
LABEL_137:
    v60 = "hx:SplitExpr";
    goto LABEL_114;
  }
LABEL_115:
  if ( !v16 )
    sub_3B78E0(a1, a2, a3, 0, v55, v56, v90, v110, v130, v148);
LABEL_94:
  callui(131, a1, a2, "hx:ToggleShowCasts", 0, 0, v90, v110, v130, v148);
  sub_33ACA0(v92, 110, a1, a2, a3, v49);
  clear_tinfo_t();
  if ( v160 )
  {
    *(_QWORD *)&v161 = 0;
    qfree();
  }
  if ( v158 )
  {
    *(_QWORD *)&v159 = 0;
    qfree();
  }
  return v170 - __readfsqword(0x28u);
}
