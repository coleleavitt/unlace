__int64 __fastcall sub_16AC3B0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        double a7,
        int *a8,
        int *a9,
        __int64 a10,
        char a11)
{
  __int64 *v12; // rbp
  __int64 v14; // r14
  __int64 *v15; // r12
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // r15d
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // r14
  __int64 *v32; // r13
  __int64 *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v43; // rax
  __int64 v44; // rsi
  int v45; // eax
  int v46; // eax
  __int64 v47; // r10
  unsigned int v48; // r11d
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  int v51; // eax
  int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  char v84; // al
  __int64 v85; // rax
  __int64 v86; // rdi
  char v87; // si
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rdi
  unsigned __int64 v91; // rsi
  __int64 v92; // [rsp-30h] [rbp-158h]
  _BOOL4 v94; // [rsp+8h] [rbp-120h]
  __int64 v95; // [rsp+8h] [rbp-120h]
  unsigned __int64 v96; // [rsp+8h] [rbp-120h]
  __int64 v97; // [rsp+10h] [rbp-118h]
  __int64 v98; // [rsp+10h] [rbp-118h]
  __int64 v99; // [rsp+18h] [rbp-110h]
  unsigned __int64 v100; // [rsp+18h] [rbp-110h]
  int v101; // [rsp+18h] [rbp-110h]
  _QWORD *v102; // [rsp+18h] [rbp-110h]
  unsigned int v103; // [rsp+20h] [rbp-108h]
  __int64 v104; // [rsp+20h] [rbp-108h]
  int v105; // [rsp+30h] [rbp-F8h]
  int v106; // [rsp+38h] [rbp-F0h]
  unsigned int v107; // [rsp+3Ch] [rbp-ECh]
  unsigned __int64 v108; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v109; // [rsp+48h] [rbp-E0h]
  _BYTE v110[4]; // [rsp+54h] [rbp-D4h] BYREF
  unsigned __int64 v111; // [rsp+58h] [rbp-D0h] BYREF
  unsigned __int64 v112; // [rsp+60h] [rbp-C8h] BYREF
  int v113; // [rsp+68h] [rbp-C0h]

  v12 = a2;
  v14 = *a2;
  v109 = a6;
  v106 = a4 - 1;
  v15 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v112 = a5;
  v16 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v17 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v113 = a6;
  v108 = a5;
  v94 = (unsigned int)(a4 - 1) <= 1;
  v18 = *(unsigned __int8 *)(v17 + 16);
  v19 = (unsigned int)(v18 - 43);
  LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (unsigned int)v19 <= 1 )
    goto LABEL_2;
  if ( (unsigned int)(v20 - 43) > 1 )
    goto LABEL_5;
  v20 = sub_F63050(v17, a2, v19, v18);
  v17 = v20;
  if ( v20 )
  {
    LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_2:
    if ( (_BYTE)v20 != 44 && ((*(_BYTE *)(v16 + 1) >> 1) & 3) != 1 )
    {
      v21 = *a2;
      *a8 = 3286;
      v17 = *v15;
      v16 = v21 & 0xFFFFFFFFFFFFFFFELL;
      v18 = *(unsigned __int8 *)(*v15 + 16);
      goto LABEL_5;
    }
    while ( 1 )
    {
      v40 = *(_QWORD *)(v17 + 32);
      if ( (*(_BYTE *)(v17 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v41 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v41 + 16) - 43 > 1 )
          break;
        v40 = *(_QWORD *)(v41 + 32);
        if ( (*(_BYTE *)(v41 + 18) & 0x10) == 0 )
          goto LABEL_20;
      }
      v17 = sub_F63050(v41, a2, v19, v18);
    }
LABEL_20:
    v92 = *(_QWORD *)(v16 + 8);
    a2 = (__int64 *)(*(_QWORD *)&byte_8[v92 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)v92 | (unsigned __int8)*(_QWORD *)&byte_8[v92 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
    v27 = sub_16ABB70(
            (_QWORD *)a1,
            (__int64)a2,
            *(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v40 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v40) & 7,
            v94,
            v112,
            v113,
            v92,
            a3,
            a8,
            a9,
            a10);
    if ( v27 )
      return v27;
  }
  v17 = *v15;
  v18 = *(unsigned __int8 *)(*v15 + 16);
  v16 = *v12 & 0xFFFFFFFFFFFFFFFELL;
LABEL_5:
  v22 = v108;
  if ( (_BYTE)v18 != 44 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 44 )
      goto LABEL_7;
    v17 = sub_F63050(v17, a2, v19, v18);
    if ( !v17 )
      goto LABEL_7;
  }
  if ( (*(_BYTE *)(v16 + 1) & 6) == 0 )
    goto LABEL_7;
  v111 = *(_QWORD *)(v16 + 8);
  v43 = sub_9B4870(v17, (__int64)a2, v19, v18, a5);
  v112 = v43;
  if ( v106 != 2 )
  {
    v111 = sub_6D5440(&v111);
    v112 = sub_6D5440(&v112);
    v100 = v112;
    v44 = (unsigned int)sub_EEB7E0(v16, (__int64)a2, a7);
    if ( (unsigned int)sub_1BE5E80(a1, v44, v100, v111, v110) != 2 )
      goto LABEL_7;
LABEL_35:
    if ( (v110[0] & 8) == 0 )
    {
      *a9 = 5;
      return 1;
    }
    *a9 = 7;
    v51 = sub_EEB7E0(v16, v44, a7);
    v52 = v22;
    v27 = 1;
    if ( !(unsigned __int8)sub_1851070(a1, v111, v112, v51, v52, a10, v94) )
      return v27;
    goto LABEL_48;
  }
  v99 = v43;
  v44 = (unsigned int)sub_EEB7E0(v16, (__int64)a2, a7);
  v45 = sub_1BE5E80(a1, v44, v99, v111, v110);
  if ( v45 == 2 )
    goto LABEL_35;
  if ( v45 )
  {
    v27 = 3;
    v46 = 3296;
    if ( ((*(_BYTE *)(v16 + 1) >> 1) & 3) != 1 )
      v46 = 3309;
    *a8 = v46;
    return v27;
  }
LABEL_7:
  v23 = (unsigned __int64)v12;
  v27 = sub_16A7780(a1, v12, a3, a4, v108, v109, a8, a9, a11);
  if ( *v12 == 1 )
    return 3;
  if ( v27 )
    return v27;
  v28 = *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v29 = *(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL];
  LOBYTE(v28) = v29 | v28;
  v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
  v31 = v30 | v28 & 7;
  v32 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFF0LL);
  v33 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v33 + 16) == 47 && *((char *)sub_F60F10(*v33, (__int64)v12, v30, v24, v25, v26) + 76) < 0 )
  {
    v50 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v50 + 16) == 13 && ((*(_WORD *)(v50 + 18) >> 3) & 0x1FF) == 0x1B4 )
    {
      v27 = 1;
      *a9 = 28;
      return v27;
    }
    v23 = *(_QWORD *)(a1 + 248);
    if ( sub_F60F80(*v15, v23, v34, v24, v35, v36) )
    {
      v27 = 1;
      *a9 = 27;
      return v27;
    }
    if ( sub_F58100(*v15) )
    {
      v27 = 1;
      *a9 = 29;
      return v27;
    }
  }
  v37 = *v15;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
  {
    v23 = (unsigned int)v108;
    if ( (unsigned __int8)sub_1E63CF0(a1, (unsigned int)v108, a3, 1, 3277) )
    {
LABEL_77:
      *v12 = 1;
      return 3;
    }
    if ( sub_C1C400(*v32, (unsigned int)v108, v58, v59, v60) )
    {
      v68 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*((_BYTE *)sub_F60F10(v68, (unsigned int)v108, v61, v62, v63, v64) + 77) & 2) == 0 )
        goto LABEL_90;
      v81 = sub_F60F10(v68, (unsigned int)v108, v69, v70, v71, v72)[16];
      v82 = 0;
      if ( (v81 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        if ( (v81 & 4) != 0 )
        {
          v112 = *(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF8LL);
          v82 = sub_6D5440(&v112) & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v82 = v81 & 0xFFFFFFFFFFFFFFF0LL;
        }
      }
      v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v82 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v83 + 16) == 13 && ((*(_WORD *)(v83 + 18) >> 3) & 0x1FF) == 0x1B4 )
        v73 = 28;
      else
LABEL_90:
        v73 = 27;
      goto LABEL_91;
    }
    if ( sub_F58100(*v32) )
    {
      v27 = 1;
      *a9 = 36;
      return v27;
    }
    v37 = *v15;
  }
  v112 = v108;
  v113 = v109;
  if ( *(_BYTE *)(v37 + 16) == 42 || (v37 = sub_16A7B30(v37, v23, v37, v24)) != 0 )
  {
    v38 = *v32;
    if ( *(_BYTE *)(*v32 + 16) == 42 || (v97 = v37, v38 = sub_16A7B30(*v32, v23, v37, v24), v37 = v97, v38) )
    {
      v23 = *(_QWORD *)&byte_8[*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF0LL]
           | (unsigned __int8)*(_QWORD *)(v38 + 32))
          & 7;
      v39 = sub_16ABB70(
              (_QWORD *)a1,
              v23,
              *(_QWORD *)&byte_8[*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL]
             | (unsigned __int8)*(_QWORD *)(v37 + 32))
            & 7,
              v94,
              v112,
              v113,
              v31,
              a3,
              a8,
              a9,
              a10);
      if ( v39 )
        return v39;
    }
    else
    {
      *a8 = 3312;
    }
  }
  v47 = *v15;
  v48 = v108;
  LODWORD(v97) = v109;
  if ( *(_BYTE *)(*v15 + 16) == 33
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
    && (v67 = sub_F63050(v47, v23, v37, v24), v48 = v108, LODWORD(v47) = v67, v67) )
  {
    v49 = *v12 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL) != *(_QWORD *)(v49 + 8)
      || (v103 = v48, v101 = v47, v74 = sub_1BE7B70(a1, v49, a3, 0, &v112, 0), LODWORD(v47) = v101, v48 = v103, !v74) )
    {
      v23 = v31;
      switch ( sub_1BEA320(a1, v31, v47, (_DWORD)a9, a10, v48, v48 | (unsigned __int64)(v97 << 32), v94, 1) )
      {
        case 0LL:
          if ( *a9 != 14 )
            return 1;
LABEL_49:
          *a8 = 3310;
          break;
        case 1LL:
        case 2LL:
          goto LABEL_50;
        case 3LL:
        case 4LL:
        case 5LL:
          goto LABEL_48;
        default:
          return 1;
      }
      goto LABEL_50;
    }
    v107 = v103;
    v105 = v101;
    v104 = v74;
    v102 = *(_QWORD **)(a1 + 248);
    v75 = *(_QWORD *)(sub_B8C1B0(v74 + 72) + 16);
    if ( (v75 & 4) != 0 )
      v78 = *(_QWORD *)(v75 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v78 = v75 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v78 )
      v78 -= 64LL;
    v23 = sub_ABBA20(v102, *(_QWORD *)(v104 + 48), 0, v78, v76, v77);
    switch ( sub_1BEA320(a1, v23, v105, (_DWORD)a9, a10, v107, (v97 << 32) | v107, v94, 1) )
    {
      case 0LL:
        if ( *a9 == 14 )
          goto LABEL_49;
        break;
      case 1LL:
      case 2LL:
        goto LABEL_50;
      case 3LL:
      case 4LL:
      case 5LL:
        goto LABEL_48;
      default:
        break;
    }
    v79 = sub_1BE7B70(a1, *v12 & 0xFFFFFFFFFFFFFFFELL, a3, 1, &v112, 0);
    if ( v79 )
    {
      v80 = sub_1BD7840(a1, *v12, v112, v79);
      *v12 = v80;
      if ( v80 > 1 )
        return 1;
    }
LABEL_48:
    v27 = 3;
    *a8 = 0;
    return v27;
  }
LABEL_50:
  v53 = *v32;
  if ( *(_BYTE *)(*v32 + 16) != 42 && (v53 = sub_16A7B30(*v32, v23, v37, v24)) == 0
    || (v54 = *(_QWORD *)(v53 + 32),
        v55 = v54 & 0xFFFFFFFFFFFFFFF0LL,
        v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v56 + 16) != 13)
    || ((*(_WORD *)(v56 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v65 = *v32;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    {
      goto LABEL_68;
    }
LABEL_93:
    *a9 = 1;
    return 1;
  }
  v57 = *v15;
  if ( *(_BYTE *)(*v15 + 16) == 42
    || (v98 = v54, v96 = v54 & 0xFFFFFFFFFFFFFFF0LL, v57 = sub_16A7B30(*v15, v23, v54, v55), v55 = v96, v54 = v98, v57) )
  {
    v23 = *(_QWORD *)(v57 + 32);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
      if ( v106 == 2 )
      {
        if ( (**(_BYTE **)(a1 + 232) & 0x20) != 0 )
        {
          v27 = 1;
          sub_168B9F0((__int64)&v112, (__int64 *)(a1 + 8), v108, 0x15EFu, 0);
          sub_16AAEC0((__int64)&v112, (unsigned int *)&v108);
          sub_15F7200(&v112);
          *a9 = 1;
          return v27;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
        {
          goto LABEL_85;
        }
      }
      else
      {
        v65 = *v32;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
        {
          goto LABEL_69;
        }
      }
      goto LABEL_93;
    }
    if ( v106 == 2 )
    {
      v85 = *(_QWORD *)&byte_8[*(_QWORD *)(v57 + 32) & 0xFFFFFFFFFFFFFFF0LL];
      v86 = 0;
      if ( (v85 & 8) != 0 )
        v86 = *(__int64 *)((char *)&qword_18 + (v85 & 0xFFFFFFFFFFFFFFF0LL));
      v87 = v85 | v23;
      v88 = *(_QWORD *)(v55 + 8);
      v89 = v86 | v87 & 7;
      v90 = 0;
      if ( (v88 & 8) != 0 )
        v90 = *(__int64 *)((char *)&qword_18 + (v88 & 0xFFFFFFFFFFFFFFF0LL));
      v55 = v89 & 0xFFFFFFFFFFFFFE0FLL;
      v112 = v55;
      v91 = v90 & 0xFFFFFFFFFFFFFE0FLL | ((unsigned __int8)v54 | (unsigned __int8)v88) & 7;
      if ( v91 != v55 && !sub_16A8C50(&v112, v91, *(_QWORD *)(a1 + 248)) )
      {
        v27 = 3;
        *a8 = 3285;
        return v27;
      }
    }
    v73 = !sub_16A8540(v31, a3, v54, v55) ? 1 : 63;
LABEL_91:
    *a9 = v73;
    return 1;
  }
  v84 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v84 == 34 )
  {
    v27 = 1;
    *a9 = 40;
    return v27;
  }
  if ( v106 != 2 && v84 == 11 )
  {
    v27 = 1;
    *a9 = 42;
    return v27;
  }
  v65 = *v32;
LABEL_68:
  if ( v106 != 2 )
    goto LABEL_69;
LABEL_85:
  v23 = a3;
  if ( (unsigned __int8)sub_19D6690(*(_QWORD *)(a1 + 736), a3, *v12 & 0xFFFFFFFFFFFFFFFELL, a9) )
    return 1;
  v65 = *v32;
LABEL_69:
  if ( *(_BYTE *)(v65 + 16) == 42 || (v65 = sub_16A7B30(v65, v23, v65, v55)) != 0 )
  {
    v66 = *v15;
    if ( *(_BYTE *)(*v15 + 16) == 42 || (v95 = v65, v66 = sub_16A7B30(*v15, v23, v65, v55), v65 = v95, v66) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        *a8 = 3288;
      }
    }
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 31 <= 1
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 31 <= 1 )
  {
    if ( (unsigned __int8)sub_18D56F0(a1, ((unsigned __int64)v109 << 32) | (unsigned int)v108, a3, v31, a9) )
      goto LABEL_77;
    return 1;
  }
  return v27;
}
