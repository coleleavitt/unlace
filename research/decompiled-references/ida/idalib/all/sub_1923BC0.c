__int64 __fastcall sub_1923BC0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  _WORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // rdi
  __int16 v21; // ax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r14d
  char v30; // r13
  __int64 v31; // rcx
  char v32; // al
  char v33; // r13
  __int64 v34; // rax
  unsigned __int8 v35; // al
  char v36; // al
  __int64 v37; // rsi
  __int64 v38; // rdi
  char v39; // al
  unsigned __int64 v40; // rax
  unsigned __int8 v41; // al
  int v42; // esi
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int16 v45; // dx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // r13
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // r14d
  unsigned int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rdi
  unsigned int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  unsigned __int64 v70; // rbp
  unsigned __int64 v71; // r14
  __int64 v72; // rax
  char v73; // dl
  __int64 v74; // r13
  char v75; // al
  __int16 v76; // cx
  char v77; // cl
  char v78; // al
  unsigned __int8 v79; // al
  __int64 v80; // r13
  char *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // r13
  unsigned __int64 v84; // r13
  char *v85; // rax
  signed __int64 v86; // rdx
  unsigned __int8 *v87; // rsi
  __int64 v88; // r13
  unsigned __int64 v89; // r13
  __int64 v90; // rax
  char v91; // r13
  __int64 v92; // rbx
  char v93; // al
  __int16 v94; // dx
  char v95; // dl
  char v96; // al
  unsigned __int8 v97; // al
  unsigned __int64 v98; // [rsp+8h] [rbp-150h]
  __int64 v99; // [rsp+8h] [rbp-150h]
  __int64 v100; // [rsp+8h] [rbp-150h]
  unsigned __int8 v101; // [rsp+8h] [rbp-150h]
  unsigned __int64 v102; // [rsp+8h] [rbp-150h]
  __int64 v103; // [rsp+10h] [rbp-148h]
  __int64 v104; // [rsp+10h] [rbp-148h]
  char v105; // [rsp+10h] [rbp-148h]
  __int64 v106; // [rsp+18h] [rbp-140h]
  char v107; // [rsp+18h] [rbp-140h]
  unsigned __int64 v108; // [rsp+20h] [rbp-138h]
  char v109; // [rsp+20h] [rbp-138h]
  __int64 v110; // [rsp+30h] [rbp-128h]
  int v111; // [rsp+38h] [rbp-120h]
  int v112; // [rsp+3Ch] [rbp-11Ch]
  unsigned __int64 v113; // [rsp+48h] [rbp-110h]
  int v114; // [rsp+58h] [rbp-100h] BYREF
  int v115; // [rsp+5Ch] [rbp-FCh] BYREF
  unsigned __int64 v116; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v117; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v118; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v119; // [rsp+78h] [rbp-E0h] BYREF
  _QWORD v120[2]; // [rsp+80h] [rbp-D8h] BYREF
  unsigned __int8 *v121; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v122; // [rsp+98h] [rbp-C0h]

  v111 = a3;
  if ( a5 )
  {
    v103 = 0;
    v11 = 0;
    goto LABEL_3;
  }
  v23 = *(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v23 + 16) == 13 && ((*(_WORD *)(v23 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    v40 = sub_1907C70(a1, (_QWORD *)a4, (__m128i)a7, a8, a3, a4, 0, a6);
    if ( v40 <= 1 )
      return 1;
    a4 = v40 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 && (*(_DWORD *)a4 & 0x10000) == 0 )
  {
    v36 = (*(_BYTE *)(a4 + 1) >> 1) & 3;
    a3 = (*(_BYTE *)(a6 + 1) >> 1) & 3;
    if ( (_BYTE)a3 == v36 )
    {
      if ( v36 )
      {
        if ( ((*(_BYTE *)(a4 + 1) >> 3) & 7u) <= 1 && ((*(_BYTE *)(a6 + 1) >> 3) & 7u) <= 1 )
        {
          v11 = a4;
          v37 = *(_QWORD *)&byte_8[*(_QWORD *)(a6 + 8) & 0xFFFFFFFFFFFFFFF0LL];
          v38 = *(_QWORD *)&byte_8[*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL];
          v39 = v37 | *(_QWORD *)(a6 + 8);
          v24 = v37 & 0xFFFFFFFFFFFFFFF8LL;
          a3 = v38 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v38 | (unsigned __int8)*(_QWORD *)(a4 + 8)) & 7;
          if ( a3 == (v24 | v39 & 7) )
            goto LABEL_27;
        }
      }
    }
  }
  v24 = a4;
  v25 = sub_191BD20(a1, (_QWORD *)a4, a7, a8, a3, a4, a5, a6);
  if ( v25 == 1 )
    return 1;
  v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
  v11 = v26;
  if ( (*(_BYTE *)(v26 + 1) & 6) != 0 )
    goto LABEL_27;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v27 + 16) != 48 && (unsigned __int8)(*(_BYTE *)(v27 + 16) - 2) > 4u )
    goto LABEL_27;
  v24 = v11;
  v28 = sub_1A0BEA0(a1, v11);
  if ( v28 == 1 )
    return 1;
  v11 = v28 & 0xFFFFFFFFFFFFFFFELL;
LABEL_27:
  v29 = sub_C00A40(v11, v24, a3, a4, a5);
  v30 = *(_BYTE *)(v11 + 1);
  v99 = *(_QWORD *)(v11 + 8);
  v31 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v31 = *(_WORD *)v31 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v104 = v31;
    sub_EE9B50(26);
    v31 = v104;
  }
  v32 = *(_BYTE *)(v31 + 1);
  *(_BYTE *)(v31 + 2) &= 0xF0u;
  *(_QWORD *)(v31 + 16) = v11;
  *(_DWORD *)(v31 + 4) = v29;
  v33 = v32 & 1 | v30 & 0x3E;
  v34 = v99;
  v100 = v31;
  *(_BYTE *)(v31 + 1) = v33;
  *(_QWORD *)(v31 + 8) = v34;
  v35 = sub_B62360(v31);
  a4 = v100;
  a5 = v100;
  *(_BYTE *)(v100 + 1) = (v35 << 6) | *(_BYTE *)(v100 + 1) & 0x3F;
  *(_BYTE *)(v100 + 2) = *(_BYTE *)(v100 + 2) & 0xF8 | (v35 >> 2) & 7;
  v103 = v100;
LABEL_3:
  v12 = *(_QWORD *)(a6 + 8);
  v116 = a4;
  v118 = a6;
  v13 = *(_QWORD *)(a5 + 8);
  v106 = v12;
  v114 = 0;
  v115 = 0;
  v117 = a5;
  v14 = sub_19225E0((__int64 *)a1, &v116, &v117, &v118, &v114, &v115, a7, a8, a2);
  v98 = v14 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  if ( v116 == 1 )
    return 1;
  if ( v117 == 1 )
    return 1;
  v110 = v118;
  if ( v118 == 1 )
    return 1;
  v108 = v116 & 0xFFFFFFFFFFFFFFFELL;
  v16 = (_WORD *)sub_BFB840(v116 & 0xFFFFFFFFFFFFFFFELL);
  v17 = sub_BFD6D0(v16);
  v18 = sub_BFB840(v17);
  v19 = *(_WORD *)v18 & 0x1FF;
  if ( v19 == 48 )
  {
    v20 = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v18 + 16) & 4) != 0 )
      v20 = *(_QWORD *)(v20 + 40);
    v18 = sub_BFB840(v20);
    v19 = *(_WORD *)v18 & 0x1FF;
  }
  if ( v19 <= 0x75u )
  {
    if ( v19 == 91 && *(_DWORD *)(v18 + 16) == 2 )
    {
      v41 = (*(_BYTE *)(v18 + 3) >> 1) & 0x3F;
      if ( (unsigned int)v41 - 5 <= 0x24 && ((v41 + 27) & 0x3Fu) > 1 )
      {
        v42 = sub_BFAB60(v41);
        v112 = v42;
        if ( (unsigned int)(v42 - 2) > 6 && (v42 & 0xFFFFFFFD) != 0x10 )
          goto LABEL_51;
        v113 = *(_QWORD *)(v18 + 8 * (((*(_BYTE *)(v18 + 2) & 8) != 0) + 1LL) + 40);
        v22 = v113;
LABEL_45:
        v43 = sub_BFBAE0(v22);
        v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v44 + 16) == 13 && ((*(_WORD *)(v44 + 18) >> 3) & 0x1FF) == 0x1B4 )
          goto LABEL_79;
        v45 = *(_WORD *)v43 & 0x1FF;
        if ( v45 <= 0x75u )
        {
          if ( v45 == 4 )
          {
            if ( *(_BYTE *)(v43 + 2) >> 3 == 9 )
              goto LABEL_79;
            goto LABEL_51;
          }
        }
        else if ( v45 <= 0x77u )
        {
          v46 = (*(_WORD *)(v43 + 2) >> 3) & 0x3F;
          if ( (unsigned int)(v46 - 9) > 6 && (unsigned int)(v46 - 19) > 1 )
            goto LABEL_51;
LABEL_79:
          sub_168B9F0((__int64)&v121, (__int64 *)(a1 + 8), a2, (unsigned int)(v112 - 16) < 3 ? 7270 : 7272, 0);
          v119 = sub_EEC8C0(v108, a1 + 8, *(double *)a7.m128_u64);
          v80 = sub_1587DB0((__int64)&v121, &v119);
          v81 = sub_BFA720(v112);
          v120[1] = v82;
          v120[0] = v81;
          sub_166BAF0(v80, (__int64)v120);
          sub_15F7200(&v121);
          v83 = (unsigned int)sub_EEC140(v108);
          v84 = (unsigned int)sub_EEB7E0(v108, (__int64)v120, *(double *)a7.m128_u64) | (unsigned __int64)(v83 << 32);
          sub_168B9B0((__int64)&v121, a1 + 8, 6275);
          v85 = sub_BFA720(v112);
          sub_AEC220(&v121, v85, v86);
          sub_18F7970(a1, a2, (__int64)&v121, v84, (__m128i)a7, *(double *)a8.m128_u64);
          v87 = v121;
          if ( v121 && v122 )
            sub_1580C40(v122, (unsigned __int64)v121);
          v88 = (unsigned int)sub_EEC140(v110 & 0xFFFFFFFFFFFFFFFELL);
          v89 = (unsigned int)sub_EEB7E0(v113, (__int64)v87, *(double *)a7.m128_u64) | (unsigned __int64)(v88 << 32);
          sub_168B9B0((__int64)&v121, a1 + 8, 6274);
          sub_18F7970(a1, a2, (__int64)&v121, v89, (__m128i)a7, *(double *)a8.m128_u64);
          if ( v121 && v122 )
            sub_1580C40(v122, (unsigned __int64)v121);
          goto LABEL_51;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42 )
          goto LABEL_79;
LABEL_51:
        v108 = v116 & 0xFFFFFFFFFFFFFFFELL;
      }
    }
  }
  else if ( v19 <= 0x77u )
  {
    v21 = *(_WORD *)(v18 + 2) >> 3;
    if ( (((v21 & 0x3F) + 62) & 0x3Fu) <= 6 || (v21 & 0x3D) == 0x10 )
    {
      v112 = v21 & 0x3F;
      v113 = *(_QWORD *)(v18 + 24);
      v22 = v113;
      goto LABEL_45;
    }
  }
  sub_16F7C90(a1, v108, a2, (__m128i)a7, *(double *)a8.m128_u64);
  v50 = *(_QWORD **)(a1 + 248);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v98 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22 )
    goto LABEL_73;
  LOWORD(v51) = sub_F6A600(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), v108, v47, v48, v49);
  v55 = v51;
  if ( BYTE1(v51) )
  {
    if ( (_BYTE)v51 == 3 )
      v55 = 1;
  }
  else
  {
    v55 = 2;
  }
  LOWORD(v56) = sub_F6A600(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL), v108, v52, v53, v54);
  v59 = v56;
  LOWORD(v59) = BYTE1(v56);
  if ( BYTE1(v56) )
  {
    v60 = v56;
    v61 = *(_QWORD *)v98;
    if ( (_BYTE)v56 == 3 )
    {
      if ( !v11 )
      {
LABEL_97:
        LOBYTE(v55) = 1;
        goto LABEL_91;
      }
      v60 = 1;
LABEL_90:
      if ( (_BYTE)v55 )
      {
LABEL_64:
        v101 = v60;
        LOWORD(v62) = sub_F6A600(v61, v59, v60, v57, v58);
        v65 = v101;
        v66 = v62;
        LOWORD(v66) = BYTE1(v62);
        LOBYTE(v55) = v101;
        if ( !BYTE1(v62) )
        {
          LOBYTE(v62) = 2;
          goto LABEL_67;
        }
LABEL_65:
        v65 = 1;
        if ( (_BYTE)v62 == 3 )
          LOBYTE(v62) = 1;
LABEL_67:
        if ( (_BYTE)v62 == (_BYTE)v55 )
          goto LABEL_72;
LABEL_70:
        while ( (unsigned __int16)sub_F6A600(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), v66, v65, v63, v64) >> 8 )
        {
          v66 = (__int64)v50;
          v14 = sub_F6B250(v14, (__int64)v50, v67, v68, v69);
        }
        v14 = sub_A719E0((__int64)v50, v55, v14, v14);
        goto LABEL_72;
      }
LABEL_91:
      LOWORD(v62) = sub_F6A600(v61, v59, v60, v57, v58);
      v66 = v62;
      LOWORD(v66) = BYTE1(v62);
      if ( !BYTE1(v62) )
        goto LABEL_70;
      goto LABEL_65;
    }
  }
  else
  {
    v60 = 2;
    v61 = *(_QWORD *)v98;
  }
  if ( v11 )
    goto LABEL_90;
  if ( (_BYTE)v55 == 1 || (_BYTE)v60 == 1 )
    goto LABEL_97;
  if ( !(_BYTE)v55 )
    goto LABEL_64;
  if ( !(_BYTE)v60 )
  {
    v60 = v55;
    goto LABEL_64;
  }
  LOWORD(v62) = sub_F6A600(v61, v59, v60, v57, v58);
  v66 = v62;
  LOWORD(v66) = BYTE1(v62);
  if ( BYTE1(v62) )
  {
    LOBYTE(v55) = 2;
    if ( (_BYTE)v62 == 3 )
      goto LABEL_70;
    goto LABEL_67;
  }
LABEL_72:
  v50 = *(_QWORD **)(a1 + 248);
LABEL_73:
  v70 = v118 & 0xFFFFFFFFFFFFFFFELL;
  v71 = v117 & 0xFFFFFFFFFFFFFFFELL;
  v102 = v116 & 0xFFFFFFFFFFFFFFFELL;
  if ( v11 )
  {
    v72 = sub_EEE9A0(64, v50, 8u);
    v73 = v115;
    v74 = v72;
    v75 = v114;
    v76 = *(_WORD *)v74 & 0xFE00;
    LOBYTE(v76) = -127;
    *(_WORD *)v74 = v76;
    if ( unk_2CD7484 )
    {
      v109 = v75;
      v107 = v73;
      sub_EE9B50(129);
      v75 = v109;
      v73 = v107;
    }
    *(_BYTE *)(v74 + 2) &= 0xF8u;
    v77 = 2 * (v75 & 3);
    v78 = *(_BYTE *)(v74 + 1);
    *(_QWORD *)(v74 + 8) = v14;
    *(_DWORD *)(v74 + 16) = a2;
    *(_QWORD *)(v74 + 24) = v11;
    *(_QWORD *)(v74 + 40) = v71;
    *(_QWORD *)(v74 + 48) = v70;
    *(_BYTE *)(v74 + 1) = (8 * (v73 & 7)) | v77 | v78 & 1;
    *(_DWORD *)(v74 + 20) = v111;
    *(_QWORD *)(v74 + 56) = v103;
    *(_QWORD *)(v74 + 32) = v102;
    v79 = sub_B62D00(v74);
    *(_BYTE *)(v74 + 1) = (v79 << 6) | *(_BYTE *)(v74 + 1) & 0x3F;
    *(_BYTE *)(v74 + 2) = *(_BYTE *)(v74 + 2) & 0xF8 | (v79 >> 2) & 7;
    return v74;
  }
  else
  {
    v90 = sub_EEE9A0(48, v50, 8u);
    v91 = v115;
    v92 = v90;
    v93 = v114;
    v94 = *(_WORD *)v92 & 0xFE00;
    LOBYTE(v94) = 0x80;
    *(_WORD *)v92 = v94;
    if ( unk_2CD7484 )
    {
      v105 = v93;
      sub_EE9B50(128);
      v93 = v105;
    }
    *(_BYTE *)(v92 + 2) &= 0xF8u;
    v95 = 2 * (v93 & 3);
    v96 = *(_BYTE *)(v92 + 1);
    *(_QWORD *)(v92 + 8) = v14;
    *(_DWORD *)(v92 + 16) = a2;
    *(_QWORD *)(v92 + 32) = v71;
    *(_QWORD *)(v92 + 40) = v70;
    *(_BYTE *)(v92 + 1) = (8 * (v91 & 7)) | v95 | v96 & 1;
    *(_DWORD *)(v92 + 20) = v111;
    *(_QWORD *)(v92 + 24) = v102;
    v97 = sub_B62CD0((_DWORD **)v92);
    *(_BYTE *)(v92 + 1) = (v97 << 6) | *(_BYTE *)(v92 + 1) & 0x3F;
    *(_BYTE *)(v92 + 2) = *(_BYTE *)(v92 + 2) & 0xF8 | (v97 >> 2) & 7;
    return v92;
  }
}
