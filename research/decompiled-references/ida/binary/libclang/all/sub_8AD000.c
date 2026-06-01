__int64 __fastcall sub_8AD000(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rax
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
  __int64 v27; // r11
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // r15
  char v34; // al
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // r15
  char v39; // al
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // r11
  char v44; // al
  char v45; // al
  char v46; // al
  __int64 v47; // r11
  __int64 v48; // rdi
  unsigned int v49; // eax
  unsigned int v50; // r12d
  __int64 v51; // rax
  unsigned int v52; // eax
  void *v53; // rsi
  __int64 v54; // rdi
  void *v56; // rdi
  __int64 v57; // rdi
  unsigned __int16 v58; // ax
  bool v59; // r10
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned int v62; // ecx
  __int64 v63; // r12
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rax
  char v71; // al
  char v72; // al
  __int64 v73; // rax
  unsigned __int16 *v74; // r12
  unsigned int v75; // eax
  unsigned int v76; // eax
  unsigned int v77; // eax
  __int64 v78; // rdi
  bool v79; // zf
  __m128i *v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // r15
  __int64 v83; // r12
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
  __int64 *v100; // [rsp+20h] [rbp-268h]
  unsigned __int64 v101; // [rsp+28h] [rbp-260h]
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
  int v119; // [rsp+78h] [rbp-210h]
  __m128i v120; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v121; // [rsp+B0h] [rbp-1D8h]
  char v122; // [rsp+B8h] [rbp-1D0h]
  __int64 v123; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v125; // [rsp+D8h] [rbp-1B0h]
  _BYTE v126[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  void *v127; // [rsp+130h] [rbp-158h] BYREF
  __int64 v128; // [rsp+138h] [rbp-150h]
  __int64 v129; // [rsp+140h] [rbp-148h]
  char v130; // [rsp+148h] [rbp-140h]
  __int64 v131; // [rsp+158h] [rbp-130h]
  void *v132; // [rsp+160h] [rbp-128h]
  __int64 v133; // [rsp+168h] [rbp-120h]
  _BYTE v134[80]; // [rsp+170h] [rbp-118h] BYREF
  __m128i v135; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v136; // [rsp+1D0h] [rbp-B8h] BYREF
  int v137; // [rsp+1D8h] [rbp-B0h]
  __int64 v138; // [rsp+1E8h] [rbp-A0h]
  void *v139; // [rsp+1F0h] [rbp-98h]
  __int64 v140; // [rsp+1F8h] [rbp-90h]
  _BYTE v141[136]; // [rsp+200h] [rbp-88h] BYREF

  v4 = *a1;
  v115 &= ~1u;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 320);
  v114 = 0;
  v92 = v6;
  v7 = *(unsigned int *)(v5 + 196);
  v8 = *(_DWORD *)(v5 + 208) + 1;
  v9 = *(unsigned int *)(v5 + 192);
  *(_DWORD *)(v5 + 208) = v8;
  if ( v7 < v9 + 1 )
  {
    sub_25D6060(v5 + 184, v5 + 200, v9 + 1, 4);
    v9 = *(unsigned int *)(v5 + 192);
  }
  *(_DWORD *)(*(_QWORD *)(v5 + 184) + 4 * v9) = v8;
  ++*(_DWORD *)(v5 + 192);
  v90 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v90));
  v120 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v122 |= 1u;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  ptr = v126;
  v101 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v121 = 0;
  v125 = 0x800000000LL;
  v123 = 0;
  v126[65] = 0;
  v17 = *(_QWORD *)v16;
  v100 = (__int64 *)(a2 + v90 + 8LL * ((v15 & 8) != 0) + 8);
  v91 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v106 = v16;
      if ( v19 != 41 )
        goto LABEL_36;
      v51 = sub_B0D320(v17);
      v16 = v106;
      v17 = v51;
      if ( !v51 )
        goto LABEL_36;
    }
    goto LABEL_6;
  }
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v57 = *a1;
    v58 = *(_WORD *)v14 & 0x1FF;
    if ( v58 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v57, *(_QWORD *)(v14 + 16), (__int64)&v120, v16, v11, v12) )
        goto LABEL_37;
      v47 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v59 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v107 = &v120;
        goto LABEL_61;
      }
      goto LABEL_76;
    }
    if ( v58 <= 0x76u )
    {
      if ( v58 == 103 )
      {
        if ( *(char *)(sub_A2CB40(v57) + 1) >= 0 )
          sub_A2E240(*a1, v14, 2278, 0);
        if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v14 + 16), (__int64)&v120, v67, v68, v69) )
        {
          v70 = sub_8C1F60(v14);
          v50 = sub_8926A0(*a1, (_DWORD *)v14, &v120, v70);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
    }
    else if ( v58 <= 0x78u )
    {
      v66 = sub_89E210(v57, v14, (__int64)&v120, 0, v11, v12);
      v47 = v66;
      if ( !v66 )
        goto LABEL_37;
      v107 = &v120;
      v59 = 0;
      if ( (*(_BYTE *)(v66 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_61;
LABEL_76:
      v57 = *a1;
    }
    sub_826D30(v57, v14, 110);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_36:
    sub_826D30(*a1, a2, 110);
    goto LABEL_37;
  }
LABEL_6:
  v103 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_36;
  v20 = (__int64 *)*a1;
  v130 |= 1u;
  v135.m128i_i64[1] = (__int64)&v127;
  v132 = v134;
  v21 = v14;
  v127 = nullptr;
  v128 = 0;
  v129 = 0;
  v131 = 0;
  v133 = 0x800000000LL;
  v134[65] = 0;
  v135.m128i_i64[0] = (__int64)v20;
  LOBYTE(v136) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v135, v14, v20, v16, v11, v12) )
    goto LABEL_54;
  v22 = *a1;
  if ( v129 )
    goto LABEL_53;
  if ( (v134[64] & 1) != 0 )
  {
    v73 = sub_A2E130(v22, v14, 2258, 0);
    if ( v73 )
    {
      v135.m128i_i32[0] = 8;
      v135.m128i_i64[1] = v14;
      sub_B029C0(v73, &v135);
    }
    goto LABEL_54;
  }
  if ( !v127
    || ((unsigned __int8)v127 & 3) != 0
    || (*(_BYTE *)(((unsigned __int64)v127 & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_53:
    sub_826D30(v22, v14, 110);
    goto LABEL_54;
  }
  v23 = *(_QWORD *)(v22 + 16);
  v112 = (unsigned __int64)v127 & 0xFFFFFFFFFFFFFFFCLL;
  v110 = *(_QWORD *)(((unsigned __int64)v127 & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v24 = sub_B167E0(*v103, v21);
  v25 = sub_6DC9E0(v23, v24, v110);
  v27 = v112;
  if ( !v25 )
  {
    sub_826D30(*a1, a2, 110);
    goto LABEL_54;
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
        v37 = (__int64)v100;
      }
      else
      {
        v34 = sub_7A5610((_DWORD *)v112);
        v35 = *a1;
        v27 = v112;
        if ( v34 )
        {
          v36 = v101 - 1;
          v37 = (__int64)(v100 + 1);
        }
        else
        {
          v36 = v101;
          v37 = (__int64)v100;
        }
      }
      v104 = v27;
      if ( !(unsigned __int8)sub_899300(v37, v36, v33, v35, v27, 1u) )
        goto LABEL_54;
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
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v105 = (_QWORD *)v27;
    v39 = sub_7A5610((_DWORD *)v27);
    v43 = (__int64)v105;
    if ( v39 || v38 && (v44 = sub_7A4F00(v105), v43 = (__int64)v105, v44) )
    {
      v78 = *a1;
      if ( !v101 )
      {
        sub_826D30(v78, a2, 110);
        goto LABEL_54;
      }
      v108 = (char *)v43;
      if ( !(unsigned __int8)sub_89DEE0(v78, *v100, (__int64)&v120, v40, v41, v42) )
        goto LABEL_54;
      v113 = v108;
      v79 = (unsigned __int8)sub_7A4F00(v108) == 0;
      v80 = nullptr;
      if ( v79 )
        v80 = &v120;
      v107 = v80;
      v81 = sub_A2CB40(*a1);
      v47 = (__int64)v113;
      v59 = 0;
      if ( *(char *)(v81 + 1) < 0 )
      {
        if ( v38 )
        {
          if ( (*(_BYTE *)(v38 + 4) & 0x3F) == 0xF && v113[82] < 0 )
          {
            if ( (v126[64] & 2) != 0 )
              goto LABEL_54;
            if ( (v122 & 1) != 0 )
              goto LABEL_54;
            v89 = sub_84FB20(*a1, (_DWORD *)*v100, &v120);
            v47 = (__int64)v113;
            v59 = 0;
            if ( !v89 )
              goto LABEL_54;
          }
        }
      }
      --v101;
      ++v100;
      goto LABEL_101;
    }
    v93 = v43;
    v45 = sub_7A5D20(v43);
    v27 = v93;
    if ( v45 )
    {
      v82 = sub_79A330(v93 + 72);
      if ( v82 )
        v82 -= 64LL;
      v83 = sub_7A3750(v82);
      v84 = sub_7A3730(v82);
      v59 = 0;
      if ( v84 )
      {
        v86 = (unsigned int *)sub_780F80(v93);
        v87 = sub_780E20(v83);
        v135.m128i_i64[0] = 0;
        v88 = sub_7DA670(v87, (__int64)(v86 + 2), *v86, (__int64)&v135);
        v59 = 0;
        v107 = nullptr;
        v47 = (__int64)v88;
      }
      else
      {
        v107 = nullptr;
        v47 = v83;
      }
      goto LABEL_101;
    }
  }
  v94 = v27;
  v46 = sub_77DE60((_QWORD *)v27, 0, nullptr, v26);
  v47 = v94;
  if ( v46 )
  {
    v48 = *a1;
    if ( (*(_DWORD *)(v94 + 40) & 7) == 6
      && (*(_DWORD *)(*(_QWORD *)(v94 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
    {
      v138 = 0;
      v140 = 0x800000000LL;
      LOBYTE(v137) = v137 | 1;
      v135 = 0u;
      v136 = 0;
      v139 = v141;
      v141[65] = 0;
      v50 = sub_87DD20(v48, a2, &v135);
      if ( (_BYTE)v50 )
      {
        sub_81F730((__int64)&v135, (__int64)&v114);
        v85 = sub_8934C0(v4, 1, v92);
        v92 = -1;
        v50 = v85;
      }
      if ( v139 != v141 )
        free(v139);
LABEL_55:
      v56 = v132;
      if ( v132 == v134 )
        goto LABEL_38;
      goto LABEL_56;
    }
    if ( (unsigned __int8)sub_873630(v48, a2) )
    {
      v49 = sub_8934C0(v4, 1, v92);
      v92 = -1;
      v50 = v49;
      goto LABEL_55;
    }
LABEL_54:
    v50 = 0;
    goto LABEL_55;
  }
  v107 = nullptr;
  v59 = 0;
LABEL_101:
  if ( v132 != v134 )
  {
    v99 = v47;
    free(v132);
    v59 = 0;
    v47 = v99;
  }
  if ( !v111 )
  {
LABEL_61:
    v109 = v59;
    v60 = *(_QWORD *)(*a1 + 32);
    v95 = v47;
    v61 = (unsigned int)(*(_DWORD *)(v60 + 208) + 1);
    v62 = *(_DWORD *)(v60 + 176);
    *(_DWORD *)(v60 + 208) = v61;
    v91 = (v61 << 32) | v62;
    if ( (unsigned __int8)sub_899300((__int64)v100, v101, v61, *a1, v47, 0) )
    {
      v47 = v95;
      v59 = v109;
      v111 = v95;
      goto LABEL_63;
    }
LABEL_37:
    v50 = 0;
    goto LABEL_38;
  }
LABEL_63:
  v135.m128i_i64[0] = (__int64)&v136;
  v135.m128i_i64[1] = 0x400000000LL;
  if ( v107 )
  {
    v102 = v59;
    if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_91;
    v96 = v47;
    if ( sub_83DE60(v47) && !v102 )
    {
      v47 = sub_84F640(*a1, a2, v107, v96, (__int64)&v135);
      if ( !v47 )
        goto LABEL_68;
    }
    else
    {
      v71 = sub_7A5610((_DWORD *)v96);
      v47 = v96;
      if ( v71 )
      {
        v72 = sub_84E640(*a1, (_DWORD *)a2, v107, 4 * (unsigned int)((*(_BYTE *)(v96 + 28) & 0x7F) == 34) + 5, 0);
        v47 = v96;
        if ( !v72 )
          goto LABEL_68;
      }
    }
  }
  if ( (*(_BYTE *)(v47 + 28) & 0x7F) != 0x22 )
  {
LABEL_91:
    v97 = (char *)v47;
    v127 = nullptr;
    v74 = (unsigned __int16 *)sub_78BC30((_QWORD *)v47, (unsigned __int64 *)&v127);
    v75 = sub_8124E0(a2);
    if ( (unsigned __int8)sub_837DA0(*a1, v75, v97, (__int64)v127, (__int64)v74) )
    {
      v98 = *a1;
      v76 = sub_8124E0(a2);
      if ( (unsigned __int8)sub_895450(
                              v76,
                              (__int64)v127,
                              v107,
                              a2,
                              (_DWORD **)v100,
                              v74,
                              v111,
                              v91,
                              v98,
                              (__int64)&v114,
                              0) )
      {
        if ( !v135.m128i_i32[2]
          || (unsigned __int8)sub_82E940(*a1, a2, (__int64)&v114, v135.m128i_i64[0], v135.m128i_u32[2]) )
        {
          goto LABEL_95;
        }
      }
    }
LABEL_68:
    v50 = 0;
    goto LABEL_69;
  }
  v63 = *(_QWORD *)(*a1 + 16);
  v64 = sub_79A330(v47 + 72);
  if ( v64 )
    v64 -= 64LL;
  v65 = sub_6E8B00(v63, v64);
  if ( !(unsigned __int8)sub_8926A0(*a1, (_DWORD *)a2, v107, v65) )
    goto LABEL_68;
LABEL_95:
  v77 = sub_8934C0(v4, 1, v92);
  v92 = -1;
  v50 = v77;
LABEL_69:
  v56 = (void *)v135.m128i_i64[0];
  if ( (__int64 *)v135.m128i_i64[0] != &v136 )
LABEL_56:
    free(v56);
LABEL_38:
  if ( ptr != v126 )
    free(ptr);
  if ( v92 != -1 )
    sub_8934C0(v4, 0, v92);
  --*(_DWORD *)(*(_QWORD *)(v4 + 32) + 192LL);
  if ( (_BYTE)v50 )
  {
    v52 = v117;
    LODWORD(v128) = v117;
    if ( v117 > 0x40 )
    {
      sub_2585B30(&v127);
      v52 = v128;
      v53 = v127;
    }
    else
    {
      v53 = v116;
      v127 = v116;
    }
    v135.m128i_i64[1] = (__int64)v53;
    v54 = a1[1];
    v135.m128i_i8[4] &= ~1u;
    BYTE4(v128) = v118;
    LODWORD(v129) = v119;
    LODWORD(v136) = v52;
    LODWORD(v128) = 0;
    BYTE4(v136) = v118;
    v137 = v119;
    v135.m128i_i32[0] = 4;
    sub_6A01B0(v54, (__int64)&v135);
    if ( v135.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v135);
    if ( (unsigned int)v128 > 0x40 && v127 )
      operator delete[](v127);
  }
  if ( v114 > 1 )
    sub_69F740((__int64)&v114);
  return v50;
}

