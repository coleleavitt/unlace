__int64 __fastcall sub_8B28C0(__int64 *a1, __int64 a2)
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
  void *v53; // rdi
  __int64 v54; // rdi
  unsigned __int16 v55; // ax
  bool v56; // r10
  __int64 v57; // rax
  unsigned int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // r12
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // rax
  char v68; // al
  char v69; // al
  __int64 v70; // rax
  unsigned __int16 *v71; // r12
  unsigned int v72; // eax
  unsigned int v73; // eax
  unsigned int v74; // eax
  __int64 v75; // rdi
  bool v76; // zf
  __m128i *v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // r15
  __int64 v80; // r12
  bool v81; // al
  unsigned int v82; // eax
  unsigned int *v83; // r15
  __int64 v84; // rax
  _QWORD *v85; // rax
  char v86; // al
  __int64 v87; // [rsp+0h] [rbp-288h]
  __int64 v88; // [rsp+8h] [rbp-280h]
  unsigned int v89; // [rsp+14h] [rbp-274h]
  __int64 v90; // [rsp+18h] [rbp-270h]
  __int64 v91; // [rsp+18h] [rbp-270h]
  __int64 v92; // [rsp+18h] [rbp-270h]
  __int64 v93; // [rsp+18h] [rbp-270h]
  char *v94; // [rsp+18h] [rbp-270h]
  __int64 v95; // [rsp+18h] [rbp-270h]
  __int64 v96; // [rsp+18h] [rbp-270h]
  __int64 *v97; // [rsp+20h] [rbp-268h]
  unsigned __int64 v98; // [rsp+28h] [rbp-260h]
  bool v99; // [rsp+28h] [rbp-260h]
  _QWORD *v100; // [rsp+30h] [rbp-258h]
  __int64 v101; // [rsp+30h] [rbp-258h]
  _QWORD *v102; // [rsp+30h] [rbp-258h]
  unsigned __int64 v103; // [rsp+30h] [rbp-258h]
  __m128i *v104; // [rsp+30h] [rbp-258h]
  char *v105; // [rsp+30h] [rbp-258h]
  bool v106; // [rsp+38h] [rbp-250h]
  __int64 v107; // [rsp+48h] [rbp-240h]
  __int64 v108; // [rsp+48h] [rbp-240h]
  unsigned __int64 v109; // [rsp+50h] [rbp-238h]
  char *v110; // [rsp+58h] [rbp-230h]
  unsigned int v111; // [rsp+60h] [rbp-228h] BYREF
  char v112; // [rsp+64h] [rbp-224h]
  __m128i v113; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v114; // [rsp+B0h] [rbp-1D8h]
  char v115; // [rsp+B8h] [rbp-1D0h]
  __int64 v116; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v118; // [rsp+D8h] [rbp-1B0h]
  _BYTE v119[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v120[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v121; // [rsp+140h] [rbp-148h]
  char v122; // [rsp+148h] [rbp-140h]
  __int64 v123; // [rsp+158h] [rbp-130h]
  void *v124; // [rsp+160h] [rbp-128h]
  __int64 v125; // [rsp+168h] [rbp-120h]
  _BYTE v126[80]; // [rsp+170h] [rbp-118h] BYREF
  __m128i v127; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v128; // [rsp+1D0h] [rbp-B8h] BYREF
  char v129; // [rsp+1D8h] [rbp-B0h]
  __int64 v130; // [rsp+1E8h] [rbp-A0h]
  void *v131; // [rsp+1F0h] [rbp-98h]
  __int64 v132; // [rsp+1F8h] [rbp-90h]
  _BYTE v133[136]; // [rsp+200h] [rbp-88h] BYREF

  v4 = *a1;
  v112 &= ~1u;
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 320);
  v111 = 0;
  v89 = v6;
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
  v87 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v87));
  v113 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v115 |= 1u;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  ptr = v119;
  v98 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v114 = 0;
  v118 = 0x800000000LL;
  v116 = 0;
  v119[65] = 0;
  v17 = *(_QWORD *)v16;
  v97 = (__int64 *)(a2 + v87 + 8LL * ((v15 & 8) != 0) + 8);
  v88 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v103 = v16;
      if ( v19 != 41 )
        goto LABEL_36;
      v51 = sub_B0D320(v17);
      v16 = v103;
      v17 = v51;
      if ( !v51 )
        goto LABEL_36;
    }
    goto LABEL_6;
  }
  if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v54 = *a1;
    v55 = *(_WORD *)v14 & 0x1FF;
    if ( v55 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v54, *(_QWORD *)(v14 + 16), (__int64)&v113, v16, v11, v12) )
        goto LABEL_37;
      v47 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v56 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v104 = &v113;
        goto LABEL_55;
      }
      goto LABEL_69;
    }
    if ( v55 <= 0x76u )
    {
      if ( v55 == 103 )
      {
        if ( *(char *)(sub_A2CB40(v54) + 1) >= 0 )
          sub_A2E240(*a1, v14, 2278, 0);
        if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v14 + 16), (__int64)&v113, v64, v65, v66) )
        {
          v67 = sub_8C1F60(v14);
          v50 = sub_8926A0(*a1, (_DWORD *)v14, &v113, v67);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
    }
    else if ( v55 <= 0x78u )
    {
      v63 = sub_89E210(v54, v14, (__int64)&v113, 0, v11, v12);
      v47 = v63;
      if ( !v63 )
        goto LABEL_37;
      v104 = &v113;
      v56 = 0;
      if ( (*(_BYTE *)(v63 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_55;
LABEL_69:
      v54 = *a1;
    }
    sub_8267B0(v54, v14, 110);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_36:
    sub_8267B0(*a1, a2, 110);
    goto LABEL_37;
  }
LABEL_6:
  v100 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_36;
  v20 = (__int64 *)*a1;
  v21 = v14;
  v127.m128i_i64[1] = (__int64)v120;
  v122 |= 1u;
  v120[0] = 0;
  v120[1] = 0;
  v121 = 0;
  v123 = 0;
  v124 = v126;
  v125 = 0x800000000LL;
  v126[65] = 0;
  v127.m128i_i64[0] = (__int64)v20;
  LOBYTE(v128) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v127, v14, v20, (__int64)v126, v11, v12) )
    goto LABEL_48;
  v22 = *a1;
  if ( v121 )
    goto LABEL_47;
  if ( (v126[64] & 1) != 0 )
  {
    v70 = sub_A2E130(v22, v14, 2258, 0);
    if ( v70 )
    {
      v127.m128i_i32[0] = 8;
      v127.m128i_i64[1] = v14;
      sub_B029C0(v70, &v127);
    }
    goto LABEL_48;
  }
  if ( !v120[0] || (v120[0] & 3) != 0 || (*(_BYTE *)((v120[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_47:
    sub_8267B0(v22, v14, 110);
    goto LABEL_48;
  }
  v23 = *(_QWORD *)(v22 + 16);
  v109 = v120[0] & 0xFFFFFFFFFFFFFFFCLL;
  v107 = *(_QWORD *)((v120[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v24 = sub_B167E0(*v100, v21);
  v25 = sub_6DC9E0(v23, v24, v107);
  v27 = v109;
  if ( !v25 )
  {
    sub_8267B0(*a1, a2, 110);
    goto LABEL_48;
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
      v88 = (v33 << 32) | v32;
      if ( (*(_BYTE *)(v109 + 28) & 0x7Fu) - 33 > 3 )
      {
        v35 = *a1;
        v36 = v98;
        v37 = (__int64)v97;
      }
      else
      {
        v34 = sub_7A5610((_DWORD *)v109);
        v35 = *a1;
        v27 = v109;
        if ( v34 )
        {
          v36 = v98 - 1;
          v37 = (__int64)(v97 + 1);
        }
        else
        {
          v36 = v98;
          v37 = (__int64)v97;
        }
      }
      v101 = v27;
      if ( !(unsigned __int8)sub_899300(v37, v36, v33, v35, v27, 1u) )
        goto LABEL_48;
      v27 = v101;
      v38 = a2;
      v108 = v101;
    }
    else
    {
      v108 = 0;
      v38 = a2;
    }
  }
  else
  {
    v108 = 0;
    v38 = 0;
  }
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v102 = (_QWORD *)v27;
    v39 = sub_7A5610((_DWORD *)v27);
    v43 = (__int64)v102;
    if ( v39 || v38 && (v44 = sub_7A4F00(v102), v43 = (__int64)v102, v44) )
    {
      v75 = *a1;
      if ( !v98 )
      {
        sub_8267B0(v75, a2, 110);
        goto LABEL_48;
      }
      v105 = (char *)v43;
      if ( !(unsigned __int8)sub_89DEE0(v75, *v97, (__int64)&v113, v40, v41, v42) )
        goto LABEL_48;
      v110 = v105;
      v76 = (unsigned __int8)sub_7A4F00(v105) == 0;
      v77 = nullptr;
      if ( v76 )
        v77 = &v113;
      v104 = v77;
      v78 = sub_A2CB40(*a1);
      v47 = (__int64)v110;
      v56 = 0;
      if ( *(char *)(v78 + 1) < 0 )
      {
        if ( v38 )
        {
          if ( (*(_BYTE *)(v38 + 4) & 0x3F) == 0xF && v110[82] < 0 )
          {
            if ( (v119[64] & 2) != 0 )
              goto LABEL_48;
            if ( (v115 & 1) != 0 )
              goto LABEL_48;
            v86 = sub_84FB20(*a1, (_DWORD *)*v97, &v113);
            v47 = (__int64)v110;
            v56 = 0;
            if ( !v86 )
              goto LABEL_48;
          }
        }
      }
      --v98;
      ++v97;
      goto LABEL_94;
    }
    v90 = v43;
    v45 = sub_7A5D20(v43);
    v27 = v90;
    if ( v45 )
    {
      v79 = sub_79A330(v90 + 72);
      if ( v79 )
        v79 -= 64LL;
      v80 = sub_7A3750(v79);
      v81 = sub_7A3730(v79);
      v56 = 0;
      if ( v81 )
      {
        v83 = (unsigned int *)sub_780F80(v90);
        v84 = sub_780E20(v80);
        v127.m128i_i64[0] = 0;
        v85 = sub_7DA670(v84, (__int64)(v83 + 2), *v83, (__int64)&v127);
        v56 = 0;
        v104 = nullptr;
        v47 = (__int64)v85;
      }
      else
      {
        v104 = nullptr;
        v47 = v80;
      }
      goto LABEL_94;
    }
  }
  v91 = v27;
  v46 = sub_77DE60((_QWORD *)v27, 0, nullptr, v26);
  v47 = v91;
  if ( v46 )
  {
    v48 = *a1;
    if ( (*(_DWORD *)(v91 + 40) & 7) == 6
      && (*(_DWORD *)(*(_QWORD *)(v91 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
    {
      v130 = 0;
      v132 = 0x800000000LL;
      v129 |= 1u;
      v127 = 0u;
      v128 = 0;
      v131 = v133;
      v133[65] = 0;
      v50 = sub_87DD20(v48, a2, &v127);
      if ( (_BYTE)v50 )
      {
        sub_81F730((__int64)&v127, (__int64)&v111);
        v82 = sub_8934C0(v4, 1, v89);
        v89 = -1;
        v50 = v82;
      }
      if ( v131 != v133 )
        free(v131);
LABEL_49:
      v53 = v124;
      if ( v124 == v126 )
        goto LABEL_38;
      goto LABEL_50;
    }
    if ( (unsigned __int8)sub_873630(v48, a2) )
    {
      v49 = sub_8934C0(v4, 1, v89);
      v89 = -1;
      v50 = v49;
      goto LABEL_49;
    }
LABEL_48:
    v50 = 0;
    goto LABEL_49;
  }
  v104 = nullptr;
  v56 = 0;
LABEL_94:
  if ( v124 != v126 )
  {
    v96 = v47;
    free(v124);
    v56 = 0;
    v47 = v96;
  }
  if ( !v108 )
  {
LABEL_55:
    v106 = v56;
    v57 = *(_QWORD *)(*a1 + 32);
    v58 = *(_DWORD *)(v57 + 176);
    v92 = v47;
    v59 = (unsigned int)(*(_DWORD *)(v57 + 208) + 1);
    *(_DWORD *)(v57 + 208) = v59;
    v88 = (v59 << 32) | v58;
    if ( (unsigned __int8)sub_899300((__int64)v97, v98, v59, *a1, v47, 0) )
    {
      v47 = v92;
      v56 = v106;
      v108 = v92;
      goto LABEL_57;
    }
LABEL_37:
    v50 = 0;
    goto LABEL_38;
  }
LABEL_57:
  v127.m128i_i64[0] = (__int64)&v128;
  v127.m128i_i64[1] = 0x400000000LL;
  if ( v104 )
  {
    v99 = v56;
    if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_84;
    v93 = v47;
    if ( sub_83DE60(v47) && !v99 )
    {
      v47 = sub_84F640(*a1, a2, v104, v93, (__int64)&v127);
      if ( !v47 )
        goto LABEL_62;
    }
    else
    {
      v68 = sub_7A5610((_DWORD *)v93);
      v47 = v93;
      if ( v68 )
      {
        v69 = sub_84E640(*a1, (_DWORD *)a2, v104, 4 * (unsigned int)((*(_BYTE *)(v93 + 28) & 0x7F) == 34) + 5, 0);
        v47 = v93;
        if ( !v69 )
          goto LABEL_62;
      }
    }
  }
  if ( (*(_BYTE *)(v47 + 28) & 0x7F) != 0x22 )
  {
LABEL_84:
    v94 = (char *)v47;
    v120[0] = 0;
    v71 = (unsigned __int16 *)sub_78BC30((_QWORD *)v47, v120);
    v72 = sub_8124E0(a2);
    if ( (unsigned __int8)sub_837DA0(*a1, v72, v94, v120[0], (__int64)v71) )
    {
      v95 = *a1;
      v73 = sub_8124E0(a2);
      if ( (unsigned __int8)sub_895450(v73, v120[0], v104, a2, (_DWORD **)v97, v71, v108, v88, v95, (__int64)&v111, 0) )
      {
        if ( !v127.m128i_i32[2]
          || (unsigned __int8)sub_82E940(*a1, a2, (__int64)&v111, v127.m128i_i64[0], v127.m128i_u32[2]) )
        {
          goto LABEL_88;
        }
      }
    }
LABEL_62:
    v50 = 0;
    goto LABEL_63;
  }
  v60 = *(_QWORD *)(*a1 + 16);
  v61 = sub_79A330(v47 + 72);
  if ( v61 )
    v61 -= 64LL;
  v62 = sub_6E8B00(v60, v61);
  if ( !(unsigned __int8)sub_8926A0(*a1, (_DWORD *)a2, v104, v62) )
    goto LABEL_62;
LABEL_88:
  v74 = sub_8934C0(v4, 1, v89);
  v89 = -1;
  v50 = v74;
LABEL_63:
  v53 = (void *)v127.m128i_i64[0];
  if ( (__int64 *)v127.m128i_i64[0] != &v128 )
LABEL_50:
    free(v53);
LABEL_38:
  if ( ptr != v119 )
    free(ptr);
  if ( v89 != -1 )
    sub_8934C0(v4, 0, v89);
  --*(_DWORD *)(*(_QWORD *)(v4 + 32) + 192LL);
  if ( (_BYTE)v50 )
    sub_6A63E0(a1[2], (__int64)&v111);
  if ( v111 > 1 )
    sub_69F740((__int64)&v111);
  return v50;
}

