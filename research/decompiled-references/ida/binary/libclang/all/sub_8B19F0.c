__int64 __fastcall sub_8B19F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r12
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
  unsigned int v50; // ebx
  __int64 v51; // rax
  void *v53; // rdi
  __int64 v54; // rdi
  unsigned __int16 v55; // ax
  bool v56; // r10
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // ecx
  __int64 v60; // r15
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // rax
  unsigned __int16 *v68; // r15
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  char v72; // al
  char v73; // al
  __int64 v74; // rax
  __int64 v75; // rdi
  bool v76; // zf
  __m128i *v77; // rax
  __int64 v78; // rax
  unsigned __int64 v79; // r15
  __int64 v80; // r14
  bool v81; // al
  unsigned int v82; // eax
  unsigned int *v83; // r15
  __int64 v84; // rax
  _QWORD *v85; // rax
  char v86; // al
  unsigned int v87; // [rsp+Ch] [rbp-24Ch]
  __int64 v88; // [rsp+10h] [rbp-248h]
  __int64 v89; // [rsp+18h] [rbp-240h]
  __int64 v90; // [rsp+20h] [rbp-238h]
  __int64 v91; // [rsp+20h] [rbp-238h]
  __int64 v92; // [rsp+20h] [rbp-238h]
  char *v93; // [rsp+20h] [rbp-238h]
  __int64 v94; // [rsp+20h] [rbp-238h]
  __int64 v95; // [rsp+20h] [rbp-238h]
  __int64 v96; // [rsp+20h] [rbp-238h]
  __int64 *v97; // [rsp+28h] [rbp-230h]
  unsigned __int64 v98; // [rsp+30h] [rbp-228h]
  bool v99; // [rsp+30h] [rbp-228h]
  _QWORD *v101; // [rsp+40h] [rbp-218h]
  __int64 v102; // [rsp+40h] [rbp-218h]
  _QWORD *v103; // [rsp+40h] [rbp-218h]
  unsigned __int64 v104; // [rsp+40h] [rbp-218h]
  __m128i *v105; // [rsp+40h] [rbp-218h]
  char *v106; // [rsp+40h] [rbp-218h]
  bool v107; // [rsp+48h] [rbp-210h]
  __int64 v108; // [rsp+58h] [rbp-200h]
  __int64 v109; // [rsp+58h] [rbp-200h]
  unsigned __int64 v110; // [rsp+60h] [rbp-1F8h]
  char *v111; // [rsp+68h] [rbp-1F0h]
  __m128i v112; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v113; // [rsp+80h] [rbp-1D8h]
  char v114; // [rsp+88h] [rbp-1D0h]
  __int64 v115; // [rsp+98h] [rbp-1C0h]
  void *ptr; // [rsp+A0h] [rbp-1B8h]
  __int64 v117; // [rsp+A8h] [rbp-1B0h]
  _BYTE v118[80]; // [rsp+B0h] [rbp-1A8h] BYREF
  unsigned __int64 v119[2]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v120; // [rsp+110h] [rbp-148h]
  char v121; // [rsp+118h] [rbp-140h]
  __int64 v122; // [rsp+128h] [rbp-130h]
  void *v123; // [rsp+130h] [rbp-128h]
  __int64 v124; // [rsp+138h] [rbp-120h]
  _BYTE v125[80]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v126; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+1A0h] [rbp-B8h] BYREF
  char v128; // [rsp+1A8h] [rbp-B0h]
  __int64 v129; // [rsp+1B8h] [rbp-A0h]
  void *v130; // [rsp+1C0h] [rbp-98h]
  __int64 v131; // [rsp+1C8h] [rbp-90h]
  _BYTE v132[136]; // [rsp+1D0h] [rbp-88h] BYREF

  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 32);
  v87 = *(_DWORD *)(*a1 + 320);
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
  v88 = *(unsigned __int8 *)(a2 + 3);
  v10 = sub_80F230(*(_QWORD *)(a2 + v88));
  v112 = 0u;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = v10;
  v15 = *(unsigned int *)(a2 + 16);
  v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v114 |= 1u;
  v98 = v15;
  LOBYTE(v15) = *(_BYTE *)(a2 + 2);
  v113 = 0;
  ptr = v118;
  v117 = 0x800000000LL;
  v118[65] = 0;
  v115 = 0;
  v17 = *(_QWORD *)v16;
  v97 = (__int64 *)(a2 + v88 + 8LL * ((v15 & 8) != 0) + 8);
  v89 = 0;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 != 13 )
  {
    if ( *(_BYTE *)(v17 + 16) != 41 )
    {
      v104 = v16;
      if ( v19 != 41 )
        goto LABEL_36;
      v51 = sub_B0D320(v17);
      v16 = v104;
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
      if ( !(unsigned __int8)sub_89DEE0(v54, *(_QWORD *)(v14 + 16), (__int64)&v112, v16, v11, v12) )
        goto LABEL_37;
      v47 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v56 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v105 = &v112;
        goto LABEL_51;
      }
      goto LABEL_65;
    }
    if ( v55 <= 0x76u )
    {
      if ( v55 == 103 )
      {
        if ( *(char *)(sub_A2CB40(v54) + 1) >= 0 )
          sub_A2E240(*a1, v14, 2278, 0);
        if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v14 + 16), (__int64)&v112, v64, v65, v66) )
        {
          v67 = sub_8C1F60(v14);
          v50 = sub_8926A0(*a1, (_DWORD *)v14, &v112, v67);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
    }
    else if ( v55 <= 0x78u )
    {
      v63 = sub_89E210(v54, v14, (__int64)&v112, 0, v11, v12);
      v47 = v63;
      if ( !v63 )
        goto LABEL_37;
      v105 = &v112;
      v56 = 0;
      if ( (*(_BYTE *)(v63 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_51;
LABEL_65:
      v54 = *a1;
    }
    sub_827DB0(v54, v14, 110);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v17 + 16) != 41 )
  {
LABEL_36:
    sub_827DB0(*a1, a2, 110);
    goto LABEL_37;
  }
LABEL_6:
  v101 = (_QWORD *)v16;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_36;
  v20 = (__int64 *)*a1;
  v121 |= 1u;
  v126.m128i_i64[1] = (__int64)v119;
  v123 = v125;
  v21 = v14;
  v119[0] = 0;
  v119[1] = 0;
  v120 = 0;
  v122 = 0;
  v124 = 0x800000000LL;
  v125[65] = 0;
  v126.m128i_i64[0] = (__int64)v20;
  LOBYTE(v127) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v126, v14, v20, v16, v11, v12) )
    goto LABEL_44;
  v22 = *a1;
  if ( v120 )
    goto LABEL_43;
  if ( (v125[64] & 1) != 0 )
  {
    v74 = sub_A2E130(v22, v14, 2258, 0);
    if ( v74 )
    {
      v126.m128i_i32[0] = 8;
      v126.m128i_i64[1] = v14;
      sub_B029C0(v74, &v126);
    }
    goto LABEL_44;
  }
  if ( !v119[0] || (v119[0] & 3) != 0 || (*(_BYTE *)((v119[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_43:
    sub_827DB0(v22, v14, 110);
    goto LABEL_44;
  }
  v23 = *(_QWORD *)(v22 + 16);
  v110 = v119[0] & 0xFFFFFFFFFFFFFFFCLL;
  v108 = *(_QWORD *)((v119[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v24 = sub_B167E0(*v101, v21);
  v25 = sub_6DC9E0(v23, v24, v108);
  v27 = v110;
  if ( !v25 )
  {
    sub_827DB0(*a1, a2, 110);
    goto LABEL_44;
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
      v89 = (v33 << 32) | v32;
      if ( (*(_BYTE *)(v110 + 28) & 0x7Fu) - 33 > 3 )
      {
        v35 = *a1;
        v36 = v98;
        v37 = (__int64)v97;
      }
      else
      {
        v34 = sub_7A5610((_DWORD *)v110);
        v35 = *a1;
        v27 = v110;
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
      v102 = v27;
      if ( !(unsigned __int8)sub_899300(v37, v36, v33, v35, v27, 1u) )
        goto LABEL_44;
      v27 = v102;
      v38 = a2;
      v109 = v102;
    }
    else
    {
      v109 = 0;
      v38 = a2;
    }
  }
  else
  {
    v109 = 0;
    v38 = 0;
  }
  if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v103 = (_QWORD *)v27;
    v39 = sub_7A5610((_DWORD *)v27);
    v43 = (__int64)v103;
    if ( v39 || v38 && (v44 = sub_7A4F00(v103), v43 = (__int64)v103, v44) )
    {
      v75 = *a1;
      if ( !v98 )
      {
        sub_827DB0(v75, a2, 110);
        goto LABEL_44;
      }
      v106 = (char *)v43;
      if ( !(unsigned __int8)sub_89DEE0(v75, *v97, (__int64)&v112, v40, v41, v42) )
        goto LABEL_44;
      v111 = v106;
      v76 = (unsigned __int8)sub_7A4F00(v106) == 0;
      v77 = nullptr;
      if ( v76 )
        v77 = &v112;
      v105 = v77;
      v78 = sub_A2CB40(*a1);
      v47 = (__int64)v111;
      v56 = 0;
      if ( *(char *)(v78 + 1) < 0 )
      {
        if ( v38 )
        {
          if ( (*(_BYTE *)(v38 + 4) & 0x3F) == 0xF && v111[82] < 0 )
          {
            if ( (v118[64] & 2) != 0 )
              goto LABEL_44;
            if ( (v114 & 1) != 0 )
              goto LABEL_44;
            v86 = sub_84FB20(*a1, (_DWORD *)*v97, &v112);
            v47 = (__int64)v111;
            v56 = 0;
            if ( !v86 )
              goto LABEL_44;
          }
        }
      }
      --v98;
      ++v97;
      goto LABEL_90;
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
        v126.m128i_i64[0] = 0;
        v85 = sub_7DA670(v84, (__int64)(v83 + 2), *v83, (__int64)&v126);
        v56 = 0;
        v105 = nullptr;
        v47 = (__int64)v85;
      }
      else
      {
        v105 = nullptr;
        v47 = v80;
      }
      goto LABEL_90;
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
      v131 = 0x800000000LL;
      v129 = 0;
      v128 |= 1u;
      v126 = 0u;
      v127 = 0;
      v130 = v132;
      v132[65] = 0;
      v50 = sub_87DD20(v48, a2, &v126);
      if ( (_BYTE)v50 )
      {
        sub_81F730((__int64)&v126, a3);
        v82 = sub_8934C0(v5, 1, v87);
        v87 = -1;
        v50 = v82;
      }
      if ( v130 != v132 )
        free(v130);
LABEL_45:
      v53 = v123;
      if ( v123 == v125 )
        goto LABEL_38;
      goto LABEL_46;
    }
    if ( (unsigned __int8)sub_873630(v48, a2) )
    {
      v49 = sub_8934C0(v5, 1, v87);
      v87 = -1;
      v50 = v49;
      goto LABEL_45;
    }
LABEL_44:
    v50 = 0;
    goto LABEL_45;
  }
  v105 = nullptr;
  v56 = 0;
LABEL_90:
  if ( v123 != v125 )
  {
    v96 = v47;
    free(v123);
    v56 = 0;
    v47 = v96;
  }
  if ( !v109 )
  {
LABEL_51:
    v107 = v56;
    v57 = *(_QWORD *)(*a1 + 32);
    v92 = v47;
    v58 = (unsigned int)(*(_DWORD *)(v57 + 208) + 1);
    v59 = *(_DWORD *)(v57 + 176);
    *(_DWORD *)(v57 + 208) = v58;
    v89 = (v58 << 32) | v59;
    if ( (unsigned __int8)sub_899300((__int64)v97, v98, v58, *a1, v47, 0) )
    {
      v47 = v92;
      v56 = v107;
      v109 = v92;
      goto LABEL_53;
    }
LABEL_37:
    v50 = 0;
    goto LABEL_38;
  }
LABEL_53:
  v126.m128i_i64[0] = (__int64)&v127;
  v126.m128i_i64[1] = 0x400000000LL;
  if ( v105 )
  {
    v99 = v56;
    if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_72;
    v95 = v47;
    if ( sub_83DE60(v47) && !v99 )
    {
      v47 = sub_84F640(*a1, a2, v105, v95, (__int64)&v126);
      if ( !v47 )
        goto LABEL_58;
    }
    else
    {
      v72 = sub_7A5610((_DWORD *)v95);
      v47 = v95;
      if ( v72 )
      {
        v73 = sub_84E640(*a1, (_DWORD *)a2, v105, 4 * (unsigned int)((*(_BYTE *)(v95 + 28) & 0x7F) == 34) + 5, 0);
        v47 = v95;
        if ( !v73 )
          goto LABEL_58;
      }
    }
  }
  if ( (*(_BYTE *)(v47 + 28) & 0x7F) != 0x22 )
  {
LABEL_72:
    v93 = (char *)v47;
    v119[0] = 0;
    v68 = (unsigned __int16 *)sub_78BC30((_QWORD *)v47, v119);
    v69 = sub_8124E0(a2);
    if ( (unsigned __int8)sub_837DA0(*a1, v69, v93, v119[0], (__int64)v68) )
    {
      v94 = *a1;
      v70 = sub_8124E0(a2);
      if ( (unsigned __int8)sub_895450(v70, v119[0], v105, a2, (_DWORD **)v97, v68, v109, v89, v94, a3, 0) )
      {
        if ( !v126.m128i_i32[2] || (unsigned __int8)sub_82E940(*a1, a2, a3, v126.m128i_i64[0], v126.m128i_u32[2]) )
          goto LABEL_76;
      }
    }
LABEL_58:
    v50 = 0;
    goto LABEL_59;
  }
  v60 = *(_QWORD *)(*a1 + 16);
  v61 = sub_79A330(v47 + 72);
  if ( v61 )
    v61 -= 64LL;
  v62 = sub_6E8B00(v60, v61);
  if ( !(unsigned __int8)sub_8926A0(*a1, (_DWORD *)a2, v105, v62) )
    goto LABEL_58;
LABEL_76:
  v71 = sub_8934C0(v5, 1, v87);
  v87 = -1;
  v50 = v71;
LABEL_59:
  v53 = (void *)v126.m128i_i64[0];
  if ( (__int64 *)v126.m128i_i64[0] != &v127 )
LABEL_46:
    free(v53);
LABEL_38:
  if ( ptr != v118 )
    free(ptr);
  if ( v87 != -1 )
    sub_8934C0(v5, 0, v87);
  --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 192LL);
  return v50;
}

