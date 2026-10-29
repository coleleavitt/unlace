__int64 __fastcall sub_16ED560(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v5; // rbp
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r14d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdx
  char v14; // al
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r13
  __int64 *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // al
  __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // r9
  unsigned __int8 v28; // al
  unsigned int v29; // r9d
  __int64 v30; // rax
  void *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // eax
  char v40; // al
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rsi
  _QWORD *v47; // rdi
  __int64 v48; // rax
  bool v49; // zf
  unsigned __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // [rsp+0h] [rbp-188h]
  unsigned __int8 v58; // [rsp+Eh] [rbp-17Ah]
  unsigned __int8 v59; // [rsp+Fh] [rbp-179h]
  unsigned int v60; // [rsp+10h] [rbp-178h]
  __int64 v61; // [rsp+18h] [rbp-170h]
  bool v62; // [rsp+27h] [rbp-161h] BYREF
  unsigned __int64 v63; // [rsp+28h] [rbp-160h] BYREF
  void *v64; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v65; // [rsp+38h] [rbp-150h]
  char v66; // [rsp+3Ch] [rbp-14Ch]
  void *v67; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v68; // [rsp+48h] [rbp-140h]
  char v69; // [rsp+4Ch] [rbp-13Ch]
  void *v70[2]; // [rsp+50h] [rbp-138h] BYREF
  __int64 v71; // [rsp+60h] [rbp-128h] BYREF
  __int64 v72[2]; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v73; // [rsp+80h] [rbp-108h] BYREF
  char v74; // [rsp+84h] [rbp-104h]
  void *v75; // [rsp+88h] [rbp-100h]
  unsigned int v76; // [rsp+90h] [rbp-F8h]
  char v77; // [rsp+94h] [rbp-F4h]
  unsigned __int64 v78; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-C0h]
  unsigned __int64 v80; // [rsp+D0h] [rbp-B8h]
  int v81; // [rsp+D8h] [rbp-B0h]
  __int64 v82; // [rsp+E0h] [rbp-A8h]

  v5 = a2;
  v9 = sub_16EC930(a1, a2, 2u, a4);
  if ( (_BYTE)v9 )
    return v9;
  v10 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v62 = a3 == 797;
  v63 = *(_QWORD *)(v10 + 8);
  v11 = v63 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_DWORD)v13 == 25 )
    goto LABEL_40;
  if ( (_DWORD)v13 != 26 )
  {
    v7 = (unsigned int)(v13 - 2);
    if ( (unsigned __int8)(v13 - 2) <= 4u )
    {
      if ( (_BYTE)v13 == 3 || (_DWORD)v13 != 2 && (unsigned __int8)(v14 - 3) > 3u )
        goto LABEL_40;
      a2 = v63;
      v63 = sub_A75D20(*(_QWORD **)(a1 + 248), v63);
      v12 = *(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL);
      v11 = v63 & 0xFFFFFFFFFFFFFFF0LL;
      v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
  }
  if ( v14 != 42 )
  {
LABEL_40:
    if ( !sub_9EC890(v12, a2, v13, v7, v8) )
      goto LABEL_45;
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v40 = *(_BYTE *)(v16 + 16);
    if ( v40 == 47 || v40 == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B4 )
      goto LABEL_45;
    LOBYTE(v41) = sub_C1BF80(*(_QWORD *)(v63 & 0xFFFFFFFFFFFFFFF0LL), a2, v16, v17);
    v9 = v41;
    if ( (_BYTE)v41 )
      goto LABEL_45;
    goto LABEL_10;
  }
  LOBYTE(v15) = sub_C1BF80(v12, a2, v13, v7);
  v9 = v15;
  if ( (_BYTE)v15 )
  {
LABEL_45:
    v9 = 1;
    v42 = sub_C00A40(v10, a2, v16, v17, v18);
    sub_168B9F0((__int64)&v78, (__int64 *)(a1 + 8), v42, 0x1494u, 0);
    sub_1605D30((__int64)&v78, (__int64 *)&v63);
    sub_15F7200(&v78);
    return v9;
  }
LABEL_10:
  v19 = *(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 40);
  v20 = (__int64 *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v58 = sub_9EC890(*v20, a2, v16, v17, v18);
  if ( !v58
    || (v21 = *(_QWORD *)(*(_QWORD *)(*v20 + 8) & 0xFFFFFFFFFFFFFFF0LL), v24 = *(_BYTE *)(v21 + 16), v24 == 47)
    || v24 == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1B4 )
  {
    v9 = 1;
    v43 = sub_C00A40(v19, a2, v21, v22, v23);
    sub_168B9F0((__int64)&v78, (__int64 *)(a1 + 8), v43, 0x1493u, 0);
    v72[0] = *(_QWORD *)(v19 + 8);
    sub_162B6D0((__int64)&v78, v72);
    sub_15F7200(&v78);
    return v9;
  }
  v25 = *(_QWORD *)(a1 + 248);
  v72[1] = 0;
  v74 &= ~1u;
  LOWORD(v72[0]) = 0;
  v73 = 0;
  v26 = sub_AAC1F0(v25, v63, v21, 0, v23);
  if ( (*(_DWORD *)v19 & 0x20000) != 0 )
    goto LABEL_47;
  v57 = v26;
  v28 = sub_C3F220(v19, (__int64)v72, *(_QWORD *)(a1 + 248), 2, 0, v27);
  v29 = v57;
  v59 = v28;
  if ( !v28 )
    goto LABEL_47;
  v65 = v76;
  if ( v76 > 0x40 )
  {
    sub_2205510(&v64);
    v29 = v57;
  }
  else
  {
    v64 = v75;
  }
  LODWORD(v79) = v29;
  v66 = v77;
  v30 = 1LL << ((unsigned __int8)v29 - 1);
  if ( v29 > 0x40 )
  {
    v60 = v29 - 1;
    v61 = 1LL << ((unsigned __int8)v29 - 1);
    sub_2205470(&v78, 0, 0);
    v30 = v61;
    v29 = v79;
    if ( (unsigned int)v79 > 0x40 )
    {
      *(_QWORD *)(v78 + 8LL * (v60 >> 6)) |= v61;
      v31 = (void *)v78;
      goto LABEL_21;
    }
  }
  else
  {
    v78 = 0;
  }
  v31 = (void *)(v78 | v30);
LABEL_21:
  v68 = v29;
  v67 = v31;
  v69 = 1;
  if ( (unsigned __int8)sub_16BE060((__int64 *)&v64, (char *)&dword_0 + 1) )
  {
    v51 = sub_C00A40(v19, 1, v32, v33, v34);
    sub_168B9F0((__int64)&v78, (__int64 *)(a1 + 8), v51, 0xBA6u, 0);
    LODWORD(v70[0]) = 1;
    sub_1587D10((__int64)&v78, (int *)v70);
    sub_15F7200(&v78);
LABEL_28:
    if ( v68 > 0x40 && v67 )
      operator delete[](v67);
    if ( v65 > 0x40 && v64 )
      operator delete[](v64);
    v9 = v59;
    goto LABEL_36;
  }
  if ( (int)sub_98E2D0((__int64 *)&v64, (__int64 *)&v67) > 0 )
  {
    v55 = sub_C00A40(v19, (__int64)&v67, (__int64)v35, v36, v37);
    sub_168B9F0((__int64)&v78, (__int64 *)(a1 + 8), v55, 0xBA5u, 0);
    sub_C1DEB0(v70, (int)&v67, 10, v69 ^ 1, 0, 1u, 0);
    sub_1682AF0((__int64)&v78, (__int64)v70);
    if ( v70[0] != &v71 )
      operator delete(v70[0]);
    goto LABEL_27;
  }
  if ( v65 > 0x40 )
  {
    if ( (unsigned int)sub_22069E0(&v64) != 1 )
    {
LABEL_26:
      v38 = sub_C00A40(v19, (__int64)&v67, (__int64)v35, v36, v37);
      sub_168B9F0((__int64)&v78, (__int64 *)(a1 + 8), v38, 0xBA4u, 0);
LABEL_27:
      sub_15F7200(&v78);
      goto LABEL_28;
    }
  }
  else
  {
    if ( !v64 )
      goto LABEL_26;
    v35 = (char *)v64 - 1;
    if ( ((unsigned __int64)v64 & ((unsigned __int64)v64 - 1)) != 0 )
      goto LABEL_26;
  }
  if ( (unsigned __int8)sub_AC43F0((__int64)&v64, (char *)&dword_0 + 1) )
  {
    v56 = sub_C00A40(v19, 1, v52, v53, v54);
    sub_168B9F0((__int64)&v78, (__int64 *)(a1 + 8), v56, 0x195Cu, 0);
    sub_15890D0((__int64)&v78, (unsigned __int8 *)&v62);
    sub_15F7200(&v78);
  }
  if ( v68 > 0x40 && v67 )
    operator delete[](v67);
  if ( v65 > 0x40 && v64 )
    operator delete[](v64);
LABEL_47:
  v44 = *(_QWORD **)(a1 + 248);
  v79 = 0;
  v81 = 0;
  LODWORD(v78) = 1;
  v80 = sub_A73320(v44, v63);
  v82 = 0;
  v45 = sub_1A24E20(a1, &v78, 0, v10, 0, 0);
  if ( v45 == 1
    || (*(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 32) = v45 & 0xFFFFFFFFFFFFFFFELL,
        v46 = *(_QWORD *)(v19 + 8),
        v47 = *(_QWORD **)(a1 + 248),
        v79 = 0,
        v81 = 0,
        LODWORD(v78) = 1,
        v80 = sub_A73320(v47, v46),
        v82 = 0,
        v48 = sub_1A24E20(a1, &v78, 0, v19, 0, 0),
        v48 == 1) )
  {
    v9 = v58;
  }
  else
  {
    v49 = !v62;
    *(_QWORD *)(v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 40) = v48 & 0xFFFFFFFFFFFFFFFELL;
    if ( v49 )
      v50 = v63;
    else
      v50 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18640LL);
    *(_QWORD *)(v5 + 8) = v50;
  }
LABEL_36:
  if ( v73 > 1 )
    sub_A4F8E0((int *)&v73);
  return v9;
}
