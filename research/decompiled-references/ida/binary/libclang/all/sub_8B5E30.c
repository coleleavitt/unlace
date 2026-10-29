__int64 __fastcall sub_8B5E30(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rbx
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
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  __int64 v54; // rdi
  unsigned __int16 v55; // ax
  bool v56; // r10
  __int64 v57; // rax
  __int64 v58; // rdx
  unsigned int v59; // ecx
  __int64 v60; // r14
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rax
  void *v63; // rdi
  unsigned __int16 *v64; // r14
  unsigned int v65; // eax
  unsigned int v66; // eax
  int v67; // eax
  unsigned __int64 v68; // rax
  char v69; // al
  char v70; // al
  __int64 v71; // rcx
  int v72; // r8d
  int v73; // r9d
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdi
  bool v77; // zf
  __m128i *v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // r15
  __int64 v81; // r14
  bool v82; // al
  int v83; // eax
  unsigned int *v84; // r15
  __int64 v85; // rax
  _QWORD *v86; // rax
  char v87; // al
  __int64 v88; // [rsp+0h] [rbp-288h]
  __int64 v89; // [rsp+8h] [rbp-280h]
  unsigned int v90; // [rsp+14h] [rbp-274h]
  __int64 v91; // [rsp+18h] [rbp-270h]
  __int64 v92; // [rsp+18h] [rbp-270h]
  __int64 v93; // [rsp+18h] [rbp-270h]
  char *v94; // [rsp+18h] [rbp-270h]
  __int64 v95; // [rsp+18h] [rbp-270h]
  __int64 v96; // [rsp+18h] [rbp-270h]
  __int64 v97; // [rsp+18h] [rbp-270h]
  __int64 *v98; // [rsp+20h] [rbp-268h]
  unsigned __int64 v99; // [rsp+28h] [rbp-260h]
  bool v100; // [rsp+28h] [rbp-260h]
  _QWORD *v101; // [rsp+30h] [rbp-258h]
  __int64 v102; // [rsp+30h] [rbp-258h]
  _QWORD *v103; // [rsp+30h] [rbp-258h]
  unsigned __int64 v104; // [rsp+30h] [rbp-258h]
  __m128i *v105; // [rsp+30h] [rbp-258h]
  char *v106; // [rsp+30h] [rbp-258h]
  bool v107; // [rsp+38h] [rbp-250h]
  __int64 v108; // [rsp+48h] [rbp-240h]
  __int64 v109; // [rsp+48h] [rbp-240h]
  unsigned __int64 v110; // [rsp+50h] [rbp-238h]
  char *v111; // [rsp+58h] [rbp-230h]
  unsigned int v112; // [rsp+60h] [rbp-228h] BYREF
  char v113; // [rsp+64h] [rbp-224h]
  __m128i v114; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v115; // [rsp+B0h] [rbp-1D8h]
  char v116; // [rsp+B8h] [rbp-1D0h]
  __int64 v117; // [rsp+C8h] [rbp-1C0h]
  void *ptr; // [rsp+D0h] [rbp-1B8h]
  __int64 v119; // [rsp+D8h] [rbp-1B0h]
  _BYTE v120[80]; // [rsp+E0h] [rbp-1A8h] BYREF
  unsigned __int64 v121[2]; // [rsp+130h] [rbp-158h] BYREF
  __int64 v122; // [rsp+140h] [rbp-148h]
  char v123; // [rsp+148h] [rbp-140h]
  __int64 v124; // [rsp+158h] [rbp-130h]
  void *v125; // [rsp+160h] [rbp-128h]
  __int64 v126; // [rsp+168h] [rbp-120h]
  _BYTE v127[80]; // [rsp+170h] [rbp-118h] BYREF
  __m128i v128; // [rsp+1C0h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+1D0h] [rbp-B8h] BYREF
  char v130; // [rsp+1D8h] [rbp-B0h]
  __int64 v131; // [rsp+1E8h] [rbp-A0h]
  void *v132; // [rsp+1F0h] [rbp-98h]
  __int64 v133; // [rsp+1F8h] [rbp-90h]
  _BYTE v134[136]; // [rsp+200h] [rbp-88h] BYREF

  v3 = a1;
  v4 = sub_80FBD0(a2);
  if ( !v4
    || (v51 = sub_C63970(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 17360LL), v4), !strchr(*(const char **)(v51 + 24), 69)) )
  {
    v5 = *a1;
    v113 &= ~1u;
    v112 = 0;
    v6 = *(_QWORD *)(v5 + 32);
    v90 = *(_DWORD *)(v5 + 320);
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
    v114 = 0u;
    v13 = *(_QWORD *)(v10 + 8);
    v14 = v10;
    v116 |= 1u;
    v15 = *(unsigned int *)(a2 + 16);
    v16 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    ptr = v120;
    v99 = v15;
    LOBYTE(v15) = *(_BYTE *)(a2 + 2);
    v115 = 0;
    v119 = 0x800000000LL;
    v117 = 0;
    v120[65] = 0;
    v17 = *(_QWORD *)v16;
    v98 = (__int64 *)(a2 + v88 + 8LL * ((v15 & 8) != 0) + 8);
    v89 = 0;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v19 = *(_BYTE *)(v18 + 16);
    if ( v19 != 13 )
    {
      if ( *(_BYTE *)(v17 + 16) != 41 )
      {
        v104 = v16;
        if ( v19 != 41 )
          goto LABEL_37;
        v50 = sub_B0D320(v17);
        v16 = v104;
        v17 = v50;
        if ( !v50 )
          goto LABEL_37;
      }
LABEL_7:
      v101 = (_QWORD *)v16;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
        v20 = (__int64 *)*v3;
        v21 = v14;
        v128.m128i_i64[1] = (__int64)v121;
        v123 |= 1u;
        v121[0] = 0;
        v121[1] = 0;
        v122 = 0;
        v124 = 0;
        v125 = v127;
        v126 = 0x800000000LL;
        v127[65] = 0;
        v128.m128i_i64[0] = (__int64)v20;
        LOBYTE(v129) = 0;
        if ( !(unsigned __int8)sub_871080((__int64)&v128, v14, v20, (__int64)v127, v11, v12) )
          goto LABEL_64;
        v22 = *v3;
        if ( v122 )
          goto LABEL_63;
        if ( (v127[64] & 1) != 0 )
        {
          v75 = sub_A2E130(v22, v14, 2258, 0);
          if ( v75 )
          {
            v128.m128i_i32[0] = 8;
            v128.m128i_i64[1] = v14;
            sub_B029C0(v75, &v128);
          }
          goto LABEL_64;
        }
        if ( !v121[0] || (v121[0] & 3) != 0 || (*(_BYTE *)((v121[0] & 0xFFFFFFFFFFFFFFFCLL) + 28) & 0x7Fu) - 32 > 5 )
        {
LABEL_63:
          sub_8264F0(v22, v14, 110);
          goto LABEL_64;
        }
        v23 = *(_QWORD *)(v22 + 16);
        v110 = v121[0] & 0xFFFFFFFFFFFFFFFCLL;
        v108 = *(_QWORD *)((v121[0] & 0xFFFFFFFFFFFFFFFCLL) + 48);
        v24 = sub_B167E0(*v101, v21);
        v25 = sub_6DC9E0(v23, v24, v108);
        v27 = v110;
        if ( !v25 )
        {
          sub_8264F0(*v3, a2, 110);
          goto LABEL_64;
        }
        if ( (*(_WORD *)a2 & 0x1FF) == 0x5C )
        {
          v28 = *(_BYTE *)(a2 + 4) & 0x3F;
          v29 = *(_BYTE *)(a2 + 4) & 0x3F;
          if ( v28 == 15 || v28 == 20 || (unsigned __int8)v29 <= 0x1Du && (v30 = 871104512, _bittest64(&v30, v29)) )
          {
            v31 = *(_QWORD *)(*v3 + 32);
            v32 = *(_DWORD *)(v31 + 176);
            v33 = (unsigned int)(*(_DWORD *)(v31 + 208) + 1);
            *(_DWORD *)(v31 + 208) = v33;
            v89 = (v33 << 32) | v32;
            if ( (*(_BYTE *)(v110 + 28) & 0x7Fu) - 33 > 3 )
            {
              v35 = *v3;
              v36 = v99;
              v37 = (__int64)v98;
            }
            else
            {
              v34 = sub_7A5610((_DWORD *)v110);
              v35 = *v3;
              v27 = v110;
              if ( v34 )
              {
                v36 = v99 - 1;
                v37 = (__int64)(v98 + 1);
              }
              else
              {
                v36 = v99;
                v37 = (__int64)v98;
              }
            }
            v102 = v27;
            if ( !(unsigned __int8)sub_899300(v37, v36, v33, v35, v27, 1u) )
              goto LABEL_64;
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
            v76 = *v3;
            if ( !v99 )
            {
              sub_8264F0(v76, a2, 110);
              goto LABEL_64;
            }
            v106 = (char *)v43;
            if ( !(unsigned __int8)sub_89DEE0(v76, *v98, (__int64)&v114, v40, v41, v42) )
              goto LABEL_64;
            v111 = v106;
            v77 = (unsigned __int8)sub_7A4F00(v106) == 0;
            v78 = nullptr;
            if ( v77 )
              v78 = &v114;
            v105 = v78;
            v79 = sub_A2CB40(*v3);
            v47 = (__int64)v111;
            v56 = 0;
            if ( *(char *)(v79 + 1) < 0 )
            {
              if ( v38 )
              {
                if ( (*(_BYTE *)(v38 + 4) & 0x3F) == 0xF && v111[82] < 0 )
                {
                  if ( (v120[64] & 2) != 0 )
                    goto LABEL_64;
                  if ( (v116 & 1) != 0 )
                    goto LABEL_64;
                  v87 = sub_84FB20(*v3, (_DWORD *)*v98, &v114);
                  v47 = (__int64)v111;
                  v56 = 0;
                  if ( !v87 )
                    goto LABEL_64;
                }
              }
            }
            --v99;
            ++v98;
            goto LABEL_97;
          }
          v91 = v43;
          v45 = sub_7A5D20(v43);
          v27 = v91;
          if ( v45 )
          {
            v80 = sub_79A330(v91 + 72);
            if ( v80 )
              v80 -= 64LL;
            v81 = sub_7A3750(v80);
            v82 = sub_7A3730(v80);
            v56 = 0;
            if ( v82 )
            {
              v84 = (unsigned int *)sub_780F80(v91);
              v85 = sub_780E20(v81);
              v128.m128i_i64[0] = 0;
              v86 = sub_7DA670(v85, (__int64)(v84 + 2), *v84, (__int64)&v128);
              v56 = 0;
              v105 = nullptr;
              v47 = (__int64)v86;
            }
            else
            {
              v47 = v81;
              v105 = nullptr;
            }
            goto LABEL_97;
          }
        }
        v92 = v27;
        v46 = sub_77DE60((_QWORD *)v27, 0, nullptr, v26);
        v47 = v92;
        if ( v46 )
        {
          v48 = *v3;
          if ( (*(_DWORD *)(v92 + 40) & 7) == 6
            && (*(_DWORD *)(*(_QWORD *)(v92 + 40) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFD) == 1 )
          {
            v133 = 0x800000000LL;
            v128 = 0u;
            v129 = 0;
            v130 |= 1u;
            v131 = 0;
            v132 = v134;
            v134[65] = 0;
            LODWORD(v3) = sub_87DD20(v48, a2, &v128);
            if ( (_BYTE)v3 )
            {
              sub_81F730((__int64)&v128, (__int64)&v112);
              v83 = sub_8934C0(v5, 1, v90);
              v90 = -1;
              LODWORD(v3) = v83;
            }
            if ( v132 != v134 )
              free(v132);
LABEL_65:
            v63 = v125;
            if ( v125 != v127 )
LABEL_66:
              free(v63);
LABEL_39:
            if ( ptr != v120 )
              free(ptr);
            if ( v90 != -1 )
              sub_8934C0(v5, 0, v90);
            --*(_DWORD *)(*(_QWORD *)(v5 + 32) + 192LL);
            if ( v112 > 1 )
              sub_69F740((__int64)&v112);
            return (unsigned int)v3;
          }
          if ( (unsigned __int8)sub_873630(v48, a2) )
          {
            v49 = sub_8934C0(v5, 1, v90);
            v90 = -1;
            LODWORD(v3) = v49;
            goto LABEL_65;
          }
LABEL_64:
          LODWORD(v3) = 0;
          goto LABEL_65;
        }
        v105 = nullptr;
        v56 = 0;
LABEL_97:
        if ( v125 != v127 )
        {
          v97 = v47;
          free(v125);
          v56 = 0;
          v47 = v97;
        }
        if ( v109 )
        {
LABEL_55:
          v128.m128i_i64[0] = (__int64)&v129;
          v128.m128i_i64[1] = 0x400000000LL;
          if ( v105 )
          {
            v100 = v56;
            if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 > 3 )
            {
LABEL_68:
              v94 = (char *)v47;
              v121[0] = 0;
              v64 = (unsigned __int16 *)sub_78BC30((_QWORD *)v47, v121);
              v65 = sub_8124E0(a2);
              if ( (unsigned __int8)sub_837DA0(*v3, v65, v94, v121[0], (__int64)v64) )
              {
                v95 = *v3;
                v66 = sub_8124E0(a2);
                if ( (unsigned __int8)sub_895450(
                                        v66,
                                        v121[0],
                                        v105,
                                        a2,
                                        (_DWORD **)v98,
                                        v64,
                                        v109,
                                        v89,
                                        v95,
                                        (__int64)&v112,
                                        0) )
                {
                  if ( !v128.m128i_i32[2]
                    || (unsigned __int8)sub_82E940(*v3, a2, (__int64)&v112, v128.m128i_i64[0], v128.m128i_u32[2]) )
                  {
                    goto LABEL_72;
                  }
                }
              }
LABEL_60:
              LODWORD(v3) = 0;
              goto LABEL_61;
            }
            v96 = v47;
            if ( sub_83DE60(v47) && !v100 )
            {
              v47 = sub_84F640(*v3, a2, v105, v96, (__int64)&v128);
              if ( !v47 )
                goto LABEL_60;
            }
            else
            {
              v69 = sub_7A5610((_DWORD *)v96);
              v47 = v96;
              if ( v69 )
              {
                v70 = sub_84E640(
                        *v3,
                        (_DWORD *)a2,
                        v105,
                        4 * (unsigned int)((*(_BYTE *)(v96 + 28) & 0x7F) == 34) + 5,
                        0);
                v47 = v96;
                if ( !v70 )
                  goto LABEL_60;
              }
            }
          }
          if ( (*(_BYTE *)(v47 + 28) & 0x7F) == 0x22 )
          {
            v60 = *(_QWORD *)(*v3 + 16);
            v61 = sub_79A330(v47 + 72);
            if ( v61 )
              v61 -= 64LL;
            v62 = sub_6E8B00(v60, v61);
            if ( !(unsigned __int8)sub_8926A0(*v3, (_DWORD *)a2, v105, v62) )
              goto LABEL_60;
LABEL_72:
            v67 = sub_8934C0(v5, 1, v90);
            v90 = -1;
            LODWORD(v3) = v67;
LABEL_61:
            v63 = (void *)v128.m128i_i64[0];
            if ( (__int64 *)v128.m128i_i64[0] == &v129 )
              goto LABEL_39;
            goto LABEL_66;
          }
          goto LABEL_68;
        }
        goto LABEL_53;
      }
LABEL_37:
      sub_8264F0(*v3, a2, 110);
      goto LABEL_38;
    }
    if ( ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1F2 )
    {
      if ( *(_BYTE *)(v17 + 16) != 41 )
        goto LABEL_37;
      goto LABEL_7;
    }
    v54 = *v3;
    v55 = *(_WORD *)v14 & 0x1FF;
    if ( v55 == 47 )
    {
      if ( !(unsigned __int8)sub_89DEE0(v54, *(_QWORD *)(v14 + 16), (__int64)&v114, v16, v11, v12) )
        goto LABEL_38;
      v47 = *(_QWORD *)(v14 + 24);
      if ( (*(_BYTE *)(v47 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v56 = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
        v105 = &v114;
LABEL_53:
        v107 = v56;
        v57 = *(_QWORD *)(*v3 + 32);
        v93 = v47;
        v58 = (unsigned int)(*(_DWORD *)(v57 + 208) + 1);
        v59 = *(_DWORD *)(v57 + 176);
        *(_DWORD *)(v57 + 208) = v58;
        v89 = (v58 << 32) | v59;
        if ( (unsigned __int8)sub_899300((__int64)v98, v99, v58, *v3, v47, 0) )
        {
          v47 = v93;
          v56 = v107;
          v109 = v93;
          goto LABEL_55;
        }
LABEL_38:
        LODWORD(v3) = 0;
        goto LABEL_39;
      }
    }
    else
    {
      if ( v55 <= 0x76u )
      {
        if ( v55 == 103 )
        {
          if ( *(char *)(sub_A2CB40(v54) + 1) >= 0 )
            sub_A2E240(*v3, v14, 2278, 0);
          if ( (unsigned __int8)sub_89DEE0(*v3, *(_QWORD *)(v14 + 16), (__int64)&v114, v71, v72, v73) )
          {
            v74 = sub_8C1F60(v14);
            LODWORD(v3) = sub_8926A0(*v3, (_DWORD *)v14, &v114, v74);
            goto LABEL_39;
          }
          goto LABEL_38;
        }
        goto LABEL_78;
      }
      if ( v55 > 0x78u )
      {
LABEL_78:
        sub_8264F0(v54, v14, 110);
        goto LABEL_38;
      }
      v68 = sub_89E210(v54, v14, (__int64)&v114, 0, v11, v12);
      v47 = v68;
      if ( !v68 )
        goto LABEL_38;
      v105 = &v114;
      v56 = 0;
      if ( (*(_BYTE *)(v68 + 28) & 0x7Fu) - 33 <= 3 )
        goto LABEL_53;
    }
    v54 = *v3;
    goto LABEL_78;
  }
  v52 = sub_80FBD0(a2);
  if ( v52 != 224 )
  {
    LOBYTE(v3) = v52 == 150;
    LOBYTE(v52) = v52 == 889;
    LODWORD(v3) = v52 | (unsigned int)v3;
    return (unsigned int)v3;
  }
  return sub_873630(*a1, a2);
}

