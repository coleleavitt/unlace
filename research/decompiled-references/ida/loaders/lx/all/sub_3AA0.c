__int64 __fastcall sub_3AA0(__int64 a1, _DWORD *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  unsigned int v7; // ebx
  unsigned __int8 v8; // dl
  __int64 v9; // rbx
  int v10; // ebp
  unsigned int v11; // esi
  int v12; // r14d
  unsigned int v13; // r12d
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  char v17; // al
  char v18; // dl
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // r14
  unsigned __int8 v23; // al
  int v24; // r12d
  int v25; // eax
  __int64 v26; // rsi
  unsigned __int8 v27; // al
  unsigned int v28; // ebp
  int v29; // r12d
  __int64 v30; // r14
  unsigned __int8 v31; // al
  __int64 v32; // rbp
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // r12d
  __int64 v42; // r14
  __int64 v43; // r13
  __int64 v44; // rbx
  __int64 v45; // rbp
  __int64 result; // rax
  int v47; // eax
  int v48; // edx
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // r13
  int v52; // eax
  int v53; // edx
  int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rax
  _BYTE *v57; // r15
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r14
  char *v62; // r13
  __int64 v63; // rbx
  int v64; // r15d
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // rbx
  int v68; // r12d
  __int64 v69; // r13
  __int64 v70; // r15
  __int64 v71; // rax
  char v72; // al
  __int64 v73; // rbp
  __int64 v74; // rbx
  __int64 v75; // r12
  unsigned __int64 v76; // rbx
  int v77; // edx
  int v78; // r12d
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rbp
  __int64 v82; // r14
  unsigned __int8 v83; // dl
  char *v85; // [rsp+10h] [rbp-978h]
  unsigned int v87; // [rsp+20h] [rbp-968h]
  _BYTE *v88; // [rsp+20h] [rbp-968h]
  unsigned int v90; // [rsp+2Ch] [rbp-95Ch]
  unsigned int v91; // [rsp+40h] [rbp-948h]
  int v92; // [rsp+40h] [rbp-948h]
  __int64 v93; // [rsp+40h] [rbp-948h]
  __int64 v94; // [rsp+48h] [rbp-940h]
  int v95; // [rsp+50h] [rbp-938h]
  unsigned int v96; // [rsp+54h] [rbp-934h]
  char v97; // [rsp+67h] [rbp-921h] BYREF
  unsigned __int8 v98; // [rsp+68h] [rbp-920h] BYREF
  char v99; // [rsp+69h] [rbp-91Fh] BYREF
  _BYTE v100[2]; // [rsp+6Ah] [rbp-91Eh] BYREF
  unsigned int v101; // [rsp+6Ch] [rbp-91Ch] BYREF
  __int64 v102; // [rsp+70h] [rbp-918h] BYREF
  __int64 v103; // [rsp+78h] [rbp-910h] BYREF
  _OWORD v104[2]; // [rsp+80h] [rbp-908h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-8E8h]
  __int64 v106; // [rsp+A8h] [rbp-8E0h]
  __int64 v107; // [rsp+B0h] [rbp-8D8h]
  __int128 v108; // [rsp+B8h] [rbp-8D0h]
  __int128 v109; // [rsp+C8h] [rbp-8C0h]
  __int128 v110; // [rsp+D8h] [rbp-8B0h]
  __int128 v111; // [rsp+E8h] [rbp-8A0h]
  __int128 v112; // [rsp+F8h] [rbp-890h]
  __int128 v113; // [rsp+108h] [rbp-880h]
  __int128 v114; // [rsp+118h] [rbp-870h]
  __int128 v115; // [rsp+128h] [rbp-860h]
  unsigned __int64 v116; // [rsp+138h] [rbp-850h]
  _BYTE v117[1023]; // [rsp+140h] [rbp-848h] BYREF
  char v118; // [rsp+53Fh] [rbp-449h] BYREF
  _BYTE v119[1032]; // [rsp+540h] [rbp-448h] BYREF
  unsigned __int64 v120; // [rsp+948h] [rbp-40h]

  v120 = __readfsqword(0x28u);
  v6 = (unsigned int)(a2[28] + a3);
  sub_39E0(a1, a2[29], 2u, "Number of imported modules", v6, qword_B288);
  qlseek(a1, v6, 0);
  if ( a2[29] )
  {
    v7 = 0;
    do
    {
      lread(a1, &v103, 1);
      v8 = v103 & 0x7F;
      LOBYTE(v103) = v8;
      if ( !v8 )
        sub_3930((__int64)"Bad import table");
      lread(a1, v117, v8);
      ++v7;
      v117[(unsigned __int8)v103] = 0;
      netnode_supset(a5, v7, v117, 0, 83);
      v102 = -1;
      netnode_check(&v102, 0, 0, 1);
      v103 = v102;
      netnode_supset(a5, v7, &v103, 8, 65);
    }
    while ( v7 < a2[29] );
  }
  v9 = (unsigned int)(a2[26] + a3);
  v10 = a3 + a2[27];
  qlseek(a1, v9, 0);
  lread(a1, &v101, 4);
  v11 = a2[5];
  v101 += v10;
  sub_39E0(a1, v11, 4u, "Number of fixup pages", v9, qword_B288);
  if ( a2[5] )
  {
    v12 = v10;
    v13 = 1;
    while ( 1 )
    {
      qlseek(a1, v9 + 4LL * v13, 0);
      lread(a1, &v102, 4);
      LODWORD(v102) = v12 + v102;
      v14 = netnode_altval(a4, v13, 65);
      v15 = v102;
      if ( v14 )
      {
        if ( qword_B288 < (unsigned __int64)(unsigned int)v102 )
          sub_3930((__int64)"Corrupted fixup records");
        if ( v101 < (unsigned int)v102 )
          break;
      }
LABEL_8:
      v101 = v15;
      if ( a2[5] < ++v13 )
        goto LABEL_79;
    }
    v91 = v102;
    qlseek(a1, v101, 0);
    v94 = v9;
    v16 = v91;
    v95 = v12;
    v96 = v13;
    while ( 1 )
    {
      lread(a1, &v97, 1);
      lread(a1, &v98, 1);
      v99 = 0;
      if ( (v97 & 0x20) != 0 )
        lread(a1, &v99, 1);
      else
        lread(a1, v100, 2);
      v17 = v98 & 0x40;
      v18 = v98 & 3;
      if ( (v98 & 3) == 2 )
      {
        if ( v17 )
        {
          lread(a1, &v103, 2);
          v26 = (unsigned __int16)v103;
        }
        else
        {
          lread(a1, &v103, 1);
          v26 = (unsigned __int8)v103;
        }
        v93 = netnode_altval(a5, v26, 65);
        if ( (v98 & 0x10) != 0 )
        {
          lread(a1, &v103, 4);
          v27 = v98;
          v28 = v103;
          if ( (v98 & 4) == 0 )
            goto LABEL_48;
LABEL_58:
          if ( (v27 & 0x20) != 0 )
          {
            lread(a1, &v103, 4);
            v35 = v103;
          }
          else
          {
            lread(a1, &v103, 2);
            v35 = (__int16)v103;
          }
          if ( v35 )
          {
            v29 = v35 + 1;
            if ( v35 < 0 )
              v29 = v35 - 1;
            goto LABEL_49;
          }
        }
        else
        {
          lread(a1, &v103, 2);
          v27 = v98;
          v28 = (unsigned __int16)v103;
          if ( (v98 & 4) != 0 )
            goto LABEL_58;
        }
LABEL_48:
        v29 = 1;
LABEL_49:
        v30 = qlseek(a1, 0, 1);
        qlseek(a1, a2[30] + a3 + v28, 0);
        lread(a1, &v103, 1);
        v31 = v103 & 0x7F;
        LOBYTE(v103) = v31;
        if ( v31 )
        {
          lread(a1, v119, v31);
          v119[(unsigned __int8)v103] = 0;
          v32 = ea2node(v28);
          v33 = netnode_altval(v93, v32, 97);
          v34 = -v29;
          if ( v29 > 0 )
            v34 = v29;
          if ( v33 <= 0 )
            v33 = -v33;
          if ( v34 > v33 )
          {
            netnode_supset(v93, v32, v119, 0, 115);
            v103 = v29;
            netnode_supset(v93, v32, &v103, 8, 97);
          }
        }
        qlseek(a1, v30, 0);
        v19 = v97;
        goto LABEL_22;
      }
      if ( v18 == 3 )
      {
        if ( v17 )
          lread(a1, &v103, 2);
        else
          lread(a1, &v103, 1);
        if ( (v98 & 4) == 0 )
          goto LABEL_38;
        if ( (v98 & 0x20) == 0 )
          goto LABEL_43;
      }
      else
      {
        if ( v18 == 1 )
        {
          if ( v17 )
          {
            lread(a1, &v103, 2);
            v20 = (unsigned __int16)v103;
          }
          else
          {
            lread(a1, &v103, 1);
            v20 = (unsigned __int8)v103;
          }
          v21 = netnode_altval(a5, v20, 65);
          if ( (v98 & 0x80u) != 0 )
          {
            lread(a1, &v103, 1);
            v23 = v98;
            v22 = (unsigned __int8)v103;
            if ( (v98 & 4) == 0 )
              goto LABEL_33;
          }
          else
          {
            if ( (v98 & 0x10) != 0 )
            {
              lread(a1, &v103, 4);
              v22 = (unsigned int)v103;
            }
            else
            {
              lread(a1, &v103, 2);
              v22 = (unsigned __int16)v103;
            }
            v23 = v98;
            if ( (v98 & 4) == 0 )
            {
LABEL_33:
              v92 = 1;
              v24 = 1;
              goto LABEL_34;
            }
          }
          if ( (v23 & 0x20) != 0 )
          {
            lread(a1, &v103, 4);
            v36 = v103;
          }
          else
          {
            lread(a1, &v103, 2);
            v36 = (__int16)v103;
          }
          if ( !v36 )
            goto LABEL_33;
          v92 = v36 + 1;
          v37 = -(v36 + 1);
          if ( v36 + 1 > 0 )
            v37 = v36 + 1;
          v24 = v37;
          if ( v36 < 0 )
          {
            v38 = v36 - 1;
            v92 = v38;
            v39 = -v38;
            if ( v38 > 0 )
              v39 = v38;
            v24 = v39;
          }
LABEL_34:
          v25 = netnode_altval(v21, v22, 65);
          if ( v25 <= 0 )
            v25 = -v25;
          if ( v25 < v24 )
          {
            v103 = v92;
            netnode_supset(v21, v22, &v103, 8, 65);
          }
LABEL_38:
          v19 = v97;
          goto LABEL_22;
        }
        if ( v17 )
          lread(a1, &v103, 2);
        else
          lread(a1, &v103, 1);
        v19 = v97;
        if ( (v97 & 0xF) == 2 )
          goto LABEL_22;
        if ( (v98 & 0x10) == 0 )
        {
LABEL_43:
          lread(a1, &v103, 2);
          v19 = v97;
          goto LABEL_22;
        }
      }
      lread(a1, &v103, 4);
      v19 = v97;
LABEL_22:
      if ( (v19 & 0x20) != 0 )
        qlseek(a1, 2LL * (unsigned __int8)v99, 1);
      if ( v16 <= (unsigned int)qlseek(a1, 0, 1) )
      {
        v9 = v94;
        v12 = v95;
        v13 = v96;
        v15 = v102;
        goto LABEL_8;
      }
    }
  }
LABEL_79:
  v40 = a2[23];
  if ( v40 )
  {
    qlseek(a1, (unsigned int)(a3 + v40), 0);
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          do
          {
LABEL_114:
            if ( qlseek(a1, 0, 1) >= (unsigned __int64)qword_B288 )
              goto LABEL_80;
            v98 = 0;
            v99 = 0;
            lread(a1, &v98, 1);
            if ( !v98 )
              goto LABEL_80;
            lread(a1, &v99, 1);
            v72 = v99;
            if ( v99 < 0 )
            {
              v72 = v99 & 0x7F;
              v99 &= ~0x80u;
            }
          }
          while ( !v72 );
          lread(a1, v100, 2);
          if ( (unsigned __int8)v99 > 3u )
            break;
          if ( (unsigned __int8)v99 > 1u )
          {
            qlseek(a1, 5 * v98, 1);
          }
          else if ( v99 == 1 )
          {
            qlseek(a1, 3 * v98, 1);
          }
        }
      }
      while ( v99 != 4 );
      v73 = v98;
      v74 = qword_B288;
      v75 = qlseek(a1, 0, 1);
      if ( v74 == -1 )
        v74 = qlsize(a1);
      v76 = v74 - v75;
      if ( ((v76 | v75) & 0x8000000000000000LL) != 0LL )
        break;
      if ( v73 && v76 < 7 * v73 )
      {
        v77 = (int)v76 / 7;
        goto LABEL_130;
      }
      if ( v98 )
      {
        v78 = 0;
        lread(a1, (char *)&v103 + 6, 1);
        while ( 1 )
        {
          lread(a1, (char *)&v103 + 4, 2);
          lread(a1, &v103, 4);
          v79 = netnode_altval(a5, WORD2(v103), 65);
          v80 = ea2node((unsigned int)v103);
          v81 = v80;
          if ( (v103 & 0x1000000000000LL) != 0 )
          {
            if ( !netnode_altval(v79, v80, 65) )
            {
              v102 = 1;
              netnode_supset(v79, v81, &v102, 8, 65);
            }
            if ( ++v78 >= v98 )
              goto LABEL_114;
          }
          else
          {
            v82 = qlseek(a1, 0, 1);
            qlseek(a1, (unsigned int)(a2[30] + v103 + a3), 0);
            lread(a1, &v102, 1);
            v83 = v102 & 0x7F;
            LOBYTE(v102) = v83;
            if ( !v83 )
              sub_3930((__int64)"Bad import entry");
            lread(a1, v119, v83);
            v119[(unsigned __int8)v102] = 0;
            if ( !(unsigned int)netnode_altval(v79, v81, 97) )
            {
              netnode_supset(v79, v81, v119, 0, 115);
              v102 = 1;
              netnode_supset(v79, v81, &v102, 8, 97);
            }
            ++v78;
            qlseek(a1, v82, 0);
            if ( v78 >= v98 )
              goto LABEL_114;
          }
          lread(a1, (char *)&v103 + 6, 1);
        }
      }
    }
    v77 = 0;
LABEL_130:
    sub_3930((__int64)"%s is incorrect, maximum possible value is %u%s", "Number of forwards", v77, "");
  }
LABEL_80:
  v41 = 0;
  if ( !a2[29] )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v42 = v41 + 1;
      v43 = 0;
      v44 = 0;
      v45 = netnode_altval(a5, ++v41, 65);
      if ( v45 )
        break;
      if ( v41 >= a2[29] )
        return 1;
    }
    while ( 1 )
    {
      v50 = netnode_supnext(v45, v43, 65);
      v43 = v50;
      if ( v50 == -1 )
        break;
      v47 = netnode_altval(v45, v50, 65);
      v48 = -v47;
      if ( v47 > 0 )
        v48 = v47;
      v49 = v44 + v48;
      if ( (int)v44 > v49 )
        sub_3930((__int64)"Too many imported by ordinal objects");
      v44 = v49;
    }
    v51 = 0;
    while ( 1 )
    {
      v55 = netnode_supnext(v45, v51, 97);
      v51 = v55;
      if ( v55 == -1 )
        break;
      v52 = netnode_altval(v45, v55, 97);
      v53 = -v52;
      if ( v52 > 0 )
        v53 = v52;
      v54 = v44 + v53;
      if ( (int)v44 > v54 )
        sub_3930((__int64)"Too many imported by name objects");
      v44 = v54;
    }
    if ( (_DWORD)v44 )
      break;
LABEL_82:
    if ( v41 >= a2[29] )
      return 1;
  }
  v56 = netnode_supstr(a5, v42, v117, 1024, 83);
  memset(v104, 0, sizeof(v104));
  v57 = &v117[v56];
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v116 = 0xFFFFFFFF00000000LL;
  v108 = -1;
  v109 = -1;
  v110 = -1;
  v111 = -1;
  v112 = -1;
  v113 = -1;
  v114 = -1;
  v115 = -1;
  *(_QWORD *)&v104[0] = find_free_chunk(1024, v44, 15);
  BYTE3(v106) = 1;
  result = sub_36F0(0, (__int64)v104, (__int64)v117, v44);
  if ( !(_DWORD)result )
    return result;
  LOBYTE(v116) = 1;
  LOWORD(v106) = 515;
  add_segm_ex(v104, v117, 0, 33);
  v61 = *(_QWORD *)&v104[0];
  if ( v57 < v119 )
  {
    v62 = v57 + 1;
    *v57 = 95;
    if ( v57 + 1 >= v119 )
    {
      v118 = 0;
      v62 = &v118;
    }
    v87 = v41;
    v63 = 0;
    while ( 1 )
    {
      v66 = netnode_supnext(v45, v63, 65);
      v63 = v66;
      if ( v66 == -1 )
        break;
      qsnprintf(v62, v119 - v62, "%llu", v66);
      v64 = netnode_altval(v45, v63, 65);
      netnode_supdel(v45, v63, 65);
      v65 = sub_27B0(v61, v64, (__int64)v117);
      set_import_ordinal(v45, v65, v63);
      make_name_auto(v65);
      v61 += v64;
    }
    v85 = v62;
    v67 = 0;
    v90 = v87;
    v88 = (_BYTE *)(v119 - v62);
    while ( 1 )
    {
      v71 = netnode_supnext(v45, v67, 97);
      v67 = v71;
      if ( v71 == -1 )
        break;
      netnode_supstr(v45, v71, v85, v88, 115);
      v68 = netnode_altval(v45, v67, 97);
      v69 = sub_27B0(v61, v68, (__int64)v117);
      v70 = ea2node(v69);
      netnode_supdel(v45, v67, 115);
      set_import_name(v45, v69, v85);
      v103 = v70;
      netnode_supset(v45, v67, &v103, 8, 97);
      v61 += v68;
    }
    v41 = v90;
    *(v85 - 1) = 0;
    import_module(v117, 0, v45, sub_2CD0, "os2");
    goto LABEL_82;
  }
  if ( under_debugger )
    BUG();
  interr(518, v117, v58, v119, v59, v60);
  return sub_4B00();
}

