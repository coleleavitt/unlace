__int64 __fastcall sub_87AFB0(__int64 *a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  __int64 *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // r15
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rcx
  unsigned __int64 v27; // r11
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // r15
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // rdi
  _DWORD **v37; // rsi
  __int64 v38; // r15
  char v39; // al
  __int64 v40; // r11
  char v41; // al
  char v42; // al
  char v43; // al
  __int64 v44; // r11
  __int64 v45; // rdi
  unsigned int v46; // eax
  unsigned int v47; // r13d
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  unsigned int v51; // eax
  void *v52; // rcx
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // r8d
  int v58; // r9d
  __int64 v59; // rdi
  unsigned __int16 v60; // ax
  bool v61; // r10
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned int v64; // ecx
  __int64 v65; // r13
  unsigned __int64 v66; // rsi
  unsigned __int64 v67; // rax
  _QWORD *v68; // rdi
  __int64 v69; // rax
  char v70; // al
  char v71; // al
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r13
  unsigned int v75; // eax
  int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rdi
  bool v79; // zf
  __m128i *v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // r15
  __int64 v83; // r13
  bool v84; // al
  unsigned int v85; // eax
  unsigned int *v86; // r15
  __int64 v87; // rax
  _QWORD *v88; // rax
  char v89; // al
  __int64 v90; // [rsp+0h] [rbp-288h]
  __int64 v91; // [rsp+8h] [rbp-280h]
  unsigned int v92; // [rsp+14h] [rbp-274h]
  __int64 v93; // [rsp+18h] [rbp-270h]
  __int64 v94; // [rsp+18h] [rbp-270h]
  __int64 v95; // [rsp+18h] [rbp-270h]
  __int64 v96; // [rsp+18h] [rbp-270h]
  char *v97; // [rsp+18h] [rbp-270h]
  __int64 v98; // [rsp+18h] [rbp-270h]
  __int64 v99; // [rsp+18h] [rbp-270h]
  _DWORD **v100; // [rsp+20h] [rbp-268h]
  __int64 v101; // [rsp+28h] [rbp-260h]
  bool v102; // [rsp+28h] [rbp-260h]
  _QWORD *v103; // [rsp+30h] [rbp-258h]
  __int64 v104; // [rsp+30h] [rbp-258h]
  _QWORD *v105; // [rsp+30h] [rbp-258h]
  unsigned __int64 v106; // [rsp+30h] [rbp-258h]
  __m128i *v107; // [rsp+30h] [rbp-258h]
  char *v108; // [rsp+30h] [rbp-258h]
  bool v109; // [rsp+38h] [rbp-250h]
  __int64 v110; // [rsp+48h] [rbp-240h]
  __int64 v111; // [rsp+48h] [rbp-240h]
  unsigned __int64 v112; // [rsp+50h] [rbp-238h]
  char *v113; // [rsp+58h] [rbp-230h]
  unsigned int v114; // [rsp+60h] [rbp-228h] BYREF
  char v115; // [rsp+64h] [rbp-224h]
  void *v116; // [rsp+68h] [rbp-220h]
  unsigned int v117; // [rsp+70h] [rbp-218h]
  char v118; // [rsp+74h] [rbp-214h]
  __m128i v119; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v120; // [rsp+B0h] [rbp-1D8h]
  char v121; // [rsp+B8h] [rbp-1D0h]
  __int64 v122; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v124; // [rsp+D8h] [rbp-1B0h]
  _BYTE v125[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  void *v126; // [rsp+130h] [rbp-158h] BYREF
  __int64 v127; // [rsp+138h] [rbp-150h]
  __int64 v128; // [rsp+140h] [rbp-148h]
  char v129; // [rsp+148h] [rbp-140h]
  __int64 v130; // [rsp+158h] [rbp-130h]
  void *v131; // [rsp+160h] [rbp-128h]
  __int64 v132; // [rsp+168h] [rbp-120h]
  _BYTE v133[80]; // [rsp+170h] [rbp-118h] BYREF
  __int64 *v134; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+1C8h] [rbp-C0h]
  __int64 v136; // [rsp+1D0h] [rbp-B8h] BYREF
  char v137; // [rsp+1D8h] [rbp-B0h]
  __int64 v138; // [rsp+1E8h] [rbp-A0h]
  void *v139; // [rsp+1F0h] [rbp-98h]
  __int64 v140; // [rsp+1F8h] [rbp-90h]
  _BYTE v141[136]; // [rsp+200h] [rbp-88h] BYREF

  v4 = sub_80FBD0(a2);
  if ( v4 )
  {
    v54 = sub_C63970(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17360LL), v4);
    if ( strchr(*(const char **)(v54 + 24), 69) )
    {
      v55 = sub_80FBD0(a2);
      return sub_875240(a1, a2, v55, v56, v57, v58);
    }
  }
  v5 = *a1;
  v115 &= ~1u;
  v114 = 0;
  v6 = *(_QWORD *)(v5 + 32);
  v92 = *(_DWORD *)(v5 + 320);
  v7 = *(unsigned int *)(v6 + 196);
  v8 = *(_DWORD *)(v6 + 208) + 1;
  v9 = *(unsigned int *)(v6 + 192);
  *(_DWORD *)(v6 + 208) = v8;
  if ( v7 < v9 + 1 )
  {
    sub_25D6060(v6 + 184, v6 + 200, v9 + 1, 4);
    v9 = *(unsigned int *)(v6 + 192);
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 184) + 4 * v9) = v8;
  ++*(_DWORD *)(v6 + 192);
  v90 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v90));
  v119 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v121 |= 1u;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  ptr = v125;
  v101 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v120 = 0;
  v124 = 0x800000000LL;
  v122 = 0;
  v125[65] = 0;
  v17 = *(_QWORD *)v16;
  v100 = (_DWORD **)(a2 + v90 + 8LL * ((v15 & 8) != 0) + 8);
  v91 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v106 = v16;
      if ( v19 != 41 )
        goto LABEL_37;
      v48 = sub_B0D320(v17);
      v16 = v106;
      v17 = v48;
      if ( !v48 )
        goto LABEL_37;
    }
    goto LABEL_7;
  }
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v59 = *a1;
    v60 = *(_WORD *)v14 & 0x1FF;
    if ( v60 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v59, *(_QWORD *)(v14 + 16), &v119) )
        goto LABEL_38;
      v44 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v44 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v61 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v107 = &v119;
LABEL_61:
        v109 = v61;
        v62 = *(_QWORD *)(*a1 + 32);
        v95 = v44;
        v63 = (unsigned int)(*(_DWORD *)(v62 + 208) + 1);
        v64 = *(_DWORD *)(v62 + 176);
        *(_DWORD *)(v62 + 208) = v63;
        v91 = (v63 << 32) | v64;
        if ( (unsigned __int8)sub_899300(v100, v101, v63, *a1, v44, 0, v44) )
        {
          v44 = v95;
          v61 = v109;
          v111 = v95;
          goto LABEL_63;
        }
LABEL_38:
        v47 = 0;
        goto LABEL_39;
      }
    }
    else
    {
      if ( v60 <= 0x76u )
      {
        if ( v60 == 103 )
        {
          if ( *(char *)(sub_A2CB40(v59) + 1) >= 0 )
            sub_A2E240(*a1, v14, 2278, 0);
          if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v14 + 16), &v119) )
          {
            v72 = sub_8C1F60(v14);
            v47 = sub_8926A0(*a1, v14, &v119, v72);
            goto LABEL_39;
          }
          goto LABEL_38;
        }
        goto LABEL_83;
      }
      if ( v60 > 0x78u )
      {
LABEL_83:
        sub_828330(v59, v14, 110);
        goto LABEL_38;
      }
      v69 = sub_89E210(v59, v14, &v119, 0);
      v44 = v69;
      if ( !v69 )
        goto LABEL_38;
      v107 = &v119;
      v61 = 0;
      if ( (*(_BYTE *)(v69 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_61;
    }
    v59 = *a1;
    goto LABEL_83;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_37:
    sub_828330(*a1, a2, 110);
    goto LABEL_38;
  }
LABEL_7:
  v103 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_37;
  v20 = (__int64 *)*a1;
  v21 = v14;
  v135 = (__int64)&v126;
  v129 |= 1u;
  v126 = nullptr;
  v127 = 0;
  v128 = 0;
  v130 = 0;
  v131 = v133;
  v132 = 0x800000000LL;
  v133[65] = 0;
  v134 = v20;
  LOBYTE(v136) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v134, v14, v20, (__int64)v133, v11, v12) )
    goto LABEL_72;
  v22 = *a1;
  if ( v128 )
    goto LABEL_71;
  if ( (v133[64] & 1) != 0 )
  {
    v73 = sub_A2E130(v22, v14, 2258, 0);
    if ( v73 )
    {
      LODWORD(v134) = 8;
      v135 = v14;
      sub_B029C0(v73, &v134);
    }
    goto LABEL_72;
  }
  if ( !v126
    || ((unsigned __int8)v126 & 3) != 0
    || (*(_BYTE *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_71:
    sub_828330(v22, v14, 110);
    goto LABEL_72;
  }
  v23 = *(_QWORD *)(v22 + 16);
  v112 = (unsigned __int64)v126 & 0xFFFFFFFFFFFFFFFCLL;
  v110 = *(_QWORD *)(((unsigned __int64)v126 & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v24 = sub_B167E0(*v103, v21);
  v25 = sub_6DC9E0(v23, v24, v110);
  v27 = v112;
  if ( !v25 )
  {
    sub_828330(*a1, a2, 110);
    goto LABEL_72;
  }
  if ( (*(_WORD *)a2 & 0x1FF) == 0x5C )
  {
    v28 = *(_BYTE *)(a2 + 4) & 0x3F;
    v29 = *(_BYTE *)(a2 + 4) & 0x3F;
    if ( v28 == 15 || v28 == 20 || (unsigned __int8)v29 <= 0x1Du && (v30 = 871104512, _bittest64(&v30, v29)) )
    {
      v31 = *(_QWORD *)(*a1 + 32);
      v32 = *(_DWORD *)(v31 + 176);
      v33 = (unsigned int)(*(_DWORD *)(v31 + 208) + 1);
      *(_DWORD *)(v31 + 208) = v33;
      v91 = (v33 << 32) | v32;
      if ( (*(_BYTE *)(v112 + 28) & 0x7Fu) - 33 > 3 )
      {
        v35 = *a1;
        v36 = v101;
        v37 = v100;
      }
      else
      {
        v34 = sub_7A5610((_DWORD *)v112);
        v35 = *a1;
        v27 = v112;
        if ( v34 )
        {
          v36 = v101 - 1;
          v37 = v100 + 1;
        }
        else
        {
          v36 = v101;
          v37 = v100;
        }
      }
      v104 = v27;
      if ( !(unsigned __int8)sub_899300(v37, v36, (unsigned int)v33, v35, v27, 1, v112) )
        goto LABEL_72;
      v27 = v104;
      v38 = a2;
      v111 = v104;
    }
    else
    {
      v111 = 0;
      v38 = a2;
    }
  }
  else
  {
    v111 = 0;
    v38 = 0;
  }
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 33 > 3 )
    goto LABEL_30;
  v105 = (_QWORD *)v27;
  v39 = sub_7A5610((_DWORD *)v27);
  v40 = (__int64)v105;
  if ( v39 || v38 && (v41 = sub_7A4F00(v105), v40 = (__int64)v105, v41) )
  {
    v78 = *a1;
    if ( v101 )
    {
      v108 = (char *)v40;
      if ( (unsigned __int8)sub_89DEE0(v78, *v100, &v119) )
      {
        v113 = v108;
        v79 = (unsigned __int8)sub_7A4F00(v108) == 0;
        v80 = nullptr;
        if ( v79 )
          v80 = &v119;
        v107 = v80;
        v81 = sub_A2CB40(*a1);
        v44 = (__int64)v113;
        v61 = 0;
        if ( *(char *)(v81 + 1) >= 0
          || !v38
          || (*(_BYTE *)(v38 + 4) & 0x3F) != 0xF
          || v113[82] >= 0
          || (v125[64] & 2) == 0
          && (v121 & 1) == 0
          && (v89 = sub_84FB20(*a1, *v100, &v119), v44 = (__int64)v113, v61 = 0, v89) )
        {
          --v101;
          ++v100;
          goto LABEL_108;
        }
      }
    }
    else
    {
      sub_828330(v78, a2, 110);
    }
LABEL_72:
    v47 = 0;
    goto LABEL_73;
  }
  v93 = v40;
  v42 = sub_7A5D20(v40);
  v27 = v93;
  if ( v42 )
  {
    v82 = sub_79A330(v93 + 72);
    if ( v82 )
      v82 -= 64LL;
    v83 = sub_7A3750(v82);
    v84 = sub_7A3730(v82);
    v61 = 0;
    if ( v84 )
    {
      v86 = (unsigned int *)sub_780F80(v93);
      v87 = sub_780E20(v83);
      v134 = nullptr;
      v88 = sub_7DA670(v87, (__int64)(v86 + 2), *v86, (__int64)&v134);
      v61 = 0;
      v107 = nullptr;
      v44 = (__int64)v88;
    }
    else
    {
      v44 = v83;
      v107 = nullptr;
    }
LABEL_108:
    if ( v131 != v133 )
    {
      v99 = v44;
      free(v131);
      v61 = 0;
      v44 = v99;
    }
    if ( v111 )
    {
LABEL_63:
      v134 = &v136;
      v135 = 0x400000000LL;
      if ( v107 )
      {
        v102 = v61;
        if ( (*(_BYTE *)(v44 + 28) & 0x7Fu) - 33 > 3 )
        {
LABEL_98:
          v97 = (char *)v44;
          v126 = nullptr;
          v74 = sub_78BC30((_QWORD *)v44, (unsigned __int64 *)&v126);
          v75 = sub_8124E0(a2);
          if ( (unsigned __int8)sub_837DA0(*a1, v75, v97, (__int64)v126, v74) )
          {
            v98 = *a1;
            v76 = sub_8124E0(a2);
            if ( (unsigned __int8)sub_895450(
                                    v76,
                                    (_DWORD)v126,
                                    (_DWORD)v107,
                                    a2,
                                    (_DWORD)v100,
                                    v74,
                                    v111,
                                    v91,
                                    v98,
                                    (__int64)&v114,
                                    0) )
            {
              if ( !(_DWORD)v135 || (unsigned __int8)sub_82E940(*a1, a2, (__int64)&v114, v134, (unsigned int)v135) )
                goto LABEL_102;
            }
          }
LABEL_68:
          v47 = 0;
          goto LABEL_69;
        }
        v96 = v44;
        if ( sub_83DE60(v44) && !v102 )
        {
          v44 = sub_84F640(*a1, a2, v107, v96, (__int64)&v134);
          if ( !v44 )
            goto LABEL_68;
        }
        else
        {
          v70 = sub_7A5610((_DWORD *)v96);
          v44 = v96;
          if ( v70 )
          {
            v71 = sub_84E640(*a1, (_DWORD *)a2, v107, 4 * (unsigned int)((*(_BYTE *)(v96 + 28) & 0x7F) == 34) + 5, 0);
            v44 = v96;
            if ( !v71 )
              goto LABEL_68;
          }
        }
      }
      if ( (*(_BYTE *)(v44 + 28) & 0x7F) == 0x22 )
      {
        v65 = *(_QWORD *)(*a1 + 16);
        v66 = sub_79A330(v44 + 72);
        if ( v66 )
          v66 -= 64LL;
        v67 = sub_6E8B00(v65, v66);
        if ( !(unsigned __int8)sub_8926A0(*a1, a2, v107, v67) )
          goto LABEL_68;
LABEL_102:
        v77 = sub_8934C0(v5, 1, v92);
        v92 = -1;
        v47 = v77;
LABEL_69:
        v68 = v134;
        if ( v134 == &v136 )
          goto LABEL_39;
        goto LABEL_74;
      }
      goto LABEL_98;
    }
    goto LABEL_61;
  }
LABEL_30:
  v94 = v27;
  v43 = sub_77DE60((_QWORD *)v27, 0, nullptr, v26);
  v44 = v94;
  if ( !v43 )
  {
    v107 = nullptr;
    v61 = 0;
    goto LABEL_108;
  }
  v45 = *a1;
  if ( (*(_DWORD *)(v94 + 40) & 7) != 6 || (*(_DWORD *)(*(_QWORD *)(v94 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) != 1 )
  {
    if ( (unsigned __int8)sub_873630(v45, a2) )
    {
      v46 = sub_8934C0(v5, 1, v92);
      v92 = -1;
      v47 = v46;
      goto LABEL_73;
    }
    goto LABEL_72;
  }
  v134 = nullptr;
  v135 = 0;
  v136 = 0;
  v140 = 0x800000000LL;
  v137 |= 1u;
  v138 = 0;
  v139 = v141;
  v141[65] = 0;
  v47 = sub_87DD20(v45, a2, &v134);
  if ( (_BYTE)v47 )
  {
    sub_81F730((__int64)&v134, (__int64)&v114);
    v85 = sub_8934C0(v5, 1, v92);
    v92 = -1;
    v47 = v85;
  }
  if ( v139 != v141 )
    free(v139);
LABEL_73:
  v68 = v131;
  if ( v131 != v133 )
LABEL_74:
    free(v68);
LABEL_39:
  if ( ptr != v125 )
    free(ptr);
  if ( v92 != -1 )
    sub_8934C0(v5, 0, v92);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 192LL);
  if ( (_BYTE)v47 )
  {
    v49 = a1[1];
    if ( v114 <= 0xD && (v50 = 8322, _bittest64(&v50, v114)) || (v115 & 1) != 0 )
    {
      sub_6A63E0(v49, (__int64)&v114);
    }
    else
    {
      v51 = v117;
      LODWORD(v127) = v117;
      if ( v117 > 0x40 )
      {
        sub_2585B30(&v126);
        v51 = v127;
        v52 = v126;
      }
      else
      {
        v52 = v116;
        v126 = v116;
      }
      BYTE4(v134) &= ~1u;
      v135 = (__int64)v52;
      BYTE4(v127) = v118;
      LODWORD(v134) = 2;
      LODWORD(v127) = 0;
      LODWORD(v136) = v51;
      BYTE4(v136) = v118;
      sub_6A01B0(v49, (__int64)&v134);
      if ( (unsigned int)v134 > 1 )
        sub_69F740((__int64)&v134);
      if ( (unsigned int)v127 > 0x40 && v126 )
        operator delete[](v126);
    }
  }
  if ( v114 > 1 )
    sub_69F740((__int64)&v114);
  return v47;
}

