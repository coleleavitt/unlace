__int64 __fastcall sub_C172F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int *v14; // rbx
  unsigned int v15; // ebp
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // r12
  char v21; // al
  __int64 v22; // rax
  unsigned __int8 **v23; // rbp
  unsigned __int8 *v24; // rbx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  unsigned __int8 *v27; // rbx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  int *v30; // rbp
  int *v31; // rbx
  __int64 v33; // r14
  int v34; // r13d
  unsigned __int64 v35; // r12
  _QWORD *v36; // rax
  _QWORD *v37; // rbp
  _QWORD *v38; // rdx
  __int64 v39; // r12
  int *v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r15
  void *v46; // r15
  char v47; // al
  int *v48; // rbp
  unsigned int *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r12
  char v58; // al
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rsi
  unsigned __int8 *v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r12
  __int64 v68; // r13
  __int64 v69; // r12
  void *v70; // rdi
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r12
  __int64 v75; // r13
  __int64 v76; // r12
  void *v77; // rdi
  __int64 v78; // rbp
  __int64 v79; // [rsp+0h] [rbp-288h]
  __int64 v80; // [rsp+8h] [rbp-280h]
  __int64 v81; // [rsp+10h] [rbp-278h]
  __int64 v84; // [rsp+28h] [rbp-260h]
  unsigned __int8 v85; // [rsp+47h] [rbp-241h]
  _QWORD v86[4]; // [rsp+60h] [rbp-228h] BYREF
  void *v87; // [rsp+80h] [rbp-208h] BYREF
  unsigned int v88; // [rsp+88h] [rbp-200h]
  char v89; // [rsp+8Ch] [rbp-1FCh]
  unsigned int v90; // [rsp+A0h] [rbp-1E8h] BYREF
  char v91; // [rsp+A4h] [rbp-1E4h]
  __int64 v92; // [rsp+A8h] [rbp-1E0h]
  unsigned int v93; // [rsp+B0h] [rbp-1D8h]
  unsigned int v94; // [rsp+E0h] [rbp-1A8h] BYREF
  char v95; // [rsp+E4h] [rbp-1A4h]
  _QWORD v96[7]; // [rsp+E8h] [rbp-1A0h] BYREF
  unsigned int v97; // [rsp+120h] [rbp-168h] BYREF
  char v98; // [rsp+124h] [rbp-164h]
  void *v99; // [rsp+128h] [rbp-160h] BYREF
  int v100; // [rsp+130h] [rbp-158h]
  int *v101; // [rsp+160h] [rbp-128h] BYREF
  __int64 v102; // [rsp+168h] [rbp-120h]
  _BYTE v103[280]; // [rsp+170h] [rbp-118h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(a2 + 16);
  v90 = 0;
  v91 &= ~1u;
  v5 = *(_QWORD *)(v4 + 8);
  v85 = sub_C167C0(v3, v4, &v90);
  if ( !v85 )
    goto LABEL_27;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 57;
  if ( (unsigned int)v9 > 1 )
    v8 = sub_F3F310(v8, v4, v9, v6);
  v10 = v5 & 0xFFFFFFFFFFFFFFF0LL;
  v79 = *(_QWORD *)(v8 + 32);
  v11 = *(_QWORD *)v10;
  v12 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v10 + 16LL) - 57;
  if ( (unsigned int)v12 > 1 )
    v11 = sub_F3F310(v11, v4, v12, v6);
  v80 = *(_QWORD *)(v11 + 32);
  if ( (*(_BYTE *)(a2 + 2) & 8) == 0 )
    sub_FC7050(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2320LL));
  v13 = v93;
  v14 = (int *)v103;
  v15 = v93;
  v101 = (int *)v103;
  v102 = 0x400000000LL;
  if ( v93 > 4uLL )
  {
    sub_C021C0((__int64)&v101, v93);
    if ( v15 )
      goto LABEL_10;
LABEL_31:
    v33 = (unsigned int)v102;
    v14 = v101;
    v99 = nullptr;
    v98 &= ~1u;
    v34 = v102;
    v100 = 0;
    v97 = 8;
    v35 = 56LL * (unsigned int)v102 + 8;
    v36 = (_QWORD *)operator new[](v35);
    v37 = v36 + 1;
    *v36 = v33;
    v38 = v36 + 1;
    if ( v33 )
    {
      do
      {
        *(_DWORD *)v38 = 0;
        *((_BYTE *)v38 + 4) &= ~1u;
        v38 += 7;
      }
      while ( v38 != (_QWORD *)((char *)v36 + v35) );
    }
LABEL_33:
    v99 = v37;
    v100 = v34;
    if ( v34 )
    {
      v39 = (__int64)&v36[7 * (unsigned int)(v34 - 1) + 8];
      do
      {
        v40 = v14;
        v41 = (__int64)v37;
        v37 += 7;
        v14 += 14;
        sub_A30FE0(v41, v40);
      }
      while ( v37 != (_QWORD *)v39 );
    }
    sub_A30FE0(a1[1], (int *)&v97);
    if ( v97 > 1 )
      sub_A2BBA0((int *)&v97);
    goto LABEL_21;
  }
  if ( !v93 )
  {
    v78 = (unsigned int)v102;
    v98 &= ~1u;
    v99 = nullptr;
    v34 = v102;
    v100 = 0;
    v97 = 8;
    v36 = (_QWORD *)operator new[](56LL * (unsigned int)v102 + 8);
    *v36 = v78;
    v37 = v36 + 1;
    goto LABEL_33;
  }
LABEL_10:
  v16 = 0;
  v17 = 7 * (v15 - 1 + 1LL);
  v84 = 56 * (v15 - 1 + 1LL);
  while ( 1 )
  {
    v94 = 0;
    v95 &= ~1u;
    v81 = v16 + v92;
    v18 = *(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL);
    v19 = *a1;
    v20 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_BYTE *)(v20 + 16);
    switch ( v21 )
    {
      case 13:
        if ( (((*(_WORD *)(v20 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          goto LABEL_13;
        break;
      case 47:
        v50 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL), v13, v17, v6, v7);
        if ( (*(_BYTE *)(v50 + 74) & 1) == 0 && (*(_QWORD *)(v50 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
          || *(char *)(sub_F3D1D0(v20, v13, v51, v52, v53) + 76) < 0 )
        {
          if ( !(unsigned __int8)sub_F343C0(*(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL)) )
            goto LABEL_14;
LABEL_57:
          if ( (unsigned __int8)sub_F343C0(*(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL)) )
          {
            sub_A30FE0((__int64)&v94, (int *)v81);
            v47 = sub_BF41C0(v19, a2, v79, v96);
          }
          else
          {
            if ( !sub_9C8B50(*(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL), v13, v54, v55, v56) )
              goto LABEL_14;
            v89 = 0;
            v88 = 1;
            v87 = nullptr;
            sub_B72A30((__int64)&v97, (__int64 *)&v87);
            sub_A2BFE0((__int64)&v94, (__int64)&v97);
            if ( v97 > 1 )
              sub_A2BBA0((int *)&v97);
            if ( v88 > 0x40 && v87 )
              operator delete[](v87);
            v47 = sub_BF6C00(v19, a2, (_QWORD *)(v81 + 8), v79, (__int64)v96);
          }
          goto LABEL_48;
        }
        break;
      case 10:
        break;
      default:
LABEL_13:
        if ( !(unsigned __int8)sub_F343C0(v18) )
          goto LABEL_14;
        goto LABEL_57;
    }
    if ( !(unsigned __int8)sub_F343C0(*(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL)) )
      break;
    v45 = sub_21D5370();
    sub_21D8290(&v97, 0.0);
    sub_21DE690(v86, &v97, v45);
    sub_21D5AF0(&v97);
    v97 = 0;
    v98 &= ~1u;
    sub_21D8290(&v87, 0.0);
    sub_21DE690(&v99, &v87, v45);
    sub_21D5AF0(&v87);
    v97 = 3;
    v46 = (void *)sub_21D5390();
    if ( (void *)v86[0] == v46 )
      sub_21DC190(&v87, v86);
    else
      sub_21D5A90(&v87, v86);
    if ( v99 == v46 )
    {
      if ( v46 != v87 )
      {
LABEL_88:
        sub_971860(&v99);
        if ( v46 == v87 )
          sub_21DC190(&v99, &v87);
        else
          sub_21D5A90(&v99, &v87);
        goto LABEL_45;
      }
      sub_A2B2D0((__int64)&v99);
      sub_21DC190(&v99, &v87);
    }
    else
    {
      if ( v46 == v87 )
        goto LABEL_88;
      sub_21D5850(&v99, &v87);
    }
LABEL_45:
    sub_971860(&v87);
    sub_A2BFE0((__int64)&v94, (__int64)&v97);
    if ( v97 > 1 )
      sub_A2BBA0((int *)&v97);
    sub_971860(v86);
    v47 = sub_BF4310(v19, a2, v81 + 8, v79, v96);
LABEL_48:
    if ( !v47 )
      goto LABEL_18;
LABEL_49:
    v48 = v101;
    v13 = (__int64)&v94;
    v49 = (unsigned int *)&v101[14 * (unsigned int)v102];
    if ( (unsigned __int64)(unsigned int)v102 + 1 > HIDWORD(v102) )
    {
      v63 = (unsigned int)v102 + 1LL;
      if ( v101 > (int *)&v94 || v49 <= &v94 )
      {
        sub_C021C0((__int64)&v101, v63);
        v13 = (__int64)&v94;
        v49 = (unsigned int *)&v101[14 * (unsigned int)v102];
      }
      else
      {
        sub_C021C0((__int64)&v101, v63);
        v13 = (__int64)v101 + (char *)&v94 - (char *)v48;
        v49 = (unsigned int *)&v101[14 * (unsigned int)v102];
      }
    }
    sub_A2BB60((__int64)v49, v13);
    LODWORD(v102) = v102 + 1;
    if ( v94 > 1 )
    {
      v16 += 56;
      sub_A2BBA0((int *)&v94);
      if ( v16 == v84 )
        goto LABEL_31;
    }
    else
    {
      v16 += 56;
      if ( v84 == v16 )
        goto LABEL_31;
    }
  }
  v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v58 = *(_BYTE *)(v57 + 16);
  if ( v58 == 13 )
  {
    if ( (((*(_WORD *)(v57 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      goto LABEL_14;
    goto LABEL_65;
  }
  if ( v58 != 47 )
  {
    if ( v58 != 10 )
      goto LABEL_14;
    goto LABEL_65;
  }
  v59 = sub_F3D1D0(v57, v13, v42, v43, v44);
  if ( ((*(_BYTE *)(v59 + 74) & 1) != 0 || (*(_QWORD *)(v59 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *(char *)(sub_F3D1D0(v57, v13, v60, v61, v62) + 76) >= 0 )
  {
LABEL_65:
    sub_BF20A0((__int64)&v87, *(_QWORD *)(v19 + 16), v79, v81 + 8, v44);
    sub_B72A30((__int64)&v97, (__int64 *)&v87);
    sub_A2BFE0((__int64)&v94, (__int64)&v97);
    if ( v97 > 1 )
      sub_A2BBA0((int *)&v97);
    if ( v88 > 0x40 && v87 )
      operator delete[](v87);
    goto LABEL_49;
  }
LABEL_14:
  v22 = sub_E0FED0(v19, a2, 3516, 0);
  v23 = (unsigned __int8 **)v22;
  if ( v22 )
  {
    v24 = *(unsigned __int8 **)v22;
    if ( !*(_QWORD *)v22 )
    {
      v71 = *(_QWORD *)(v22 + 8);
      v72 = *(_DWORD *)(v71 + 14976);
      if ( v72 )
      {
        v73 = (unsigned int)(v72 - 1);
        *(_DWORD *)(v71 + 14976) = v73;
        v24 = *(unsigned __int8 **)(v71 + 8 * v73 + 14848);
        v74 = *((unsigned int *)v24 + 134);
        *v24 = 0;
        v75 = *((_QWORD *)v24 + 66);
        *((_DWORD *)v24 + 106) = 0;
        v76 = v75 + (v74 << 6);
        while ( v75 != v76 )
        {
          while ( 1 )
          {
            v76 -= 64;
            v77 = *(void **)(v76 + 24);
            if ( v77 == (void *)(v76 + 40) )
              break;
            operator delete(v77);
            if ( v75 == v76 )
              goto LABEL_102;
          }
        }
LABEL_102:
        *((_DWORD *)v24 + 134) = 0;
      }
      else
      {
        v24 = (unsigned __int8 *)operator new(0x3A0u);
        *v24 = 0;
        *((_QWORD *)v24 + 12) = v24 + 112;
        *((_QWORD *)v24 + 16) = v24 + 144;
        *((_QWORD *)v24 + 20) = v24 + 176;
        *((_QWORD *)v24 + 24) = v24 + 208;
        *((_QWORD *)v24 + 28) = v24 + 240;
        *((_QWORD *)v24 + 32) = v24 + 272;
        *((_QWORD *)v24 + 36) = v24 + 304;
        *((_QWORD *)v24 + 40) = v24 + 336;
        *((_QWORD *)v24 + 44) = v24 + 368;
        *((_QWORD *)v24 + 48) = v24 + 400;
        *((_QWORD *)v24 + 52) = v24 + 432;
        *((_QWORD *)v24 + 13) = 0;
        v24[112] = 0;
        *((_QWORD *)v24 + 17) = 0;
        v24[144] = 0;
        *((_QWORD *)v24 + 21) = 0;
        v24[176] = 0;
        *((_QWORD *)v24 + 25) = 0;
        v24[208] = 0;
        *((_QWORD *)v24 + 29) = 0;
        v24[240] = 0;
        *((_QWORD *)v24 + 33) = 0;
        v24[272] = 0;
        *((_QWORD *)v24 + 37) = 0;
        v24[304] = 0;
        *((_QWORD *)v24 + 41) = 0;
        v24[336] = 0;
        *((_QWORD *)v24 + 45) = 0;
        v24[368] = 0;
        *((_QWORD *)v24 + 49) = 0;
        v24[400] = 0;
        *((_QWORD *)v24 + 53) = 0x800000000LL;
        *((_QWORD *)v24 + 66) = v24 + 544;
        *((_QWORD *)v24 + 67) = 0x600000000LL;
      }
      *v23 = v24;
    }
    v24[*v24 + 1] = 8;
    v25 = *v23;
    v26 = **v23;
    *v25 = v26 + 1;
    *(_QWORD *)&v25[8 * v26 + 16] = v80;
    v27 = *v23;
    if ( !*v23 )
    {
      v64 = v23[1];
      v65 = *((_DWORD *)v64 + 3744);
      if ( v65 )
      {
        v66 = (unsigned int)(v65 - 1);
        *((_DWORD *)v64 + 3744) = v66;
        v27 = *(unsigned __int8 **)&v64[8 * v66 + 14848];
        v67 = *((unsigned int *)v27 + 134);
        *v27 = 0;
        v68 = *((_QWORD *)v27 + 66);
        *((_DWORD *)v27 + 106) = 0;
        v69 = v68 + (v67 << 6);
        while ( v68 != v69 )
        {
          while ( 1 )
          {
            v69 -= 64;
            v70 = *(void **)(v69 + 24);
            if ( v70 == (void *)(v69 + 40) )
              break;
            operator delete(v70);
            if ( v68 == v69 )
              goto LABEL_96;
          }
        }
LABEL_96:
        *((_DWORD *)v27 + 134) = 0;
      }
      else
      {
        v27 = (unsigned __int8 *)operator new(0x3A0u);
        *v27 = 0;
        *((_QWORD *)v27 + 12) = v27 + 112;
        *((_QWORD *)v27 + 16) = v27 + 144;
        *((_QWORD *)v27 + 20) = v27 + 176;
        *((_QWORD *)v27 + 24) = v27 + 208;
        *((_QWORD *)v27 + 28) = v27 + 240;
        *((_QWORD *)v27 + 32) = v27 + 272;
        *((_QWORD *)v27 + 36) = v27 + 304;
        *((_QWORD *)v27 + 40) = v27 + 336;
        *((_QWORD *)v27 + 44) = v27 + 368;
        *((_QWORD *)v27 + 48) = v27 + 400;
        *((_QWORD *)v27 + 52) = v27 + 432;
        *((_QWORD *)v27 + 13) = 0;
        v27[112] = 0;
        *((_QWORD *)v27 + 17) = 0;
        v27[144] = 0;
        *((_QWORD *)v27 + 21) = 0;
        v27[176] = 0;
        *((_QWORD *)v27 + 25) = 0;
        v27[208] = 0;
        *((_QWORD *)v27 + 29) = 0;
        v27[240] = 0;
        *((_QWORD *)v27 + 33) = 0;
        v27[272] = 0;
        *((_QWORD *)v27 + 37) = 0;
        v27[304] = 0;
        *((_QWORD *)v27 + 41) = 0;
        v27[336] = 0;
        *((_QWORD *)v27 + 45) = 0;
        v27[368] = 0;
        *((_QWORD *)v27 + 49) = 0;
        v27[400] = 0;
        *((_QWORD *)v27 + 53) = 0x800000000LL;
        *((_QWORD *)v27 + 66) = v27 + 544;
        *((_QWORD *)v27 + 67) = 0x600000000LL;
      }
      *v23 = v27;
    }
    v27[*v27 + 1] = 8;
    v28 = *v23;
    v29 = **v23;
    *v28 = v29 + 1;
    *(_QWORD *)&v28[8 * v29 + 16] = v79;
  }
LABEL_18:
  if ( v94 > 1 )
    sub_A2BBA0((int *)&v94);
  v85 = 0;
LABEL_21:
  v30 = v101;
  v31 = &v101[14 * (unsigned int)v102];
  if ( v101 != v31 )
  {
    do
    {
      while ( 1 )
      {
        v31 -= 14;
        if ( (unsigned int)*v31 > 1 )
          break;
        if ( v30 == v31 )
          goto LABEL_24;
      }
      sub_A2BBA0(v31);
    }
    while ( v30 != v31 );
LABEL_24:
    v31 = v101;
  }
  if ( v31 != (int *)v103 )
    free(v31);
LABEL_27:
  if ( v90 > 1 )
    sub_A2BBA0((int *)&v90);
  return v85;
}

