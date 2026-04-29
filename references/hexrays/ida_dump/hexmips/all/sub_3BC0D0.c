unsigned __int64 __fastcall sub_3BC0D0(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rax
  __int64 v10; // r14
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  const char *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r15
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  char v31; // al
  char v32; // r14
  char v33; // r10
  __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  int v40; // eax
  char v41; // al
  const char *v42; // rcx
  const char *v43; // rcx
  __int64 v44; // rdi
  _QWORD *v45; // rax
  const char *v46; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  char v51; // r14
  __int64 v52; // r8
  __int64 v53; // r9
  _DWORD *v54; // r10
  int v55; // r14d
  const char *v56; // rcx
  const char *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // r8
  __int64 v60; // r9
  char v61; // al
  const char *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  __int64 v70; // rcx
  char v71; // al
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // [rsp+0h] [rbp-128h]
  __int64 v79; // [rsp+0h] [rbp-128h]
  __int64 v80; // [rsp+0h] [rbp-128h]
  __int64 v81; // [rsp+0h] [rbp-128h]
  __int64 v82; // [rsp+0h] [rbp-128h]
  __int64 v83; // [rsp+0h] [rbp-128h]
  __int64 v84; // [rsp+0h] [rbp-128h]
  __int64 v85; // [rsp+0h] [rbp-128h]
  __int64 v86; // [rsp+0h] [rbp-128h]
  __int64 v87; // [rsp+0h] [rbp-128h]
  __int64 v88; // [rsp+0h] [rbp-128h]
  __int64 v89; // [rsp+0h] [rbp-128h]
  __int64 v90; // [rsp+0h] [rbp-128h]
  __int64 v91; // [rsp+0h] [rbp-128h]
  __int64 v92; // [rsp+0h] [rbp-128h]
  __int64 v93; // [rsp+0h] [rbp-128h]
  __int64 v94; // [rsp+8h] [rbp-120h]
  __int128 *v95; // [rsp+8h] [rbp-120h]
  __int64 v96; // [rsp+8h] [rbp-120h]
  __int64 v97; // [rsp+8h] [rbp-120h]
  __int128 *v98; // [rsp+8h] [rbp-120h]
  __int64 v99; // [rsp+8h] [rbp-120h]
  __int64 v100; // [rsp+8h] [rbp-120h]
  __int64 v101; // [rsp+8h] [rbp-120h]
  __int64 v102; // [rsp+8h] [rbp-120h]
  __int64 v103; // [rsp+8h] [rbp-120h]
  __int64 v104; // [rsp+8h] [rbp-120h]
  __int64 v105; // [rsp+8h] [rbp-120h]
  __int64 v106; // [rsp+8h] [rbp-120h]
  __int64 v107; // [rsp+8h] [rbp-120h]
  __int64 v108; // [rsp+8h] [rbp-120h]
  __int64 v109; // [rsp+8h] [rbp-120h]
  __int64 v110; // [rsp+8h] [rbp-120h]
  __int64 v111; // [rsp+10h] [rbp-118h]
  __int64 tinfo_property; // [rsp+10h] [rbp-118h]
  __int64 v113; // [rsp+10h] [rbp-118h]
  __int64 v114; // [rsp+10h] [rbp-118h]
  __int64 v115; // [rsp+10h] [rbp-118h]
  __int64 v116; // [rsp+10h] [rbp-118h]
  __int64 v117; // [rsp+10h] [rbp-118h]
  __int64 v118; // [rsp+10h] [rbp-118h]
  __int64 v119; // [rsp+10h] [rbp-118h]
  __int64 v120; // [rsp+10h] [rbp-118h]
  __int64 v121; // [rsp+10h] [rbp-118h]
  __int64 v122; // [rsp+10h] [rbp-118h]
  __int64 v123; // [rsp+10h] [rbp-118h]
  __int64 v124; // [rsp+10h] [rbp-118h]
  __int64 v125; // [rsp+10h] [rbp-118h]
  __int64 v126; // [rsp+10h] [rbp-118h]
  __int64 v127; // [rsp+18h] [rbp-110h]
  __int64 v128; // [rsp+18h] [rbp-110h]
  __int64 v129; // [rsp+18h] [rbp-110h]
  __int64 v130; // [rsp+18h] [rbp-110h]
  __int64 v131; // [rsp+18h] [rbp-110h]
  __int64 v132; // [rsp+18h] [rbp-110h]
  __int64 v133; // [rsp+18h] [rbp-110h]
  __int64 v134; // [rsp+18h] [rbp-110h]
  __int64 v135; // [rsp+18h] [rbp-110h]
  __int64 v136; // [rsp+18h] [rbp-110h]
  __int64 v137; // [rsp+18h] [rbp-110h]
  __int64 v138; // [rsp+18h] [rbp-110h]
  __int64 v139; // [rsp+18h] [rbp-110h]
  __int64 v140; // [rsp+18h] [rbp-110h]
  __int64 v141; // [rsp+18h] [rbp-110h]
  __int64 v142; // [rsp+20h] [rbp-108h] BYREF
  int v143; // [rsp+28h] [rbp-100h]
  __int64 v144; // [rsp+30h] [rbp-F8h] BYREF
  int v145; // [rsp+38h] [rbp-F0h]
  __int64 v146; // [rsp+40h] [rbp-E8h] BYREF
  int v147; // [rsp+48h] [rbp-E0h]
  __int128 v148; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v149; // [rsp+60h] [rbp-C8h]
  __int128 v150; // [rsp+68h] [rbp-C0h]
  __int64 v151; // [rsp+78h] [rbp-B0h]
  __int128 v152; // [rsp+80h] [rbp-A8h]
  _OWORD v153[3]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v154; // [rsp+C0h] [rbp-68h]
  int v155; // [rsp+C8h] [rbp-60h]
  __int64 v156; // [rsp+D0h] [rbp-58h]
  char v157; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v158; // [rsp+E8h] [rbp-40h]

  v158 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, const char *, _QWORD, _QWORD))callui)(131, a1, a2, "EditCopy", 0, 0);
  callui(131, a1, a2, 0, 0, 0, v78, v94, v111, v127);
  v79 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 216LL);
  sub_384C60((_QWORD *)a3);
  v9 = sub_3879B0(a3);
  if ( v9 )
  {
    v10 = v9;
    v11 = is_enum(*(_QWORD *)(v9 + 40), (unsigned int)*(char *)(v9 + 12));
    v12 = (unsigned int)*(char *)(v10 + 12);
    v13 = *(_QWORD *)(v10 + 40);
    if ( v11 )
      goto LABEL_3;
    if ( !(unsigned __int8)is_char(v13, v12) )
    {
      v71 = is_stroff(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12));
      v12 = (unsigned int)*(char *)(v10 + 12);
      v13 = *(_QWORD *)(v10 + 40);
      if ( v71 )
      {
LABEL_3:
        if ( !(unsigned __int8)is_numop(v13, v12) )
          goto LABEL_4;
LABEL_135:
        if ( (unsigned int)get_radix(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12)) == 16 )
        {
LABEL_6:
          if ( !(unsigned __int8)is_numop(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12))
            || (unsigned int)get_radix(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12)) != 10 )
          {
            callui(131, a1, a2, "hx:Dec", 0, 0, v79, v95, tinfo_property, v128);
          }
          v14 = *(_QWORD *)v10;
          goto LABEL_9;
        }
LABEL_4:
        if ( *(_QWORD *)v10 > 9u )
          callui(131, a1, a2, "hx:Hex", 0, 0, v79, v95, tinfo_property, v128);
        goto LABEL_6;
      }
      if ( (unsigned __int8)is_numop(v13, v12)
        && (unsigned int)get_radix(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12)) == 8 )
      {
        if ( *(_QWORD *)v10 <= 7u )
        {
LABEL_10:
          if ( !(unsigned __int8)is_char(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12)) )
            callui(131, a1, a2, "hx:Char", 0, 0, v79, v95, tinfo_property, v128);
          callui(131, a1, a2, "hx:Enum", 0, 0, v79, v95, tinfo_property, v128);
          if ( *(_QWORD *)v10 )
            callui(131, a1, a2, "hx:InvertSign", 0, 0, v80, v96, v113, v129);
          callui(131, a1, a2, "hx:BitwiseNegate", 0, 0, v80, v96, v113, v129);
          v15 = "hx:StrucOffset";
          goto LABEL_15;
        }
      }
      else
      {
        v14 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 <= 9u )
        {
LABEL_9:
          if ( v14 > 7
            && (!(unsigned __int8)is_numop(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12))
             || (unsigned int)get_radix(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12)) != 8
             || (unsigned __int8)is_enum(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12))
             || (unsigned __int8)is_char(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12))
             || (unsigned __int8)is_stroff(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12))) )
          {
            callui(131, a1, a2, "hx:Oct", 0, 0, v79, v95, tinfo_property, v128);
          }
          goto LABEL_10;
        }
      }
    }
    if ( !(unsigned __int8)is_numop(*(_QWORD *)(v10 + 40), (unsigned int)*(char *)(v10 + 12)) )
      goto LABEL_4;
    goto LABEL_135;
  }
  if ( *(int *)(*(_QWORD *)(v79 + 880) + 368LL) > 3 )
    goto LABEL_16;
  v15 = "hx:DelContainingRecord";
LABEL_15:
  callui(131, a1, a2, v15, 0, 0, v79, v95, tinfo_property, v128);
LABEL_16:
  v16 = (_QWORD *)sub_388DC0(*(_QWORD *)(a3 + 32), a3 + 80, a4);
  v17 = (__int64)v16;
  if ( !v16 || *v16 == -1 )
    goto LABEL_23;
  if ( *(_DWORD *)(v16[3] + 8LL) != 68 )
  {
    if ( !sub_3C0A30(*(_QWORD *)(a3 + 24) + 1312LL) )
    {
      callui(131, a1, a2, "hx:SetCallType", 0, 0, v79, v95, tinfo_property, v128);
      if ( (unsigned int)sub_3868C0(a3, *(_QWORD **)(v17 + 32)) == -1 )
      {
        v64 = *(_QWORD *)(v17 + 24);
        if ( v64 == *(_QWORD *)(a3 + 88) )
        {
          v69 = *(_QWORD *)(v17 + 32);
          *(_QWORD *)&v148 = 0;
          *(_QWORD *)&v148 = get_tinfo_property(*(_QWORD *)(v69 + 24), 24);
          if ( (get_tinfo_property(v148, 2) & 0x3F) == 1 )
          {
            v95 = &v148;
            clear_tinfo_t(&v148);
          }
          else
          {
            clear_tinfo_t(&v148);
            sub_3B6840(a1, a2, 1, v75, v76, v77, v79, (__int64)&v148, tinfo_property, v128);
          }
          v64 = *(_QWORD *)(v17 + 24);
LABEL_131:
          if ( *(_DWORD *)(v64 + 8) == 48 )
          {
            v65 = *(_QWORD *)(v64 + 24);
            *(_QWORD *)&v148 = 0;
            *(_QWORD *)&v148 = get_tinfo_property(*(_QWORD *)(v65 + 48), 10);
            tinfo_property = get_tinfo_property(v148, 2);
            clear_tinfo_t(v95);
            if ( (tinfo_property & 0xF) == 0xC )
              callui(131, a1, a2, "hx:ForceCallType", 0, 0, v79, v95, tinfo_property, v128);
          }
          goto LABEL_20;
        }
LABEL_130:
        v95 = &v148;
        goto LABEL_131;
      }
      sub_3B6840(a1, a2, 0, v66, v67, v68, v79, v110, tinfo_property, v128);
    }
    v64 = *(_QWORD *)(v17 + 24);
    goto LABEL_130;
  }
  v95 = &v148;
LABEL_20:
  sub_240340(v95, v17);
  v18 = get_tinfo_property(v148, 20);
  LOBYTE(tinfo_property) = (v18 & 0xFFFFFFF0) == 208 || (v18 & 0xFFFFFFF0) == 64;
  clear_tinfo_t(v95);
  if ( (_BYTE)tinfo_property )
  {
    callui(131, a1, a2, "hx:AddVarArg", 0, 0, v79, v95, tinfo_property, v128);
    if ( (unsigned __int64)(int)get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v17 + 32) + 24LL), 23) < *(_QWORD *)(*(_QWORD *)(v17 + 32) + 8LL) )
      callui(131, a1, a2, "hx:DelVarArg", 0, 0, v79, v95, tinfo_property, v128);
  }
LABEL_23:
  v19 = sub_388820(a3 + 80);
  v21 = v19;
  if ( v19 )
  {
    if ( (*(_BYTE *)(v19 + 26) & 2) == 0 )
      callui(131, a1, a2, "hx:Rename", 0, 0, v79, v95, tinfo_property, v128);
    callui(131, a1, a2, "hx:SetType", 0, 0, v79, v95, tinfo_property, v128);
    if ( (get_tinfo_property(*(_QWORD *)(v21 + 80), 2) & 0xF) == 0xA )
      callui(131, a1, a2, "hx:ResetPtrType", 0, 0, v81, v97, v114, v130);
    if ( *(_DWORD *)(v21 + 88) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 128) + 112LL) + 80LL) )
      callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v81, v97, v114, v130);
    if ( (unsigned __int8)sub_252C40(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v81, v97, v114, v130);
    if ( (unsigned __int8)sub_2126A0(*(_QWORD *)(a3 + 24), v21, nullptr, nullptr) )
      callui(131, a1, a2, "hx:Map2OtherVar", 0, 0, v81, v97, v114, v130);
    v24 = *(_DWORD *)(v21 + 24);
    if ( (v24 & 0x2000) != 0 )
    {
      callui(131, a1, a2, "hx:UnmapVar", 0, 0, v81, v97, v114, v130);
      v24 = *(_DWORD *)(v21 + 24);
    }
    if ( (v24 & 0x8000000) == 0 )
      callui(131, a1, a2, "hx:NopropVar", 0, 0, v81, v97, v114, v130);
    if ( *(_DWORD *)(a3 + 80) == 2 && (*(_BYTE *)(sub_388820(a3 + 80) + 25) & 1) != 0 )
      sub_3B6840(a1, a2, 0, v70, v22, v23, v81, v97, v114, v130);
    sub_3B7A60(a1, a2, a3, v21, a4, a5, a6, v22, v23, v81, v97, v114, v130);
    v25 = *(_DWORD *)(a3 + 80);
    v98 = &v148;
  }
  else
  {
    v25 = *(_DWORD *)(a3 + 80);
    v98 = &v148;
    if ( v25 == 3 )
    {
      v63 = *(_QWORD *)(a3 + 24);
      v146 = 0;
      tinfo_property = (__int64)&v146;
      if ( (unsigned __int8)sub_37C1A0(v79, *(_QWORD *)(v63 + 40), (unsigned __int64)&v146, 2, v20) )
      {
        *(_QWORD *)&v148 = 0;
        *(_QWORD *)&v148 = get_tinfo_property(v146, 24);
        if ( (get_tinfo_property(v148, 2) & 0x3F) == 1 )
        {
          v98 = &v148;
          clear_tinfo_t(&v148);
        }
        else
        {
          clear_tinfo_t(&v148);
          sub_3B6840(a1, a2, 1, v72, v73, v74, v79, (__int64)&v148, (__int64)&v146, v128);
        }
      }
      else
      {
        v98 = &v148;
      }
      clear_tinfo_t(tinfo_property);
      v25 = *(_DWORD *)(a3 + 80);
    }
  }
  if ( v25 == 1 )
  {
    v58 = *(_QWORD *)(a3 + 88);
    if ( *(int *)(v58 + 8) <= 69 )
    {
      if ( (unsigned __int8)sub_20CFD0(*(_QWORD *)(a3 + 32), v58) )
      {
        v62 = "Quick rename variable";
      }
      else
      {
        v61 = sub_20D020(*(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 88));
        v62 = "Quick rename formal function argument";
        if ( !v61 )
          goto LABEL_41;
      }
      callui(140, "hx:QuickRename", 1, v62, v59, v60, v79, v98, tinfo_property, v128);
      callui(131, a1, a2, "hx:QuickRename", 0, 0, v93, v109, v126, v141);
    }
  }
LABEL_41:
  v149 = 0;
  v151 = 0;
  v154 = 1;
  v155 = -1;
  v156 = 0;
  v157 = 0;
  v148 = 0;
  v150 = 0;
  v152 = 0;
  v153[0] = 0;
  if ( (unsigned int)sub_3884D0(a3 + 80, v98, nullptr, nullptr) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v79, v98, tinfo_property, v128);
    callui(131, a1, a2, "hx:SetType", 0, 0, v82, v99, v115, v131);
    if ( (unsigned __int8)sub_252C40(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v83, v100, v116, v132);
    if ( (unsigned __int8)sub_388DB0(a3 + 80, *(_QWORD *)(a3 + 32)) )
      callui(131, a1, a2, "hx:SelUnionField", 0, 0, v83, v100, v116, v132);
    v26 = *(_QWORD *)(v83 + 112);
    if ( *((_QWORD *)&v148 + 1) == 8 * *(_DWORD *)(v26 + 84) )
    {
      v116 = 8 * *(_DWORD *)(v26 + 84);
      v146 = 0;
      v146 = get_tinfo_property(*(_QWORD *)&v153[0], 289);
      if ( v116 == get_tinfo_size(0, v146, 0) )
      {
        clear_tinfo_t(&v146);
        callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v83, v100, v116, v132);
      }
      else
      {
        clear_tinfo_t(&v146);
      }
    }
    callui(131, a1, a2, "hx:JmpStrucDef", 0, 0, v83, v100, v116, v132);
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v84, v101, v117, v133);
  }
  if ( (unsigned __int8)sub_3A86A0(a3, 0, nullptr) )
    callui(131, a1, a2, "hx:JumpGlobalXref", 0, 0, v79, v98, tinfo_property, v128);
  v118 = sub_388860(a3 + 80);
  if ( v118 != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v79, v98, v118, v128);
    callui(131, a1, a2, "hx:SetType", 0, 0, v85, v102, v119, v134);
    if ( (unsigned __int8)sub_252C40(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v79, v98, v118, v128);
  }
  if ( (int)sub_3B96E0(v79, a3 + 80) > 0 )
    callui(131, a1, a2, "hx:JmpLocalType", 0, 0, v79, v98, v118, v128);
  v27 = *(__int64 **)(a3 + 32);
  if ( *(_DWORD *)(a3 + 80) == 3 )
  {
    v28 = *v27;
  }
  else
  {
    v48 = sub_388DC0((__int64)v27, a3 + 80, 0.0);
    if ( !v48 )
      goto LABEL_59;
    v49 = *(_QWORD *)(v48 + 24);
    if ( *(_DWORD *)(v49 + 8) != 64 )
      goto LABEL_59;
    v28 = *(_QWORD *)(v49 + 24);
    if ( v28 == -1 )
      goto LABEL_59;
  }
  if ( sub_3A8B00(nullptr, v28, 1) )
    callui(131, a1, a2, "hx:CallDecomp", 0, 0, v79, v98, v118, v128);
LABEL_59:
  if ( *(_DWORD *)(a3 + 80) == 1 )
  {
    v29 = *(_QWORD *)(a3 + 88);
    if ( *(int *)(v29 + 8) <= 69 )
    {
      v30 = sub_250740(v29);
      if ( *(_DWORD *)(v30 + 8) == 64 )
      {
        if ( sub_3A8CD0(nullptr, *(_QWORD *)(v30 + 24), 1) )
          callui(131, a1, a2, "hx:XrefDecomp", 0, 0, v79, v98, v118, v128);
      }
    }
  }
  if ( v118 != -1 || v21 )
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v79, v98, v118, v128);
  if ( (unsigned int)sub_3888A0(a3 + 80, 3) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v79, v98, v118, v128);
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v86, v103, v120, v135);
  }
  sub_387230(a3);
  if ( sub_3C0A30(*(_QWORD *)(a3 + 24) + 1312LL) )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v79, v98, v118, v128);
    callui(131, a1, a2, "hx:SetType", 0, 0, v87, v104, v121, v136);
  }
  callui(131, a1, a2, "hx:JumpNextParen", 0, 0, v79, v98, v118, v128);
  v31 = sub_386790(a3, *(int *)(a3 + 44), 31, 0.0);
  v32 = v31;
  if ( (v31 & 0x10) != 0 )
    goto LABEL_102;
  if ( (v31 & 1) == 0 )
  {
    if ( (v31 & 8) == 0 )
      goto LABEL_72;
LABEL_102:
    callui(131, a1, a2, "hx:EditCmt", 0, 0, v88, v105, v122, v137);
    callui(131, a1, a2, "hx:StockComments", 0, 0, v92, v108, v125, v140);
    v33 = 1;
    goto LABEL_73;
  }
  callui(131, a1, a2, "hx:EditCmt", 0, 0, v88, v105, v122, v137);
LABEL_72:
  v33 = 0;
LABEL_73:
  LOBYTE(v122) = v33;
  if ( (v32 & 6) != 0 )
  {
    callui(131, a1, a2, "hx:EditBlockCmt", 0, 0, v88, v105, v122, v137);
    if ( !(_BYTE)v122 )
      callui(131, a1, a2, "hx:StockComments", 0, 0, v88, v105, v122, v137);
  }
  if ( (unsigned __int8)sub_2510E0(*(_QWORD *)(a3 + 32)) )
    callui(131, a1, a2, "hx:DelOrphanCmts", 0, 0, v88, v105, v122, v137);
  v36 = *(_DWORD *)(a3 + 80) == 3;
  v142 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  if ( v36 || (unsigned __int8)callui(8, *(_QWORD *)(a3 + 8), &v142, &v144, v34, v35, v88, v105, v122, v137) )
    callui(131, a1, a2, "hx:GenHtml", 0, 0, v88, v105, v122, v137);
  callui(131, a1, a2, "MoveFunctionToFolder", 0, 0, v88, v105, v122, v137);
  if ( sub_387630(a3) )
  {
    v37 = *(_QWORD *)(a3 + 88);
    v38 = *(_QWORD *)(a3 + 32);
    if ( v37 )
    {
      v39 = *(_QWORD *)v37;
      v40 = *(_DWORD *)(v37 + 8);
    }
    else
    {
      v39 = -1;
      v40 = 0;
    }
    v146 = v39;
    v147 = v40;
    v41 = sub_253620(v38, (unsigned __int64 *)&v146);
    v42 = "hx:ExpandItem";
    if ( (v41 & 1) == 0 )
      v42 = "hx:CollapseItem";
    callui(131, a1, a2, v42, 0, 0, v89, v106, v123, v138);
  }
  if ( sub_387660(a3) )
  {
    v43 = "hx:ExpandDecls";
    if ( (*(_BYTE *)(*(_QWORD *)(a3 + 32) + 108LL) & 4) == 0 )
      v43 = "hx:CollapseDecls";
    callui(131, a1, a2, v43, 0, 0, v89, v106, v123, v138);
  }
  v44 = *(_QWORD *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 80) != 1 )
  {
    v45 = sub_1CA620(v44);
    if ( !v45 || (v46 = "hx:UnmarkDecompiled", *((_DWORD *)v45 + 16) != *(_DWORD *)(*(_QWORD *)(a3 + 128) + 588LL)) )
      v46 = "hx:MarkDecompiled";
    callui(131, a1, a2, v46, 0, 0, v89, v106, v123, v138);
    callui(131, a1, a2, "hx:Copy2Asm", 0, 0, v90, v107, v124, v139);
    goto LABEL_96;
  }
  v50 = **(_QWORD **)(a3 + 88);
  v147 = 0;
  v146 = v50;
  v51 = sub_133470(v44, (__int64)&v146);
  v54 = (_DWORD *)sub_387690(a3);
  v55 = v51 & 7;
  if ( !v54 )
  {
    if ( !v55 )
      goto LABEL_118;
    goto LABEL_112;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 8LL) != 51 || (unsigned int)(*v54 - 1) > 1 )
  {
    if ( !v55 )
      goto LABEL_140;
LABEL_112:
    HIBYTE(v138) = 0;
    v56 = "hx:UnsplitExpr";
    goto LABEL_113;
  }
  if ( !v55 )
    goto LABEL_116;
  HIBYTE(v138) = 1;
  v56 = "hx:UnsplitMemAccess";
LABEL_113:
  callui(131, a1, a2, v56, 0, 0, v89, v106, v54, v138);
  if ( v55 != 1 && v123 )
  {
    if ( HIBYTE(v138) )
    {
LABEL_116:
      v57 = "hx:SplitMemAccess";
LABEL_117:
      callui(131, a1, a2, v57, 0, 0, v89, v106, v123, v138);
      goto LABEL_118;
    }
LABEL_140:
    v57 = "hx:SplitExpr";
    goto LABEL_117;
  }
LABEL_118:
  if ( !v21 )
    sub_3B7A60(a1, a2, a3, 0, 0.0, a5, a6, v52, v53, v89, v106, v123, v138);
LABEL_96:
  callui(131, a1, a2, "hx:ToggleShowCasts", 0, 0, v89, v106, v123, v138);
  sub_339220(v91, 0x6Eu, a1, a2, a3);
  clear_tinfo_t(v153);
  if ( v151 )
  {
    *(_QWORD *)&v152 = 0;
    qfree(v151);
  }
  if ( v149 )
  {
    *(_QWORD *)&v150 = 0;
    qfree(v149);
  }
  return v158 - __readfsqword(0x28u);
}
