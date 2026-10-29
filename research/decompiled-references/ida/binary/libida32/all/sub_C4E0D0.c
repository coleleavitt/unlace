__int64 __fastcall sub_C4E0D0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r15d
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  char v22; // al
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 *v26; // rax
  char v27; // cl
  __int16 v28; // ax
  unsigned __int8 *v29; // rdi
  unsigned __int8 *v30; // rsi
  char v31; // bl
  char v32; // bl
  __int64 v33; // rdi
  void *v34; // rdi
  __int64 v35; // rbp
  __int64 v36; // rax
  unsigned __int8 *v37; // rdi
  unsigned __int8 *v38; // rsi
  bool v39; // al
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rdx
  __int64 *v43; // r15
  __int64 *v44; // r8
  unsigned int v45; // ecx
  __int64 *v46; // rdx
  char v47; // bl
  char v48; // bl
  char v49; // al
  _QWORD *v50; // rdi
  __int64 v51; // [rsp+8h] [rbp-1A0h]
  char v52; // [rsp+8h] [rbp-1A0h]
  char v53; // [rsp+8h] [rbp-1A0h]
  char v54; // [rsp+8h] [rbp-1A0h]
  char v55; // [rsp+8h] [rbp-1A0h]
  char v56; // [rsp+8h] [rbp-1A0h]
  _QWORD *v57; // [rsp+8h] [rbp-1A0h]
  __int64 *v58; // [rsp+8h] [rbp-1A0h]
  _QWORD *v59; // [rsp+8h] [rbp-1A0h]
  __int64 v60; // [rsp+10h] [rbp-198h]
  char v61; // [rsp+10h] [rbp-198h]
  char v62; // [rsp+10h] [rbp-198h]
  char v63; // [rsp+10h] [rbp-198h]
  char v64; // [rsp+10h] [rbp-198h]
  char v65; // [rsp+10h] [rbp-198h]
  unsigned int v66; // [rsp+10h] [rbp-198h]
  __int64 *v67; // [rsp+10h] [rbp-198h]
  __int64 *v68; // [rsp+10h] [rbp-198h]
  char v69; // [rsp+10h] [rbp-198h]
  char v70; // [rsp+10h] [rbp-198h]
  char v71; // [rsp+10h] [rbp-198h]
  __int64 *v72; // [rsp+18h] [rbp-190h]
  void *v73; // [rsp+20h] [rbp-188h] BYREF
  unsigned int v74; // [rsp+28h] [rbp-180h]
  char v75; // [rsp+2Ch] [rbp-17Ch]
  void *v76; // [rsp+30h] [rbp-178h] BYREF
  unsigned int v77; // [rsp+38h] [rbp-170h]
  char v78; // [rsp+3Ch] [rbp-16Ch]
  void *v79; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v80; // [rsp+58h] [rbp-150h]
  char v81; // [rsp+5Ch] [rbp-14Ch]
  void *v82; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v83; // [rsp+78h] [rbp-130h]
  char v84; // [rsp+7Ch] [rbp-12Ch]
  void *v85; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v86; // [rsp+98h] [rbp-110h]
  char v87[8]; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v88; // [rsp+B8h] [rbp-F0h] BYREF
  int v89; // [rsp+C0h] [rbp-E8h]
  char v90; // [rsp+C4h] [rbp-E4h]
  __int64 v91; // [rsp+C8h] [rbp-E0h] BYREF
  int v92; // [rsp+D0h] [rbp-D8h]
  char v93; // [rsp+D4h] [rbp-D4h]
  __int64 v94[3]; // [rsp+D8h] [rbp-D0h] BYREF
  __int64 v95[4]; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 *v96; // [rsp+110h] [rbp-98h] BYREF
  __int64 *v97; // [rsp+118h] [rbp-90h] BYREF
  char v98; // [rsp+124h] [rbp-84h]
  _BYTE v99[12]; // [rsp+128h] [rbp-80h] BYREF
  char v100; // [rsp+134h] [rbp-74h]
  __int64 v101[3]; // [rsp+138h] [rbp-70h] BYREF
  __int64 v102[11]; // [rsp+150h] [rbp-58h] BYREF

  v8 = sub_F343C0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  if ( (_BYTE)v8 )
  {
    v9 = a1[1];
    v10 = *(_QWORD *)(a2 + 16);
    v96 = (__int64 *)*a1;
    v97 = (__int64 *)(v9 + 40);
    v12 = sub_C46FB0(&v96, v10, v4, v5, v6, v7);
    if ( !(_BYTE)v12 )
      goto LABEL_3;
    v35 = *(_QWORD *)(v9 + 40);
    *(_BYTE *)a1[1] = 0;
    v36 = sub_21D5390(&v96, v10, v11);
    v51 = v36;
    if ( v35 == v36 )
      sub_21DBE90(&v96, v36);
    else
      sub_21D7CC0(&v96, v35);
    v8 = v12;
    sub_BF3A80((__int64 *)(a1[1] + 64), (__int64 *)&v96);
    sub_971860(&v96);
LABEL_5:
    v90 = 0;
    v89 = 1;
    v88 = 0;
    v92 = 1;
    v91 = 0;
    v93 = 0;
    v16 = sub_21D53B0();
    if ( v51 == v16 )
    {
      sub_21DBE90(v94, v51);
      sub_21DBE90(v95, v51);
    }
    else
    {
      v60 = v16;
      sub_21D7CC0(v94, v16);
      sub_21D7CC0(v95, v60);
    }
    if ( (unsigned __int8)sub_F343C0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      v21 = *(_QWORD *)(a2 + 24);
      v96 = (__int64 *)*a1;
      v97 = v94;
      v22 = v12 & sub_C46FB0(&v96, v21, v17, v18, v19, v20);
      if ( !v22 )
      {
LABEL_9:
        v15 = 0;
LABEL_10:
        sub_BF4040((__int64)v87);
        return v15;
      }
      v87[0] = 0;
      v64 = v22;
      if ( v94[0] == v51 )
        sub_21DBE90(&v96, v51);
      else
        sub_21D7CC0(&v96, v94[0]);
      sub_BF3A80(v95, (__int64 *)&v96);
      sub_971860(&v96);
      v27 = v64;
    }
    else
    {
      v25 = *(_QWORD *)(a2 + 24);
      v26 = (__int64 *)*a1;
      v97 = (__int64 *)v87;
      v96 = v26;
      if ( !(unsigned __int8)sub_C4F130(&v96, v25) )
        goto LABEL_9;
      v27 = 0;
      if ( !(_BYTE)v12 )
        goto LABEL_9;
    }
    v28 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 3 )
    {
      if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) > 3 )
      {
        if ( (_BYTE)v28 == 5 )
        {
          v37 = (unsigned __int8 *)a1[1];
          v54 = v27;
          v15 = *v37;
          if ( (_BYTE)v15 )
          {
            sub_21E1C60(v37 + 8, &v88);
            sub_21E1C60(a1[1] + 24, &v91);
            goto LABEL_10;
          }
          sub_BF2FA0((_QWORD *)v37 + 5, (__int64)v94, 1u);
          if ( (_BYTE)v8 )
          {
            v15 = v8;
            sub_BF34E0((__int64 *)(a1[1] + 64), v95);
            goto LABEL_10;
          }
          if ( !v54 )
          {
            v15 = 1;
            sub_BF2FA0((_QWORD *)(a1[1] + 64), (__int64)v95, 1u);
            goto LABEL_10;
          }
          goto LABEL_81;
        }
        if ( (_BYTE)v28 == 6 )
        {
          v29 = (unsigned __int8 *)a1[1];
          v61 = v27;
          v15 = *v29;
          if ( (_BYTE)v15 )
          {
            sub_21E1D30(v29 + 8, &v88);
            sub_21E1D30(a1[1] + 24, &v91);
            goto LABEL_10;
          }
          sub_BF2FE0((_QWORD *)v29 + 5, (__int64)v94, 1u);
          if ( (_BYTE)v8 )
          {
            sub_BF34E0((__int64 *)(a1[1] + 64), v95);
            v50 = (_QWORD *)(a1[1] + 64);
            if ( v51 == *v50 )
              sub_21DC230(v50);
            else
              sub_21D66D0(v50);
            v15 = v8;
            goto LABEL_10;
          }
          if ( !v61 )
          {
            v15 = 1;
            sub_BF2FE0((_QWORD *)(a1[1] + 64), (__int64)v95, 1u);
            goto LABEL_10;
          }
LABEL_81:
          v15 = 1;
          goto LABEL_10;
        }
LABEL_75:
        v15 = sub_BF05D0(*a1, a2);
        goto LABEL_10;
      }
      if ( (_BYTE)v28 != 2 )
        goto LABEL_75;
      v30 = (unsigned __int8 *)a1[1];
      v52 = v27;
      v15 = *v30;
      if ( (_BYTE)v15 )
      {
        sub_BEE360((__int64)&v96, (__int64)v30);
        v31 = v100;
        sub_21E5FA0(&v85, v99, &v91);
        v81 = v31;
        v32 = v98;
        v80 = v86;
        v53 = v98;
        v79 = v85;
        sub_21E5FA0(&v85, &v97, &v88);
        v78 = v32;
        v77 = v86;
        v76 = v85;
        if ( v86 > 0x40 )
          sub_21E17D0(&v85);
        sub_21E1D30(&v85, &v79);
        v83 = v86;
        v82 = v85;
        v84 = v53;
        sub_BF5070(a1[1] + 8, (__int64)&v82);
        if ( v83 > 0x40 && v82 )
          operator delete[](v82);
        if ( v77 > 0x40 && v76 )
          operator delete[](v76);
        if ( v80 > 0x40 && v79 )
          operator delete[](v79);
        v62 = v100;
        sub_21E5FA0(&v85, v99, &v88);
        v80 = v86;
        v81 = v62;
        v79 = v85;
        v63 = v98;
        sub_21E5FA0(&v85, &v97, &v91);
        v76 = v85;
        v77 = v86;
        v78 = v63;
        if ( v86 > 0x40 )
          sub_21E17D0(&v85);
        sub_21E1C60(&v85, &v79);
        v33 = a1[1] + 24;
        v83 = v86;
        v82 = v85;
        v84 = v63;
        sub_BF5070(v33, (__int64)&v82);
        if ( v83 > 0x40 && v82 )
          operator delete[](v82);
        if ( v77 > 0x40 && v76 )
          operator delete[](v76);
        if ( v80 <= 0x40 )
          goto LABEL_74;
        v34 = v79;
        if ( !v79 )
          goto LABEL_74;
        goto LABEL_73;
      }
      sub_BEE360((__int64)&v96, (__int64)v30);
      v41 = a1[1];
      v42 = (__int64 *)(v41 + 40);
      v68 = (__int64 *)(v41 + 64);
      if ( (_BYTE)v8 )
      {
        v59 = (_QWORD *)(v41 + 40);
        sub_BF34E0(v42, v101);
        v43 = v68;
        sub_BF34E0(v68, v101);
        v49 = sub_BEE430(*a1, a2, v59, 2u, v94);
        v44 = v95;
        if ( !v49 )
          goto LABEL_74;
      }
      else
      {
        if ( !v52 )
        {
          v58 = (__int64 *)(v41 + 40);
          sub_9718E0((__int64)&v85, v95);
          sub_9718E0((__int64)&v82, v94);
          sub_9718E0((__int64)&v79, v102);
          sub_9718E0((__int64)&v76, v101);
          sub_BFD6F0((__int64 *)&v76, &v79, (__int64)&v82, (__int64 *)&v85, v58, (__int64)v68);
          sub_971860(&v76);
          sub_971860(&v79);
          sub_971860(&v82);
          sub_971860(&v85);
          goto LABEL_80;
        }
        v57 = (_QWORD *)(v41 + 40);
        sub_BF34E0(v42, v94);
        v43 = v68;
        sub_BF34E0(v68, v94);
        if ( !(unsigned __int8)sub_BEE430(*a1, a2, v57, 2u, v101) )
          goto LABEL_74;
        v44 = v102;
      }
      v45 = 2;
      v46 = v43;
LABEL_89:
      if ( !(unsigned __int8)sub_BEE430(*a1, a2, v46, v45, v44) )
        goto LABEL_74;
LABEL_80:
      sub_BF4040((__int64)&v96);
      goto LABEL_81;
    }
    v38 = (unsigned __int8 *)a1[1];
    v55 = v27;
    v15 = *v38;
    if ( !(_BYTE)v15 )
    {
      sub_BEE360((__int64)&v96, (__int64)v38);
      v40 = a1[1];
      v67 = (__int64 *)(v40 + 40);
      v72 = (__int64 *)(v40 + 64);
      if ( !v55 )
      {
        if ( (_BYTE)v8 )
        {
          LODWORD(v82) = 0;
          sub_972040((__int64)&v85, v101[0], (unsigned int *)&v82);
          sub_BF2F20(&v85, 0);
          sub_BF3A80(v102, (__int64 *)&v85);
          sub_971860(&v85);
        }
        sub_9718E0((__int64)&v85, v95);
        sub_9718E0((__int64)&v82, v94);
        sub_9718E0((__int64)&v79, v102);
        sub_9718E0((__int64)&v76, v101);
        sub_BFE320((__int64 *)&v76, (__int64 *)&v79, (__int64 *)&v82, (__int64 *)&v85, v67, (__int64)v72);
        sub_971860(&v76);
        sub_971860(&v79);
        sub_971860(&v82);
        sub_971860(&v85);
        goto LABEL_80;
      }
      sub_BF34E0((__int64 *)(v40 + 40), v101);
      sub_BF34E0(v72, v102);
      if ( !(unsigned __int8)sub_BEE430(*a1, a2, v67, 3u, v94) )
        goto LABEL_74;
      v44 = v94;
      v45 = 3;
      v46 = v72;
      goto LABEL_89;
    }
    sub_BEE360((__int64)&v96, (__int64)v38);
    v56 = v93;
    sub_21E5FA0(&v85, &v91, &v91);
    v83 = v86;
    v84 = v56;
    v82 = v85;
    v65 = v90;
    sub_21E5FA0(&v85, &v88, &v88);
    v79 = v85;
    v80 = v86;
    v81 = v65;
    if ( v86 > 0x40 )
      sub_21E17D0(&v85);
    sub_21E1C60(&v85, &v82);
    v74 = v86;
    v73 = v85;
    v75 = v65;
    if ( v80 > 0x40 && v79 )
      operator delete[](v79);
    if ( v83 > 0x40 && v82 )
      operator delete[](v82);
    if ( v74 <= 0x40 )
    {
      v39 = v73 == nullptr;
    }
    else
    {
      v66 = v74;
      v39 = v66 == (unsigned int)sub_21E2A40(&v73);
    }
    if ( v39 )
    {
      v15 = sub_BF08D0(*a1, a2, 2508);
      if ( v74 <= 0x40 )
        goto LABEL_74;
    }
    else
    {
      v47 = v100;
      sub_21E5FA0(&v85, v99, &v91);
      v81 = v47;
      v48 = v98;
      v80 = v86;
      v69 = v98;
      v79 = v85;
      sub_21E5FA0(&v85, &v97, &v88);
      v78 = v48;
      v77 = v86;
      v76 = v85;
      if ( v86 > 0x40 )
        sub_21E17D0(&v85);
      sub_21E1C60(&v85, &v79);
      v83 = v86;
      v82 = v85;
      v84 = v69;
      sub_BF2B90((__int64)&v85, (__int64)&v82);
      sub_BF5070(a1[1] + 8, (__int64)&v85);
      if ( v86 > 0x40 && v85 )
        operator delete[](v85);
      if ( v83 > 0x40 && v82 )
        operator delete[](v82);
      if ( v77 > 0x40 && v76 )
        operator delete[](v76);
      if ( v80 > 0x40 && v79 )
        operator delete[](v79);
      v70 = v98;
      sub_21E5FA0(&v85, &v97, &v91);
      v80 = v86;
      v81 = v70;
      v79 = v85;
      v71 = v100;
      sub_21E5FA0(&v85, v99, &v88);
      v76 = v85;
      v77 = v86;
      v78 = v71;
      if ( v86 > 0x40 )
        sub_21E17D0(&v85);
      sub_21E1D30(&v85, &v79);
      v83 = v86;
      v82 = v85;
      v84 = v71;
      sub_BF2B90((__int64)&v85, (__int64)&v82);
      sub_BF5070(a1[1] + 24, (__int64)&v85);
      if ( v86 > 0x40 && v85 )
        operator delete[](v85);
      if ( v83 > 0x40 && v82 )
        operator delete[](v82);
      if ( v77 > 0x40 && v76 )
        operator delete[](v76);
      if ( v80 > 0x40 && v79 )
        operator delete[](v79);
      if ( v74 <= 0x40 )
        goto LABEL_74;
    }
    v34 = v73;
    if ( v73 )
LABEL_73:
      operator delete[](v34);
LABEL_74:
    sub_BF4040((__int64)&v96);
    goto LABEL_10;
  }
  v10 = *(_QWORD *)(a2 + 16);
  LOBYTE(v12) = sub_C4F130(a1, v10);
  if ( (_BYTE)v12 )
  {
    v51 = sub_21D5390(a1, v10, v24);
    goto LABEL_5;
  }
LABEL_3:
  v13 = *a1;
  v15 = sub_BEDB10(*a1);
  if ( (_BYTE)v15 )
  {
    LOBYTE(v12) = 0;
    v51 = sub_21D5390(v13, v10, v14);
    goto LABEL_5;
  }
  return v15;
}

