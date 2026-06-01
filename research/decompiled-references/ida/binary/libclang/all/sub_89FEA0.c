__int64 __fastcall sub_89FEA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  char v20; // dl
  __int64 *v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // r11
  int v29; // eax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // r15
  char v35; // al
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r15
  char v40; // al
  __int64 v41; // rcx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // r11
  char v45; // al
  char v46; // al
  char v47; // al
  __int64 v48; // r11
  __int64 v49; // rdi
  unsigned int v50; // eax
  unsigned int v51; // ebx
  __int64 v52; // rax
  void *v54; // rdi
  __int64 v55; // rdi
  unsigned __int16 v56; // ax
  bool v57; // r10
  __int64 v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // rdx
  __int64 v61; // r14
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // rax
  unsigned __int16 *v69; // r14
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  char v73; // al
  char v74; // al
  __int64 v75; // rax
  __int64 v76; // rdi
  bool v77; // zf
  __m128i *v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // r15
  __int64 v81; // r14
  bool v82; // al
  unsigned int v83; // eax
  unsigned int *v84; // r15
  __int64 v85; // rax
  _QWORD *v86; // rax
  char v87; // al
  __int64 v88; // [rsp+0h] [rbp-258h]
  __int64 v89; // [rsp+8h] [rbp-250h]
  unsigned int v90; // [rsp+14h] [rbp-244h]
  __int64 v91; // [rsp+18h] [rbp-240h]
  __int64 v92; // [rsp+18h] [rbp-240h]
  __int64 v93; // [rsp+18h] [rbp-240h]
  char *v94; // [rsp+18h] [rbp-240h]
  __int64 v95; // [rsp+18h] [rbp-240h]
  __int64 v96; // [rsp+18h] [rbp-240h]
  __int64 v97; // [rsp+18h] [rbp-240h]
  __int64 *v98; // [rsp+20h] [rbp-238h]
  unsigned __int64 v99; // [rsp+28h] [rbp-230h]
  bool v100; // [rsp+28h] [rbp-230h]
  _QWORD *v103; // [rsp+40h] [rbp-218h]
  __int64 v104; // [rsp+40h] [rbp-218h]
  _QWORD *v105; // [rsp+40h] [rbp-218h]
  unsigned __int64 v106; // [rsp+40h] [rbp-218h]
  __m128i *v107; // [rsp+40h] [rbp-218h]
  char *v108; // [rsp+40h] [rbp-218h]
  bool v109; // [rsp+48h] [rbp-210h]
  __int64 v110; // [rsp+58h] [rbp-200h]
  __int64 v111; // [rsp+58h] [rbp-200h]
  unsigned __int64 v112; // [rsp+60h] [rbp-1F8h]
  char *v113; // [rsp+68h] [rbp-1F0h]
  __m128i v114; // [rsp+70h] [rbp-1E8h] BYREF
  __int64 v115; // [rsp+80h] [rbp-1D8h]
  char v116; // [rsp+88h] [rbp-1D0h]
  __int64 v117; // [rsp+98h] [rbp-1C0h]
  void *ptr; // [rsp+A0h] [rbp-1B8h]
  __int64 v119; // [rsp+A8h] [rbp-1B0h]
  _BYTE v120[80]; // [rsp+B0h] [rbp-1A8h] BYREF
  unsigned __int64 v121[2]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v122; // [rsp+110h] [rbp-148h]
  char v123; // [rsp+118h] [rbp-140h]
  __int64 v124; // [rsp+128h] [rbp-130h]
  void *v125; // [rsp+130h] [rbp-128h]
  __int64 v126; // [rsp+138h] [rbp-120h]
  _BYTE v127[80]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v128; // [rsp+190h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+1A0h] [rbp-B8h] BYREF
  char v130; // [rsp+1A8h] [rbp-B0h]
  __int64 v131; // [rsp+1B8h] [rbp-A0h]
  void *v132; // [rsp+1C0h] [rbp-98h]
  __int64 v133; // [rsp+1C8h] [rbp-90h]
  _BYTE v134[136]; // [rsp+1D0h] [rbp-88h] BYREF

  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 32);
  v90 = *(_DWORD *)(*a1 + 320);
  v8 = *(unsigned int *)(v7 + 196);
  v9 = *(_DWORD *)(v7 + 208) + 1;
  v10 = *(unsigned int *)(v7 + 192);
  *(_DWORD *)(v7 + 208) = v9;
  if ( v8 < v10 + 1 )
  {
    sub_25D6060(v7 + 184, v7 + 200, v10 + 1, 4);
    v10 = *(unsigned int *)(v7 + 192);
  }
  *(_DWORD *)(*(_QWORD *)(v7 + 184) + 4 * v10) = v9;
  ++*(_DWORD *)(v7 + 192);
  v88 = *(unsigned __int8 *)(a2 + 3);
  v11 = sub_80F230(*(_QWORD *)(a2 + v88));
  v114 = 0u;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = v11;
  v116 |= 1u;
  v16 = *(unsigned int *)(a2 + 16);
  v17 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  ptr = v120;
  v99 = v16;
  LOBYTE(v16) = *(_BYTE *)(a2 + 2);
  v115 = 0;
  v119 = 0x800000000LL;
  v117 = 0;
  v120[65] = 0;
  v18 = *(_QWORD *)v17;
  v98 = (__int64 *)(a2 + v88 + 8LL * ((v16 & 8) != 0) + 8);
  v89 = 0;
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(_BYTE *)(v19 + 16);
  if ( v20 != 13 )
  {
    if ( *(_BYTE *)(v18 + 16) != 41 )
    {
      v106 = v17;
      if ( v20 != 41 )
        goto LABEL_36;
      v52 = sub_B0D320(v18);
      v17 = v106;
      v18 = v52;
      if ( !v52 )
        goto LABEL_36;
    }
    goto LABEL_6;
  }
  if ( ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1F2 )
  {
    v55 = *a1;
    v56 = *(_WORD *)v15 & 0x1FF;
    if ( v56 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v55, *(_QWORD *)(v15 + 16), (__int64)&v114, v17, v12, v13) )
        goto LABEL_37;
      v48 = *(_QWORD *)(v15 + 24);
      if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v57 = (*(_BYTE *)(v15 + 2) & 0x10) != 0;
        v107 = &v114;
        goto LABEL_51;
      }
      goto LABEL_65;
    }
    if ( v56 <= 0x76u )
    {
      if ( v56 == 103 )
      {
        if ( *(char *)(sub_A2CB40(v55) + 1) >= 0 )
          sub_A2E240(*a1, v15, 2278, 0);
        if ( (unsigned __int8)sub_89DEE0(*a1, *(_QWORD *)(v15 + 16), (__int64)&v114, v65, v66, v67) )
        {
          v68 = sub_8C1F60(v15);
          v51 = sub_8926A0(*a1, (_DWORD *)v15, &v114, v68);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
    }
    else if ( v56 <= 0x78u )
    {
      v64 = sub_89E210(v55, v15, (__int64)&v114, 0, v12, v13);
      v48 = v64;
      if ( !v64 )
        goto LABEL_37;
      v107 = &v114;
      v57 = 0;
      if ( (*(_BYTE *)(v64 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_51;
LABEL_65:
      v55 = *a1;
    }
    sub_827570(v55, v15, 110);
    goto LABEL_37;
  }
  if ( *(_BYTE *)(v18 + 16) != 41 )
  {
LABEL_36:
    sub_827570(*a1, a2, 110);
    goto LABEL_37;
  }
LABEL_6:
  v103 = (_QWORD *)v17;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 32)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
    goto LABEL_36;
  v21 = (__int64 *)*a1;
  v123 |= 1u;
  v128.m128i_i64[1] = (__int64)v121;
  v125 = v127;
  v22 = v15;
  v121[0] = 0;
  v121[1] = 0;
  v122 = 0;
  v124 = 0;
  v126 = 0x800000000LL;
  v127[65] = 0;
  v128.m128i_i64[0] = (__int64)v21;
  LOBYTE(v129) = 0;
  if ( !(unsigned __int8)sub_871080((__int64)&v128, v15, v21, v17, v12, v13) )
    goto LABEL_44;
  v23 = *a1;
  if ( v122 )
    goto LABEL_43;
  if ( (v127[64] & 1) != 0 )
  {
    v75 = sub_A2E130(v23, v15, 2258, 0);
    if ( v75 )
    {
      v128.m128i_i32[0] = 8;
      v128.m128i_i64[1] = v15;
      sub_B029C0(v75, &v128);
    }
    goto LABEL_44;
  }
  if ( !v121[0] || (v121[0] & 3) != 0 || (*(_BYTE *)((v121[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
  {
LABEL_43:
    sub_827570(v23, v15, 110);
    goto LABEL_44;
  }
  v24 = *(_QWORD *)(v23 + 16);
  v112 = v121[0] & 0xFFFFFFFFFFFFFFFCLL;
  v110 = *(_QWORD *)((v121[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
  v25 = sub_B167E0(*v103, v22);
  v26 = sub_6DC9E0(v24, v25, v110);
  v28 = v112;
  if ( !v26 )
  {
    sub_827570(*a1, a2, 110);
    goto LABEL_44;
  }
  if ( (*(_WORD *)a2 & 0x1FF) == 0x5C )
  {
    v29 = *(_BYTE *)(a2 + 4) & 0x3F;
    v30 = *(_BYTE *)(a2 + 4) & 0x3F;
    if ( v29 == 15 || v29 == 20 || (unsigned __int8)v30 <= 0x1Du && (v31 = 871104512, _bittest64(&v31, v30)) )
    {
      v32 = *(_QWORD *)(*a1 + 32);
      v33 = *(_DWORD *)(v32 + 176);
      v34 = (unsigned int)(*(_DWORD *)(v32 + 208) + 1);
      *(_DWORD *)(v32 + 208) = v34;
      v89 = (v34 << 32) | v33;
      if ( (*(_BYTE *)(v112 + 28) & 0x7Fu) - 33 > 3 )
      {
        v36 = *a1;
        v37 = v99;
        v38 = (__int64)v98;
      }
      else
      {
        v35 = sub_7A5610((_DWORD *)v112);
        v36 = *a1;
        v28 = v112;
        if ( v35 )
        {
          v37 = v99 - 1;
          v38 = (__int64)(v98 + 1);
        }
        else
        {
          v37 = v99;
          v38 = (__int64)v98;
        }
      }
      v104 = v28;
      if ( !(unsigned __int8)sub_899300(v38, v37, v34, v36, v28, 1u) )
        goto LABEL_44;
      v28 = v104;
      v39 = a2;
      v111 = v104;
    }
    else
    {
      v111 = 0;
      v39 = a2;
    }
  }
  else
  {
    v111 = 0;
    v39 = 0;
  }
  if ( (*(_BYTE *)(v28 + 28) & 0x7Fu) - 33 <= 3 )
  {
    v105 = (_QWORD *)v28;
    v40 = sub_7A5610((_DWORD *)v28);
    v44 = (__int64)v105;
    if ( v40 || v39 && (v45 = sub_7A4F00(v105), v44 = (__int64)v105, v45) )
    {
      v76 = *a1;
      if ( !v99 )
      {
        sub_827570(v76, a2, 110);
        goto LABEL_44;
      }
      v108 = (char *)v44;
      if ( !(unsigned __int8)sub_89DEE0(v76, *v98, (__int64)&v114, v41, v42, v43) )
        goto LABEL_44;
      v113 = v108;
      v77 = (unsigned __int8)sub_7A4F00(v108) == 0;
      v78 = nullptr;
      if ( v77 )
        v78 = &v114;
      v107 = v78;
      v79 = sub_A2CB40(*a1);
      v48 = (__int64)v113;
      v57 = 0;
      if ( *(char *)(v79 + 1) < 0 )
      {
        if ( v39 )
        {
          if ( (*(_BYTE *)(v39 + 4) & 0x3F) == 0xF && v113[82] < 0 )
          {
            if ( (v120[64] & 2) != 0 )
              goto LABEL_44;
            if ( (v116 & 1) != 0 )
              goto LABEL_44;
            v87 = sub_84FB20(*a1, (_DWORD *)*v98, &v114);
            v48 = (__int64)v113;
            v57 = 0;
            if ( !v87 )
              goto LABEL_44;
          }
        }
      }
      --v99;
      ++v98;
      goto LABEL_90;
    }
    v91 = v44;
    v46 = sub_7A5D20(v44);
    v28 = v91;
    if ( v46 )
    {
      v80 = sub_79A330(v91 + 72);
      if ( v80 )
        v80 -= 64LL;
      v81 = sub_7A3750(v80);
      v82 = sub_7A3730(v80);
      v57 = 0;
      if ( v82 )
      {
        v84 = (unsigned int *)sub_780F80(v91);
        v85 = sub_780E20(v81);
        v128.m128i_i64[0] = 0;
        v86 = sub_7DA670(v85, (__int64)(v84 + 2), *v84, (__int64)&v128);
        v57 = 0;
        v107 = nullptr;
        v48 = (__int64)v86;
      }
      else
      {
        v107 = nullptr;
        v48 = v81;
      }
      goto LABEL_90;
    }
  }
  v92 = v28;
  v47 = sub_77DE60((_QWORD *)v28, 0, nullptr, v27);
  v48 = v92;
  if ( v47 )
  {
    v49 = *a1;
    if ( (*(_DWORD *)(v92 + 40) & 7) == 6
      && (*(_DWORD *)(*(_QWORD *)(v92 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
    {
      v133 = 0x800000000LL;
      v131 = 0;
      v130 |= 1u;
      v128 = 0u;
      v129 = 0;
      v132 = v134;
      v134[65] = 0;
      v51 = sub_87DD20(v49, a2, &v128);
      if ( (_BYTE)v51 )
      {
        sub_81F730((__int64)&v128, a3);
        v83 = sub_8934C0(v6, 1, v90);
        v90 = -1;
        v51 = v83;
      }
      if ( v132 != v134 )
        free(v132);
LABEL_45:
      v54 = v125;
      if ( v125 == v127 )
        goto LABEL_38;
      goto LABEL_46;
    }
    if ( (unsigned __int8)sub_873630(v49, a2) )
    {
      v50 = sub_8934C0(v6, 1, v90);
      v90 = -1;
      v51 = v50;
      goto LABEL_45;
    }
LABEL_44:
    v51 = 0;
    goto LABEL_45;
  }
  v107 = nullptr;
  v57 = 0;
LABEL_90:
  if ( v125 != v127 )
  {
    v97 = v48;
    free(v125);
    v57 = 0;
    v48 = v97;
  }
  if ( !v111 )
  {
LABEL_51:
    v109 = v57;
    v58 = *(_QWORD *)(*a1 + 32);
    v59 = *(_DWORD *)(v58 + 176);
    v93 = v48;
    v60 = (unsigned int)(*(_DWORD *)(v58 + 208) + 1);
    *(_DWORD *)(v58 + 208) = v60;
    v89 = (v60 << 32) | v59;
    if ( (unsigned __int8)sub_899300((__int64)v98, v99, v60, *a1, v48, 0) )
    {
      v48 = v93;
      v57 = v109;
      v111 = v93;
      goto LABEL_53;
    }
LABEL_37:
    v51 = 0;
    goto LABEL_38;
  }
LABEL_53:
  v128.m128i_i64[0] = (__int64)&v129;
  v128.m128i_i64[1] = 0x400000000LL;
  if ( v107 )
  {
    v100 = v57;
    if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 33 > 3 )
      goto LABEL_72;
    v96 = v48;
    if ( sub_83DE60(v48) && !v100 )
    {
      v48 = sub_84F640(*a1, a2, v107, v96, (__int64)&v128);
      if ( !v48 )
        goto LABEL_58;
    }
    else
    {
      v73 = sub_7A5610((_DWORD *)v96);
      v48 = v96;
      if ( v73 )
      {
        v74 = sub_84E640(*a1, (_DWORD *)a2, v107, 4 * (unsigned int)((*(_BYTE *)(v96 + 28) & 0x7F) == 34) + 5, 0);
        v48 = v96;
        if ( !v74 )
          goto LABEL_58;
      }
    }
  }
  if ( (*(_BYTE *)(v48 + 28) & 0x7F) != 0x22 )
  {
LABEL_72:
    v94 = (char *)v48;
    v121[0] = 0;
    v69 = (unsigned __int16 *)sub_78BC30((_QWORD *)v48, v121);
    v70 = sub_8124E0(a2);
    if ( (unsigned __int8)sub_837DA0(*a1, v70, v94, v121[0], (__int64)v69) )
    {
      v95 = *a1;
      v71 = sub_8124E0(a2);
      if ( (unsigned __int8)sub_895450(v71, v121[0], v107, a2, (_DWORD **)v98, v69, v111, v89, v95, a3, a4) )
      {
        if ( !v128.m128i_i32[2] || (unsigned __int8)sub_82E940(*a1, a2, a3, v128.m128i_i64[0], v128.m128i_u32[2]) )
          goto LABEL_76;
      }
    }
LABEL_58:
    v51 = 0;
    goto LABEL_59;
  }
  v61 = *(_QWORD *)(*a1 + 16);
  v62 = sub_79A330(v48 + 72);
  if ( v62 )
    v62 -= 64LL;
  v63 = sub_6E8B00(v61, v62);
  if ( !(unsigned __int8)sub_8926A0(*a1, (_DWORD *)a2, v107, v63) )
    goto LABEL_58;
LABEL_76:
  v72 = sub_8934C0(v6, 1, v90);
  v90 = -1;
  v51 = v72;
LABEL_59:
  v54 = (void *)v128.m128i_i64[0];
  if ( (__int64 *)v128.m128i_i64[0] != &v129 )
LABEL_46:
    free(v54);
LABEL_38:
  if ( ptr != v120 )
    free(ptr);
  if ( v90 != -1 )
    sub_8934C0(v6, 0, v90);
  --*(_DWORD *)(*(_QWORD *)(v6 + 32) + 192LL);
  return v51;
}

