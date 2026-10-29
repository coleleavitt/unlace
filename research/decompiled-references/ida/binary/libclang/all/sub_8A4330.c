__int64 __fastcall sub_8A4330(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // r14d
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
  void *v50; // rdi
  unsigned int v51; // r14d
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned __int8 v55; // al
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  size_t v59; // rbp
  const void *v60; // r13
  __int64 v61; // rax
  __int64 v62; // r12
  __int64 v64; // rdi
  unsigned __int16 v65; // ax
  bool v66; // r10
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned int v69; // ecx
  __int64 v70; // r14
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int64 v74; // rcx
  int v75; // r8d
  int v76; // r9d
  __int64 v77; // rax
  char v78; // al
  char v79; // al
  __int64 v80; // rax
  unsigned __int16 *v81; // r14
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // eax
  __int64 v85; // rdi
  bool v86; // zf
  __m128i *v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // r15
  __int64 v90; // r14
  bool v91; // al
  unsigned int v92; // eax
  unsigned int *v93; // r15
  __int64 v94; // rax
  _QWORD *v95; // rax
  char v96; // al
  __int64 v97; // [rsp+0h] [rbp-288h]
  __int64 v98; // [rsp+8h] [rbp-280h]
  unsigned int v99; // [rsp+14h] [rbp-274h]
  __int64 v100; // [rsp+18h] [rbp-270h]
  __int64 v101; // [rsp+18h] [rbp-270h]
  __int64 v102; // [rsp+18h] [rbp-270h]
  __int64 v103; // [rsp+18h] [rbp-270h]
  char *v104; // [rsp+18h] [rbp-270h]
  __int64 v105; // [rsp+18h] [rbp-270h]
  __int64 v106; // [rsp+18h] [rbp-270h]
  __int64 *v107; // [rsp+20h] [rbp-268h]
  unsigned __int64 v108; // [rsp+28h] [rbp-260h]
  bool v109; // [rsp+28h] [rbp-260h]
  _QWORD *v110; // [rsp+30h] [rbp-258h]
  __int64 v111; // [rsp+30h] [rbp-258h]
  _QWORD *v112; // [rsp+30h] [rbp-258h]
  unsigned __int64 v113; // [rsp+30h] [rbp-258h]
  __m128i *v114; // [rsp+30h] [rbp-258h]
  char *v115; // [rsp+30h] [rbp-258h]
  bool v116; // [rsp+38h] [rbp-250h]
  __int64 v117; // [rsp+48h] [rbp-240h]
  __int64 v118; // [rsp+48h] [rbp-240h]
  unsigned __int64 v119; // [rsp+50h] [rbp-238h]
  char *v120; // [rsp+50h] [rbp-238h]
  unsigned int v121; // [rsp+60h] [rbp-228h] BYREF
  char v122; // [rsp+64h] [rbp-224h]
  __m128i v123; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v124; // [rsp+B0h] [rbp-1D8h]
  char v125; // [rsp+B8h] [rbp-1D0h]
  __int64 v126; // [rsp+C8h] [rbp-1C0h]
  void *v127; // [rsp+D0h] [rbp-1B8h]
  __int64 v128; // [rsp+D8h] [rbp-1B0h]
  _BYTE v129[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v130[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v131; // [rsp+140h] [rbp-148h]
  char v132; // [rsp+148h] [rbp-140h]
  __int64 v133; // [rsp+158h] [rbp-130h]
  void *ptr; // [rsp+160h] [rbp-128h]
  __int64 v135; // [rsp+168h] [rbp-120h]
  _BYTE v136[80]; // [rsp+170h] [rbp-118h] BYREF
  __m128i v137; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v138; // [rsp+1D0h] [rbp-B8h] BYREF
  char v139; // [rsp+1D8h] [rbp-B0h]
  __int64 v140; // [rsp+1E8h] [rbp-A0h]
  void *v141; // [rsp+1F0h] [rbp-98h]
  __int64 v142; // [rsp+1F8h] [rbp-90h]
  _BYTE v143[136]; // [rsp+200h] [rbp-88h] BYREF

  v4 = *a1;
  v122 &= ~1u;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 320);
  v121 = 0;
  v99 = v6;
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
  v97 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v97));
  v123 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v125 |= 1u;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v127 = v129;
  v108 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v124 = 0;
  v128 = 0x800000000LL;
  v126 = 0;
  v129[65] = 0;
  v17 = *(_QWORD *)v16;
  v107 = (__int64 *)(a2 + v97 + 8LL * ((v15 & 8) != 0) + 8);
  v98 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v113 = v16;
      if ( v19 != 41 )
        goto LABEL_38;
      v53 = sub_B0D320(v17);
      v16 = v113;
      v17 = v53;
      if ( !v53 )
        goto LABEL_38;
    }
    goto LABEL_6;
  }
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v64 = *a1;
    v65 = *(_WORD *)v14 & 0x1FF;
    if ( v65 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v64, *(_QWORD *)(v14 + 16), (__int64)&v123, v16, v11, v12) )
        goto LABEL_39;
      v47 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v66 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v114 = &v123;
        goto LABEL_61;
      }
      goto LABEL_74;
    }
    if ( v65 <= 0x76u )
    {
      if ( v65 == 103 )
      {
        if ( *(char *)(sub_A2CB40(v64) + 1) >= 0 )
          sub_A2E240(*a1, v14, 2278, 0);
        if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v14 + 16), (__int64)&v123, v74, v75, v76) )
        {
          v77 = sub_8C1F60(v14);
          v51 = sub_8926A0(*a1, (_DWORD *)v14, &v123, v77);
          goto LABEL_40;
        }
        goto LABEL_39;
      }
    }
    else if ( v65 <= 0x78u )
    {
      v73 = sub_89E210(v64, v14, (__int64)&v123, 0, v11, v12);
      v47 = v73;
      if ( !v73 )
        goto LABEL_39;
      v114 = &v123;
      v66 = 0;
      if ( (*(_BYTE *)(v73 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_61;
LABEL_74:
      v64 = *a1;
    }
    sub_827830(v64, v14, 110);
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_38:
    sub_827830(*a1, a2, 110);
    goto LABEL_39;
  }
LABEL_6:
  v110 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_38;
  v20 = (__int64 *)*a1;
  v132 |= 1u;
  v137.m128i_i64[1] = (__int64)v130;
  ptr = v136;
  v21 = v14;
  v130[0] = 0;
  v130[1] = 0;
  v131 = 0;
  v133 = 0;
  v135 = 0x800000000LL;
  v136[65] = 0;
  v137.m128i_i64[0] = (__int64)v20;
  LOBYTE(v138) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v137, v14, v20, v16, v11, v12) )
    goto LABEL_54;
  v22 = *a1;
  if ( v131 )
    goto LABEL_53;
  if ( (v136[64] & 1) != 0 )
  {
    v80 = sub_A2E130(v22, v14, 2258, 0);
    if ( v80 )
    {
      v137.m128i_i32[0] = 8;
      v137.m128i_i64[1] = v14;
      sub_B029C0(v80, &v137);
    }
    goto LABEL_54;
  }
  if ( !v130[0] || (v130[0] & 3) != 0 || (*(_BYTE *)((v130[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_53:
    sub_827830(v22, v14, 110);
    goto LABEL_54;
  }
  v23 = *(_QWORD *)(v22 + 16);
  v119 = v130[0] & 0xFFFFFFFFFFFFFFFCLL;
  v117 = *(_QWORD *)((v130[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v24 = sub_B167E0(*v110, v21);
  v25 = sub_6DC9E0(v23, v24, v117);
  v27 = v119;
  if ( !v25 )
  {
    sub_827830(*a1, a2, 110);
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
      v98 = (v33 << 32) | v32;
      if ( (*(_BYTE *)(v119 + 28) & 0x7Fu) - 33 > 3 )
      {
        v35 = *a1;
        v36 = v108;
        v37 = (__int64)v107;
      }
      else
      {
        v34 = sub_7A5610((_DWORD *)v119);
        v35 = *a1;
        v27 = v119;
        if ( v34 )
        {
          v36 = v108 - 1;
          v37 = (__int64)(v107 + 1);
        }
        else
        {
          v36 = v108;
          v37 = (__int64)v107;
        }
      }
      v111 = v27;
      if ( !(unsigned __int8)sub_899300(v37, v36, v33, v35, v27, 1u) )
        goto LABEL_54;
      v27 = v111;
      v38 = a2;
      v118 = v111;
    }
    else
    {
      v118 = 0;
      v38 = a2;
    }
  }
  else
  {
    v118 = 0;
    v38 = 0;
  }
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v112 = (_QWORD *)v27;
    v39 = sub_7A5610((_DWORD *)v27);
    v43 = (__int64)v112;
    if ( v39 || v38 && (v44 = sub_7A4F00(v112), v43 = (__int64)v112, v44) )
    {
      v85 = *a1;
      if ( !v108 )
      {
        sub_827830(v85, a2, 110);
        goto LABEL_54;
      }
      v115 = (char *)v43;
      if ( !(unsigned __int8)sub_89DEE0(v85, *v107, (__int64)&v123, v40, v41, v42) )
        goto LABEL_54;
      v120 = v115;
      v86 = (unsigned __int8)sub_7A4F00(v115) == 0;
      v87 = nullptr;
      if ( v86 )
        v87 = &v123;
      v114 = v87;
      v88 = sub_A2CB40(*a1);
      v47 = (__int64)v120;
      v66 = 0;
      if ( *(char *)(v88 + 1) < 0 )
      {
        if ( v38 )
        {
          if ( (*(_BYTE *)(v38 + 4) & 0x3F) == 0xF && v120[82] < 0 )
          {
            if ( (v129[64] & 2) != 0 )
              goto LABEL_54;
            if ( (v125 & 1) != 0 )
              goto LABEL_54;
            v96 = sub_84FB20(*a1, (_DWORD *)*v107, &v123);
            v47 = (__int64)v120;
            v66 = 0;
            if ( !v96 )
              goto LABEL_54;
          }
        }
      }
      --v108;
      ++v107;
      goto LABEL_101;
    }
    v100 = v43;
    v45 = sub_7A5D20(v43);
    v27 = v100;
    if ( v45 )
    {
      v89 = sub_79A330(v100 + 72);
      if ( v89 )
        v89 -= 64LL;
      v90 = sub_7A3750(v89);
      v91 = sub_7A3730(v89);
      v66 = 0;
      if ( v91 )
      {
        v93 = (unsigned int *)sub_780F80(v100);
        v94 = sub_780E20(v90);
        v137.m128i_i64[0] = 0;
        v95 = sub_7DA670(v94, (__int64)(v93 + 2), *v93, (__int64)&v137);
        v66 = 0;
        v114 = nullptr;
        v47 = (__int64)v95;
      }
      else
      {
        v114 = nullptr;
        v47 = v90;
      }
      goto LABEL_101;
    }
  }
  v101 = v27;
  v46 = sub_77DE60((_QWORD *)v27, 0, nullptr, v26);
  v47 = v101;
  if ( v46 )
  {
    v48 = *a1;
    if ( (*(_DWORD *)(v101 + 40) & 7) == 6
      && (*(_DWORD *)(*(_QWORD *)(v101 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
    {
      v140 = 0;
      v142 = 0x800000000LL;
      v139 |= 1u;
      v137 = 0u;
      v138 = 0;
      v141 = v143;
      v143[65] = 0;
      v51 = sub_87DD20(v48, a2, &v137);
      if ( (_BYTE)v51 )
      {
        sub_81F730((__int64)&v137, (__int64)&v121);
        v92 = sub_8934C0(v4, 1, v99);
        v99 = -1;
        v51 = v92;
      }
      if ( v141 != v143 )
        free(v141);
      goto LABEL_55;
    }
    if ( (unsigned __int8)sub_873630(v48, a2) )
    {
      v49 = sub_8934C0(v4, 1, v99);
      v50 = ptr;
      v51 = v49;
      if ( ptr != v136 )
        goto LABEL_33;
      goto LABEL_94;
    }
LABEL_54:
    v51 = 0;
LABEL_55:
    if ( ptr != v136 )
      free(ptr);
LABEL_40:
    v52 = v127;
    if ( v127 == v129 )
      goto LABEL_42;
    goto LABEL_41;
  }
  v114 = nullptr;
  v66 = 0;
LABEL_101:
  if ( ptr != v136 )
  {
    v106 = v47;
    free(ptr);
    v66 = 0;
    v47 = v106;
  }
  if ( !v118 )
  {
LABEL_61:
    v116 = v66;
    v67 = *(_QWORD *)(*a1 + 32);
    v102 = v47;
    v68 = (unsigned int)(*(_DWORD *)(v67 + 208) + 1);
    v69 = *(_DWORD *)(v67 + 176);
    *(_DWORD *)(v67 + 208) = v68;
    v98 = (v68 << 32) | v69;
    if ( (unsigned __int8)sub_899300((__int64)v107, v108, v68, *a1, v47, 0) )
    {
      v47 = v102;
      v66 = v116;
      v118 = v102;
      goto LABEL_63;
    }
LABEL_39:
    v51 = 0;
    goto LABEL_40;
  }
LABEL_63:
  v137.m128i_i64[0] = (__int64)&v138;
  v137.m128i_i64[1] = 0x400000000LL;
  if ( v114 )
  {
    v109 = v66;
    if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_89;
    v103 = v47;
    if ( sub_83DE60(v47) && !v109 )
    {
      v47 = sub_84F640(*a1, a2, v114, v103, (__int64)&v137);
      if ( !v47 )
        goto LABEL_68;
    }
    else
    {
      v78 = sub_7A5610((_DWORD *)v103);
      v47 = v103;
      if ( v78 )
      {
        v79 = sub_84E640(*a1, (_DWORD *)a2, v114, 4 * (unsigned int)((*(_BYTE *)(v103 + 28) & 0x7F) == 34) + 5, 0);
        v47 = v103;
        if ( !v79 )
          goto LABEL_68;
      }
    }
  }
  if ( (*(_BYTE *)(v47 + 28) & 0x7F) != 0x22 )
  {
LABEL_89:
    v104 = (char *)v47;
    v130[0] = 0;
    v81 = (unsigned __int16 *)sub_78BC30((_QWORD *)v47, v130);
    v82 = sub_8124E0(a2);
    if ( (unsigned __int8)sub_837DA0(*a1, v82, v104, v130[0], (__int64)v81) )
    {
      v105 = *a1;
      v83 = sub_8124E0(a2);
      if ( (unsigned __int8)sub_895450(v83, v130[0], v114, a2, (_DWORD **)v107, v81, v118, v98, v105, (__int64)&v121, 0) )
      {
        if ( !v137.m128i_i32[2]
          || (unsigned __int8)sub_82E940(*a1, a2, (__int64)&v121, v137.m128i_i64[0], v137.m128i_u32[2]) )
        {
          goto LABEL_93;
        }
      }
    }
LABEL_68:
    if ( (__int64 *)v137.m128i_i64[0] != &v138 )
      free((void *)v137.m128i_i64[0]);
    goto LABEL_39;
  }
  v70 = *(_QWORD *)(*a1 + 16);
  v71 = sub_79A330(v47 + 72);
  if ( v71 )
    v71 -= 64LL;
  v72 = sub_6E8B00(v70, v71);
  if ( !(unsigned __int8)sub_8926A0(*a1, (_DWORD *)a2, v114, v72) )
    goto LABEL_68;
LABEL_93:
  v84 = sub_8934C0(v4, 1, v99);
  v50 = (void *)v137.m128i_i64[0];
  v51 = v84;
  if ( (__int64 *)v137.m128i_i64[0] != &v138 )
  {
LABEL_33:
    free(v50);
    v52 = v127;
    v99 = -1;
    if ( v127 == v129 )
      goto LABEL_44;
LABEL_41:
    free(v52);
LABEL_42:
    if ( v99 != -1 )
      sub_8934C0(v4, 0, v99);
    goto LABEL_44;
  }
LABEL_94:
  if ( v127 != v129 )
    free(v127);
LABEL_44:
  --*(_DWORD *)(*(_QWORD *)(v4 + 32) + 192LL);
  if ( (_BYTE)v51 )
  {
    v54 = a1[1];
    *(_QWORD *)v54 = *(_QWORD *)v54 & 7LL | sub_6A37B0((__int64)&v121);
    v55 = sub_6A37C0((__int64)&v121);
    v56 = *(_QWORD *)v54;
    *(_DWORD *)(v54 + 16) = 0;
    *(_QWORD *)v54 = (4LL * v55) | v56 & 0xFFFFFFFFFFFFFFFBLL;
    v57 = sub_6A37D0((__int64)&v121);
    v59 = 8 * v58;
    v60 = (const void *)v57;
    v61 = *(unsigned int *)(v54 + 16);
    v62 = (8 * v58) >> 3;
    if ( *(unsigned int *)(v54 + 20) < (unsigned __int64)(v61 + v62) )
    {
      sub_25D6060(v54 + 8, v54 + 24, v61 + v62, 8);
      v61 = *(unsigned int *)(v54 + 16);
    }
    if ( v59 )
    {
      memcpy((void *)(*(_QWORD *)(v54 + 8) + 8 * v61), v60, v59);
      LODWORD(v61) = *(_DWORD *)(v54 + 16);
    }
    *(_DWORD *)(v54 + 16) = v62 + v61;
  }
  if ( v121 > 1 )
    sub_69F740((__int64)&v121);
  return v51;
}

