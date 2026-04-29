unsigned __int64 __fastcall sub_20680(__int64 a1, int a2)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _BYTE *v5; // rdx
  const char *v6; // rsi
  size_t v7; // rdx
  size_t v8; // r14
  _QWORD *v10; // r13
  char *v11; // r9
  char *v12; // rax
  unsigned __int64 v13; // rbp
  size_t v14; // rbp
  _QWORD *v15; // rax
  void *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rdx
  char v20; // cl
  char v21; // cl
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rax
  _QWORD *v24; // r13
  __int64 v25; // rbp
  _BYTE *v26; // rdx
  char *v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r14
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rdi
  unsigned __int64 v33; // rax
  char *v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r14
  _QWORD *v37; // rax
  unsigned __int64 v38; // rax
  _QWORD *v39; // r13
  __int64 v40; // rdx
  char *v41; // rax
  unsigned __int64 v42; // rax
  _QWORD *v43; // r13
  __int64 v44; // rdx
  char *v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  _BYTE *v48; // rdx
  char v49; // r9
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  _BYTE *v52; // rdx
  __int64 v53; // rax
  _BYTE *v54; // rdx
  size_t v55; // rdx
  int v56; // ecx
  __int64 v57; // r8
  size_t v58; // r13
  char *v59; // rbp
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // rax
  _QWORD *v62; // rbp
  __int64 v63; // r15
  char *v64; // r11
  char *v65; // rax
  unsigned __int64 v66; // rdx
  _QWORD *v67; // rax
  void *v68; // rax
  unsigned __int64 v69; // rax
  __int16 v70; // r15
  size_t v71; // rdx
  int v72; // ecx
  __int64 v73; // r8
  size_t v74; // r13
  char *v75; // rbp
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // rax
  _QWORD *v78; // rbp
  __int64 v79; // r15
  char *v80; // r10
  char *v81; // rax
  unsigned __int64 v82; // rdx
  _QWORD *v83; // rax
  void *v84; // rax
  unsigned __int64 v85; // rax
  _QWORD *v86; // rdi
  unsigned __int64 v87; // rax
  char *v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // r14
  _QWORD *v91; // rax
  _QWORD *v92; // rdi
  unsigned __int64 v93; // rax
  char *v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 v96; // r14
  _QWORD *v97; // rax
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rbp
  _QWORD *v100; // rax
  char *v101; // rbp
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rbp
  _QWORD *v104; // rax
  char *v105; // rbp
  _QWORD *v106; // rdi
  unsigned __int64 v107; // rax
  char *v108; // rax
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // r14
  _QWORD *v111; // rax
  const char *src; // [rsp+0h] [rbp-58h]
  const char *srca; // [rsp+0h] [rbp-58h]
  unsigned __int64 v115; // [rsp+10h] [rbp-48h]
  unsigned __int64 v116; // [rsp+18h] [rbp-40h]

  v3 = sub_C400(*(_QWORD **)(a1 + 40), 109);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 && (v5 = *(_BYTE **)(a1 + 24), *v5 == 116) )
  {
    v6 = "@convention(thin)";
    v8 = 17;
    *(_QWORD *)(a1 + 24) = v5 + 1;
    *(_QWORD *)(a1 + 32) = v4 - 1;
  }
  else
  {
    v6 = sub_1BDA0(a1, 0);
    v8 = v7;
    if ( !v7 )
      return 0;
  }
  v10 = *(_QWORD **)(a1 + 40);
  v11 = (char *)v10[1];
  if ( !v11 || (v12 = &v11[v8], (unsigned __int64)&v11[v8] > v10[2]) )
  {
    v13 = 2LL * v10[4];
    if ( v13 < v8 + 1 )
      v13 = v8 + 1;
    v10[4] = v13;
    v14 = v13 + 8;
    v15 = malloc(v14);
    v11 = (char *)(v15 + 1);
    *v15 = v10[3];
    v10[3] = v15;
    v10[2] = (char *)v15 + v14;
    v12 = (char *)v15 + v8 + 8;
  }
  v10[1] = v12;
  v16 = memmove(v11, v6, v8);
  v17 = sub_C510(v10, 103, (__int64)v16, v8);
  sub_C080(v3, v17, v10);
  v18 = *(_QWORD *)(a1 + 32);
  if ( !v18 )
    return 0;
  v19 = *(char **)(a1 + 24);
  v20 = *v19;
  if ( *v19 == 67 )
  {
    *(_QWORD *)(a1 + 24) = v19 + 1;
    *(_QWORD *)(a1 + 32) = v18 - 1;
    if ( v18 == 1 )
      return 0;
    v21 = v19[1];
    switch ( v21 )
    {
      case 'b':
        v32 = *(_QWORD **)(a1 + 40);
        *(_QWORD *)(a1 + 24) = v19 + 2;
        *(_QWORD *)(a1 + 32) = v18 - 2;
        v33 = sub_C400(v32, 107);
        v24 = *(_QWORD **)(a1 + 40);
        v25 = v33;
        v26 = (_BYTE *)v24[1];
        if ( !v26 || (v34 = v26 + 5, (unsigned __int64)(v26 + 5) > v24[2]) )
        {
          v35 = 2LL * v24[4];
          if ( v35 < 6 )
            v35 = 6;
          v24[4] = v35;
          v36 = v35 + 8;
          v37 = malloc(v35 + 8);
          *v37 = v24[3];
          v26 = v37 + 1;
          v24[2] = (char *)v37 + v36;
          v24[3] = v37;
          v34 = (char *)v37 + 13;
        }
        v24[1] = v34;
        v31 = 5;
        *(_DWORD *)v26 = 1668246626;
        v26[4] = 107;
        break;
      case 'c':
        v86 = *(_QWORD **)(a1 + 40);
        *(_QWORD *)(a1 + 24) = v19 + 2;
        *(_QWORD *)(a1 + 32) = v18 - 2;
        v87 = sub_C400(v86, 107);
        v24 = *(_QWORD **)(a1 + 40);
        v25 = v87;
        v26 = (_BYTE *)v24[1];
        if ( !v26 || (v88 = v26 + 1, (unsigned __int64)(v26 + 1) > v24[2]) )
        {
          v89 = 2LL * v24[4];
          if ( v89 < 2 )
            v89 = 2;
          v24[4] = v89;
          v90 = v89 + 8;
          v91 = malloc(v89 + 8);
          *v91 = v24[3];
          v26 = v91 + 1;
          v24[2] = (char *)v91 + v90;
          v24[3] = v91;
          v88 = (char *)v91 + 9;
        }
        v24[1] = v88;
        v31 = 1;
        *v26 = 99;
        break;
      case 'm':
        v92 = *(_QWORD **)(a1 + 40);
        *(_QWORD *)(a1 + 24) = v19 + 2;
        *(_QWORD *)(a1 + 32) = v18 - 2;
        v93 = sub_C400(v92, 107);
        v24 = *(_QWORD **)(a1 + 40);
        v25 = v93;
        v26 = (_BYTE *)v24[1];
        if ( !v26 || (v94 = v26 + 6, (unsigned __int64)(v26 + 6) > v24[2]) )
        {
          v95 = 2LL * v24[4];
          if ( v95 < 7 )
            v95 = 7;
          v24[4] = v95;
          v96 = v95 + 8;
          v97 = malloc(v95 + 8);
          *v97 = v24[3];
          v26 = v97 + 1;
          v24[2] = (char *)v97 + v96;
          v24[3] = v97;
          v94 = (char *)v97 + 14;
        }
        v24[1] = v94;
        v31 = 6;
        *(_DWORD *)v26 = 1752458605;
        *((_WORD *)v26 + 2) = 25711;
        break;
      case 'O':
        v106 = *(_QWORD **)(a1 + 40);
        *(_QWORD *)(a1 + 24) = v19 + 2;
        *(_QWORD *)(a1 + 32) = v18 - 2;
        v107 = sub_C400(v106, 107);
        v24 = *(_QWORD **)(a1 + 40);
        v25 = v107;
        v26 = (_BYTE *)v24[1];
        if ( !v26 || (v108 = v26 + 11, (unsigned __int64)(v26 + 11) > v24[2]) )
        {
          v109 = 2LL * v24[4];
          if ( v109 < 0xC )
            v109 = 12;
          v24[4] = v109;
          v110 = v109 + 8;
          v111 = malloc(v109 + 8);
          *v111 = v24[3];
          v26 = v111 + 1;
          v24[2] = (char *)v111 + v110;
          v24[3] = v111;
          v108 = (char *)v111 + 19;
        }
        v24[1] = v108;
        v31 = 11;
        qmemcpy(v26, "objc_method", 11);
        break;
      case 'w':
        v22 = *(_QWORD **)(a1 + 40);
        *(_QWORD *)(a1 + 24) = v19 + 2;
        *(_QWORD *)(a1 + 32) = v18 - 2;
        v23 = sub_C400(v22, 107);
        v24 = *(_QWORD **)(a1 + 40);
        v25 = v23;
        v26 = (_BYTE *)v24[1];
        if ( !v26 || (v27 = v26 + 14, (unsigned __int64)(v26 + 14) > v24[2]) )
        {
          v28 = 2LL * v24[4];
          if ( v28 < 0xF )
            v28 = 15;
          v24[4] = v28;
          v29 = v28 + 8;
          v30 = malloc(v28 + 8);
          *v30 = v24[3];
          v26 = v30 + 1;
          v24[2] = (char *)v30 + v29;
          v24[3] = v30;
          v27 = (char *)v30 + 22;
        }
        v24[1] = v27;
        v31 = 14;
        qmemcpy(v26, "witness_method", 14);
        break;
      default:
        return 0;
    }
    v38 = sub_C510(v24, 108, (__int64)v26, v31);
    sub_C080(v25, v38, v24);
    sub_C080(v3, v25, *(_QWORD **)(a1 + 40));
    v18 = *(_QWORD *)(a1 + 32);
    if ( !v18 )
      return 0;
    v19 = *(char **)(a1 + 24);
    v20 = *v19;
  }
  if ( v20 == 104 )
  {
    v39 = *(_QWORD **)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v19 + 1;
    *(_QWORD *)(a1 + 32) = v18 - 1;
    v40 = v39[1];
    if ( !v40 || (v41 = (char *)(v40 + 9), (unsigned __int64)(v40 + 9) > v39[2]) )
    {
      v98 = 2LL * v39[4];
      if ( v98 < 0xA )
        v98 = 10;
      v39[4] = v98;
      v99 = v98 + 8;
      v100 = malloc(v98 + 8);
      v101 = (char *)v100 + v99;
      *v100 = v39[3];
      v40 = (__int64)(v100 + 1);
      v39[3] = v100;
      v41 = (char *)v100 + 17;
      v39[2] = v101;
    }
    v39[1] = v41;
    *(_BYTE *)(v40 + 8) = 101;
    *(_QWORD *)v40 = 0x6C6261646E655340LL;
    v42 = sub_C510(v39, 106, v40, 9);
    sub_C080(v3, v42, v39);
    v18 = *(_QWORD *)(a1 + 32);
    if ( !v18 )
      return 0;
    v19 = *(char **)(a1 + 24);
    v20 = *v19;
  }
  if ( v20 == 72 )
  {
    v43 = *(_QWORD **)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v19 + 1;
    *(_QWORD *)(a1 + 32) = v18 - 1;
    v44 = v43[1];
    if ( !v44 || (v45 = (char *)(v44 + 6), (unsigned __int64)(v44 + 6) > v43[2]) )
    {
      v102 = 2LL * v43[4];
      if ( v102 < 7 )
        v102 = 7;
      v43[4] = v102;
      v103 = v102 + 8;
      v104 = malloc(v102 + 8);
      v105 = (char *)v104 + v103;
      *v104 = v43[3];
      v44 = (__int64)(v104 + 1);
      v43[3] = v104;
      v45 = (char *)v104 + 14;
      v43[2] = v105;
    }
    v43[1] = v45;
    *(_DWORD *)v44 = 2037604672;
    *(_WORD *)(v44 + 4) = 25454;
    v46 = sub_C510(v43, 106, v44, 6);
    sub_C080(v3, v46, v43);
    v18 = *(_QWORD *)(a1 + 32);
    if ( !v18 )
      return 0;
    v19 = *(char **)(a1 + 24);
    v20 = *v19;
  }
  if ( v20 == 71 )
  {
    v47 = v18 - 1;
    v48 = v19 + 1;
    v49 = 0;
    goto LABEL_46;
  }
  if ( v20 == 103 )
  {
    v47 = v18 - 1;
    v48 = v19 + 1;
    v49 = 1;
LABEL_46:
    *(_QWORD *)(a1 + 24) = v48;
    *(_QWORD *)(a1 + 32) = v47;
    v50 = sub_1E7C0((_QWORD *)a1, a2 + 1, v49);
    if ( !v50 )
      return 0;
    sub_C080(v3, v50, *(_QWORD **)(a1 + 40));
    v18 = *(_QWORD *)(a1 + 32);
    if ( !v18 )
      return 0;
    v19 = *(char **)(a1 + 24);
    v20 = *v19;
  }
  if ( v20 == 95 )
  {
    v51 = v18 - 1;
    *(_QWORD *)(a1 + 24) = v19 + 1;
    for ( *(_QWORD *)(a1 + 32) = v51; ; v51 = *(_QWORD *)(a1 + 32) )
    {
      if ( v51 )
      {
        v52 = *(_BYTE **)(a1 + 24);
        if ( *v52 == 95 )
        {
          v53 = v51 - 1;
          *(_QWORD *)(a1 + 24) = v52 + 1;
          *(_QWORD *)(a1 + 32) = v53;
          if ( !v53 )
            goto LABEL_80;
LABEL_54:
          v54 = *(_BYTE **)(a1 + 24);
          if ( *v54 == 95 )
          {
            *(_QWORD *)(a1 + 24) = v54 + 1;
            *(_QWORD *)(a1 + 32) = v53 - 1;
            return v3;
          }
          v70 = 114;
          if ( *v54 == 122 )
          {
            v70 = 116;
            *(_QWORD *)(a1 + 24) = v54 + 1;
            *(_QWORD *)(a1 + 32) = v53 - 1;
          }
          while ( 1 )
          {
            srca = sub_1BDA0(a1, 2);
            v74 = v71;
            if ( !v71 )
              return 0;
            v75 = sub_1C940((_QWORD *)a1, a2 + 3, v71, v72, v73);
            if ( !v75 )
              return 0;
            v76 = sub_C400(*(_QWORD **)(a1 + 40), 221);
            sub_C080(v76, (__int64)v75, *(_QWORD **)(a1 + 40));
            if ( !v76 )
              return 0;
            v77 = sub_C400(*(_QWORD **)(a1 + 40), v70);
            v78 = *(_QWORD **)(a1 + 40);
            v79 = v77;
            v80 = (char *)v78[1];
            if ( !v80 || (v81 = &v80[v74], (unsigned __int64)&v80[v74] > v78[2]) )
            {
              v82 = 2LL * v78[4];
              if ( v82 < v74 + 1 )
                v82 = v74 + 1;
              v78[4] = v82;
              v115 = v82 + 8;
              v83 = malloc(v82 + 8);
              v80 = (char *)(v83 + 1);
              *v83 = v78[3];
              v78[3] = v83;
              v78[2] = (char *)v83 + v115;
              v81 = (char *)v83 + v74 + 8;
            }
            v78[1] = v81;
            v84 = memmove(v80, srca, v74);
            v85 = sub_C510(v78, 103, (__int64)v84, v74);
            sub_C080(v79, v85, v78);
            sub_C080(v79, v76, *(_QWORD **)(a1 + 40));
            if ( !v79 )
              return 0;
            sub_C080(v3, v79, *(_QWORD **)(a1 + 40));
            v53 = *(_QWORD *)(a1 + 32);
            if ( v53 )
              goto LABEL_54;
LABEL_80:
            v70 = 114;
          }
        }
        if ( *v52 == 122 )
        {
          v3 = 0;
          *(_QWORD *)(a1 + 24) = v52 + 1;
          *(_QWORD *)(a1 + 32) = v51 - 1;
          return v3;
        }
      }
      src = sub_1BDA0(a1, 1);
      v58 = v55;
      if ( !v55 )
        return 0;
      v59 = sub_1C940((_QWORD *)a1, a2 + 3, v55, v56, v57);
      if ( !v59 )
        return 0;
      v60 = sub_C400(*(_QWORD **)(a1 + 40), 221);
      sub_C080(v60, (__int64)v59, *(_QWORD **)(a1 + 40));
      if ( !v60 )
        return 0;
      v61 = sub_C400(*(_QWORD **)(a1 + 40), 112);
      v62 = *(_QWORD **)(a1 + 40);
      v63 = v61;
      v64 = (char *)v62[1];
      if ( !v64 || (v65 = &v64[v58], (unsigned __int64)&v64[v58] > v62[2]) )
      {
        v66 = 2LL * v62[4];
        if ( v66 < v58 + 1 )
          v66 = v58 + 1;
        v62[4] = v66;
        v116 = v66 + 8;
        v67 = malloc(v66 + 8);
        v64 = (char *)(v67 + 1);
        *v67 = v62[3];
        v62[3] = v67;
        v62[2] = (char *)v67 + v116;
        v65 = (char *)v67 + v58 + 8;
      }
      v62[1] = v65;
      v68 = memmove(v64, src, v58);
      v69 = sub_C510(v62, 103, (__int64)v68, v58);
      sub_C080(v63, v69, v62);
      sub_C080(v63, v60, *(_QWORD **)(a1 + 40));
      if ( !v63 )
        return 0;
      sub_C080(v3, v63, *(_QWORD **)(a1 + 40));
    }
  }
  return 0;
}
