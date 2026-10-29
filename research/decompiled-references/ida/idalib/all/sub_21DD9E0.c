char *__fastcall sub_21DD9E0(__int64 a1)
{
  char *v1; // rax
  char *v2; // rbp
  char *v3; // r12
  char *v5; // r13
  size_t v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  signed __int64 v10; // r14
  __int64 v11; // r15
  char *v12; // rax
  __int64 v13; // rax
  void *v14; // rdi
  __int64 *v15; // rax
  char *v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  size_t v21; // rax
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  size_t v26; // rax
  size_t v27; // rax
  size_t v28; // rax
  char *v29; // r14
  char v30; // dl
  char *v31; // rcx
  char v32; // dl
  char v33; // dl
  char v34; // dl
  char v35; // dl
  char v36; // dl
  char v37; // dl
  char v38; // dl
  char v39; // r8
  __int64 v40; // rbp
  char v41; // dl
  char *v42; // rdi
  _BYTE *v43; // rdx
  char v44; // dl
  char *v45; // rcx
  char v46; // dl
  char v47; // dl
  char v48; // dl
  char v49; // dl
  char v50; // dl
  char v51; // dl
  char v52; // dl
  char v53; // dl
  char v54; // dl
  char v55; // dl
  char v56; // dl
  char v57; // dl
  char v58; // dl
  char v59; // dl
  char v60; // dl
  char v61; // r8
  size_t v62; // rdi
  size_t v63; // rbp
  char *v64; // rax
  unsigned __int64 v65; // rbp
  char *v66; // rax
  char v67; // r8
  __int64 v68; // r14
  unsigned __int64 v69; // rax
  char v70; // dl
  char *v71; // rdx
  size_t v72; // r14
  char *v73; // r13
  char *v74; // rax
  char *v75; // rax
  char v76; // r8
  char v77; // dl
  size_t v78; // rdi
  size_t v79; // rbp
  size_t v80; // rdi
  size_t v81; // rbp
  size_t v82; // rax
  size_t v83; // rax
  char v84; // r8
  unsigned __int64 v85; // rax
  char v86; // dl
  unsigned __int64 v87; // rax
  char v88; // dl
  char v89; // dl
  char v90; // dl
  char v91; // [rsp+8h] [rbp-F0h]
  char v92; // [rsp+8h] [rbp-F0h]
  char v93; // [rsp+8h] [rbp-F0h]
  char v94; // [rsp+8h] [rbp-F0h]
  char v95; // [rsp+8h] [rbp-F0h]
  char v96; // [rsp+17h] [rbp-E1h]
  __int64 v97; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+38h] [rbp-C0h]
  _BYTE v100[184]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( v2 == *(char **)a1 || *v1 != 76 )
    return nullptr;
  v5 = v1 + 1;
  *(_QWORD *)a1 = v1 + 1;
  if ( v1 + 1 != v2 )
  {
    v7 = v2 - v5;
    switch ( v1[1] )
    {
      case 'A':
        v65 = sub_21DFD40(a1);
        if ( !v65 )
          return nullptr;
        v75 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v75 != 69 )
          return nullptr;
        *(_QWORD *)a1 = v75 + 1;
        v76 = *(_BYTE *)(a1 + 937);
        ptr = v100;
        v68 = a1 + 904;
        v99 = 0x2000000000LL;
        v94 = v76;
        sub_21D0240((__int64)&ptr, 0x4Au, v65);
        v3 = (char *)sub_2223360(a1 + 904, &ptr, &v97, off_2BE9FD0);
        if ( v3 )
          goto LABEL_52;
        if ( !v94 )
          goto LABEL_99;
        v69 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        v77 = *(_BYTE *)(v69 + 18);
        v3 = (char *)(v69 + 8);
        *(_QWORD *)v69 = 0;
        *(_WORD *)(v69 + 16) = 16458;
        *(_BYTE *)(v69 + 18) = v77 & 0xF0 | 5;
        v71 = (char *)&unk_2BE8330;
        goto LABEL_115;
      case 'D':
        v3 = nullptr;
        v72 = j__strlen("Dn");
        if ( !sub_20D1BF0(v2 - v5, v5, v72, "Dn") )
          return v3;
        v73 = &v5[v72];
        *(_QWORD *)a1 = v73;
        if ( v2 != v73 && *v73 == 48 )
          *(_QWORD *)a1 = v73 + 1;
        v74 = *(char **)a1;
        if ( v2 == *(char **)a1 || *v74 != 69 )
          return nullptr;
        *(_QWORD *)a1 = v74 + 1;
        return (char *)sub_21D55E0(a1 + 808, "nullptr");
      case 'T':
        return nullptr;
      case 'U':
        if ( v7 == 1 )
          return nullptr;
        if ( v1[2] != 108 )
          return nullptr;
        v65 = sub_21DCFB0((char **)a1, 0);
        if ( !v65 )
          return nullptr;
        v66 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v66 != 69 )
          return nullptr;
        *(_QWORD *)a1 = v66 + 1;
        v67 = *(_BYTE *)(a1 + 937);
        ptr = v100;
        v68 = a1 + 904;
        v99 = 0x2000000000LL;
        v93 = v67;
        sub_21D0240((__int64)&ptr, 0x4Bu, v65);
        v3 = (char *)sub_2223360(a1 + 904, &ptr, &v97, off_2BE9FD0);
        if ( v3 )
          goto LABEL_52;
        if ( !v93 )
          goto LABEL_99;
        v69 = sub_21D40A0((__int64 *)(a1 + 808), 32, 3u);
        v70 = *(_BYTE *)(v69 + 18);
        *(_QWORD *)v69 = 0;
        v3 = (char *)(v69 + 8);
        *(_WORD *)(v69 + 16) = 16459;
        *(_BYTE *)(v69 + 18) = v70 & 0xF0 | 5;
        v71 = (char *)&unk_2BE8390;
LABEL_115:
        *(_QWORD *)(v69 + 24) = v65;
        *(_QWORD *)(v69 + 8) = v71 + 16;
        sub_2223210(v68, v69, v97, off_2BE9FD0);
        goto LABEL_99;
      case '_':
        v62 = v2 - v5;
        v3 = nullptr;
        v63 = j__strlen("_Z");
        if ( !sub_20D1BF0(v62, v5, v63, "_Z") )
          return v3;
        *(_QWORD *)a1 = &v5[v63];
        v3 = (char *)sub_21E4F70(a1, 1);
        if ( !v3 )
          return nullptr;
        v64 = *(char **)a1;
        if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v64 != 69 )
          return nullptr;
        *(_QWORD *)a1 = v64 + 1;
        return v3;
      case 'a':
        *(_QWORD *)a1 = v1 + 2;
        v82 = j__strlen("signed char");
        return (char *)sub_21D6FF0(a1, v82, (__int64)"signed char");
      case 'b':
        v78 = v2 - v5;
        v79 = j__strlen("b0E");
        if ( sub_20D1BF0(v78, v5, v79, "b0E") )
        {
          LODWORD(ptr) = 0;
          *(_QWORD *)a1 = &v5[v79];
          return (char *)sub_21D6820(a1 + 808, (int *)&ptr);
        }
        else
        {
          v80 = v7;
          v3 = nullptr;
          v81 = j__strlen("b1E");
          if ( sub_20D1BF0(v80, v5, v81, "b1E") )
          {
            LODWORD(ptr) = 1;
            *(_QWORD *)a1 = &v5[v81];
            return (char *)sub_21D6820(a1 + 808, (int *)&ptr);
          }
        }
        return v3;
      case 'c':
        *(_QWORD *)a1 = v1 + 2;
        v83 = j__strlen("char");
        return (char *)sub_21D6FF0(a1, v83, (__int64)"char");
      case 'd':
        v29 = v1 + 2;
        *(_QWORD *)a1 = v1 + 2;
        if ( (unsigned __int64)(v2 - (v1 + 2)) <= 0x10 )
          return nullptr;
        v44 = v1[2];
        v45 = v1 + 18;
        if ( (unsigned __int8)(v44 - 97) > 5u && (unsigned __int8)(v44 - 48) > 9u )
          return nullptr;
        v46 = v1[3];
        if ( (unsigned __int8)(v46 - 97) > 5u && (unsigned __int8)(v46 - 48) > 9u )
          return nullptr;
        v47 = v1[4];
        if ( (unsigned __int8)(v47 - 97) > 5u && (unsigned __int8)(v47 - 48) > 9u )
          return nullptr;
        v48 = v1[5];
        if ( (unsigned __int8)(v48 - 48) > 9u && (unsigned __int8)(v48 - 97) > 5u )
          return nullptr;
        v49 = v1[6];
        if ( (unsigned __int8)(v49 - 97) > 5u && (unsigned __int8)(v49 - 48) > 9u )
          return nullptr;
        v50 = v1[7];
        if ( (unsigned __int8)(v50 - 97) > 5u && (unsigned __int8)(v50 - 48) > 9u )
          return nullptr;
        v51 = v1[8];
        if ( (unsigned __int8)(v51 - 48) > 9u && (unsigned __int8)(v51 - 97) > 5u )
          return nullptr;
        v52 = v1[9];
        if ( (unsigned __int8)(v52 - 48) > 9u && (unsigned __int8)(v52 - 97) > 5u )
          return nullptr;
        v53 = v1[10];
        if ( (unsigned __int8)(v53 - 97) > 5u && (unsigned __int8)(v53 - 48) > 9u )
          return nullptr;
        v54 = v1[11];
        if ( (unsigned __int8)(v54 - 48) > 9u && (unsigned __int8)(v54 - 97) > 5u )
          return nullptr;
        v55 = v1[12];
        if ( (unsigned __int8)(v55 - 48) > 9u && (unsigned __int8)(v55 - 97) > 5u )
          return nullptr;
        v56 = v1[13];
        if ( (unsigned __int8)(v56 - 97) > 5u && (unsigned __int8)(v56 - 48) > 9u )
          return nullptr;
        v57 = v1[14];
        if ( (unsigned __int8)(v57 - 97) > 5u && (unsigned __int8)(v57 - 48) > 9u )
          return nullptr;
        v58 = v1[15];
        if ( (unsigned __int8)(v58 - 97) > 5u && (unsigned __int8)(v58 - 48) > 9u )
          return nullptr;
        v59 = v1[16];
        if ( (unsigned __int8)(v59 - 48) > 9u && (unsigned __int8)(v59 - 97) > 5u )
          return nullptr;
        v60 = v1[17];
        if ( (unsigned __int8)(v60 - 97) > 5u && (unsigned __int8)(v60 - 48) > 9u )
          return nullptr;
        *(_QWORD *)a1 = v45;
        if ( v2 == v45 || v1[18] != 69 )
          return nullptr;
        v61 = *(_BYTE *)(a1 + 937);
        *(_QWORD *)a1 = v1 + 19;
        v92 = v61;
        v40 = a1 + 904;
        v99 = 0x2000000000LL;
        ptr = v100;
        sub_21D0070((__int64)&ptr, 0x4Fu, 16, (__int64)(v1 + 2));
        v3 = (char *)sub_2223360(a1 + 904, &ptr, &v97, off_2BE9FD0);
        if ( v3 )
          goto LABEL_52;
        if ( !v92 )
          goto LABEL_99;
        v85 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v90 = *(_BYTE *)(v85 + 18);
        v3 = (char *)(v85 + 8);
        *(_QWORD *)v85 = 0;
        *(_WORD *)(v85 + 16) = 16463;
        *(_QWORD *)(v85 + 24) = 16;
        *(_BYTE *)(v85 + 18) = v90 & 0xF0 | 5;
        *(_QWORD *)(v85 + 8) = off_2BE86A0;
        goto LABEL_139;
      case 'e':
        v29 = v1 + 2;
        *(_QWORD *)a1 = v1 + 2;
        if ( (unsigned __int64)(v2 - (v1 + 2)) <= 0x14 )
          return nullptr;
        v41 = v1[2];
        v42 = v1 + 22;
        if ( (unsigned __int8)(v41 - 97) > 5u && (unsigned __int8)(v41 - 48) > 9u )
          return nullptr;
        v43 = v1 + 2;
        break;
      case 'f':
        v29 = v1 + 2;
        *(_QWORD *)a1 = v1 + 2;
        if ( (unsigned __int64)(v2 - (v1 + 2)) <= 8 )
          return nullptr;
        v30 = v1[2];
        v31 = v1 + 10;
        if ( (unsigned __int8)(v30 - 97) > 5u && (unsigned __int8)(v30 - 48) > 9u )
          return nullptr;
        v32 = v1[3];
        if ( (unsigned __int8)(v32 - 97) > 5u && (unsigned __int8)(v32 - 48) > 9u )
          return nullptr;
        v33 = v1[4];
        if ( (unsigned __int8)(v33 - 97) > 5u && (unsigned __int8)(v33 - 48) > 9u )
          return nullptr;
        v34 = v1[5];
        if ( (unsigned __int8)(v34 - 48) > 9u && (unsigned __int8)(v34 - 97) > 5u )
          return nullptr;
        v35 = v1[6];
        if ( (unsigned __int8)(v35 - 48) > 9u && (unsigned __int8)(v35 - 97) > 5u )
          return nullptr;
        v36 = v1[7];
        if ( (unsigned __int8)(v36 - 48) > 9u && (unsigned __int8)(v36 - 97) > 5u )
          return nullptr;
        v37 = v1[8];
        if ( (unsigned __int8)(v37 - 48) > 9u && (unsigned __int8)(v37 - 97) > 5u )
          return nullptr;
        v38 = v1[9];
        if ( (unsigned __int8)(v38 - 48) > 9u && (unsigned __int8)(v38 - 97) > 5u )
          return nullptr;
        *(_QWORD *)a1 = v31;
        if ( v2 == v31 || v1[10] != 69 )
          return nullptr;
        v39 = *(_BYTE *)(a1 + 937);
        *(_QWORD *)a1 = v1 + 11;
        v91 = v39;
        v40 = a1 + 904;
        v99 = 0x2000000000LL;
        ptr = v100;
        sub_21D0070((__int64)&ptr, 0x4Eu, 8, (__int64)(v1 + 2));
        v3 = (char *)sub_2223360(a1 + 904, &ptr, &v97, off_2BE9FD0);
        if ( v3 )
          goto LABEL_52;
        if ( !v91 )
          goto LABEL_99;
        v85 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v89 = *(_BYTE *)(v85 + 18);
        v3 = (char *)(v85 + 8);
        *(_QWORD *)v85 = 0;
        *(_WORD *)(v85 + 16) = 16462;
        *(_QWORD *)(v85 + 24) = 8;
        *(_BYTE *)(v85 + 18) = v89 & 0xF0 | 5;
        *(_QWORD *)(v85 + 8) = off_2BE8640;
        goto LABEL_139;
      case 'h':
        *(_QWORD *)a1 = v1 + 2;
        v28 = j__strlen("unsigned char");
        return (char *)sub_21D6FF0(a1, v28, (__int64)"unsigned char");
      case 'i':
        *(_QWORD *)a1 = v1 + 2;
        v27 = j__strlen(&byte_22F0C30);
        return (char *)sub_21D6FF0(a1, v27, (__int64)&byte_22F0C30);
      case 'j':
        *(_QWORD *)a1 = v1 + 2;
        v26 = j__strlen("u");
        return (char *)sub_21D6FF0(a1, v26, (__int64)"u");
      case 'l':
        *(_QWORD *)a1 = v1 + 2;
        v25 = j__strlen("l");
        return (char *)sub_21D6FF0(a1, v25, (__int64)"l");
      case 'm':
        *(_QWORD *)a1 = v1 + 2;
        v24 = j__strlen("ul");
        return (char *)sub_21D6FF0(a1, v24, (__int64)"ul");
      case 'n':
        *(_QWORD *)a1 = v1 + 2;
        v23 = j__strlen("__int128");
        return (char *)sub_21D6FF0(a1, v23, (__int64)"__int128");
      case 'o':
        *(_QWORD *)a1 = v1 + 2;
        v22 = j__strlen("unsigned __int128");
        return (char *)sub_21D6FF0(a1, v22, (__int64)"unsigned __int128");
      case 's':
        *(_QWORD *)a1 = v1 + 2;
        v21 = j__strlen("short");
        return (char *)sub_21D6FF0(a1, v21, (__int64)"short");
      case 't':
        *(_QWORD *)a1 = v1 + 2;
        v20 = j__strlen("unsigned short");
        return (char *)sub_21D6FF0(a1, v20, (__int64)"unsigned short");
      case 'w':
        *(_QWORD *)a1 = v1 + 2;
        v19 = j__strlen("wchar_t");
        return (char *)sub_21D6FF0(a1, v19, (__int64)"wchar_t");
      case 'x':
        *(_QWORD *)a1 = v1 + 2;
        v18 = j__strlen("ll");
        return (char *)sub_21D6FF0(a1, v18, (__int64)"ll");
      case 'y':
        *(_QWORD *)a1 = v1 + 2;
        v17 = j__strlen("ull");
        return (char *)sub_21D6FF0(a1, v17, (__int64)"ull");
      default:
        goto LABEL_7;
    }
    while ( v42 != ++v43 )
    {
      if ( (unsigned __int8)(*v43 - 48) > 9u && (unsigned __int8)(*v43 - 97) > 5u )
        return nullptr;
    }
    *(_QWORD *)a1 = v42;
    if ( v2 == v42 || v1[22] != 69 )
      return nullptr;
    v84 = *(_BYTE *)(a1 + 937);
    *(_QWORD *)a1 = v1 + 23;
    v95 = v84;
    v40 = a1 + 904;
    v99 = 0x2000000000LL;
    ptr = v100;
    sub_21D0070((__int64)&ptr, 0x50u, 20, (__int64)(v1 + 2));
    v3 = (char *)sub_2223360(a1 + 904, &ptr, &v97, off_2BE9FD0);
    if ( !v3 )
    {
      if ( v95 )
      {
        v85 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
        v86 = *(_BYTE *)(v85 + 18);
        *(_QWORD *)v85 = 0;
        v3 = (char *)(v85 + 8);
        *(_WORD *)(v85 + 16) = 16464;
        *(_QWORD *)(v85 + 24) = 20;
        *(_BYTE *)(v85 + 18) = v86 & 0xF0 | 5;
        *(_QWORD *)(v85 + 8) = off_2BE8700;
LABEL_139:
        *(_QWORD *)(v85 + 32) = v29;
        sub_2223210(v40, v85, v97, off_2BE9FD0);
      }
      goto LABEL_99;
    }
LABEL_52:
    v14 = ptr;
    v3 += 8;
    if ( ptr == v100 )
      goto LABEL_14;
LABEL_13:
    free(v14);
    goto LABEL_14;
  }
LABEL_7:
  v8 = sub_21DFD40(a1);
  if ( !v8 )
    return nullptr;
  v10 = sub_21CFC00((char **)a1, 1);
  v11 = v9;
  if ( !v10 )
    return nullptr;
  v12 = *(char **)a1;
  if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v12 != 69 )
    return nullptr;
  *(_QWORD *)a1 = v12 + 1;
  v96 = *(_BYTE *)(a1 + 937);
  ptr = v100;
  v99 = 0x2000000000LL;
  sub_21D0350((__int64)&ptr, 0x4Cu, v8, v10, v9);
  v13 = sub_2223360(a1 + 904, &ptr, &v97, off_2BE9FD0);
  v3 = (char *)v13;
  if ( !v13 )
  {
    if ( v96 )
    {
      v87 = sub_21D40A0((__int64 *)(a1 + 808), 48, 3u);
      v88 = *(_BYTE *)(v87 + 18);
      *(_QWORD *)(v87 + 24) = v8;
      v3 = (char *)(v87 + 8);
      *(_QWORD *)v87 = 0;
      *(_WORD *)(v87 + 16) = 16460;
      *(_QWORD *)(v87 + 32) = v10;
      *(_BYTE *)(v87 + 18) = v88 & 0xF0 | 5;
      *(_QWORD *)(v87 + 40) = v11;
      *(_QWORD *)(v87 + 8) = off_2BE8400;
      sub_2223210(a1 + 904, v87, v97, off_2BE9FD0);
    }
LABEL_99:
    if ( ptr != v100 )
      free(ptr);
    *(_QWORD *)(a1 + 920) = v3;
    return v3;
  }
  v14 = ptr;
  v3 = (char *)(v13 + 8);
  if ( ptr != v100 )
    goto LABEL_13;
LABEL_14:
  if ( v3 )
  {
    ptr = v3;
    v15 = sub_21D4F30(a1 + 944, (__int64 *)&ptr);
    if ( v15 )
    {
      v16 = (char *)v15[1];
      if ( v16 )
        v3 = v16;
    }
    if ( *(char **)(a1 + 928) == v3 )
      *(_BYTE *)(a1 + 936) = 1;
  }
  return v3;
}
