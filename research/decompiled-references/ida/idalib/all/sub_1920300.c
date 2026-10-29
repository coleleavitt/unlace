unsigned __int64 __fastcall sub_1920300(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        unsigned int a4,
        unsigned __int64 *a5,
        __m128 a6,
        __m128 a7)
{
  __int64 *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 result; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  int v45; // r14d
  unsigned __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  _DWORD *v55; // rdi
  __int64 v56; // rax
  char v57; // r9
  unsigned int v58; // eax
  unsigned __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned __int64 *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r11
  unsigned int v75; // eax
  __int64 v76; // rdx
  unsigned int v77; // r11d
  char v78; // al
  char v79; // al
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // rbp
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // r13
  unsigned __int64 v87; // [rsp+8h] [rbp-130h]
  __int64 v88; // [rsp+8h] [rbp-130h]
  int v89; // [rsp+8h] [rbp-130h]
  char v90; // [rsp+10h] [rbp-128h]
  char v91; // [rsp+18h] [rbp-120h]
  __int64 v92; // [rsp+18h] [rbp-120h]
  __int64 v93; // [rsp+18h] [rbp-120h]
  __int64 v94; // [rsp+18h] [rbp-120h]
  __int64 v95; // [rsp+20h] [rbp-118h]
  __int64 v96; // [rsp+20h] [rbp-118h]
  __int64 v97; // [rsp+28h] [rbp-110h]
  int v98; // [rsp+30h] [rbp-108h]
  int v99; // [rsp+34h] [rbp-104h]
  __int64 v100; // [rsp+38h] [rbp-100h]
  _BOOL4 v101; // [rsp+40h] [rbp-F8h] BYREF
  int v102; // [rsp+44h] [rbp-F4h] BYREF
  __int64 v103; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v104; // [rsp+50h] [rbp-E8h] BYREF
  unsigned __int64 v105; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v106; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v107; // [rsp+68h] [rbp-D0h] BYREF
  __int16 v108; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v109; // [rsp+78h] [rbp-C0h]
  unsigned int v110; // [rsp+80h] [rbp-B8h] BYREF
  char v111; // [rsp+84h] [rbp-B4h]
  __int64 v112; // [rsp+88h] [rbp-B0h] BYREF

  v11 = (__int64 *)a2;
  sub_18D4200((__int64)a1, (_QWORD *)a2, a3, a4, 0, *(double *)a6.m128_u64);
  v12 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
  {
    result = sub_1918B10(
               a1,
               (__int64 *)a2,
               a3,
               a4,
               a5 != nullptr,
               (*(_BYTE *)(a1[29] + 13) & 2) != 0,
               a6,
               a7,
               (*(_BYTE *)(a1[29] + 13) & 4) != 0,
               0,
               1);
    if ( !a5 )
      return result;
    goto LABEL_3;
  }
  if ( sub_F58380(v12) || sub_F58380(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    result = sub_1918440((__int64)a1, (__int64 *)a2, a3, a4, a5 != nullptr, 0, a6, a7);
    if ( !a5 )
      return result;
    goto LABEL_3;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 31
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 31 )
  {
    result = sub_1917F70((__int64)a1, (__int64 *)a2, (unsigned __int64 *)a3, a4, a5 != nullptr, v14, a6, a7);
    if ( !a5 )
      return result;
LABEL_3:
    *a5 = result;
    return result;
  }
  v18 = sub_191F280((__int64)a1, (__int64 *)a2, a3, a4, 4 * (unsigned int)(a5 != nullptr), a6, a7);
  v19 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == 1 || *a3 == 1 )
    return 0;
  v20 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( sub_F610C0(*v20, a2, (__int64)v20, v15, v16, v17) )
    {
      if ( a5 )
        *a5 = v18;
      return v18;
    }
    v19 = *(_QWORD *)a2;
  }
  v21 = *(_QWORD *)(*(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22 )
    return sub_18F40B0((__int64)a1, a4, v11, a3, *(double *)a6.m128_u64);
  v24 = sub_F68450(v21, a2, (__int64)v20, v15, v16);
  v25 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 34 )
  {
    a2 = a4;
    if ( (unsigned __int8)sub_18F07E0((__int64)a1, a4, v25, *(double *)a6.m128_u64) )
      return 0;
    v25 = *v11 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( (*(_WORD *)v25 & 0x1FF) == 0x7F && (*(_BYTE *)(a1[29] + 16) & 4) != 0 )
  {
    sub_168B9F0((__int64)&v108, a1 + 1, a4, 0x1309u, 0);
    LODWORD(v107) = 0;
    sub_1587D10((__int64)&v108, (int *)&v107);
    sub_15F7200(&v108);
    return 0;
  }
  v90 = sub_9EC890(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v25, v22, v23);
  if ( !v90 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v28 + 16) != 42 )
    {
      v28 = sub_18BBDD0(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v26, v27);
      if ( !v28 )
        return sub_18F40B0((__int64)a1, a4, v11, a3, *(double *)a6.m128_u64);
    }
    v29 = *(_QWORD *)(v28 + 32);
    v30 = a1[29];
    v103 = v29;
    if ( (*(_BYTE *)(v30 + 1) & 8) != 0 )
    {
      if ( !sub_18BBB30(v24, v29) )
        sub_18EC990((__int64)a1, a4, *v11 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, *(double *)a6.m128_u64);
    }
    else if ( !sub_AAC110(
                 a1[31],
                 *(_QWORD *)(*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
               & 0xFFFFFFFFFFFFFFF0LL,
                 *(_QWORD *)(*(_QWORD *)&byte_8[v29 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
               & 0xFFFFFFFFFFFFFFF0LL,
                 0) )
    {
      sub_18EC990((__int64)a1, a4, *v11 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, *(double *)a6.m128_u64);
      return 0;
    }
    v32 = *v11;
    v33 = *a3 & 0xFFFFFFFFFFFFFFFELL;
    v87 = *v11 & 0xFFFFFFFFFFFFFFFELL;
    v34 = *(_QWORD *)(*(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v35 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
    v36 = *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v91 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
    v37 = *(_QWORD *)v36;
    v38 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
    if ( (_BYTE)v38 == 34 )
    {
      if ( v91 == 34 )
      {
        v95 = sub_F68450(v34, v35, v38, v37, v31);
        v71 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL), v35, v68, v69, v70);
        v40 = v95;
        v41 = v71;
        v72 = *(_QWORD *)&byte_8[v95 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v72 & 8) != 0 )
          v73 = *(__int64 *)((char *)&qword_18 + (v72 & 0xFFFFFFFFFFFFFFF0LL));
        else
          LODWORD(v73) = 0;
        LODWORD(v74) = 0;
        v75 = v73 | ((unsigned __int8)v95 | (unsigned __int8)v72) & 7;
        v76 = *(_QWORD *)&byte_8[v41 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v76 & 8) != 0 )
          v74 = *(__int64 *)((char *)&qword_18 + (v76 & 0xFFFFFFFFFFFFFFF0LL));
        v77 = (unsigned int)v74 >> 9;
        if ( v77 != v75 >> 9 )
        {
          v97 = v95;
          v96 = v41;
          v100 = a1[31];
          v99 = v77;
          v98 = v75 >> 9;
          v78 = sub_F56A30(v75 >> 9, v77, v100);
          v41 = v96;
          v40 = v97;
          if ( !v78 )
          {
            v79 = sub_F56A30(v99, v98, v100);
            v41 = v96;
            v40 = v97;
            if ( !v79 )
            {
              sub_168B9F0((__int64)&v108, a1 + 1, a4, 0x14B7u, 0);
              v105 = *(_QWORD *)(v87 + 8);
              v80 = sub_162B6D0((__int64)&v108, (__int64 *)&v105);
              v104 = *(_QWORD *)(v33 + 8);
              v81 = sub_162B6D0(v80, &v104);
              v102 = 1;
              v82 = sub_1587D10(v81, &v102);
              v107 = sub_EEC8C0(v87, (__int64)&v102, *(double *)a6.m128_u64);
              v83 = sub_1587DB0(v82, &v107);
              v106 = sub_EEC8C0(v33, (__int64)&v107, *(double *)a6.m128_u64);
              sub_1587DB0(v83, &v106);
              sub_15F7200(&v108);
              return 0;
            }
          }
        }
        v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v84 + 16) == 13 )
          v90 = ((*(_WORD *)(v84 + 18) >> 3) & 0x1FF) == 435;
      }
      else
      {
        v39 = sub_F68450(v37, v35, v38, v37, v31);
        v40 = 0;
        v41 = v39;
      }
      v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v42 + 16) == 13 && ((*(_WORD *)(v42 + 18) >> 3) & 0x1FF) == 0x1B3 )
      {
        if ( !v90 )
        {
          sub_18E6930((__int64)a1, a4, v33, *(double *)a6.m128_u64);
          goto LABEL_29;
        }
        sub_168B9F0((__int64)&v108, a1 + 1, a4, (*(_BYTE *)(a1[29] + 1) & 8) == 0 ? 5572 : 5307, 0);
        v66 = &v105;
        LODWORD(v105) = 1;
        v67 = sub_1587D10((__int64)&v108, (int *)&v105);
        goto LABEL_74;
      }
      v57 = 1;
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22 )
      {
LABEL_37:
        v44 = sub_BFD550(v32 & 0xFFFFFFFFFFFFFFFELL);
        v45 = sub_BFE6E0(v44, a1[31], 2, *(double *)a6.m128_u64);
        v46 = sub_BFD550(*a3 & 0xFFFFFFFFFFFFFFFELL);
        v47 = sub_BFE6E0(v46, a1[31], 2, *(double *)a6.m128_u64);
        if ( v45 )
        {
          v89 = v47;
          sub_18CA2F0(a1, a4, (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFELL), v47 != 0, *(double *)a6.m128_u64);
          v47 = v89;
        }
        if ( v47 )
          sub_18CA2F0(a1, a4, (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL), v45 != 0, *(double *)a6.m128_u64);
        v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v49 = *(unsigned __int8 *)(v48 + 16);
        if ( (_BYTE)v49 == 13 )
        {
          if ( ((*(_WORD *)(v48 + 18) >> 3) & 0x1FF) != 0x1B3 )
            goto LABEL_43;
        }
        else if ( (unsigned int)(v49 - 25) > 1 )
        {
LABEL_43:
          if ( !sub_AAE980(a1[31], v103) )
          {
            sub_168B9F0((__int64)&v108, a1 + 1, a4, 0x1CE5u, 0);
            v105 = sub_6D5440(&v103);
            v85 = sub_162B6D0((__int64)&v108, (__int64 *)&v105);
            v106 = sub_EEC8C0(*v11 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v105, *(double *)a6.m128_u64);
            v86 = sub_1587DB0(v85, &v106);
            v107 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v106, *(double *)a6.m128_u64);
            sub_1587DB0(v86, &v107);
            sub_15F7200(&v108);
          }
        }
        if ( a5 )
          *a5 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFFELL) + 8);
        return sub_A63D20((_QWORD *)a1[31]);
      }
      v40 = sub_F68450(v34, v35, v38, v37, v31);
      v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v56 + 16) != 13 )
      {
        v57 = 0;
        v41 = 0;
        goto LABEL_70;
      }
      v57 = 0;
      v90 = ((*(_WORD *)(v56 + 18) >> 3) & 0x1FF) == 435;
      v41 = 0;
    }
    if ( v90 )
    {
      sub_18E6930((__int64)a1, a4, v87, *(double *)a6.m128_u64);
      goto LABEL_29;
    }
    if ( v91 != 34 )
    {
      if ( !v57 )
      {
LABEL_36:
        v32 = *v11;
        goto LABEL_37;
      }
      v41 &= 0xFFFFFFFFFFFFFFF0LL;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v41 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
LABEL_82:
        sub_18EC000((__int64)a1, a4, v33, *(double *)a6.m128_u64);
        goto LABEL_29;
      }
      goto LABEL_34;
    }
LABEL_70:
    v40 &= 0xFFFFFFFFFFFFFFF0LL;
    v58 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v40 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
    if ( v57 )
    {
      v59 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
        if ( v58 <= 1 )
        {
          sub_168B9F0((__int64)&v108, a1 + 1, a4, (*(_BYTE *)(a1[29] + 1) & 8) == 0 ? 5570 : 5306, 0);
          v102 = 1;
          v92 = sub_1587D10((__int64)&v108, &v102);
          v105 = sub_F68450(
                   *(_QWORD *)(*(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                   *(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF0LL,
                   v60,
                   v87,
                   v61);
          sub_162B6D0(v92, (__int64 *)&v105);
          v101 = !sub_18BBB30(*(_QWORD *)(v87 + 8), *(_QWORD *)(v33 + 8));
          v93 = sub_16CF160(v62, (unsigned int *)&v101);
          v66 = (unsigned __int64 *)&v104;
          v104 = sub_F68450(
                   *(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                   *(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL,
                   v63,
                   v64,
                   v65);
          v67 = sub_162B6D0(v93, &v104);
LABEL_74:
          v94 = v67;
          v107 = sub_EEC8C0(v87, (__int64)v66, *(double *)a6.m128_u64);
          v88 = sub_1587DB0(v94, &v107);
          v106 = sub_EEC8C0(v33, (__int64)&v107, *(double *)a6.m128_u64);
          sub_1587DB0(v88, &v106);
          sub_15F7200(&v108);
          goto LABEL_29;
        }
        goto LABEL_82;
      }
      if ( v58 > 1 )
      {
        if ( (unsigned __int8)sub_18BCD60((__int64)a1, a4, v87, v59, v40, *(double *)a6.m128_u64) )
          return 0;
LABEL_34:
        v43 = v33;
        goto LABEL_35;
      }
    }
    else if ( v58 > 1 )
    {
      v43 = v87;
LABEL_35:
      if ( (unsigned __int8)sub_18BCD60((__int64)a1, a4, v43, v41, v40, *(double *)a6.m128_u64) )
        return 0;
      goto LABEL_36;
    }
    sub_18EC000((__int64)a1, a4, v87, *(double *)a6.m128_u64);
LABEL_29:
    if ( (((*(_BYTE *)(a1[29] + 1) >> 3) ^ 1) & 1) == 0 )
      return 0;
    goto LABEL_36;
  }
  v50 = sub_BFD550(*v11 & 0xFFFFFFFFFFFFFFFELL);
  if ( (unsigned int)sub_BFE6E0(v50, a1[31], 2, *(double *)a6.m128_u64) )
  {
    v54 = a1[29];
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v111 &= ~1u;
    if ( (*(_BYTE *)(v54 + 1) & 8) == 0 )
      goto LABEL_85;
    v55 = (_DWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
    if ( (*v55 & 0x20000) != 0 )
      goto LABEL_60;
    if ( !(unsigned __int8)sub_C3F220((unsigned __int64)v55, (__int64)&v108, a1[31], 0, 0, v53)
      || (unsigned __int8)sub_142BC90((__int64)&v112, nullptr) )
    {
LABEL_85:
      sub_18E67D0((__int64)a1, a4, *v11 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a6.m128_u64);
    }
    if ( v110 > 1 )
      sub_A4F8E0((int *)&v110);
  }
LABEL_60:
  if ( !(unsigned __int8)sub_18EC860((__int64)a1, a4, *v11 & 0xFFFFFFFFFFFFFFFELL, v51, v52, *(double *)a6.m128_u64) )
    return 0;
  sub_16C5BF0((__int64)a1, *v11 & 0xFFFFFFFFFFFFFFFELL, *a3 & 0xFFFFFFFFFFFFFFFELL, 0, 1, 1, *(double *)a6.m128_u64);
  if ( a5 )
    *a5 = *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFFELL) + 8);
  return *(_QWORD *)((*v11 & 0xFFFFFFFFFFFFFFFELL) + 8);
}
