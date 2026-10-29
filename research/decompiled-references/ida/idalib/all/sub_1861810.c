void __fastcall sub_1861810(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const __m128i *v7; // rbp
  _DWORD *v8; // rdi
  unsigned __int8 (*v9)(void); // rax
  int v10; // eax
  __int64 v11; // r13
  _DWORD *v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // rbx
  _DWORD *v16; // rdi
  __int64 (*v17)(void); // rax
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r14
  __int8 v28; // r13
  _QWORD *v29; // rsi
  int v30; // r14d
  _BYTE *v31; // r15
  int v32; // eax
  _DWORD *v33; // rdi
  __int64 (*v34)(void); // rax
  char v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  _BYTE *v38; // r14
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 j; // r14
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int8 v59; // al
  char v60; // al
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  char **v65; // rax
  char *v66; // rcx
  char **v67; // rbp
  __int64 v68; // r8
  char *v69; // rsi
  char *v70; // rdi
  char *v71; // rax
  char *v72; // r8
  char *v73; // rbx
  __int64 v74; // rax
  int v75; // eax
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r13
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rax
  bool v91; // zf
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  __int64 v104; // rbx
  char **v105; // rbp
  char *v106; // r9
  char *v107; // rax
  __int64 v108; // r8
  char *v109; // rsi
  char *v110; // rcx
  __int64 v111; // rax
  char *v112; // r8
  signed __int64 v113; // r12
  char *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rax
  _QWORD *v127; // rax
  __m128i *v128; // rax
  __int64 v129; // r8
  char *i; // rax
  __int64 v131; // rax
  int v132; // eax
  char *v133; // rax
  __int64 *v134; // [rsp+8h] [rbp-100h]
  int v135; // [rsp+8h] [rbp-100h]
  unsigned int v136; // [rsp+10h] [rbp-F8h]
  __int64 v137; // [rsp+20h] [rbp-E8h]
  __int64 v138; // [rsp+20h] [rbp-E8h]
  __int64 v139; // [rsp+20h] [rbp-E8h]
  __m128i *v140; // [rsp+20h] [rbp-E8h]
  __int64 v141; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v142; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v143[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v144; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v145[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v146; // [rsp+B8h] [rbp-50h]
  unsigned int v147; // [rsp+C0h] [rbp-48h]
  char v148; // [rsp+C4h] [rbp-44h]

  v141 = a2;
  v7 = (const __m128i *)sub_17A23E0(a2, a2, a3, a4, a5, a6);
  v8 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
  v9 = *(unsigned __int8 (**)(void))(*(_QWORD *)v8 + 416LL);
  if ( (char *)v9 == (char *)sub_102B960 )
  {
    v10 = v8[65];
    if ( v10 == 15 )
    {
      v75 = v8[66];
      if ( (unsigned int)(v75 - 27) <= 1 || !v75 )
        goto LABEL_87;
    }
    else if ( v8[62] == 38 && (v10 == 24 && v8[64] == 3 || v10 == 25 && v8[64] == 3) )
    {
LABEL_87:
      v11 = v141;
      if ( v7 )
        goto LABEL_6;
      goto LABEL_88;
    }
LABEL_4:
    if ( !v7 )
      return;
    v11 = v141;
    goto LABEL_6;
  }
  if ( !v9() )
    goto LABEL_4;
  v11 = v141;
  if ( v7 )
    goto LABEL_6;
LABEL_88:
  if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x3D )
    return;
  v76 = sub_BBF290(v11);
  v81 = sub_17A23E0(*(_QWORD *)(v76 + 48), a2, v77, v78, v79, v80);
  if ( !v81 )
    return;
  a2 = *(_QWORD *)(a1 + 248);
  v82 = sub_B395B0(v81, a2);
  *(_BYTE *)(v82 + 38) |= 1u;
  v7 = (const __m128i *)v82;
  v11 = v141;
LABEL_6:
  v12 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
  if ( v12[85] == 10 || v12[62] == 38 && v12[64] == 3 && (unsigned int)(v12[65] - 24) <= 1 )
  {
    v59 = sub_B81B70(v11);
    if ( !v59 )
      goto LABEL_204;
    if ( v59 > 3u )
    {
      if ( v59 > 6u )
        goto LABEL_204;
      v11 = v141;
    }
    else
    {
      v60 = sub_B81B70(v141);
      v11 = v141;
      if ( v60 == 3 || v60 == 6 )
      {
        if ( (*(_BYTE *)(v141 + 29) & 1) == 0 )
          return;
        v65 = (char **)sub_B8C3D0(v141, a2, v61, v62, v63, v64);
        v66 = *v65;
        v67 = v65;
        v68 = 8LL * *((unsigned int *)v65 + 2);
        v69 = &(*v65)[v68];
        if ( v68 >> 5 )
        {
          v70 = *v65;
          if ( ((*(_WORD *)(*(_QWORD *)v66 + 36LL) - 195) & 0xFFFD) != 0 )
          {
            v70 = v66 + 8;
            if ( ((*(_WORD *)(*((_QWORD *)v66 + 1) + 36LL) - 195) & 0xFFFD) != 0 )
            {
              for ( i = *v65; ; i += 32 )
              {
                if ( ((*(_WORD *)(*((_QWORD *)i + 2) + 36LL) - 195) & 0xFFFD) == 0 )
                {
                  v70 = i + 16;
                  goto LABEL_74;
                }
                if ( ((*(_WORD *)(*((_QWORD *)i + 3) + 36LL) - 195) & 0xFFFD) == 0 )
                {
                  v70 = i + 24;
                  goto LABEL_74;
                }
                v70 = i + 32;
                if ( i + 32 == &v66[32 * (v68 >> 5)] )
                  goto LABEL_164;
                if ( ((*(_WORD *)(*((_QWORD *)i + 4) + 36LL) - 195) & 0xFFFD) == 0 )
                  goto LABEL_74;
                if ( ((*(_WORD *)(*((_QWORD *)i + 5) + 36LL) - 195) & 0xFFFD) == 0 )
                  break;
              }
              v70 = i + 40;
            }
          }
LABEL_74:
          if ( v69 != v70 )
          {
            v71 = v70 + 8;
            if ( v69 != v70 + 8 )
            {
              do
              {
                if ( ((*(_WORD *)(*(_QWORD *)v71 + 36LL) - 195) & 0xFFFD) != 0 )
                {
                  *(_QWORD *)v70 = *(_QWORD *)v71;
                  v70 += 8;
                }
                v71 += 8;
              }
              while ( v69 != v71 );
              v66 = *v67;
              v72 = &(*v67)[v68];
              v73 = &v70[v72 - v69];
              if ( v69 != v72 )
              {
                memmove(v70, v69, v72 - v69);
                v66 = *v67;
              }
              goto LABEL_81;
            }
          }
LABEL_168:
          v73 = v70;
LABEL_81:
          v74 = (v73 - v66) >> 3;
          *((_DWORD *)v67 + 2) = v74;
          if ( !(_DWORD)v74 )
            *(_BYTE *)(v11 + 29) &= ~1u;
          return;
        }
        v70 = *v65;
LABEL_164:
        v131 = (v69 - v70) >> 3;
        if ( v131 != 2 )
        {
          if ( v131 != 3 )
          {
            if ( v131 != 1 )
              goto LABEL_167;
            goto LABEL_198;
          }
          if ( ((*(_WORD *)(*(_QWORD *)v70 + 36LL) - 195) & 0xFFFD) == 0 )
            goto LABEL_74;
          v70 += 8;
        }
        if ( ((*(_WORD *)(*(_QWORD *)v70 + 36LL) - 195) & 0xFFFD) == 0 )
          goto LABEL_74;
        v70 += 8;
LABEL_198:
        if ( ((*(_WORD *)(*(_QWORD *)v70 + 36LL) - 195) & 0xFFFD) == 0 )
          goto LABEL_74;
LABEL_167:
        v70 = v69;
        goto LABEL_168;
      }
    }
  }
  v13 = sub_B81B70(v11);
  if ( !v13 )
    goto LABEL_204;
  if ( v13 <= 3u )
  {
    sub_168B9F0((__int64)v143, (__int64 *)(a1 + 8), *(_DWORD *)(v141 + 24), 0xC68u, 0);
    v14 = sub_185AB80((__int64)v143, &v141);
    v15 = v14;
    if ( *(_BYTE *)(v14 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v14 + 32), (__int64)v7, 0xEu);
      sub_15F7200(v143);
    }
    else
    {
      if ( *(_BYTE *)(v14 + 132) )
      {
        v87 = sub_168B9E0((_QWORD *)v14);
        v88 = *(_QWORD *)(v15 + 16);
        if ( v88 )
          v88 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v88 + 32LL))(*(_QWORD *)(v15 + 16));
        v142 = v88;
        v89 = sub_1587BC0(v87, &v142, v83, v84, v85, v86);
        sub_AE9DF0((unsigned __int8 **)(*v89 + 32LL * *(unsigned int *)(v15 + 128) + 8), (__int64)v7, 0xEu);
      }
      sub_15F7200(v143);
    }
    return;
  }
  if ( v13 > 6u )
LABEL_204:
    BUG();
  v16 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
  v17 = *(__int64 (**)(void))(*(_QWORD *)v16 + 416LL);
  if ( (char *)v17 == (char *)sub_102B960 )
    v18 = sub_102B960(v16);
  else
    v18 = v17();
  v19 = v141;
  if ( v18 && (v7[2].m128i_i8[6] & 1) == 0 )
  {
    v23 = sub_B8E970(v141 + 64);
    if ( v23 )
    {
      v134 = (__int64 *)(a1 + 8);
      while ( 1 )
      {
        v24 = *(_BYTE *)(v23 + 28) & 0x7F;
        v25 = (unsigned int)(v24 - 40);
        if ( (unsigned int)v25 > 6 && (unsigned int)(v24 - 35) > 3 )
          goto LABEL_29;
        v26 = sub_17A23E0(v23, a2, v25, v20, v21, v22);
        v27 = v26;
        if ( !v26 || (*(_BYTE *)(v26 + 38) & 1) != 0 || *(char *)(v23 + 28) < 0 )
          goto LABEL_29;
        sub_168B9F0((__int64)v143, v134, *(_DWORD *)(v26 + 24), 0xC67u, 0);
        if ( v146 )
          break;
        if ( v148 )
        {
          v116 = sub_168B9E0(v143);
          v120 = v144;
          if ( v144 )
          {
            v137 = v116;
            v120 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
            v116 = v137;
          }
          v142 = v120;
          v121 = sub_1587BC0(v116, &v142, v116, v117, v118, v119);
          sub_AE9DF0((unsigned __int8 **)(*v121 + 32LL * v147 + 8), v27, 0xEu);
          goto LABEL_146;
        }
LABEL_28:
        sub_15F7200(v143);
        sub_168B9F0((__int64)v143, v134, v7[1].m128i_u32[2], 0x1889u, 0);
        sub_15F7200(v143);
        a2 = 1;
        sub_B88650(v23, 1);
LABEL_29:
        v22 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v23 = v22;
        if ( !v22 )
          goto LABEL_30;
      }
      sub_AE9DF0(v145, v27, 0xEu);
LABEL_146:
      if ( v146 )
      {
        sub_AE9DF0(v145, (__int64)v7, 0xEu);
      }
      else if ( v148 )
      {
        v122 = sub_168B9E0(v143);
        v126 = v144;
        if ( v144 )
        {
          v138 = v122;
          v126 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v144 + 32LL))(v144);
          v122 = v138;
        }
        v142 = v126;
        v127 = sub_1587BC0(v122, &v142, v122, v123, v124, v125);
        sub_AE9DF0((unsigned __int8 **)(*v127 + 32LL * v147 + 8), (__int64)v7, 0xEu);
      }
      goto LABEL_28;
    }
LABEL_30:
    v19 = v141;
  }
  if ( sub_B97230(v19) )
    return;
  v135 = v7[2].m128i_u16[2];
  if ( v135 == 195 )
  {
    v93 = sub_B97260(v141);
    v30 = v93;
    if ( (v7[2].m128i_i8[6] & 1) != 0 || v93 != 3 )
    {
LABEL_113:
      v29 = (_QWORD *)v141;
      v28 = 0;
      sub_1A3DDB0(a1, v141);
      v31 = (_BYTE *)sub_B8E970(v141 + 64);
      if ( !v31 )
      {
LABEL_103:
        v90 = *(unsigned int *)(a1 + 3592);
        if ( v90 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 3596) )
        {
          sub_2237220(a1 + 3584, a1 + 3600, v90 + 1, 8);
          v90 = *(unsigned int *)(a1 + 3592);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 3584) + 8 * v90) = v141;
        ++*(_DWORD *)(a1 + 3592);
        return;
      }
      goto LABEL_34;
    }
    v103 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
    if ( *(_DWORD *)(v103 + 260) == 15 )
    {
      v132 = *(_DWORD *)(v103 + 264);
      if ( v132 == 29 || v132 == 1 )
      {
        v30 = 3;
        goto LABEL_113;
      }
    }
    v104 = v141;
    if ( (*(_BYTE *)(v141 + 29) & 1) == 0 )
      return;
    v105 = (char **)sub_B8C3D0(v141, a2, v94, v95, v96, v97);
    v106 = *v105;
    v107 = *v105;
    v108 = 8LL * *((unsigned int *)v105 + 2);
    v109 = &(*v105)[v108];
    if ( v108 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v106 + 36LL) == 195 )
      {
        v110 = *v105;
      }
      else
      {
        v110 = v106 + 8;
        if ( *(_WORD *)(*((_QWORD *)v106 + 1) + 36LL) == 195 )
          goto LABEL_173;
        v110 = v106 + 16;
        if ( *(_WORD *)(*((_QWORD *)v106 + 2) + 36LL) == 195 )
          goto LABEL_173;
        v110 = v106 + 24;
        if ( *(_WORD *)(*((_QWORD *)v106 + 3) + 36LL) == 195 )
          goto LABEL_173;
        while ( 1 )
        {
          v110 = v107 + 32;
          if ( &v106[32 * (v108 >> 5)] == v107 + 32 )
            goto LABEL_137;
          if ( *(_WORD *)(*((_QWORD *)v107 + 4) + 36LL) == 195 )
            goto LABEL_173;
          if ( *(_WORD *)(*((_QWORD *)v107 + 5) + 36LL) == 195 )
          {
            v110 = v107 + 40;
            goto LABEL_173;
          }
          if ( *(_WORD *)(*((_QWORD *)v107 + 6) + 36LL) == 195 )
            break;
          if ( *(_WORD *)(*((_QWORD *)v107 + 7) + 36LL) == 195 )
          {
            v110 = v107 + 56;
            goto LABEL_173;
          }
          v107 += 32;
        }
        v110 = v107 + 48;
      }
      goto LABEL_173;
    }
    v110 = *v105;
LABEL_137:
    v111 = (v109 - v110) >> 3;
    if ( v111 != 2 )
    {
      if ( v111 != 3 )
      {
        if ( v111 != 1 )
        {
LABEL_140:
          v110 = &v106[v108];
LABEL_141:
          v112 = &v106[v108];
          v113 = v112 - v109;
          if ( v109 != v112 )
          {
            v114 = (char *)memmove(v110, v109, v112 - v109);
            v106 = *v105;
            v110 = v114;
          }
          v115 = (&v110[v113] - v106) >> 3;
          *((_DWORD *)v105 + 2) = v115;
          if ( !(_DWORD)v115 )
            *(_BYTE *)(v104 + 29) &= ~1u;
          return;
        }
LABEL_192:
        if ( *(_WORD *)(*(_QWORD *)v110 + 36LL) != 195 )
          goto LABEL_140;
LABEL_173:
        if ( v109 != v110 )
        {
          v133 = v110 + 8;
          if ( v109 != v110 + 8 )
          {
            do
            {
              if ( *(_WORD *)(*(_QWORD *)v133 + 36LL) != 195 )
              {
                *(_QWORD *)v110 = *(_QWORD *)v133;
                v110 += 8;
              }
              v133 += 8;
            }
            while ( v109 != v133 );
            v106 = *v105;
          }
        }
        goto LABEL_141;
      }
      if ( *(_WORD *)(*(_QWORD *)v110 + 36LL) == 195 )
        goto LABEL_173;
      v110 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v110 + 36LL) == 195 )
      goto LABEL_173;
    v110 += 8;
    goto LABEL_192;
  }
  v28 = v7[2].m128i_i8[7];
  v29 = (_QWORD *)v141;
  v30 = sub_B97260(v141);
  sub_1A3DDB0(a1, v141);
  v31 = (_BYTE *)sub_B8E970(v141 + 64);
  if ( !v31 )
    return;
LABEL_34:
  v136 = v30 - 3;
  do
  {
    v32 = v31[28] & 0x7F;
    if ( (unsigned int)(v32 - 40) > 6 )
    {
      if ( (unsigned int)(v32 - 35) > 3
        || (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v31 + 32LL))(v31) + 82) & 0x40) != 0 )
      {
        goto LABEL_36;
      }
      if ( (v31[82] & 1) == 0 )
        goto LABEL_50;
      v33 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
      v34 = *(__int64 (**)(void))(*(_QWORD *)v33 + 416LL);
      if ( (char *)v34 == (char *)sub_102B960 )
        v35 = sub_102B960(v33);
      else
        v35 = v34();
      if ( !v35 && v136 > 1 )
        goto LABEL_36;
      if ( (v31[28] & 0x7F) == 0x26 )
      {
        if ( sub_B98360(v31, (__int64)v29)
          || (v29 = v143, LODWORD(v143[0]) = 0, sub_B99060((__int64)v31, v143, v36, v37)) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 152LL) <= 0xB532B7Fu )
            goto LABEL_36;
LABEL_49:
          if ( (char)v31[82] < 0 )
            goto LABEL_36;
          goto LABEL_50;
        }
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 152LL) > 0xB532B7Fu )
          goto LABEL_49;
      }
      else
      {
        v91 = !sub_B98360(v31, (__int64)v29);
        v92 = *(_QWORD *)(a1 + 232);
        if ( v91 )
        {
          if ( *(_DWORD *)(v92 + 152) <= 0xB532B7Fu )
            goto LABEL_50;
        }
        else if ( *(_DWORD *)(v92 + 152) <= 0xB532B7Fu )
        {
          goto LABEL_36;
        }
        if ( (v31[28] & 0x7F) == 0x24 )
          goto LABEL_49;
      }
LABEL_50:
      v38 = v31;
      goto LABEL_51;
    }
    if ( v28 )
      goto LABEL_36;
    v38 = nullptr;
LABEL_51:
    v39 = sub_B81B70((__int64)v31);
    if ( !v39 )
      goto LABEL_204;
    if ( v39 > 3u )
    {
      if ( v39 > 6u )
        goto LABEL_204;
      if ( !sub_17A23E0((__int64)v31, (__int64)v29, v40, v41, v42, v43) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 15LL) & 0x20) != 0 || !v38 )
        {
          v98 = sub_B395B0((__int64)v7, *(_QWORD *)(a1 + 248));
          *(_BYTE *)(v98 + 38) |= 1u;
          v29 = (_QWORD *)v98;
          sub_B8CC60((__int64)v31, v98, v99, v100, v101, v102);
          if ( !v38 )
            goto LABEL_36;
        }
        else
        {
          if ( (v38[82] & 1) != 0 && v136 > 1 )
          {
            v139 = *(_QWORD *)(a1 + 248);
            v128 = (__m128i *)sub_18406C0((__int64 *)(v139 + 2352), 40, 3u);
            v129 = v139;
            v140 = v128;
            if ( v135 == 195 )
              sub_B113E0(v128, v129, v7);
            else
              sub_B114D0(v128, v129, v7);
            v44 = (__int64)v140;
          }
          else
          {
            v44 = sub_B395B0((__int64)v7, *(_QWORD *)(a1 + 248));
          }
          *(_BYTE *)(v44 + 38) |= 1u;
          sub_B8CC60((__int64)v31, v44, v45, v46, v47, v48);
        }
        v29 = *((_QWORD **)v38 + 14);
        for ( j = (__int64)sub_7053D0(v29 + 13, (__int64)v29, v49, v50, v51, v52); j; j = sub_AEADA0((__int64 *)(j + 104)) )
        {
          if ( (*(_WORD *)(j + 30) & 0x180) != 0 )
          {
            v54 = sub_B395B0((__int64)v7, *(_QWORD *)(a1 + 248));
            *(_BYTE *)(v54 + 38) |= 1u;
            v29 = (_QWORD *)v54;
            sub_B8CC60(j, v54, v55, v56, v57, v58);
          }
        }
      }
    }
LABEL_36:
    v31 = (_BYTE *)(*((_QWORD *)v31 + 1) & 0xFFFFFFFFFFFFFFF8LL);
  }
  while ( v31 );
  if ( v135 == 195 )
    goto LABEL_103;
}
