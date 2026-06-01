__int64 __fastcall sub_AC8B50(
        _QWORD *a1,
        void *a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        __int64 a8)
{
  _BYTE *v9; // r11
  char v10; // di
  char v11; // di
  __int64 *v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  __int64 v17; // r8
  _QWORD *v18; // r12
  __int64 *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r13
  _QWORD *v24; // r12
  __int64 v25; // r15
  __int64 v26; // r15
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // rax
  _QWORD *v36; // rdx
  _BYTE *v37; // rax
  int v38; // eax
  char *v39; // r12
  unsigned int v40; // r13d
  char *v41; // rbp
  void *v42; // rdi
  void *v43; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  unsigned __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // r15
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  char *v64; // r15
  __int64 v65; // r13
  unsigned __int64 v66; // r14
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 *v70; // r14
  __int64 *v71; // r15
  __int64 v72; // rax
  char v73; // dl
  __int64 v74; // rbx
  __int64 v75; // rbp
  __int64 v76; // rdx
  char *v77; // r13
  __int64 v78; // rbp
  unsigned __int64 v79; // r15
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int8 v83; // [rsp+8h] [rbp-BB0h]
  __int64 v84; // [rsp+10h] [rbp-BA8h]
  unsigned __int8 v85; // [rsp+18h] [rbp-BA0h]
  __int64 v86; // [rsp+20h] [rbp-B98h]
  __int64 v87; // [rsp+28h] [rbp-B90h]
  __int64 *v88; // [rsp+28h] [rbp-B90h]
  char v89; // [rsp+28h] [rbp-B90h]
  char v90; // [rsp+28h] [rbp-B90h]
  __int64 v91; // [rsp+28h] [rbp-B90h]
  unsigned __int8 v92; // [rsp+38h] [rbp-B80h]
  unsigned __int8 v93; // [rsp+40h] [rbp-B78h]
  __int64 v94; // [rsp+48h] [rbp-B70h]
  __int64 v95; // [rsp+50h] [rbp-B68h]
  unsigned __int64 *v96; // [rsp+58h] [rbp-B60h]
  void *v97; // [rsp+60h] [rbp-B58h] BYREF
  unsigned int v98; // [rsp+68h] [rbp-B50h]
  unsigned int v99; // [rsp+6Ch] [rbp-B4Ch]
  _QWORD v100[2]; // [rsp+70h] [rbp-B48h] BYREF
  void *v101; // [rsp+80h] [rbp-B38h] BYREF
  __int64 v102; // [rsp+88h] [rbp-B30h]
  _BYTE v103[16]; // [rsp+90h] [rbp-B28h] BYREF
  _QWORD *v104; // [rsp+A0h] [rbp-B18h] BYREF
  unsigned __int64 v105; // [rsp+A8h] [rbp-B10h]
  __int64 v106; // [rsp+B0h] [rbp-B08h]
  char v107; // [rsp+B8h] [rbp-B00h]
  char v108; // [rsp+B9h] [rbp-AFFh]
  char v109; // [rsp+BAh] [rbp-AFEh]
  unsigned __int64 v110; // [rsp+C0h] [rbp-AF8h]
  unsigned __int64 v111; // [rsp+C8h] [rbp-AF0h]
  __int64 v112; // [rsp+D0h] [rbp-AE8h]
  char v113; // [rsp+D8h] [rbp-AE0h]
  void *ptr; // [rsp+E0h] [rbp-AD8h]
  unsigned int v115; // [rsp+E8h] [rbp-AD0h]
  int v116; // [rsp+ECh] [rbp-ACCh]
  _QWORD v117[2]; // [rsp+F0h] [rbp-AC8h] BYREF
  __int128 v118; // [rsp+100h] [rbp-AB8h]
  __int64 v119; // [rsp+110h] [rbp-AA8h]
  int v120; // [rsp+118h] [rbp-AA0h]
  char v121; // [rsp+11Ch] [rbp-A9Ch]
  char v122; // [rsp+120h] [rbp-A98h]
  __int128 v123; // [rsp+128h] [rbp-A90h]
  __int64 v124; // [rsp+138h] [rbp-A80h]
  __int16 v125; // [rsp+140h] [rbp-A78h]
  char v126; // [rsp+142h] [rbp-A76h]
  __int128 v127; // [rsp+148h] [rbp-A70h]
  __int64 v128; // [rsp+158h] [rbp-A60h]
  int v129; // [rsp+160h] [rbp-A58h]
  char v130; // [rsp+164h] [rbp-A54h]
  char v131; // [rsp+168h] [rbp-A50h]
  __int128 v132; // [rsp+170h] [rbp-A48h]
  __int64 v133; // [rsp+180h] [rbp-A38h]
  __int16 v134; // [rsp+188h] [rbp-A30h]
  char v135; // [rsp+18Ah] [rbp-A2Eh]
  char v136; // [rsp+190h] [rbp-A28h]
  _BYTE v137[12]; // [rsp+B70h] [rbp-48h]

  v9 = (_BYTE *)a1[290];
  v104 = a1;
  if ( a4 )
    a5 = a4;
  v10 = (v9[1] >> 2) & 2;
  BYTE1(v105) = v10 | BYTE1(v105) & 0xFD;
  BYTE2(v105) = (v9[3] >> 2 << 7) | BYTE2(v105) & 0x7F;
  BYTE3(v105) = ((((v9[1] >> 4) ^ 1) & 1) << 6)
              | (32 * (((v9[1] >> 3) ^ 1) & 1))
              | (4 * (*v9 & 1)) & 0x87
              | v10 & 0x83
              | ((*(_WORD *)v9 & 0x1008) != 0)
              | BYTE3(v105) & 0x80
              | (v9[1] >> 1) & 8
              | (8 * *v9) & 0x10;
  BYTE4(v105) = (4 * ((*(_DWORD *)v9 & 0x10000080) == 128)) | (v9[3] >> 2) & 2 | BYTE4(v105) & 0xF9;
  v11 = v9[89] << 7;
  v106 = 0;
  v107 = a6;
  v108 = a4;
  BYTE5(v105) = v11 | BYTE5(v105) & 0x7F;
  v105 = v105 & 0xFFFF80067F800200LL | 0x660800442002LL;
  v109 = a7;
  if ( a5 )
  {
    v110 = (unsigned __int64)a2;
    v111 = a3;
  }
  else
  {
    v110 = a3;
    v111 = (unsigned __int64)a2;
  }
  v113 = 0;
  v112 = a8;
  ptr = v117;
  *(_QWORD *)v137 = 0x100000000LL;
  v116 = 16;
  *(_DWORD *)&v137[8] = 0;
  v12 = (__int64 *)(v110 & 0xFFFFFFFFFFFFFFF0LL);
  v118 = 0;
  v117[0] = 0;
  v117[1] = 0;
  v120 = 1;
  v119 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v129 = 1;
  v128 = 0;
  v130 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v115 = 1;
  v92 = v110;
  v13 = *(_QWORD *)&byte_8[v110 & 0xFFFFFFFFFFFFFFF0LL];
  v83 = v13;
  v84 = 0;
  if ( (v13 & 8) != 0 )
    v84 = *(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
  v86 = 0;
  v93 = v111;
  v14 = *(_QWORD *)&byte_8[v111 & 0xFFFFFFFFFFFFFFF0LL];
  v85 = v14;
  if ( (v14 & 8) != 0 )
    v86 = *(__int64 *)((char *)&qword_18 + (v14 & 0xFFFFFFFFFFFFFFF0LL));
  v16 = sub_F6A860(*v12);
  if ( !v16 )
  {
    v53 = *v12;
    if ( *(_BYTE *)(*v12 + 16) == 46 )
      goto LABEL_43;
    v56 = *(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v57 = *(unsigned __int8 *)(v56 + 16);
    if ( (_BYTE)v57 != 46 )
      goto LABEL_47;
    v53 = sub_F63050(*v12, a2, v57, v15);
    if ( v53 )
    {
LABEL_43:
      if ( (*(_BYTE *)(v53 + 18) & 8) != 0 )
        v54 = *(_QWORD *)(v53 + 48);
      else
        v54 = *(_QWORD *)(v53 + 8);
      v12 = (__int64 *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v55 = *(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v56 = *(_QWORD *)v55;
    v57 = *(unsigned __int8 *)(*(_QWORD *)v55 + 16LL);
LABEL_47:
    if ( (_BYTE)v57 == 48 && (v58 = sub_F60F10(v56, a2, v57, v15, v17), (*(_BYTE *)(v58 + 28) & 0x7Fu) - 60 <= 1) )
    {
      v76 = *v12;
      v77 = *(char **)(v58 + 168);
      v78 = *(unsigned int *)v77;
      v79 = *(_QWORD *)&byte_8[v76 & 0xFFFFFFFFFFFFFFF0LL];
      v80 = sub_BBF290(v58);
      sub_F22AA0(&v101, v80);
      a2 = v101;
      v81 = sub_AB7CB0(a1, (__int64)v101, v77 + 8, v78, nullptr, 0, v79);
      v82 = sub_F6A860(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL));
      v18 = v104;
      v16 = v82;
      v19 = (__int64 *)(v111 & 0xFFFFFFFFFFFFFFF0LL);
      v23 = sub_F6A860(*(_QWORD *)(v111 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v23 )
      {
        if ( !v16 )
          goto LABEL_17;
        goto LABEL_11;
      }
    }
    else
    {
      v18 = v104;
      v19 = (__int64 *)(v111 & 0xFFFFFFFFFFFFFFF0LL);
      v16 = sub_F6A860(*(_QWORD *)(v111 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v16 )
        goto LABEL_17;
    }
LABEL_50:
    v59 = *v19;
    if ( *(_BYTE *)(*v19 + 16) == 46
      || (v20 = *(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v20 + 16) == 46)
      && (v59 = sub_F63050(*v19, a2, v20, v21)) != 0 )
    {
      if ( (*(_BYTE *)(v59 + 18) & 8) != 0 )
        v60 = *(_QWORD *)(v59 + 48);
      else
        v60 = *(_QWORD *)(v59 + 8);
      v19 = (__int64 *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v61 = (_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v61 + 16LL) != 48 )
      goto LABEL_17;
    v62 = sub_F60F10(*v61, a2, v20, v21, v22);
    if ( (*(_BYTE *)(v62 + 28) & 0x7Fu) - 60 > 1 )
      goto LABEL_17;
    v63 = *v19;
    v64 = *(char **)(v62 + 168);
    v65 = *(unsigned int *)v64;
    v66 = *(_QWORD *)&byte_8[v63 & 0xFFFFFFFFFFFFFFF0LL];
    v67 = sub_BBF290(v62);
    sub_F22AA0(&v101, v67);
    v68 = sub_AB7CB0(v18, (__int64)v101, v64 + 8, v65, nullptr, 0, v66);
    v69 = sub_F6A860(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL));
    v23 = v69;
    if ( !v16 || !v69 )
      goto LABEL_17;
    goto LABEL_11;
  }
  v18 = v104;
  v19 = (__int64 *)(v111 & 0xFFFFFFFFFFFFFFF0LL);
  v23 = sub_F6A860(*(_QWORD *)(v111 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v23 )
    goto LABEL_50;
LABEL_11:
  v24 = v104;
  v25 = sub_AB62A0(v104, *(_QWORD *)(v23 + 32), 1u);
  if ( sub_AB62A0(v24, *(_QWORD *)(v16 + 32), 1u) == v25 )
    goto LABEL_12;
  v99 = 1;
  v97 = v100;
  v100[0] = v16;
  v101 = v103;
  v102 = 0x100000000LL;
  v98 = 1;
  if ( (*(_BYTE *)(v16 + 18) & 8) != 0 )
  {
    v45 = v16;
    while ( 1 )
    {
      v46 = sub_F5E8A0(v45);
      v45 = sub_F6A860(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v45 )
        break;
      v47 = v98 + 1LL;
      if ( v47 > v99 )
      {
        v91 = v45;
        sub_2237220(&v97, v100, v47, 8);
        v45 = v91;
        *((_QWORD *)v97 + v98++) = v91;
        if ( (*(_BYTE *)(v91 + 18) & 8) == 0 )
          break;
      }
      else
      {
        *((_QWORD *)v97 + v98++) = v45;
        if ( (*(_BYTE *)(v45 + 18) & 8) == 0 )
          break;
      }
    }
  }
  v48 = v23;
  while ( 1 )
  {
    v51 = (unsigned int)v102;
    v52 = (unsigned int)v102 + 1LL;
    if ( v52 > HIDWORD(v102) )
    {
      v87 = v48;
      sub_2237220(&v101, v103, v52, 8);
      v51 = (unsigned int)v102;
      v48 = v87;
    }
    *((_QWORD *)v101 + v51) = v48;
    v49 = (unsigned int)(v102 + 1);
    LODWORD(v102) = v102 + 1;
    if ( (*(_BYTE *)(v48 + 18) & 8) == 0 )
      break;
    v50 = sub_F5E8A0(v48);
    v48 = sub_F6A860(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL));
    if ( !v48 )
    {
      v49 = (unsigned int)v102;
      break;
    }
  }
  v96 = (unsigned __int64 *)v97;
  v70 = (unsigned __int64 *)((char *)v97 + 8 * v98);
  v71 = (__int64 *)((char *)v101 + 8 * v49);
  v88 = (__int64 *)v101;
  v95 = *(v70 - 1);
  v94 = sub_AB62A0(v24, *(_QWORD *)(*(v71 - 1) + 32), 1u);
  v72 = sub_AB62A0(v24, *(_QWORD *)(v95 + 32), 1u);
  v73 = 0;
  if ( v72 == v94 )
  {
    if ( v88 != v71 && v96 != v70 )
    {
      do
      {
        v74 = *(v70 - 1);
        v75 = sub_AB62A0(v24, *(_QWORD *)(*(v71 - 1) + 32), 1u);
        if ( sub_AB62A0(v24, *(_QWORD *)(v74 + 32), 1u) != v75 )
          break;
        --v70;
        --v71;
      }
      while ( v96 != v70 && v88 != v71 );
    }
    v16 = *v70;
    v23 = *v71;
    v73 = 1;
  }
  if ( v101 != v103 )
  {
    v89 = v73;
    free(v101);
    v73 = v89;
  }
  if ( v97 != v100 )
  {
    v90 = v73;
    free(v97);
    v73 = v90;
  }
  if ( v73 )
  {
LABEL_12:
    v26 = v84 | (v83 | v92) & 7;
    v27 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL];
    v28 = v27 & 7;
    if ( (v27 & 8) != 0
      && (v28 |= *(__int64 *)((char *)&qword_18 + (v27 & 0xFFFFFFFFFFFFFFF0LL)), (v28 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v29 = ~(v28 & 7) & v26;
      if ( ((v29 >> 4) & 3) == ((v28 >> 4) & 3) )
        v29 &= 0xFFFFFFFFFFFFFFCFLL;
      if ( ((v29 >> 6) & 7) == ((v28 >> 6) & 7) )
        v29 &= 0xFFFFFFFFFFFFFE3FLL;
      if ( (unsigned int)v29 >> 9 == (unsigned int)v28 >> 9 )
        v29 &= 0xFFFFFFFF000001FFLL;
      if ( HIDWORD(v28) == HIDWORD(v29) )
        v29 = (unsigned int)v29;
    }
    else
    {
      v29 = ~v28 & v26;
    }
    v30 = v86 | (v85 | v93) & 7;
    v31 = *(_QWORD *)&byte_8[v23 & 0xFFFFFFFFFFFFFFF0LL];
    v32 = v31 & 7;
    if ( (v31 & 8) != 0
      && (v32 |= *(__int64 *)((char *)&qword_18 + (v31 & 0xFFFFFFFFFFFFFFF0LL)), (v32 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v33 = ~(v32 & 7) & v30;
      if ( ((v33 >> 4) & 3) == ((v32 >> 4) & 3) )
        v33 &= 0xFFFFFFFFFFFFFFCFLL;
      if ( ((v33 >> 6) & 7) == ((v32 >> 6) & 7) )
        v33 &= 0xFFFFFFFFFFFFFE3FLL;
      if ( (unsigned int)v33 >> 9 == (unsigned int)v32 >> 9 )
        v33 &= 0xFFFFFFFF000001FFLL;
      if ( HIDWORD(v32) == HIDWORD(v33) )
        v33 = (unsigned int)v33;
    }
    else
    {
      v33 = ~v32 & v30;
    }
    v101 = *(void **)(v23 + 32);
    v34 = sub_F22BD0(&v101, 1);
    v97 = *(void **)(v16 + 32);
    v35 = sub_F22BD0(&v97, 1);
    *((_DWORD *)ptr + 42 * *(unsigned int *)v137) = 1;
    *((_QWORD *)ptr + 21 * *(unsigned int *)v137 + 8) = v35;
    v36 = ptr;
    *((_QWORD *)ptr + 21 * *(unsigned int *)v137 + 17) = v34;
    v36[21 * *(unsigned int *)v137 + 3] = v29;
    v37 = ptr;
    *((_QWORD *)ptr + 21 * *(unsigned int *)v137 + 12) = v33;
    v37[168 * *(unsigned int *)v137 + 82] = 0;
    v37[168 * *(unsigned int *)v137 + 154] = 0;
    sub_AC07D0(&v104, v16, v23);
  }
LABEL_17:
  v38 = *(_DWORD *)&v137[4];
  v39 = (char *)ptr;
  v40 = 0;
  *(_QWORD *)&v137[4] = 0;
  *(_DWORD *)v137 = v38;
  if ( *(_DWORD *)ptr )
  {
    v40 = 1;
    sub_AC7360((__int64)&v104, 1u);
    v39 = (char *)ptr;
  }
  v41 = &v39[168 * v115];
  if ( v41 != v39 )
  {
    do
    {
      v41 -= 168;
      if ( *((_DWORD *)v41 + 28) > 0x40u )
      {
        v42 = *((void **)v41 + 13);
        if ( v42 )
          operator delete[](v42);
      }
      if ( *((_DWORD *)v41 + 10) > 0x40u )
      {
        v43 = *((void **)v41 + 4);
        if ( v43 )
          operator delete[](v43);
      }
    }
    while ( v41 != v39 );
    v39 = (char *)ptr;
  }
  if ( v39 != (char *)v117 )
    free(v39);
  return v40;
}
