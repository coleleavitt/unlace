__int64 __fastcall sub_8A7950(__int64 *a1, __int64 a2)
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
  __int64 v55; // rax
  __int64 v56; // rdi
  unsigned __int16 v57; // ax
  bool v58; // r10
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // ecx
  __int64 v62; // r14
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  char v66; // al
  char v67; // al
  __int64 v68; // rcx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int16 *v73; // r14
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // rdi
  bool v78; // zf
  __m128i *v79; // rax
  __int64 v80; // rax
  unsigned __int64 v81; // r15
  __int64 v82; // r14
  bool v83; // al
  unsigned int v84; // eax
  unsigned int *v85; // r15
  __int64 v86; // rax
  _QWORD *v87; // rax
  char v88; // al
  __int64 v89; // [rsp+0h] [rbp-288h]
  __int64 v90; // [rsp+8h] [rbp-280h]
  unsigned int v91; // [rsp+14h] [rbp-274h]
  __int64 v92; // [rsp+18h] [rbp-270h]
  __int64 v93; // [rsp+18h] [rbp-270h]
  __int64 v94; // [rsp+18h] [rbp-270h]
  __int64 v95; // [rsp+18h] [rbp-270h]
  char *v96; // [rsp+18h] [rbp-270h]
  __int64 v97; // [rsp+18h] [rbp-270h]
  __int64 v98; // [rsp+18h] [rbp-270h]
  __int64 *v99; // [rsp+20h] [rbp-268h]
  unsigned __int64 v100; // [rsp+28h] [rbp-260h]
  bool v101; // [rsp+28h] [rbp-260h]
  _QWORD *v102; // [rsp+30h] [rbp-258h]
  __int64 v103; // [rsp+30h] [rbp-258h]
  _QWORD *v104; // [rsp+30h] [rbp-258h]
  unsigned __int64 v105; // [rsp+30h] [rbp-258h]
  __m128i *v106; // [rsp+30h] [rbp-258h]
  char *v107; // [rsp+30h] [rbp-258h]
  bool v108; // [rsp+38h] [rbp-250h]
  __int64 v109; // [rsp+48h] [rbp-240h]
  __int64 v110; // [rsp+48h] [rbp-240h]
  unsigned __int64 v111; // [rsp+50h] [rbp-238h]
  char *v112; // [rsp+58h] [rbp-230h]
  unsigned int v113; // [rsp+60h] [rbp-228h] BYREF
  char v114; // [rsp+64h] [rbp-224h]
  __m128i v115; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v116; // [rsp+B0h] [rbp-1D8h]
  char v117; // [rsp+B8h] [rbp-1D0h]
  __int64 v118; // [rsp+C8h] [rbp-1C0h]
  void *v119; // [rsp+D0h] [rbp-1B8h]
  __int64 v120; // [rsp+D8h] [rbp-1B0h]
  _BYTE v121[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v122[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v123; // [rsp+140h] [rbp-148h]
  char v124; // [rsp+148h] [rbp-140h]
  __int64 v125; // [rsp+158h] [rbp-130h]
  void *ptr; // [rsp+160h] [rbp-128h]
  __int64 v127; // [rsp+168h] [rbp-120h]
  _BYTE v128[80]; // [rsp+170h] [rbp-118h] BYREF
  __m128i v129; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v130; // [rsp+1D0h] [rbp-B8h] BYREF
  char v131; // [rsp+1D8h] [rbp-B0h]
  __int64 v132; // [rsp+1E8h] [rbp-A0h]
  void *v133; // [rsp+1F0h] [rbp-98h]
  __int64 v134; // [rsp+1F8h] [rbp-90h]
  _BYTE v135[136]; // [rsp+200h] [rbp-88h] BYREF

  v4 = sub_80FBD0(a2);
  if ( v4 )
  {
    v55 = sub_C63970(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17360LL), v4);
    if ( strchr(*(const char **)(v55 + 24), 69) )
      return sub_862160(a1, a2);
  }
  v5 = *a1;
  v114 &= ~1u;
  v113 = 0;
  v6 = *(_QWORD *)(v5 + 32);
  v91 = *(_DWORD *)(v5 + 320);
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
  v89 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v89));
  v115 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v117 |= 1u;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v119 = v121;
  v100 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v116 = 0;
  v120 = 0x800000000LL;
  v118 = 0;
  v121[65] = 0;
  v17 = *(_QWORD *)v16;
  v99 = (__int64 *)(a2 + v89 + 8LL * ((v15 & 8) != 0) + 8);
  v90 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v105 = v16;
      if ( v19 != 41 )
        goto LABEL_39;
      v53 = sub_B0D320(v17);
      v16 = v105;
      v17 = v53;
      if ( !v53 )
        goto LABEL_39;
    }
    goto LABEL_7;
  }
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v56 = *a1;
    v57 = *(_WORD *)v14 & 0x1FF;
    if ( v57 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v56, *(_QWORD *)(v14 + 16), (__int64)&v115, v16, v11, v12) )
        goto LABEL_40;
      v47 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v58 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v106 = &v115;
        goto LABEL_56;
      }
      goto LABEL_73;
    }
    if ( v57 <= 0x76u )
    {
      if ( v57 == 103 )
      {
        if ( *(char *)(sub_A2CB40(v56) + 1) >= 0 )
          sub_A2E240(*a1, v14, 2278, 0);
        if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v14 + 16), (__int64)&v115, v68, v69, v70) )
        {
          v71 = sub_8C1F60(v14);
          v51 = sub_8926A0(*a1, (_DWORD *)v14, &v115, v71);
          goto LABEL_41;
        }
        goto LABEL_40;
      }
    }
    else if ( v57 <= 0x78u )
    {
      v65 = sub_89E210(v56, v14, (__int64)&v115, 0, v11, v12);
      v47 = v65;
      if ( !v65 )
        goto LABEL_40;
      v106 = &v115;
      v58 = 0;
      if ( (*(_BYTE *)(v65 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_56;
LABEL_73:
      v56 = *a1;
    }
    sub_8272B0(v56, v14, 110);
    goto LABEL_40;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_39:
    sub_8272B0(*a1, a2, 110);
    goto LABEL_40;
  }
LABEL_7:
  v102 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_39;
  v20 = (__int64 *)*a1;
  v21 = v14;
  v129.m128i_i64[1] = (__int64)v122;
  v124 |= 1u;
  v122[0] = 0;
  v122[1] = 0;
  v123 = 0;
  v125 = 0;
  ptr = v128;
  v127 = 0x800000000LL;
  v128[65] = 0;
  v129.m128i_i64[0] = (__int64)v20;
  LOBYTE(v130) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v129, v14, v20, (__int64)v128, v11, v12) )
    goto LABEL_66;
  v22 = *a1;
  if ( v123 )
    goto LABEL_65;
  if ( (v128[64] & 1) != 0 )
  {
    v72 = sub_A2E130(v22, v14, 2258, 0);
    if ( v72 )
    {
      v129.m128i_i32[0] = 8;
      v129.m128i_i64[1] = v14;
      sub_B029C0(v72, &v129);
    }
    goto LABEL_66;
  }
  if ( !v122[0] || (v122[0] & 3) != 0 || (*(_BYTE *)((v122[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_65:
    sub_8272B0(v22, v14, 110);
    goto LABEL_66;
  }
  v23 = *(_QWORD *)(v22 + 16);
  v111 = v122[0] & 0xFFFFFFFFFFFFFFFCLL;
  v109 = *(_QWORD *)((v122[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v24 = sub_B167E0(*v102, v21);
  v25 = sub_6DC9E0(v23, v24, v109);
  v27 = v111;
  if ( !v25 )
  {
    sub_8272B0(*a1, a2, 110);
    goto LABEL_66;
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
      v90 = (v33 << 32) | v32;
      if ( (*(_BYTE *)(v111 + 28) & 0x7Fu) - 33 > 3 )
      {
        v35 = *a1;
        v36 = v100;
        v37 = (__int64)v99;
      }
      else
      {
        v34 = sub_7A5610((_DWORD *)v111);
        v35 = *a1;
        v27 = v111;
        if ( v34 )
        {
          v36 = v100 - 1;
          v37 = (__int64)(v99 + 1);
        }
        else
        {
          v36 = v100;
          v37 = (__int64)v99;
        }
      }
      v103 = v27;
      if ( !(unsigned __int8)sub_899300(v37, v36, v33, v35, v27, 1u) )
        goto LABEL_66;
      v27 = v103;
      v38 = a2;
      v110 = v103;
    }
    else
    {
      v110 = 0;
      v38 = a2;
    }
  }
  else
  {
    v110 = 0;
    v38 = 0;
  }
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v104 = (_QWORD *)v27;
    v39 = sub_7A5610((_DWORD *)v27);
    v43 = (__int64)v104;
    if ( v39 || v38 && (v44 = sub_7A4F00(v104), v43 = (__int64)v104, v44) )
    {
      v77 = *a1;
      if ( !v100 )
      {
        sub_8272B0(v77, a2, 110);
        goto LABEL_66;
      }
      v107 = (char *)v43;
      if ( !(unsigned __int8)sub_89DEE0(v77, *v99, (__int64)&v115, v40, v41, v42) )
        goto LABEL_66;
      v112 = v107;
      v78 = (unsigned __int8)sub_7A4F00(v107) == 0;
      v79 = nullptr;
      if ( v78 )
        v79 = &v115;
      v106 = v79;
      v80 = sub_A2CB40(*a1);
      v47 = (__int64)v112;
      v58 = 0;
      if ( *(char *)(v80 + 1) < 0 )
      {
        if ( v38 )
        {
          if ( (*(_BYTE *)(v38 + 4) & 0x3F) == 0xF && v112[82] < 0 )
          {
            if ( (v121[64] & 2) != 0 )
              goto LABEL_66;
            if ( (v117 & 1) != 0 )
              goto LABEL_66;
            v88 = sub_84FB20(*a1, (_DWORD *)*v99, &v115);
            v47 = (__int64)v112;
            v58 = 0;
            if ( !v88 )
              goto LABEL_66;
          }
        }
      }
      --v100;
      ++v99;
      goto LABEL_100;
    }
    v92 = v43;
    v45 = sub_7A5D20(v43);
    v27 = v92;
    if ( v45 )
    {
      v81 = sub_79A330(v92 + 72);
      if ( v81 )
        v81 -= 64LL;
      v82 = sub_7A3750(v81);
      v83 = sub_7A3730(v81);
      v58 = 0;
      if ( v83 )
      {
        v85 = (unsigned int *)sub_780F80(v92);
        v86 = sub_780E20(v82);
        v129.m128i_i64[0] = 0;
        v87 = sub_7DA670(v86, (__int64)(v85 + 2), *v85, (__int64)&v129);
        v58 = 0;
        v106 = nullptr;
        v47 = (__int64)v87;
      }
      else
      {
        v47 = v82;
        v106 = nullptr;
      }
      goto LABEL_100;
    }
  }
  v93 = v27;
  v46 = sub_77DE60((_QWORD *)v27, 0, nullptr, v26);
  v47 = v93;
  if ( v46 )
  {
    v48 = *a1;
    if ( (*(_DWORD *)(v93 + 40) & 7) == 6
      && (*(_DWORD *)(*(_QWORD *)(v93 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
    {
      v129 = 0u;
      v130 = 0;
      v134 = 0x800000000LL;
      v131 |= 1u;
      v132 = 0;
      v133 = v135;
      v135[65] = 0;
      v51 = sub_87DD20(v48, a2, &v129);
      if ( (_BYTE)v51 )
      {
        sub_81F730((__int64)&v129, (__int64)&v113);
        v84 = sub_8934C0(v5, 1, v91);
        v91 = -1;
        v51 = v84;
      }
      if ( v133 != v135 )
        free(v133);
      goto LABEL_67;
    }
    if ( (unsigned __int8)sub_873630(v48, a2) )
    {
      v49 = sub_8934C0(v5, 1, v91);
      v50 = ptr;
      v51 = v49;
      if ( ptr != v128 )
        goto LABEL_34;
LABEL_93:
      if ( v119 != v121 )
        free(v119);
      goto LABEL_45;
    }
LABEL_66:
    v51 = 0;
LABEL_67:
    if ( ptr != v128 )
      free(ptr);
LABEL_41:
    v52 = v119;
    if ( v119 == v121 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v106 = nullptr;
  v58 = 0;
LABEL_100:
  if ( ptr != v128 )
  {
    v98 = v47;
    free(ptr);
    v58 = 0;
    v47 = v98;
  }
  if ( !v110 )
  {
LABEL_56:
    v108 = v58;
    v59 = *(_QWORD *)(*a1 + 32);
    v94 = v47;
    v60 = (unsigned int)(*(_DWORD *)(v59 + 208) + 1);
    v61 = *(_DWORD *)(v59 + 176);
    *(_DWORD *)(v59 + 208) = v60;
    v90 = (v60 << 32) | v61;
    if ( (unsigned __int8)sub_899300((__int64)v99, v100, v60, *a1, v47, 0) )
    {
      v47 = v94;
      v58 = v108;
      v110 = v94;
      goto LABEL_58;
    }
LABEL_40:
    v51 = 0;
    goto LABEL_41;
  }
LABEL_58:
  v129.m128i_i64[0] = (__int64)&v130;
  v129.m128i_i64[1] = 0x400000000LL;
  if ( v106 )
  {
    v101 = v58;
    if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_88;
    v95 = v47;
    if ( sub_83DE60(v47) && !v101 )
    {
      v47 = sub_84F640(*a1, a2, v106, v95, (__int64)&v129);
      if ( !v47 )
        goto LABEL_63;
    }
    else
    {
      v66 = sub_7A5610((_DWORD *)v95);
      v47 = v95;
      if ( v66 )
      {
        v67 = sub_84E640(*a1, (_DWORD *)a2, v106, 4 * (unsigned int)((*(_BYTE *)(v95 + 28) & 0x7F) == 34) + 5, 0);
        v47 = v95;
        if ( !v67 )
          goto LABEL_63;
      }
    }
  }
  if ( (*(_BYTE *)(v47 + 28) & 0x7F) != 0x22 )
  {
LABEL_88:
    v96 = (char *)v47;
    v122[0] = 0;
    v73 = (unsigned __int16 *)sub_78BC30((_QWORD *)v47, v122);
    v74 = sub_8124E0(a2);
    if ( (unsigned __int8)sub_837DA0(*a1, v74, v96, v122[0], (__int64)v73) )
    {
      v97 = *a1;
      v75 = sub_8124E0(a2);
      if ( (unsigned __int8)sub_895450(v75, v122[0], v106, a2, (_DWORD **)v99, v73, v110, v90, v97, (__int64)&v113, 0) )
      {
        if ( !v129.m128i_i32[2]
          || (unsigned __int8)sub_82E940(*a1, a2, (__int64)&v113, v129.m128i_i64[0], v129.m128i_u32[2]) )
        {
          goto LABEL_92;
        }
      }
    }
LABEL_63:
    if ( (__int64 *)v129.m128i_i64[0] != &v130 )
      free((void *)v129.m128i_i64[0]);
    goto LABEL_40;
  }
  v62 = *(_QWORD *)(*a1 + 16);
  v63 = sub_79A330(v47 + 72);
  if ( v63 )
    v63 -= 64LL;
  v64 = sub_6E8B00(v62, v63);
  if ( !(unsigned __int8)sub_8926A0(*a1, (_DWORD *)a2, v106, v64) )
    goto LABEL_63;
LABEL_92:
  v76 = sub_8934C0(v5, 1, v91);
  v50 = (void *)v129.m128i_i64[0];
  v51 = v76;
  if ( (__int64 *)v129.m128i_i64[0] == &v130 )
    goto LABEL_93;
LABEL_34:
  free(v50);
  v52 = v119;
  v91 = -1;
  if ( v119 != v121 )
  {
LABEL_42:
    free(v52);
LABEL_43:
    if ( v91 != -1 )
      sub_8934C0(v5, 0, v91);
  }
LABEL_45:
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 192LL);
  if ( (_BYTE)v51 )
    sub_6A63E0(a1[1], (__int64)&v113);
  if ( v113 > 1 )
    sub_69F740((__int64)&v113);
  return v51;
}

