__int64 __fastcall sub_1CBB850(__int64 *a1, __int64 a2, unsigned int a3, __m128 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r14
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // rdi
  __int64 v46; // r8
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // rax
  __int64 v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 *v70; // rsi
  unsigned int v71; // ecx
  _QWORD *v72; // rax
  unsigned int v73; // edx
  unsigned int v74; // ecx
  unsigned int v75; // eax
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // r14
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  char v83; // al
  __int64 *v84; // rax
  __int64 v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // [rsp+18h] [rbp-100h]
  __int64 v88; // [rsp+18h] [rbp-100h]
  unsigned __int64 v89; // [rsp+18h] [rbp-100h]
  unsigned __int64 v90; // [rsp+18h] [rbp-100h]
  unsigned __int64 v91; // [rsp+20h] [rbp-F8h]
  __int64 v92; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v93; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v94; // [rsp+38h] [rbp-E0h] BYREF
  int v95; // [rsp+44h] [rbp-D4h] BYREF
  unsigned __int64 v96; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v97; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD *v98; // [rsp+58h] [rbp-C0h]

  v94 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return 0;
  if ( (unsigned __int8)sub_1E63CF0(a1, a3, a2, 1, 5135) )
    return 1;
  if ( (unsigned __int8)sub_F63310(*(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFF0LL), a3, v7, v8, v9, v10) )
    return 0;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(unsigned __int8 *)(v14 + 16);
  if ( (_BYTE)v15 == 44 )
  {
    v70 = a1 + 1;
    v71 = 5138;
    goto LABEL_42;
  }
  v16 = a1[29];
  if ( *(char *)(v16 + 1) >= 0 )
    goto LABEL_41;
  if ( (_BYTE)v15 != 13 )
  {
    if ( (_BYTE)v15 == 47 )
    {
      v72 = sub_F60F10(v14, a3, v16, v11, v12, v13);
      if ( (*((_BYTE *)v72 + 74) & 1) != 0 || (v72[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_9;
      LOBYTE(v15) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    }
    else if ( (unsigned __int8)v15 <= 0x2Au )
    {
      v69 = 0x40600004C00LL;
      if ( _bittest64(&v69, v15) )
        goto LABEL_9;
      goto LABEL_41;
    }
    if ( (_BYTE)v15 == 48 )
      goto LABEL_9;
LABEL_41:
    v70 = a1 + 1;
    v71 = 5133;
LABEL_42:
    sub_168B9F0((__int64)&v97, v70, a3, v71, 0);
    sub_1605D30((__int64)&v97, (__int64 *)&v94);
    sub_15F7200(&v97);
    return 1;
  }
  if ( (((*(_WORD *)(v14 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
    goto LABEL_41;
LABEL_9:
  if ( (unsigned __int8)sub_1E666A0(a1, a3, v94, 5136) )
    return 1;
  sub_168B9F0((__int64)&v97, a1 + 1, a3, 0x1411u, 0);
  v17 = (__int64 *)&v94;
  sub_1605D30((__int64)&v97, (__int64 *)&v94);
  sub_15F7200(&v97);
  while ( 1 )
  {
    v22 = sub_F63270(*(_QWORD *)(v94 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v17, v18, v19, v20, v21);
    v27 = (__int64)v22;
    if ( !v22 )
      return 1;
    v28 = sub_B7E900((__int64)v22, (__int64)v17, v23, v24, v25, v26);
    if ( !v28 )
      goto LABEL_19;
LABEL_13:
    if ( (*(_BYTE *)(v28 + 29) & 0x60) != 0 )
      break;
    if ( (*(_BYTE *)(v28 + 68) & 2) != 0 )
    {
      v73 = *(_DWORD *)(v28 + 24);
      v74 = 6142;
      goto LABEL_52;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 44 )
    {
      v73 = *(_DWORD *)(v28 + 24);
      v74 = 6144;
LABEL_52:
      sub_168B9F0((__int64)&v97, a1 + 1, v73, v74, 0);
      sub_1605D30((__int64)&v97, (__int64 *)&v94);
      sub_15F7200(&v97);
      return 1;
    }
    while ( 1 )
    {
      v29 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v28 = v29;
      if ( !v29 )
        break;
      if ( (*(_BYTE *)(v29 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_13;
    }
LABEL_19:
    sub_7052B0((__int64 *)(*(_QWORD *)(v27 + 104) + 96LL), *(_QWORD *)(v27 + 104), v29, v30, v31, v32);
    v36 = *(_QWORD *)(v27 + 128);
    if ( (*(_BYTE *)(v36 + 24) & 1) != 0 )
      v37 = sub_B96980(v36);
    else
      v37 = *(_QWORD *)(v36 + 24);
    v87 = v37;
    sub_7052B0((__int64 *)(*(_QWORD *)(v27 + 104) + 96LL), *(_QWORD *)(v27 + 104), v37, v33, v34, v35);
    v38 = v87;
    v39 = *(_QWORD *)(v27 + 104);
    v88 = v87 + 24LL * *(unsigned int *)(*(_QWORD *)(v27 + 128) + 16LL);
    sub_7052B0((__int64 *)(v39 + 96), v39, v38, v40, v88, v41);
    v45 = *(_QWORD *)(v27 + 128);
    v46 = v88;
    if ( (*(_BYTE *)(v45 + 24) & 1) != 0 )
    {
      v47 = sub_B96980(v45);
      v46 = v88;
    }
    else
    {
      v47 = *(_QWORD *)(v45 + 24);
    }
    for ( ; v46 != v47; v47 += 24 )
    {
      v39 = *(_BYTE *)(v47 + 12) & 0xC;
      if ( (_BYTE)v39 == 12 )
      {
        v42 = *(_BYTE *)(v47 + 12) & 2;
        if ( (*(_BYTE *)(v47 + 12) & 2) != 0 )
        {
LABEL_36:
          v65 = *(__int64 **)(v47 + 16);
          v66 = *v65;
          v98 = v65 + 1;
          v97 = v66;
          v67 = sub_F6CCB0(&v97, a4);
          sub_168B9F0((__int64)&v97, a1 + 1, v67, 0x17FFu, 0);
          v68 = sub_1605D30((__int64)&v97, (__int64 *)&v94);
          LODWORD(v96) = 1;
          goto LABEL_37;
        }
      }
      else
      {
        v42 = *(_BYTE *)(v47 + 12) & 0xC;
        if ( (*(_BYTE *)(v47 + 12) & 0xC) != 0 )
          goto LABEL_36;
      }
    }
    v96 = 0;
    v95 = -1;
    v48 = sub_B7E900(v27, v39, v42, v43, v46, v44);
    if ( v48 )
    {
LABEL_28:
      v52 = *(_QWORD *)(v48 + 48);
      v91 = v48;
      v89 = sub_A71450(a1[31], v52);
      v57 = sub_F63310(*(_QWORD *)(v89 & 0xFFFFFFFFFFFFFFF0LL), v52, v53, v54, v55, v56);
      v39 = v89;
      v48 = v91;
      if ( !v57 )
      {
        v75 = *(_DWORD *)(v91 + 24);
        v95 = 0;
        v96 = v89;
        sub_168B9F0((__int64)&v97, a1 + 1, v75, 0x1801u, 0);
        goto LABEL_34;
      }
      while ( 1 )
      {
        v58 = *(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v48 = v58;
        if ( !v58 )
          break;
        if ( (*(_BYTE *)(v58 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_28;
      }
    }
    if ( v95 == -1 )
    {
      v77 = sub_A7A590(v27, v39, v48, v49, v50, v51);
      while ( 1 )
      {
        v93 = v77;
        v92 = v76;
        if ( v77 == v76 )
          break;
        v90 = v77;
        v97 = **(_QWORD **)(v77 + 16);
        v78 = sub_6D5440(&v97);
        v83 = sub_F63310(*(_QWORD *)(v78 & 0xFFFFFFFFFFFFFFF0LL), v39, v79, v80, v81, v82);
        v76 = v92;
        v39 = v93;
        v77 = v90 + 24;
        if ( !v83 )
        {
          v84 = *(__int64 **)(v93 + 16);
          v85 = *v84;
          v98 = v84 + 1;
          v97 = v85;
          v86 = sub_F6CCB0(&v97, a4);
          v96 = v78;
          v95 = 1;
          sub_168B9F0((__int64)&v97, a1 + 1, v86, 0x1801u, 0);
          goto LABEL_34;
        }
      }
    }
    sub_168B9F0((__int64)&v97, a1 + 1, 0, 0x1801u, 0);
LABEL_34:
    v59 = sub_1605D30((__int64)&v97, (__int64 *)&v94);
    v60 = sub_16CF4F0(v59, &v95);
    v17 = (__int64 *)&v96;
    sub_1605D30(v60, (__int64 *)&v96);
    sub_15F7200(&v97);
    v94 = v96;
    sub_F63270(*(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v96, v61, v62, v63, v64);
  }
  sub_168B9F0((__int64)&v97, a1 + 1, *(_DWORD *)(v28 + 24), 0x17FFu, 0);
  v68 = sub_1605D30((__int64)&v97, (__int64 *)&v94);
  LODWORD(v96) = 0;
LABEL_37:
  sub_1587D10(v68, (int *)&v96);
  sub_15F7200(&v97);
  return 1;
}
