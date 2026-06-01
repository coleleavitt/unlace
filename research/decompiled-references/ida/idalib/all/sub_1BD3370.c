__int64 __fastcall sub_1BD3370(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 *a6,
        double a7,
        _BYTE *a8)
{
  unsigned int v12; // ebx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rsi
  char v16; // al
  unsigned __int64 v17; // r15
  __int64 *v18; // r10
  __int64 v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r10
  __int64 v26; // r8
  unsigned __int64 v27; // r11
  int v28; // edx
  int v29; // eax
  __int64 v30; // rdx
  _BYTE *v31; // rdx
  unsigned int v32; // eax
  unsigned int v33; // r14d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  bool v42; // al
  __int64 v43; // r8
  unsigned int v44; // eax
  __int64 v45; // r9
  unsigned int v46; // eax
  bool v47; // al
  __int64 v49; // [rsp+8h] [rbp-50h]
  __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+8h] [rbp-50h]
  __int64 v52; // [rsp+8h] [rbp-50h]
  bool v53; // [rsp+8h] [rbp-50h]
  __int64 *v54; // [rsp+10h] [rbp-48h]
  __int64 v55; // [rsp+10h] [rbp-48h]
  __int64 *v56; // [rsp+10h] [rbp-48h]
  __int64 *v57; // [rsp+10h] [rbp-48h]
  __int64 *v58; // [rsp+10h] [rbp-48h]
  unsigned __int64 v59; // [rsp+10h] [rbp-48h]
  __int64 v60; // [rsp+10h] [rbp-48h]
  __int64 v61; // [rsp+10h] [rbp-48h]
  __int64 v62; // [rsp+18h] [rbp-40h]
  __int64 *v63; // [rsp+18h] [rbp-40h]
  __int64 *v64; // [rsp+18h] [rbp-40h]
  unsigned __int64 v65; // [rsp+18h] [rbp-40h]
  unsigned __int64 v66; // [rsp+18h] [rbp-40h]

  *a8 = 0;
  v12 = sub_1BD2CB0(a1, a3, a4, a6, a8);
  if ( (_BYTE)v12 )
    return v12;
  v13 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_BYTE *)(v15 + 16);
  if ( v16 == 34 )
  {
    v59 = a4 & 0xFFFFFFFFFFFFFFF0LL;
    LOBYTE(v20) = sub_1BCC450(a2, a5, *(_QWORD *)(a1 + 248), v14, v13, a7);
    if ( (_BYTE)v20 )
      goto LABEL_32;
    v13 = a4 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = *(_QWORD *)v59;
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_BYTE *)(v15 + 16);
  }
  v17 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v18 = (__int64 *)v17;
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) == 11 && v16 == 42 )
  {
    if ( *(_BYTE *)(v14 + 16) != 42 )
    {
      v65 = v13;
      v41 = sub_F63050(v14, v15, v19, v14);
      v13 = v65;
      v18 = (__int64 *)v17;
      v14 = v41;
    }
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v36 + 16) == 13 && ((*(_WORD *)(v36 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      *a6 = a4;
      return 1;
    }
    v14 = *(_QWORD *)v13;
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_BYTE *)(v15 + 16);
  }
  if ( v16 == 11 )
  {
    v63 = (__int64 *)v13;
    v57 = v18;
    LOBYTE(v20) = sub_1BCC450(a2, a5, *(_QWORD *)(a1 + 248), v14, v13, a7);
    if ( (_BYTE)v20 )
      goto LABEL_32;
    v13 = (unsigned __int64)v63;
    v18 = v57;
    v14 = *v63;
    v15 = *(_QWORD *)(*(_QWORD *)(*v63 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_BYTE *)(v15 + 16);
  }
  if ( v16 == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E8 )
  {
    v15 = a5;
    v64 = (__int64 *)v13;
    v58 = v18;
    LOBYTE(v20) = sub_1BCC450(a2, a5, *(_QWORD *)(a1 + 248), v14, v13, a7);
    if ( (_BYTE)v20 )
      goto LABEL_32;
    v13 = (unsigned __int64)v64;
    v18 = v58;
    v14 = *v64;
  }
  if ( *(_BYTE *)(v14 + 16) != 42 )
  {
    v56 = v18;
    v35 = sub_1BC7590(v14, v15, v19, v14);
    v18 = v56;
    v14 = v35;
    if ( !v35 )
      return v12;
  }
  v62 = v14;
  v54 = v18;
  LOBYTE(v20) = sub_1BCC450(a2, a5, *(_QWORD *)(a1 + 248), v14, v13, a7);
  if ( (_BYTE)v20 )
  {
LABEL_32:
    *a6 = a4;
    return v20;
  }
  v21 = *v54;
  v22 = *(_QWORD *)(v62 + 32);
  v23 = *(unsigned __int8 *)(*v54 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v37 + 16) == 13
      && ((*(_WORD *)(v37 + 18) >> 3) & 0x1FF) == 0x1B3
      && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) == 0 )
    {
      v38 = *(_QWORD *)(a1 + 248);
      if ( (_BYTE)v23 != 34 )
        v21 = sub_F63050(*v54, a5, v23, v62);
      v39 = 0;
      v40 = v38;
      goto LABEL_45;
    }
  }
  if ( (_BYTE)v23 != 42 )
  {
    v21 = sub_1BC7590(*v54, a5, v23, v62);
    if ( !v21 )
      return v12;
  }
  v55 = v21;
  v49 = *(_QWORD *)(v21 + 32);
  if ( sub_1BC70C0(v49, v22) )
    return v12;
  v26 = v49;
  v21 = v55;
  v27 = v49 & 0xFFFFFFFFFFFFFFF0LL;
  v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  v29 = v28;
  if ( v28 == 25 || v28 == 26 )
  {
    v31 = *(_BYTE **)(a1 + 232);
    if ( (*v31 & 0x20) == 0 )
      goto LABEL_17;
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) != 13 )
      goto LABEL_17;
    v24 = *(unsigned __int16 *)(v24 + 18);
    LOWORD(v24) = ((unsigned __int16)v24 >> 3) & 0x1FF;
    if ( (_WORD)v24 != 435 )
      goto LABEL_17;
    v39 = 0;
LABEL_53:
    v40 = v25;
LABEL_45:
    v12 = 1;
    *a6 = sub_1BCCCA0(v21, v22, a4, v40, v39);
    return v12;
  }
  v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v30 + 16) == 13 && ((*(_WORD *)(v30 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v39 = 1;
    goto LABEL_53;
  }
  v31 = *(_BYTE **)(a1 + 232);
LABEL_17:
  if ( (v31[1] & 8) != 0 )
    goto LABEL_18;
  v47 = sub_AAC110(v25, v49, v22, 0);
  v21 = v55;
  if ( v47 )
  {
    v53 = v47;
    *a6 = sub_1BCCCA0(v55, v22, a4, *(_QWORD *)(a1 + 248), 0);
    return v53;
  }
  v27 = v49 & 0xFFFFFFFFFFFFFFF0LL;
  v26 = v49;
  v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
  {
LABEL_18:
    if ( (_BYTE)v29 == 48 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 48 )
        return v12;
      v60 = v21;
      v51 = v26;
      v66 = v27;
      v42 = sub_1BC70C0(v26, v22);
      v43 = v51;
      if ( v42 )
        return v12;
      v52 = v60;
      v61 = v43;
      v44 = sub_EEB7E0(a2, v22, a7);
      v46 = sub_183BD10(a1, v44, v61, v22, v61, v45);
      v21 = v52;
      v33 = v46;
      if ( (_BYTE)v46 )
      {
LABEL_22:
        v12 = v33;
        *a6 = sub_1BCCCA0(v21, v22, a4, *(_QWORD *)(a1 + 248), 0);
        return v12;
      }
      v26 = v61;
      v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v66 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
  }
  if ( (unsigned int)(v29 - 57) <= 1 )
  {
    v50 = v21;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 57 <= 1 )
    {
      v32 = sub_A63DE0(*(_QWORD *)(a1 + 248), v26, v22, v24, v26);
      v21 = v50;
      v33 = v32;
      if ( (_BYTE)v32 )
        goto LABEL_22;
    }
  }
  return v12;
}
