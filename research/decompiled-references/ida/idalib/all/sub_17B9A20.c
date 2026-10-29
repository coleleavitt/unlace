void __fastcall sub_17B9A20(__int64 *a1, _BYTE *a2, __int64 a3, __m128i a4, double a5)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdi
  __int16 v15; // dx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // al
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned __int64 v28; // r13
  unsigned int v29; // eax
  unsigned __int64 v30; // r13
  unsigned int v31; // r12d
  bool v32; // sf
  unsigned int v33; // eax
  __int64 v34; // rbp
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned int v37; // r10d
  void *v38; // r12
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  _QWORD *v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  int v56; // edx
  unsigned int v57; // r13d
  int v58; // r15d
  __int64 v59; // rax
  unsigned __int64 *v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rdi
  char v65; // al
  __int64 v66; // rdx
  unsigned __int64 *v67; // rax
  unsigned int v68; // r13d
  size_t v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  size_t v72; // rax
  unsigned int v73; // eax
  unsigned __int64 v74; // rax
  unsigned int v75; // r12d
  unsigned __int64 v76; // r14
  size_t v77; // rax
  __int64 v78; // [rsp+10h] [rbp-138h]
  __int64 v79; // [rsp+10h] [rbp-138h]
  _BYTE *v80; // [rsp+18h] [rbp-130h] BYREF
  unsigned int v81; // [rsp+20h] [rbp-128h] BYREF
  unsigned int v82; // [rsp+24h] [rbp-124h] BYREF
  unsigned __int64 v83; // [rsp+28h] [rbp-120h]
  char v84; // [rsp+30h] [rbp-118h]
  unsigned __int64 v85; // [rsp+34h] [rbp-114h] BYREF
  char v86; // [rsp+3Ch] [rbp-10Ch]
  _BYTE v87[24]; // [rsp+40h] [rbp-108h] BYREF
  void *v88; // [rsp+58h] [rbp-F0h]
  __int128 v89; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v90; // [rsp+70h] [rbp-D8h]
  _BYTE v91[200]; // [rsp+80h] [rbp-C8h] BYREF

  v80 = a2;
  if ( sub_B8E4C0((unsigned __int64)(a2 + 72)) )
  {
    a2 = a1 + 1;
    sub_168B9F0((__int64)v91, a1 + 1, *((_DWORD *)v80 + 6), 0x15E0u, 0);
    sub_15F7200(v91);
  }
  v8 = (__int64)v80;
  if ( v80[81] >> 5 == 2 )
  {
    sub_168B9F0((__int64)v91, a1 + 1, *(_DWORD *)(a3 + 168), (*(_BYTE *)(a1[29] + 1) & 8) == 0 ? 7382 : 5022, 0);
    v54 = *(_DWORD *)(a3 + 168);
    a2 = v87;
    v87[20] = 0;
    *(_QWORD *)&v87[12] = 0;
    v88 = (char *)&v89 + 8;
    *(_QWORD *)&v89 = 0;
    BYTE8(v89) = 0;
    BYTE8(v90) = 0;
    *(_DWORD *)v87 = v54;
    *(_DWORD *)&v87[4] = v54;
    v87[8] = 1;
    sub_1589170((__int64)v91, v87);
    if ( v88 != (char *)&v89 + 8 )
      operator delete(v88);
    sub_15F7200(v91);
    v8 = (__int64)v80;
  }
  if ( (*(_BYTE *)(v8 + 82) & 2) != 0 )
  {
    if ( *(char *)(a3 + 3) < 0 )
      v9 = *(_DWORD *)(a3 + 240);
    else
      v9 = *(_DWORD *)(a3 + 260);
    sub_168B9F0((__int64)v91, a1 + 1, v9, 0xFA0u, 0);
    if ( *(char *)(a3 + 3) < 0 )
      v10 = *(_DWORD *)(a3 + 240);
    else
      v10 = *(_DWORD *)(a3 + 260);
    a2 = v87;
    v87[20] = 0;
    BYTE8(v89) = 0;
    *(_QWORD *)&v87[12] = 0;
    v88 = (char *)&v89 + 8;
    *(_QWORD *)&v89 = 0;
    BYTE8(v90) = 0;
    *(_DWORD *)v87 = v10;
    *(_DWORD *)&v87[4] = v10;
    v87[8] = 1;
    sub_1589170((__int64)v91, v87);
    if ( v88 != (char *)&v89 + 8 )
      operator delete(v88);
    sub_15F7200(v91);
  }
  if ( (*(_BYTE *)(a3 + 4) & 4) != 0 )
  {
    v57 = *(_DWORD *)(a3 + 252);
    v58 = sub_15F0EF0((__int64)a1, v57, 0, a4, a5);
    sub_168B9F0((__int64)v91, a1 + 1, v57, 0x1600u, 0);
    sub_15F7200(v91);
    sub_168B9F0((__int64)v91, a1 + 1, v57, 0x17BDu, 0);
    a2 = v87;
    *(_QWORD *)&v87[12] = 0;
    v87[20] = 0;
    v88 = (char *)&v89 + 8;
    *(_QWORD *)&v89 = 0;
    BYTE8(v89) = 0;
    BYTE8(v90) = 0;
    *(_DWORD *)v87 = v57;
    *(_DWORD *)&v87[4] = v58;
    v87[8] = 1;
    sub_1589170((__int64)v91, v87);
    if ( v88 != (char *)&v89 + 8 )
      operator delete(v88);
    sub_15F7200(v91);
  }
  v11 = (__int64)v80;
  if ( (v80[84] & 3) != 0 )
  {
    sub_168B9F0((__int64)v91, a1 + 1, *(_DWORD *)(a3 + 272), 0xD99u, 0);
    LOBYTE(v85) = (v80[84] & 3) == 2;
    v55 = sub_1588420((__int64)v91, (unsigned __int8 *)&v85);
    a2 = v87;
    v87[20] = 0;
    v56 = *(_DWORD *)(a3 + 272);
    *(_QWORD *)&v87[12] = 0;
    v88 = (char *)&v89 + 8;
    *(_QWORD *)&v89 = 0;
    BYTE8(v89) = 0;
    BYTE8(v90) = 0;
    *(_DWORD *)v87 = v56;
    *(_DWORD *)&v87[4] = v56;
    v87[8] = 1;
    sub_1589170(v55, v87);
    if ( v88 != (char *)&v89 + 8 )
      operator delete(v88);
    sub_15F7200(v91);
    v11 = (__int64)v80;
    v80[84] &= 0xFCu;
  }
  v12 = a1[29];
  if ( (*(_BYTE *)(v12 + 47) & 0x20) != 0 )
  {
    sub_168B9F0((__int64)v91, a1 + 1, *(_DWORD *)(v11 + 24), 0x1259u, 0);
    if ( (v80[29] & 1) == 0 )
    {
LABEL_25:
      v23 = 0;
LABEL_26:
      v87[0] = v23;
      sub_1588420((__int64)v91, v87);
LABEL_27:
      sub_15F7200(v91);
      sub_B88650((__int64)v80, 1);
      return;
    }
    v60 = sub_B8C3D0((__int64)v80, (__int64)(a1 + 1), v19, v20, v21, v22);
    v61 = *v60;
    v62 = *v60 + 8LL * *((unsigned int *)v60 + 2);
    if ( v61 >= v62 )
    {
      if ( v61 == v62 )
        goto LABEL_25;
      while ( *(_WORD *)(*(_QWORD *)v62 + 36LL) != 64 )
      {
        v62 += 8LL;
        if ( v61 == v62 )
          goto LABEL_25;
      }
    }
    else
    {
      v63 = v61;
      while ( 1 )
      {
        v61 = v63;
        if ( *(_WORD *)(*(_QWORD *)v63 + 36LL) == 64 )
          break;
        v63 += 8LL;
        if ( v62 == v63 )
          goto LABEL_25;
      }
    }
    v23 = v61 != v62;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(v12 + 89) & 1) != 0 )
    return;
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 25 > 1 )
    v13 = sub_F63050(v13, a2, v12, v7);
  v14 = a1[31];
  v15 = *(_WORD *)(v13 + 20) >> 2;
  if ( (v15 & 0x3F) != 0 )
  {
    v59 = sub_A74120(v14, v13, v15 & 0x3FC0);
    v16 = (__int64)v80;
    v13 = v59;
    *((_QWORD *)v80 + 6) = v59 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = a1[31];
  }
  else
  {
    v16 = (__int64)v80;
  }
  v17 = a1[29];
  if ( (*(_BYTE *)(v17 + 4) & 4) == 0 || (*(_BYTE *)(v17 + 1) & 8) != 0 )
  {
    v24 = *(_QWORD *)(v14 + 18720);
    v25 = *(_QWORD *)&byte_8[*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v25 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v25 | (unsigned __int8)*(_QWORD *)(v13 + 24)) & 7) == (*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v24) & 7) )
    {
      *(_BYTE *)(v16 + 83) |= 0x20u;
      if ( !sub_B8DA40(v16) )
        goto LABEL_37;
    }
    else
    {
      v26 = sub_B77620(v16);
      v27 = v26;
      v28 = v26;
      v29 = sub_B72FF0((__int64)v80);
      v30 = HIDWORD(v28);
      sub_168B9F0((__int64)v91, a1 + 1, v29, 0x101Fu, 0);
      if ( v27 && v30 )
      {
        v72 = j__strlen("int");
        v85 = __PAIR64__(v30, v27);
        v86 = 1;
        sub_179D680((__int64)v87, __SPAIR64__(v30, v27), 1, "int", v72);
      }
      else
      {
        v89 = 0;
        v88 = (char *)&v89 + 8;
        BYTE8(v89) = 0;
        memset(v87, 0, sizeof(v87));
        v90 = 0;
      }
      sub_1589170((__int64)v91, v87);
      if ( v88 != (char *)&v89 + 8 )
        operator delete(v88);
      sub_15F7200(v91);
      sub_B88650((__int64)v80, 1);
      if ( !sub_B8DA40((__int64)v80) )
        goto LABEL_37;
    }
    v68 = sub_B72FF0((__int64)v80);
    sub_168B9F0((__int64)v91, a1 + 1, v68, 0x1BA8u, 0);
    v69 = j__strlen("extern \"C++\" ");
    sub_9EC740((__int64)v87, v68, "extern \"C++\" ", v69, 1);
LABEL_89:
    sub_1589170((__int64)v91, v87);
    if ( v88 != (char *)&v89 + 8 )
      operator delete(v88);
    sub_15F7200(v91);
    goto LABEL_37;
  }
  if ( sub_179A7E0(*(_QWORD *)(v13 + 24), *(_QWORD *)(v14 + 18720)) )
  {
    *(_BYTE *)(v18 + 83) |= 0x20u;
    goto LABEL_37;
  }
  v73 = sub_B72FF0(v18);
  sub_168B9F0((__int64)v91, a1 + 1, v73, 0x15E2u, 0);
  sub_15F7200(v91);
  v74 = sub_B77620((__int64)v80);
  v75 = v74;
  v76 = HIDWORD(v74);
  if ( (_DWORD)v74 && v76 )
  {
    sub_168B9F0((__int64)v91, a1 + 1, v74, 0x17BCu, 0);
    v77 = j__strlen("int");
    v83 = __PAIR64__(v76, v75);
    v84 = 1;
    sub_179D680((__int64)v87, __SPAIR64__(v76, v75), 1, "int", v77);
    goto LABEL_89;
  }
LABEL_37:
  if ( *(_BYTE *)(v13 + 16) == 25 )
    return;
  v31 = *(unsigned __int16 *)(v13 + 22);
  v32 = *(char *)(v13 + 19) < 0;
  v81 = v31;
  v33 = v31;
  if ( v32 )
  {
    sub_168B9F0((__int64)v91, a1 + 1, *((_DWORD *)v80 + 6), 0x165Cu, 0);
    sub_15F7200(v91);
    v33 = v81;
  }
  if ( v33 != 4
    || (v34 = a1[31], v70 = *(unsigned int *)(*(_QWORD *)(v34 + 17448) + 260LL), (unsigned int)v70 > 0x1F)
    || (v71 = 4160750114LL, !_bittest64(&v71, v70)) )
  {
    if ( v31 > 3 )
    {
      sub_168B9F0((__int64)v91, a1 + 1, *((_DWORD *)v80 + 6), 0x1020u, 0);
      sub_1588370((__int64)v91, &v81);
      sub_15F7200(v91);
      sub_B88650((__int64)v80, 1);
      v81 = 3;
    }
    v34 = a1[31];
  }
  v35 = sub_A70010(v34, *(_QWORD *)(v34 + 18648));
  v36 = sub_A70010(v34, v35);
  v37 = v81;
  v82 = 0;
  v38 = (void *)v36;
  v39 = *(_QWORD *)(a1[31] + 18720);
  *(_QWORD *)&v87[8] = v38;
  *(_QWORD *)&v87[16] = v38;
  *(_QWORD *)v87 = v39;
  v88 = v38;
  if ( !v81 )
  {
LABEL_94:
    v64 = (__int64)v80;
    v65 = v80[28];
    goto LABEL_80;
  }
  v40 = 0;
  do
  {
    v48 = *(_QWORD *)(v13 + 8LL * v40 + 48);
    v49 = v48 & 0xFFFFFFFFFFFFFFF0LL;
    v51 = (_QWORD *)(*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *v51 != *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)&v87[8 * v40] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    {
      if ( v38 != *(void **)&v87[8 * v40] )
        goto LABEL_52;
      v50 = *(_QWORD *)(v13 + 8LL * v40 + 48) & 7LL;
      v52 = v50;
      if ( (v48 & 8) != 0 )
      {
        v52 = *(__int64 *)((char *)&qword_18 + (v48 & 0xFFFFFFFFFFFFFFF0LL)) | v50;
        v49 = *(_QWORD *)v49;
      }
      if ( *(_BYTE *)(v49 + 16) != 42 )
      {
        v78 = v52;
        v53 = *(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v53 + 16) != 42 )
          goto LABEL_52;
        v49 = sub_F63050(v49, v51, v52, v53);
        v52 = v78;
        if ( !v49 )
          goto LABEL_52;
      }
      v41 = *(_QWORD *)(v49 + 32);
      v42 = v52 | v41 & 7;
      if ( (v41 & 8) != 0 )
      {
        v67 = (unsigned __int64 *)(v41 & 0xFFFFFFFFFFFFFFF0LL);
        v42 |= v67[3];
        v43 = *v67;
      }
      else
      {
        v43 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      }
      if ( *(_BYTE *)(v43 + 16) != 42 )
      {
        v79 = v42;
        v66 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v66 + 16) != 42 )
          goto LABEL_52;
        v43 = sub_F63050(v43, v51, v66, v42);
        v42 = v79;
        if ( !v43 )
          goto LABEL_52;
      }
      v44 = *(_QWORD *)(v43 + 32);
      v45 = v42 | v44 & 7;
      if ( (v44 & 8) != 0 )
      {
        v46 = (__int64 *)(v44 & 0xFFFFFFFFFFFFFFF0LL);
        v45 |= v46[3];
        v44 = *v46;
      }
      if ( *(_QWORD *)&byte_8[v44 & 0xFFFFFFFFFFFFFFF0LL] != (*(_QWORD *)&byte_8[*(_QWORD *)(a1[31] + 18648)
                                                                               & 0xFFFFFFFFFFFFFFF0LL]
                                                            & 0xFFFFFFFFFFFFFFF8LL
                                                            | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(a1[31] + 18648)
                                                                                                 & 0xFFFFFFFFFFFFFFF0LL]
                                                             | (unsigned __int8)*(_QWORD *)(a1[31] + 18648))
                                                            & 7)
        || (v45 & 0xFFFFFFFFFFFFFFFELL) != 0 )
      {
LABEL_52:
        sub_168B9F0((__int64)v91, a1 + 1, *((_DWORD *)v80 + 6), 0x101Du, 0);
        v47 = sub_1588370((__int64)v91, &v82);
        sub_1605D30(v47, (__int64 *)&v87[8 * v82]);
        sub_15F7200(v91);
        sub_B88650((__int64)v80, 1);
      }
      v37 = v81;
      v40 = v82;
    }
    v82 = ++v40;
  }
  while ( v40 < v37 );
  v64 = (__int64)v80;
  v65 = v80[28];
  if ( v37 == 1 )
  {
    if ( v65 < 0 )
      return;
    sub_168B9F0((__int64)v91, a1 + 1, *((_DWORD *)v80 + 6), 0x1BA9u, 0);
    sub_15F7200(v91);
    goto LABEL_94;
  }
LABEL_80:
  if ( v65 >= 0 && sub_B77A30(v64) )
  {
    sub_168B9F0((__int64)v91, a1 + 1, *((_DWORD *)v80 + 6), 0x1021u, 0);
    sub_1795A40((__int64)v91, (__int64 *)&v80);
    goto LABEL_27;
  }
}
