__int64 __fastcall sub_19710(__int64 a1, __int64 *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 *v12; // r15
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  const char *v18; // rsi
  unsigned int v19; // r10d
  unsigned __int64 dword; // r15
  char v22; // al
  char v23; // r8
  char v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  int v28; // ecx
  unsigned __int8 v29; // r10
  __int64 *v30; // rdx
  __int16 word; // ax
  unsigned __int8 v32; // r11
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  char byte; // al
  __int64 v38; // r9
  char v39; // r11
  __int64 v40; // rcx
  unsigned __int64 v41; // r8
  unsigned __int8 v42; // r10
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // r15d
  char v46; // al
  unsigned __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r14
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // eax
  char v55; // al
  unsigned __int64 v56; // r14
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // r8
  unsigned __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // r15
  char v63; // al
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  char v68; // al
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // eax
  char v73; // al
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned int v76; // eax
  unsigned __int8 v77; // r10
  __int64 v78; // rax
  __int16 v79; // ax
  int v80; // r13d
  unsigned __int8 v81; // r10
  int v82; // eax
  _BOOL8 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // rdi
  unsigned __int64 v88; // r13
  unsigned __int64 v89; // rdi
  char v90; // [rsp+8h] [rbp-B0h]
  __int64 *v91; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v92; // [rsp+8h] [rbp-B0h]
  __int64 v93; // [rsp+8h] [rbp-B0h]
  int v94; // [rsp+8h] [rbp-B0h]
  unsigned __int8 v95; // [rsp+8h] [rbp-B0h]
  char v96; // [rsp+10h] [rbp-A8h]
  __int64 v97; // [rsp+10h] [rbp-A8h]
  __int64 v98; // [rsp+10h] [rbp-A8h]
  int v99; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+10h] [rbp-A8h]
  char v101; // [rsp+10h] [rbp-A8h]
  char v102; // [rsp+10h] [rbp-A8h]
  __int64 v103; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v104; // [rsp+10h] [rbp-A8h]
  __int64 v105; // [rsp+10h] [rbp-A8h]
  __int64 v106; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v107; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v108; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v109; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v110; // [rsp+18h] [rbp-A0h]
  unsigned __int8 v111; // [rsp+18h] [rbp-A0h]
  char v112; // [rsp+18h] [rbp-A0h]
  __int64 v113; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v114; // [rsp+20h] [rbp-98h]
  int v115; // [rsp+20h] [rbp-98h]
  unsigned __int8 v116; // [rsp+20h] [rbp-98h]
  unsigned __int8 v117; // [rsp+20h] [rbp-98h]
  unsigned int v118; // [rsp+28h] [rbp-90h]
  unsigned __int8 v119; // [rsp+28h] [rbp-90h]
  unsigned __int64 v120; // [rsp+28h] [rbp-90h]
  char v121; // [rsp+28h] [rbp-90h]
  __int64 v122; // [rsp+28h] [rbp-90h]
  unsigned __int64 v123; // [rsp+30h] [rbp-88h]
  unsigned int v124; // [rsp+30h] [rbp-88h]
  unsigned __int8 v125; // [rsp+30h] [rbp-88h]
  int v126; // [rsp+30h] [rbp-88h]
  unsigned __int64 v127; // [rsp+30h] [rbp-88h]
  unsigned __int8 v128; // [rsp+38h] [rbp-80h]
  unsigned __int64 v129; // [rsp+38h] [rbp-80h]
  unsigned __int64 v130; // [rsp+38h] [rbp-80h]
  __int64 v131; // [rsp+38h] [rbp-80h]
  unsigned __int8 v132; // [rsp+40h] [rbp-78h]
  unsigned __int8 v133; // [rsp+40h] [rbp-78h]
  __int64 v134; // [rsp+40h] [rbp-78h]
  __int64 v135; // [rsp+48h] [rbp-70h]
  char v136; // [rsp+48h] [rbp-70h]
  unsigned __int64 v137; // [rsp+50h] [rbp-68h]
  unsigned int v138; // [rsp+58h] [rbp-60h]
  char v139; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int8 v140; // [rsp+5Eh] [rbp-5Ah]
  unsigned __int8 v141; // [rsp+5Fh] [rbp-59h]
  __int64 v142; // [rsp+60h] [rbp-58h] BYREF
  __int64 v143; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v144[9]; // [rsp+70h] [rbp-48h] BYREF

  v9 = *(_QWORD *)(a1 + 16);
  v144[1] = __readfsqword(0x28u);
  v142 = 0;
  v143 = 0;
  sub_18DE0(v9, &v142, &v143, (__int64)a2);
  v11 = getseg(a4);
  if ( !v11 )
    return 0;
  v12 = (__int64 *)v11;
  v13 = is_loaded(a4);
  v14 = v13;
  if ( !(_BYTE)v13 )
    return 0;
  v15 = *v12;
  v16 = a4 - *v12;
  if ( v16 <= 0xB )
    return 0;
  v17 = v12[1] - v15;
  if ( v17 < v16 + 4 )
    return 0;
  v18 = (const char *)v142;
  if ( v142 )
  {
    if ( v15 != *(_QWORD *)(v142 + 16) )
      return 0;
    if ( *(_QWORD *)(v142 + 32) != v17 )
      return 0;
    v16 &= 3u;
    if ( (_DWORD)v16 )
      return 0;
  }
  v90 = v14;
  dword = (unsigned int)get_dword(a4, v142, v17, v16, v14);
  v22 = segtype(a5);
  v23 = v90;
  v139 = v22;
  if ( dword != a5 )
  {
    if ( v22 != 1 || (unsigned __int8)is_loaded(dword) )
    {
      v24 = 0;
      goto LABEL_14;
    }
    v23 = v90;
  }
  v62 = v143;
  if ( !v143 )
    return 0;
  if ( a3 )
  {
    v101 = v23;
    v18 = "$ got";
    netnode_check(v144, "$ got", 0, 0);
    v63 = netnode_exist(v144);
    v24 = v101;
    if ( v63 )
    {
      v18 = nullptr;
      v64 = netnode_altval(v144[0], 0, 65);
      v65 = node2ea(v64 - 1);
      v24 = v101;
      v66 = 8;
      v67 = a4 - (v65 + 24);
    }
    else
    {
      v67 = a4 - 23;
      v66 = 8;
    }
  }
  else
  {
    v102 = v23;
    v18 = "$ got";
    netnode_check(v144, "$ got", 0, 0);
    v68 = netnode_exist(v144);
    v24 = v102;
    if ( v68 )
    {
      v18 = nullptr;
      v69 = netnode_altval(v144[0], 0, 65);
      v70 = node2ea(v69 - 1);
      v24 = v102;
      v66 = 4;
      v67 = a4 - (v70 + 12);
    }
    else
    {
      v67 = a4 - 11;
      v66 = 4;
    }
  }
  dword = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) & (*(_QWORD *)(v62 + 16) + (int)(16 * (v67 / v66 + 1)));
LABEL_14:
  v96 = v24;
  v91 = (__int64 *)getseg(dword);
  if ( !v91 )
    return 0;
  v107 = is_loaded(dword);
  if ( !v107 )
    return 0;
  v27 = get_dword(dword, v18, v25, a3 == 0 ? -81915917 : -98693133, v26);
  v28 = a3 == 0 ? -81915917 : -98693133;
  v29 = v107;
  v30 = v91;
  if ( v28 == v27 )
  {
    v92 = 0;
    v32 = v107;
  }
  else
  {
    if ( !v96 )
    {
      if ( dword < *v91 + 6 )
        return 0;
      dword -= 6LL;
    }
    word = get_word(dword);
    v28 = a3 == 0 ? -81915917 : -98693133;
    v30 = v91;
    v29 = v107;
    if ( word == -23553 )
    {
      v92 = v107;
      v32 = 0;
    }
    else
    {
      if ( word != 9727 )
        return 0;
      v92 = 0;
      v32 = 0;
    }
  }
  v33 = *v30;
  v34 = dword - *v30;
  if ( v34 <= 0xF )
    return 0;
  v35 = v34 + 16;
  v36 = v30[1] - v33;
  if ( v36 < v34 + 16 || v143 && (v33 != *(_QWORD *)(v143 + 16) || *(_QWORD *)(v143 + 32) != v36 || (v34 & 0xF) != 0) )
    return 0;
  v128 = v29;
  v123 = v34;
  v118 = v28;
  v108 = v32;
  v97 = v143;
  if ( v32 )
  {
    v114 = dword + 4;
    if ( (unsigned __int8)get_byte(dword + 4) != 104 )
      return 0;
    v132 = v128;
    v129 = v123;
    v124 = v118;
    v119 = v108;
    v109 = dword + 9;
    byte = get_byte(dword + 9);
    v38 = v97;
    v39 = v119;
    v40 = v124;
    v41 = v129;
    v42 = v132;
    if ( a3 )
    {
      if ( byte == -14 )
      {
        v109 = dword + 10;
        if ( (unsigned __int8)get_byte(dword + 10) != 0xE9 )
          return 0;
        v38 = v97;
        v40 = v124;
        v41 = v129;
        v42 = v132;
      }
      else if ( byte != -23 )
      {
        return 0;
      }
      if ( !v38 )
        goto LABEL_36;
      v125 = v42;
      v120 = v41;
      v115 = v40;
      v98 = v38;
      v93 = *(_QWORD *)(a1 + 16);
      v43 = get_dword(v109 + 1, v35, v93, v40, v41);
      v41 = v120;
      LODWORD(v40) = v115;
      v42 = v125;
      if ( *(_QWORD *)(v98 + 16) == (*(_QWORD *)(v93 + 456) & (v109 + v43 + 5)) )
        goto LABEL_36;
      return 0;
    }
  }
  else
  {
    v114 = dword + 6;
    if ( (unsigned __int8)get_byte(dword + 6) != 104 )
      return 0;
    v109 = dword + 11;
    byte = get_byte(dword + 11);
    v38 = v97;
    v39 = 0;
    v40 = v118;
    v41 = v123;
    v42 = v128;
  }
  if ( byte != -23 )
    return 0;
  v71 = *a2;
  if ( a3 != 1 && v71 && *(_QWORD *)(v71 + 192) )
  {
    v105 = *a2;
    v141 = v42;
    v137 = v41;
    v138 = v40;
    v136 = v39;
    v134 = v38;
    v127 = (unsigned int)get_dword(v114 + 1, v35, v71, v40, v41);
    if ( v127 >= *(_QWORD *)(v105 + 208) )
      return 0;
    v131 = *(_QWORD *)(v105 + 192);
    v106 = *(_QWORD *)(a1 + 16);
    v84 = qlseek(*(_QWORD *)(v106 + 472), 0, 1);
    v85 = *(_QWORD *)(v106 + 480);
    v122 = v84 - v85;
    qlseek(*(_QWORD *)(v106 + 472), v127 + v85 + v131, 0);
    v86 = sub_39740(*(_QWORD *)(a1 + 16), v144);
    v87 = *(_QWORD *)(v106 + 472);
    v35 = *(_QWORD *)(v106 + 480);
    if ( v86 >= 0 && LODWORD(v144[0]) != a4 )
    {
      sub_18E80(v87, v35, v122);
      return 0;
    }
    sub_18E80(v87, v35, v122);
    v38 = v134;
    v39 = v136;
    v40 = v138;
    v41 = v137;
    v42 = v141;
  }
  v135 = v38;
  if ( v38 )
  {
    v133 = v42;
    v130 = v41;
    v126 = v40;
    v121 = v39;
    v103 = *(_QWORD *)(a1 + 16);
    v72 = get_dword(v109 + 1, v35, v103, v40, v41);
    v41 = v130;
    v39 = v121;
    LODWORD(v40) = v126;
    v42 = v133;
    if ( *(_QWORD *)(v135 + 16) != (*(_QWORD *)(v103 + 456) & (v109 + v72 + 5)) )
      return 0;
  }
  if ( !v39 )
  {
    v104 = v42;
    v60 = dword + 2;
    v47 = v114 + 1;
    auto_mark_range(v114, v114 + 1, 20);
    LOBYTE(v19) = v104;
    v100 = dword;
    if ( !v92 )
    {
LABEL_49:
      v61 = 0;
      goto LABEL_76;
    }
LABEL_73:
    v112 = v19;
    v47 = (unsigned __int64)"$ got";
    netnode_check(v144, "$ got", 0, 0);
    v73 = netnode_exist(v144);
    v61 = -1;
    LOBYTE(v19) = v112;
    if ( v73 )
    {
      v47 = 0;
      v74 = netnode_altval(v144[0], 0, 65);
      v75 = node2ea(v74 - 1);
      LOBYTE(v19) = v112;
      v61 = v75;
    }
    v92 = v19;
LABEL_76:
    v117 = v19;
    v113 = v61;
    v76 = get_dword(v60, v47, v61, v58, v59);
    v77 = v117;
    v78 = v113 + v76;
    if ( a3 )
      v78 += v60 + 4;
    if ( a4 == (*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) & v78) )
    {
      v79 = *(_WORD *)(a1 + 346);
      if ( (v79 & 2) == 0 )
      {
        if ( (v79 & 1) == 0 || !v92 )
          goto LABEL_84;
        v80 = a4;
        put_byte(v100 + 1, 37);
        v81 = v117;
        v82 = v100 + 2;
        v83 = 0;
LABEL_83:
        v94 = v82;
        v140 = v81;
        sub_40E20(a1, v100, v83);
        sub_42050(a1, v94, a4, v80, 0, 4, 0, 8, 0);
        v77 = v140;
LABEL_84:
        v95 = v77;
        auto_mark_range(dword, dword + 1, 20);
        sub_40E60(a1, dword, a5, ".", "");
        return v95;
      }
      if ( getseg(a5) && (unsigned __int8)is_mapped(a5) )
      {
        v88 = v100 + 5;
        put_byte(v100, 233);
        while ( v88 < v60 + 4 )
        {
          v89 = v88++;
          put_byte(v89, 144);
        }
        v81 = v117;
        v82 = v100 + 1;
        v80 = a4 - 4 - v60;
        v83 = v139 == 1;
        goto LABEL_83;
      }
    }
    return 0;
  }
LABEL_36:
  v99 = v40;
  v116 = v42;
  v110 = v41;
  auto_mark_range(dword, dword + 1, 20);
  auto_mark_range(dword, dword + 1, 30);
  v44 = sub_3BD30(*(_QWORD *)(a1 + 16) + 80LL, 23);
  v19 = v116;
  v45 = v44;
  if ( v44 )
  {
    v46 = sub_3FD90(a2, v44);
    v19 = v116;
    if ( !v46 )
    {
      v47 = v45;
      v48 = sub_3BD50(*(_QWORD *)(a1 + 16) + 80LL, v45);
      v49 = *(_QWORD *)(v48 + 16);
      v143 = v48;
      v50 = v48;
      v51 = (__int64 *)getseg(v49);
      v19 = v116;
      if ( v51 )
      {
        v53 = *v51;
        if ( *(_QWORD *)(v50 + 16) == *v51 )
        {
          LOBYTE(v47) = v51[1] - v53 < v110 || *(_QWORD *)(v50 + 32) != v51[1] - v53;
          v92 = v47;
          if ( !(_BYTE)v47 )
          {
            dword = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) & (v53 + v110 - 16);
            v54 = get_dword(dword, v47, dword, v52, v110);
            v19 = v116;
            if ( v99 == v54 )
            {
              v100 = dword + 4;
              v55 = get_byte(dword + 4);
              v19 = v116;
              if ( v55 == -14 && a3 )
              {
                v56 = dword + 5;
                v55 = get_byte(dword + 5);
                v19 = v116;
              }
              else
              {
                v56 = dword + 4;
              }
              if ( v55 == -1 )
              {
                v111 = v19;
                v57 = get_byte(v56 + 1);
                v19 = v111;
                if ( v57 != -93 )
                {
                  if ( v57 != 37 )
                    return v19;
                  v60 = v56 + 2;
                  goto LABEL_49;
                }
                v60 = v56 + 2;
                goto LABEL_73;
              }
            }
          }
        }
      }
    }
  }
  return v19;
}
