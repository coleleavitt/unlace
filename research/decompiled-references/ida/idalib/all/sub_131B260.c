int __fastcall sub_131B260(char *a1, void (__fastcall *a2)(__int64, _QWORD *), __int64 a3)
{
  char v5; // al
  void **v6; // r14
  void **v7; // r15
  void **v8; // r14
  void **v9; // r15
  void **v10; // r14
  void **v11; // r15
  void **v12; // rax
  char v13; // al
  void **v14; // r14
  void **v15; // r15
  void **v16; // r14
  void **v17; // r15
  void **v18; // r14
  void **v19; // r15
  int v20; // ecx
  char v21; // al
  void *v22; // rax
  void *v23; // rax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  char v27; // al
  int v28; // ecx
  int v29; // ecx
  char v30; // al
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  __m128i *v33; // rcx
  bool v34; // al
  __m128i *v35; // rcx
  void *v36; // rax
  int v37; // ecx
  int v38; // ecx
  char v39; // al
  char *v40; // rsi
  char *i; // r15
  unsigned __int8 v42; // r14
  __int64 v43; // rax
  __int64 v44; // r14
  __int64 j; // r15
  __int64 *v46; // r15
  __int64 *v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r14
  __int64 v53; // r15
  void *v54; // rax
  void *v55; // rax
  void *v56; // rax
  void *v57; // rax
  void *v58; // rax
  void *v59; // rax
  void *v60; // rax
  void *v61; // rax
  void *v62; // rax
  char *v64; // [rsp+0h] [rbp-D8h]
  char *v65; // [rsp+8h] [rbp-D0h]
  char v66; // [rsp+10h] [rbp-C8h]
  char v67; // [rsp+10h] [rbp-C8h]
  void *v68; // [rsp+10h] [rbp-C8h]
  char *v69; // [rsp+10h] [rbp-C8h]
  __m128i *v70; // [rsp+18h] [rbp-C0h]
  char v71[8]; // [rsp+28h] [rbp-B0h] BYREF
  void *v72[2]; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v73; // [rsp+40h] [rbp-98h] BYREF
  void *v74; // [rsp+50h] [rbp-88h] BYREF
  void **v75; // [rsp+58h] [rbp-80h]
  __m128i v76; // [rsp+60h] [rbp-78h] BYREF
  void *v77[2]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v78[2]; // [rsp+80h] [rbp-58h] BYREF
  __int16 v79; // [rsp+90h] [rbp-48h]

  sub_C23620((__int64)v72, (__int64 *)a1 + 30);
  *(_OWORD *)v77 = 0;
  v74 = v72[0];
  v78[0] = 0;
  v75 = (void **)v72[1];
  *(_OWORD *)v72 = 0;
  v76.m128i_i64[0] = v73.m128i_i64[0];
  v73.m128i_i64[0] = 0;
  sub_12FD200((unsigned __int64 **)v77, (__int64)v71, (__int64)v71);
  v5 = sub_130B900((__int64 *)&v74, (__int64 *)v77);
  v6 = (void **)v77[1];
  v7 = (void **)v77[0];
  v66 = v5;
  if ( v77[1] != v77[0] )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v7 == v6 )
          goto LABEL_4;
      }
      v7 += 4;
    }
    while ( v6 != v7 );
LABEL_4:
    v7 = (void **)v77[0];
  }
  if ( v7 )
    operator delete(v7);
  if ( !v66 )
    sub_12FDB00((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 61569, &v74);
  v8 = v75;
  v9 = (void **)v74;
  if ( v75 != v74 )
  {
    do
    {
      while ( *v9 != v9 + 2 )
      {
        operator delete(*v9);
        v9 += 4;
        if ( v8 == v9 )
          goto LABEL_12;
      }
      v9 += 4;
    }
    while ( v8 != v9 );
LABEL_12:
    v9 = (void **)v74;
  }
  if ( v9 )
    operator delete(v9);
  v10 = (void **)v72[1];
  v11 = (void **)v72[0];
  if ( v72[1] != v72[0] )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v11 == v10 )
          goto LABEL_18;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_18:
    v11 = (void **)v72[0];
  }
  if ( v11 )
    operator delete(v11);
  sub_C23620((__int64)v72, (__int64 *)a1 + 21);
  v78[0] = 0;
  v74 = v72[0];
  v12 = (void **)v72[1];
  *(_OWORD *)v72 = 0;
  v75 = v12;
  *(_OWORD *)v77 = 0;
  v76.m128i_i64[0] = v73.m128i_i64[0];
  v73.m128i_i64[0] = 0;
  sub_12FD200((unsigned __int64 **)v77, (__int64)v71, (__int64)v71);
  v13 = sub_130B900((__int64 *)&v74, (__int64 *)v77);
  v14 = (void **)v77[1];
  v15 = (void **)v77[0];
  v67 = v13;
  if ( v77[1] != v77[0] )
  {
    do
    {
      while ( *v15 != v15 + 2 )
      {
        operator delete(*v15);
        v15 += 4;
        if ( v15 == v14 )
          goto LABEL_24;
      }
      v15 += 4;
    }
    while ( v14 != v15 );
LABEL_24:
    v15 = (void **)v77[0];
  }
  if ( v15 )
    operator delete(v15);
  if ( !v67 )
    sub_130CE90((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 61632, (__int64 *)&v74);
  v16 = v75;
  v17 = (void **)v74;
  if ( v75 != v74 )
  {
    do
    {
      while ( *v17 != v17 + 2 )
      {
        operator delete(*v17);
        v17 += 4;
        if ( v17 == v16 )
          goto LABEL_32;
      }
      v17 += 4;
    }
    while ( v16 != v17 );
LABEL_32:
    v17 = (void **)v74;
  }
  if ( v17 )
    operator delete(v17);
  v18 = (void **)v72[1];
  v19 = (void **)v72[0];
  if ( v72[1] != v72[0] )
  {
    do
    {
      while ( *v19 != v19 + 2 )
      {
        operator delete(*v19);
        v19 += 4;
        if ( v18 == v19 )
          goto LABEL_38;
      }
      v19 += 4;
    }
    while ( v18 != v19 );
LABEL_38:
    v19 = (void **)v72[0];
  }
  if ( v19 )
    operator delete(v19);
  if ( (a1[1] & 2) == 0 )
  {
    LOBYTE(v77[0]) = 0;
    sub_12FD320((__int64)v77, a2, a3, 19641, 0);
  }
  if ( (a1[2] & 8) != 0 )
  {
    v62 = (void *)j__strlen("-fansi-escape-codes");
    v79 = 261;
    v77[0] = (void *)"-fansi-escape-codes";
    v77[1] = v62;
    a2(a3, v77);
  }
  v20 = *((_DWORD *)a1 + 4);
  if ( v20 != 10 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 8990, v20);
  v21 = a1[1];
  if ( (v21 & 4) == 0 )
  {
    v22 = (void *)j__strlen("-fno-diagnostics-fixit-info");
    v79 = 261;
    v77[0] = (void *)"-fno-diagnostics-fixit-info";
    v77[1] = v22;
    a2(a3, v77);
    v21 = a1[1];
  }
  if ( (v21 & 0x10) != 0 )
  {
    v61 = (void *)j__strlen("-fdiagnostics-parseable-fixits");
    v77[0] = (void *)"-fdiagnostics-parseable-fixits";
    v77[1] = v61;
    v79 = 261;
    a2(a3, v77);
    v21 = a1[1];
  }
  if ( (v21 & 8) != 0 )
  {
    v60 = (void *)j__strlen("-fdiagnostics-print-source-range-info");
    v77[0] = (void *)"-fdiagnostics-print-source-range-info";
    v77[1] = v60;
    v79 = 261;
    a2(a3, v77);
    v21 = a1[1];
  }
  if ( (v21 & 0x40) == 0 )
  {
    LOBYTE(v77[0]) = 0;
    sub_12FD320((__int64)v77, a2, a3, 20770, 0);
    v21 = a1[1];
  }
  if ( v21 < 0 )
  {
    LOBYTE(v77[0]) = 1;
    sub_12FD380((__int64)v77, a2, a3, 11103, 1);
    if ( a1[1] < 0 )
    {
      LOBYTE(v77[0]) = 0;
      sub_12FD320((__int64)v77, a2, a3, 20729, 1);
    }
  }
  if ( (a1[2] & 0x40) != 0 )
  {
    v59 = (void *)j__strlen("-fdiagnostics-show-template-tree");
    v77[0] = (void *)"-fdiagnostics-show-template-tree";
    v79 = 261;
    v77[1] = v59;
    a2(a3, v77);
  }
  if ( (a1[40] & 1) != 0 )
  {
    LOBYTE(v77[0]) = 1;
    sub_12FD380((__int64)v77, a2, a3, 34979, 1);
  }
  if ( (a1[2] & 0x20) == 0 )
  {
    v23 = (void *)j__strlen("-fno-elide-type");
    v77[0] = (void *)"-fno-elide-type";
    v79 = 261;
    v77[1] = v23;
    a2(a3, v77);
  }
  v24 = *((_DWORD *)a1 + 2);
  if ( v24 != 6 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 16641, v24);
  v25 = *((_DWORD *)a1 + 6);
  if ( v25 != 16 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 8424, v25);
  v26 = *((_DWORD *)a1 + 9);
  if ( v26 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 17003, v26);
  if ( (a1[1] & 1) != 0 )
  {
    v58 = (void *)j__strlen("-fdiagnostics-absolute-paths");
    v79 = 261;
    v77[0] = (void *)"-fdiagnostics-absolute-paths";
    v77[1] = v58;
    a2(a3, v77);
  }
  if ( (a1[28] & 1) == 0 )
  {
    LOBYTE(v77[0]) = 0;
    sub_12FD320((__int64)v77, a2, a3, 20694, 0);
  }
  if ( (a1[40] & 8) != 0 )
    sub_12FD720((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 37357, 0x15u, 1);
  v27 = *a1;
  if ( (*a1 & 0x20) == 0 )
  {
    LOBYTE(v77[0]) = 0;
    sub_12FD320((__int64)v77, a2, a3, 28130, 0);
    v27 = *a1;
  }
  if ( (v27 & 0x40) == 0 )
  {
    LOBYTE(v77[0]) = 0;
    sub_12FD320((__int64)v77, a2, a3, 28147, 0);
  }
  v28 = *((_DWORD *)a1 + 5);
  if ( v28 != 50 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 37685, v28);
  v29 = *((_DWORD *)a1 + 3);
  if ( v29 != 10 )
    sub_12FD440((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 38421, v29);
  v30 = *a1;
  if ( (*a1 & 8) != 0 )
  {
    v57 = (void *)j__strlen("-pedantic-errors");
    v79 = 261;
    v77[0] = (void *)"-pedantic-errors";
    v77[1] = v57;
    a2(a3, v77);
    v30 = *a1;
  }
  if ( (v30 & 4) != 0 )
  {
    v56 = (void *)j__strlen("-pedantic");
    v77[0] = (void *)"-pedantic";
    v77[1] = v56;
    v79 = 261;
    a2(a3, v77);
    v30 = *a1;
  }
  if ( (v30 & 1) != 0 )
  {
    v55 = (void *)j__strlen("-w");
    v77[0] = (void *)"-w";
    v79 = 261;
    v77[1] = v55;
    a2(a3, v77);
  }
  v31 = *((_BYTE **)a1 + 6);
  v32 = (__int64)&v31[*((_QWORD *)a1 + 7)];
  v72[0] = &v73;
  sub_12FAA20(v72, v31, v32);
  v33 = (__m128i *)v72[0];
  v74 = &v76;
  if ( v72[0] == &v73 )
  {
    v33 = &v76;
    v76 = _mm_load_si128(&v73);
  }
  else
  {
    v74 = v72[0];
    v76.m128i_i64[0] = v73.m128i_i64[0];
  }
  v70 = v33;
  v73.m128i_i8[0] = 0;
  v75 = (void **)v72[1];
  v68 = v72[1];
  v72[0] = &v73;
  v72[1] = nullptr;
  v77[0] = v78;
  v77[1] = nullptr;
  LOBYTE(v78[0]) = 0;
  v34 = sub_1302CC0((__int64)&v74, (__int64)v77);
  v35 = v70;
  if ( v34 )
  {
    sub_12FAA20(v77, v70, (__int64)v68 + (_QWORD)v70);
    sub_12FD520(a2, a3, 4804, (__int64)v77);
    if ( v77[0] != v78 )
      operator delete(v77[0]);
    v35 = (__m128i *)v74;
  }
  if ( v35 != &v76 )
    operator delete(v35);
  if ( v72[0] != &v73 )
    operator delete(v72[0]);
  if ( (((unsigned __int8)a1[40] >> 1) & 3) != 0 )
    sub_12FD670((__int64 (__fastcall *)(__int64, _BYTE **))a2, a3, 10800, 0x30u, ((unsigned __int8)a1[40] >> 1) & 3);
  if ( (a1[2] & 3) != 0 )
    sub_12FD670((__int64 (__fastcall *)(__int64, _BYTE **))a2, a3, 10987, 0x31u, a1[2] & 3);
  if ( (a1[1] & 0x20) == 0 )
  {
    v36 = (void *)j__strlen("-fno-diagnostics-use-presumed-location");
    v79 = 261;
    v77[0] = (void *)"-fno-diagnostics-use-presumed-location";
    v77[1] = v36;
    a2(a3, v77);
  }
  v37 = *((_DWORD *)a1 + 8);
  if ( v37 != 8 )
    sub_12FD4B0((__int64 (__fastcall *)(__int64, _DWORD *))a2, a3, 38411, v37);
  v38 = *((_DWORD *)a1 + 1);
  if ( v38 )
    sub_12FD4B0((__int64 (__fastcall *)(__int64, _DWORD *))a2, a3, 12154, v38);
  if ( (*a1 & 2) != 0 )
  {
    v54 = (void *)j__strlen("-Wno-rewrite-macros");
    v79 = 261;
    v77[0] = (void *)"-Wno-rewrite-macros";
    v77[1] = v54;
    a2(a3, v77);
  }
  if ( *((_QWORD *)a1 + 11) )
  {
    v77[0] = a1 + 80;
    v79 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xCB9u, (const __m128i *)v77);
  }
  v39 = a1[2];
  if ( (v39 & 4) != 0 )
  {
    sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0x1FCu);
    v39 = a1[2];
  }
  v64 = *((char **)a1 + 28);
  v40 = *((char **)a1 + 27);
  v69 = v40;
  if ( (v39 & 0x10) != 0 )
  {
    v50 = (v64 - v40) >> 7;
    v51 = (v64 - v40) >> 5;
    if ( v50 > 0 )
    {
      v52 = *((_QWORD *)a1 + 27);
      v65 = &v40[128 * v50];
      while ( sub_9B4AA0(v52, "expected") )
      {
        v53 = v52;
        v52 += 32;
        if ( !sub_9B4AA0(v52, "expected") )
          break;
        v52 = v53 + 64;
        if ( !sub_9B4AA0(v53 + 64, "expected") )
          break;
        v52 = v53 + 96;
        if ( !sub_9B4AA0(v53 + 96, "expected") )
          break;
        v52 = v53 + 128;
        if ( v65 == (char *)(v53 + 128) )
        {
          v51 = (__int64)&v64[-v52] >> 5;
          goto LABEL_194;
        }
      }
      goto LABEL_183;
    }
    v52 = *((_QWORD *)a1 + 27);
LABEL_194:
    if ( v51 != 2 )
    {
      if ( v51 != 3 )
      {
        if ( v51 != 1 )
          goto LABEL_112;
LABEL_197:
        if ( sub_9B4AA0(v52, "expected") )
          goto LABEL_112;
        goto LABEL_183;
      }
      if ( !sub_9B4AA0(v52, "expected") )
      {
LABEL_183:
        if ( v64 != (char *)v52 )
        {
          sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0xD36u);
          v69 = *((char **)a1 + 27);
          v64 = *((char **)a1 + 28);
        }
        goto LABEL_112;
      }
      v52 += 32;
    }
    if ( sub_9B4AA0(v52, "expected") )
    {
      v52 += 32;
      goto LABEL_197;
    }
    goto LABEL_183;
  }
LABEL_112:
  for ( i = v69; v64 != i; i += 32 )
  {
    while ( !sub_9B4AA0((__int64)i, "expected") )
    {
      i += 32;
      if ( v64 == i )
        goto LABEL_117;
    }
    v77[0] = i;
    v79 = 260;
    sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xD35u, (const __m128i *)v77);
  }
LABEL_117:
  v42 = (unsigned __int8)a1[40] >> 4;
  LODWORD(v43) = v42;
  if ( v42 )
  {
    if ( v42 == 15 )
    {
      LODWORD(v43) = sub_12FBD80((__int64 (__fastcall *)(__int64, _QWORD *))a2, a3, 0xD33u);
    }
    else
    {
      if ( (a1[40] & 0x10) != 0 )
      {
        v77[0] = "note";
        v79 = 259;
        LODWORD(v43) = sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xD32u, (const __m128i *)v77);
      }
      if ( (v42 & 2) != 0 )
      {
        v77[0] = "remark";
        v79 = 259;
        LODWORD(v43) = sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xD32u, (const __m128i *)v77);
      }
      if ( (v42 & 4) != 0 )
      {
        v79 = 259;
        v77[0] = "warning";
        LODWORD(v43) = sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xD32u, (const __m128i *)v77);
      }
      if ( (v42 & 8) != 0 )
      {
        v79 = 259;
        v77[0] = "error";
        LODWORD(v43) = sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xD32u, (const __m128i *)v77);
      }
    }
  }
  v44 = *((_QWORD *)a1 + 19);
  for ( j = *((_QWORD *)a1 + 18); v44 != j; j += 32 )
  {
    LODWORD(v43) = sub_9B4AA0(j, "undef-prefix");
    if ( (_DWORD)v43 )
    {
      LODWORD(v43) = sub_9B4AA0(j, "invalid-constexpr");
      if ( (_DWORD)v43 )
      {
        LODWORD(v43) = sub_9B4AA0(j, "no-invalid-constexpr");
        if ( (_DWORD)v43 )
        {
          v77[1] = &dword_0 + 2;
          v77[0] = "-W";
          v78[0] = j;
          v79 = 1029;
          LODWORD(v43) = ((__int64 (__fastcall *)(__int64, void **))a2)(a3, v77);
        }
      }
    }
  }
  v46 = *((__int64 **)a1 + 25);
  v47 = *((__int64 **)a1 + 24);
  if ( v47 != v46 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v48 = v47[1];
        v49 = *v47;
        if ( v48 != 4 )
          break;
        if ( *(_DWORD *)v49 != 1936941424 )
          goto LABEL_127;
LABEL_128:
        v47 += 4;
        if ( v46 == v47 )
          goto LABEL_135;
      }
      if ( v48 != 7 )
        break;
      if ( *(_DWORD *)v49 != 1882025838 || *(_WORD *)(v49 + 4) != 29537 || *(_BYTE *)(v49 + 6) != 115 )
        goto LABEL_127;
      v47 += 4;
      if ( v46 == v47 )
        goto LABEL_135;
    }
    switch ( v48 )
    {
      case 13LL:
        if ( *(_QWORD *)v49 == 0x616E612D73736170LL && *(_DWORD *)(v49 + 8) == 1769175404 && *(_BYTE *)(v49 + 12) == 115 )
          goto LABEL_128;
        break;
      case 16LL:
        v43 = *(_QWORD *)v49 ^ 0x2D737361702D6F6ELL;
        if ( !(v43 | *(_QWORD *)(v49 + 8) ^ 0x736973796C616E61LL) )
          goto LABEL_128;
        break;
      case 11LL:
        LODWORD(v43) = 1936941424;
        if ( *(_QWORD *)v49 == 0x73696D2D73736170LL && *(_WORD *)(v49 + 8) == 25971 && *(_BYTE *)(v49 + 10) == 100 )
          goto LABEL_128;
        break;
      default:
        if ( v48 == 14
          && *(_QWORD *)v49 == 0x2D737361702D6F6ELL
          && *(_DWORD *)(v49 + 8) == 1936943469
          && *(_WORD *)(v49 + 12) == 25701 )
        {
          goto LABEL_128;
        }
        break;
    }
LABEL_127:
    v78[0] = v47;
    v77[0] = "-R";
    v77[1] = &dword_0 + 2;
    v79 = 1029;
    LODWORD(v43) = ((__int64 (__fastcall *)(__int64, void **))a2)(a3, v77);
    goto LABEL_128;
  }
LABEL_135:
  if ( *((_QWORD *)a1 + 15) )
  {
    v79 = 260;
    v77[0] = a1 + 112;
    LODWORD(v43) = sub_12FD7D0((__int64 (__fastcall *)(__int64, __m128i *))a2, a3, 0xD52u, (const __m128i *)v77);
  }
  return v43;
}
