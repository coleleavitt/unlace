void __fastcall clang_disposeCodeCompleteResults(void **a1, const char *a2)
{
  void *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // r13
  _QWORD *v10; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  void **v13; // rdi
  void **v14; // rdi
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rdx
  signed __int32 v17; // eax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rdx
  signed __int32 v20; // eax
  void **v21; // rdi
  _DWORD *v22; // rbx
  bool v23; // zf
  _DWORD *v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // r12
  void **v28; // rbx
  void **v29; // rdi
  void **v30; // rdi
  void **v31; // r12
  void **v32; // rbx
  _QWORD *v33; // r12
  _QWORD *v34; // rbx
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  void **v37; // r12
  void **v38; // rbx
  void **v39; // r12
  void **v40; // rbx
  void **v41; // r12
  void **v42; // rbx
  void **v43; // rdi
  void **v44; // rdi
  void **v45; // rdi
  void **v46; // rdi
  void **v47; // r12
  void **v48; // rbx
  void **v49; // r12
  void **v50; // rbx
  void **v51; // r12
  void **v52; // rbx
  void **v53; // r12
  void **v54; // rbx
  void **v55; // r12
  void **v56; // rbx
  _DWORD *v57; // rbx
  _QWORD *v58; // r12
  void **v59; // r13
  void **v60; // rbx
  _QWORD *v61; // r12
  void (__fastcall *v62)(_QWORD *); // rax
  void **v63; // r14
  void **v64; // r12
  _QWORD *v65; // rdi
  _QWORD *v66; // r13
  _QWORD *v67; // rbx
  char *v68; // rdi
  void *v69; // rdi
  void **v70; // rdi
  __int64 v71; // r13
  __int64 v72; // rbx
  __int64 v73; // r13
  __int64 v74; // rbx
  __int64 v75; // r13
  __int64 v76; // rbx
  __int64 v77; // r13
  __int64 v78; // rbx
  __int64 v79; // r13
  __int64 v80; // rbx
  char *v81; // rdi
  char *v82; // rdi
  char *v83; // rdi
  __int64 v84; // rax
  void *v85; // rdi
  __int64 v86; // rax
  void *v87; // rdi

  if ( !a1 )
    return;
  v3 = *a1;
  if ( v3 )
    operator delete[](v3);
  v4 = 0;
  v5 = *((unsigned int *)a1 + 460);
  v6 = 8 * v5;
  if ( (_DWORD)v5 )
  {
    do
    {
      v7 = *(_QWORD *)((char *)a1[229] + v4);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v4 += 8;
    }
    while ( v6 != v4 );
  }
  if ( getenv("LIBCLANG_OBJTRACKING") )
  {
    a2 = "--- %u completion results\n";
    fprintf(stderr, "--- %u completion results\n", _InterlockedDecrement(&dword_4AD21D0));
  }
  v8 = a1[249];
  v9 = a1[248];
  if ( v8 != v9 )
  {
    do
    {
      v10 = (_QWORD *)v9[1];
      v11 = (_QWORD *)*v9;
      if ( v10 != (_QWORD *)*v9 )
      {
        do
        {
          v12 = (_QWORD *)v11[3];
          if ( v12 != v11 + 5 )
          {
            a2 = (const char *)(v11[5] + 1LL);
            operator delete(v12, (unsigned __int64)a2);
          }
          v11 += 8;
        }
        while ( v10 != v11 );
        v11 = (_QWORD *)*v9;
      }
      if ( v11 )
      {
        a2 = (const char *)(v9[2] - (_QWORD)v11);
        operator delete(v11, (unsigned __int64)a2);
      }
      v9 += 3;
    }
    while ( v8 != v9 );
    v9 = a1[248];
  }
  if ( v9 )
  {
    a2 = (const char *)((_BYTE *)a1[250] - (_BYTE *)v9);
    operator delete(v9, (unsigned __int64)a2);
  }
  v13 = (void **)a1[244];
  if ( v13 != a1 + 246 )
  {
    a2 = (char *)a1[246] + 1;
    operator delete(v13, (unsigned __int64)a2);
  }
  v14 = (void **)a1[239];
  if ( v14 != a1 + 241 )
  {
    a2 = (char *)a1[241] + 1;
    operator delete(v14, (unsigned __int64)a2);
  }
  v15 = (volatile signed __int32 *)a1[235];
  if ( v15 )
  {
    v16 = v15 + 2;
    if ( *((_QWORD *)v15 + 1) == 0x100000001LL )
    {
      v84 = *(_QWORD *)v15;
      v85 = a1[235];
      *((_QWORD *)v15 + 1) = 0;
      (*(void (__fastcall **)(void *, const char *, volatile signed __int32 *))(v84 + 16))(v85, a2, v16);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v17 = _InterlockedExchangeAdd(v16, 0xFFFFFFFF);
      }
      else
      {
        v17 = *((_DWORD *)v15 + 2);
        *((_DWORD *)v15 + 2) = v17 - 1;
      }
      if ( v17 == 1 )
        sub_6111C0(v15);
    }
  }
  v18 = (volatile signed __int32 *)a1[233];
  if ( v18 )
  {
    v19 = v18 + 2;
    if ( *((_QWORD *)v18 + 1) == 0x100000001LL )
    {
      v86 = *(_QWORD *)v18;
      v87 = a1[233];
      *((_QWORD *)v18 + 1) = 0;
      (*(void (__fastcall **)(void *, const char *, volatile signed __int32 *))(v86 + 16))(v87, a2, v19);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v20 = _InterlockedExchangeAdd(v19, 0xFFFFFFFF);
      }
      else
      {
        v20 = *((_DWORD *)v18 + 2);
        *((_DWORD *)v18 + 2) = v20 - 1;
      }
      if ( v20 == 1 )
        sub_6111C0(v18);
    }
  }
  v21 = (void **)a1[229];
  if ( v21 != a1 + 231 )
    free(v21);
  v22 = a1[228];
  if ( v22 && (v23 = *v22 == 1, --*v22, v23) )
  {
    sub_CAEC40(v22);
    operator delete(v22, 0x2B8u);
    v24 = a1[227];
    if ( !v24 )
      goto LABEL_45;
  }
  else
  {
    v24 = a1[227];
    if ( !v24 )
      goto LABEL_45;
  }
  v23 = (*v24)-- == 1;
  if ( v23 )
  {
    sub_C78B50(v24);
    operator delete(v24, 0x328u);
  }
LABEL_45:
  v25 = (void **)a1[222];
  if ( v25 != a1 + 224 )
    operator delete(v25, (unsigned __int64)a1[224] + 1);
  v26 = (void **)a1[217];
  if ( v26 != a1 + 219 )
    operator delete(v26, (unsigned __int64)a1[219] + 1);
  v27 = (void **)a1[215];
  v28 = (void **)a1[214];
  if ( v27 != v28 )
  {
    do
    {
      if ( *v28 != v28 + 2 )
        operator delete(*v28, (unsigned __int64)v28[2] + 1);
      v28 += 4;
    }
    while ( v27 != v28 );
    v28 = (void **)a1[214];
  }
  if ( v28 )
    operator delete(v28, (_BYTE *)a1[216] - (_BYTE *)v28);
  v29 = (void **)a1[207];
  if ( v29 != a1 + 209 )
    operator delete(v29, (unsigned __int64)a1[209] + 1);
  v30 = (void **)a1[203];
  if ( v30 != a1 + 205 )
    operator delete(v30, (unsigned __int64)a1[205] + 1);
  v31 = (void **)a1[201];
  v32 = (void **)a1[200];
  if ( v31 != v32 )
  {
    do
    {
      if ( *v32 != v32 + 2 )
        operator delete(*v32, (unsigned __int64)v32[2] + 1);
      v32 += 7;
    }
    while ( v31 != v32 );
    v32 = (void **)a1[200];
  }
  if ( v32 )
    operator delete(v32, (_BYTE *)a1[202] - (_BYTE *)v32);
  v33 = a1[196];
  while ( v33 )
  {
    v34 = v33;
    sub_62ABE0((_QWORD *)v33[3]);
    v35 = (_QWORD *)v33[8];
    v33 = (_QWORD *)v33[2];
    if ( v35 != v34 + 10 )
      operator delete(v35, v34[10] + 1LL);
    v36 = (_QWORD *)v34[4];
    if ( v36 != v34 + 6 )
      operator delete(v36, v34[6] + 1LL);
    operator delete(v34, 0x60u);
  }
  v37 = (void **)a1[192];
  v38 = (void **)a1[191];
  if ( v37 != v38 )
  {
    do
    {
      if ( *v38 != v38 + 2 )
        operator delete(*v38, (unsigned __int64)v38[2] + 1);
      v38 += 4;
    }
    while ( v37 != v38 );
    v38 = (void **)a1[191];
  }
  if ( v38 )
    operator delete(v38, (_BYTE *)a1[193] - (_BYTE *)v38);
  v39 = (void **)a1[188];
  v40 = (void **)a1[187];
  if ( v39 != v40 )
  {
    do
    {
      if ( *v40 != v40 + 2 )
        operator delete(*v40, (unsigned __int64)v40[2] + 1);
      v40 += 4;
    }
    while ( v39 != v40 );
    v40 = (void **)a1[187];
  }
  if ( v40 )
    operator delete(v40, (_BYTE *)a1[189] - (_BYTE *)v40);
  v41 = (void **)a1[185];
  v42 = (void **)a1[184];
  if ( v41 != v42 )
  {
    do
    {
      if ( *v42 != v42 + 2 )
        operator delete(*v42, (unsigned __int64)v42[2] + 1);
      v42 += 4;
    }
    while ( v41 != v42 );
    v42 = (void **)a1[184];
  }
  if ( v42 )
    operator delete(v42, (_BYTE *)a1[186] - (_BYTE *)v42);
  v43 = (void **)a1[180];
  if ( v43 != a1 + 182 )
    operator delete(v43, (unsigned __int64)a1[182] + 1);
  v44 = (void **)a1[176];
  if ( v44 != a1 + 178 )
    operator delete(v44, (unsigned __int64)a1[178] + 1);
  v45 = (void **)a1[172];
  if ( v45 != a1 + 174 )
    operator delete(v45, (unsigned __int64)a1[174] + 1);
  v46 = (void **)a1[168];
  if ( v46 != a1 + 170 )
    operator delete(v46, (unsigned __int64)a1[170] + 1);
  v47 = (void **)a1[163];
  v48 = (void **)a1[162];
  if ( v47 != v48 )
  {
    do
    {
      if ( *v48 != v48 + 2 )
        operator delete(*v48, (unsigned __int64)v48[2] + 1);
      v48 += 4;
    }
    while ( v47 != v48 );
    v48 = (void **)a1[162];
  }
  if ( v48 )
    operator delete(v48, (_BYTE *)a1[164] - (_BYTE *)v48);
  v49 = (void **)a1[160];
  v50 = (void **)a1[159];
  if ( v49 != v50 )
  {
    do
    {
      if ( *v50 != v50 + 2 )
        operator delete(*v50, (unsigned __int64)v50[2] + 1);
      v50 += 4;
    }
    while ( v49 != v50 );
    v50 = (void **)a1[159];
  }
  if ( v50 )
    operator delete(v50, (_BYTE *)a1[161] - (_BYTE *)v50);
  v51 = (void **)a1[157];
  v52 = (void **)a1[156];
  if ( v51 != v52 )
  {
    do
    {
      if ( *v52 != v52 + 2 )
        operator delete(*v52, (unsigned __int64)v52[2] + 1);
      v52 += 4;
    }
    while ( v51 != v52 );
    v52 = (void **)a1[156];
  }
  if ( v52 )
    operator delete(v52, (_BYTE *)a1[158] - (_BYTE *)v52);
  v53 = (void **)a1[154];
  v54 = (void **)a1[153];
  if ( v53 != v54 )
  {
    do
    {
      if ( *v54 != v54 + 2 )
        operator delete(*v54, (unsigned __int64)v54[2] + 1);
      v54 += 4;
    }
    while ( v53 != v54 );
    v54 = (void **)a1[153];
  }
  if ( v54 )
    operator delete(v54, (_BYTE *)a1[155] - (_BYTE *)v54);
  v55 = (void **)a1[151];
  v56 = (void **)a1[150];
  if ( v55 != v56 )
  {
    do
    {
      if ( *v56 != v56 + 2 )
        operator delete(*v56, (unsigned __int64)v56[2] + 1);
      v56 += 4;
    }
    while ( v55 != v56 );
    v56 = (void **)a1[150];
  }
  if ( v56 )
    operator delete(v56, (_BYTE *)a1[152] - (_BYTE *)v56);
  v57 = a1[119];
  if ( v57 && (v23 = *v57 == 1, --*v57, v23) )
  {
    sub_C68450(v57);
    operator delete(v57, 0x3B90u);
    v58 = a1[118];
    if ( !v58 )
      goto LABEL_141;
  }
  else
  {
    v58 = a1[118];
    if ( !v58 )
      goto LABEL_141;
  }
  v23 = (*(_DWORD *)v58)-- == 1;
  if ( v23 )
  {
    v71 = v58[31];
    v72 = v58[30];
    if ( v71 != v72 )
    {
      do
      {
        if ( *(_QWORD *)v72 != v72 + 16 )
          operator delete(*(void **)v72, *(_QWORD *)(v72 + 16) + 1LL);
        v72 += 32;
      }
      while ( v71 != v72 );
      v72 = v58[30];
    }
    if ( v72 )
      operator delete((void *)v72, v58[32] - v72);
    v73 = v58[28];
    v74 = v58[27];
    if ( v73 != v74 )
    {
      do
      {
        if ( *(_QWORD *)v74 != v74 + 16 )
          operator delete(*(void **)v74, *(_QWORD *)(v74 + 16) + 1LL);
        v74 += 32;
      }
      while ( v73 != v74 );
      v74 = v58[27];
    }
    if ( v74 )
      operator delete((void *)v74, v58[29] - v74);
    v75 = v58[25];
    v76 = v58[24];
    if ( v75 != v76 )
    {
      do
      {
        if ( *(_QWORD *)v76 != v76 + 16 )
          operator delete(*(void **)v76, *(_QWORD *)(v76 + 16) + 1LL);
        v76 += 32;
      }
      while ( v75 != v76 );
      v76 = v58[24];
    }
    if ( v76 )
      operator delete((void *)v76, v58[26] - v76);
    v77 = v58[22];
    v78 = v58[21];
    if ( v77 != v78 )
    {
      do
      {
        if ( *(_QWORD *)v78 != v78 + 16 )
          operator delete(*(void **)v78, *(_QWORD *)(v78 + 16) + 1LL);
        v78 += 32;
      }
      while ( v77 != v78 );
      v78 = v58[21];
    }
    if ( v78 )
      operator delete((void *)v78, v58[23] - v78);
    v79 = v58[19];
    v80 = v58[18];
    if ( v79 != v80 )
    {
      do
      {
        if ( *(_QWORD *)v80 != v80 + 16 )
          operator delete(*(void **)v80, *(_QWORD *)(v80 + 16) + 1LL);
        v80 += 32;
      }
      while ( v79 != v80 );
      v80 = v58[18];
    }
    if ( v80 )
      operator delete((void *)v80, v58[20] - v80);
    v81 = (char *)v58[14];
    if ( v81 != (char *)(v58 + 16) )
      operator delete(v81, v58[16] + 1LL);
    v82 = (char *)v58[10];
    if ( v82 != (char *)(v58 + 12) )
      operator delete(v82, v58[12] + 1LL);
    v83 = (char *)v58[6];
    if ( v83 != (char *)(v58 + 8) )
      operator delete(v83, v58[8] + 1LL);
    operator delete(v58, 0x108u);
  }
LABEL_141:
  v59 = (void **)a1[108];
  v60 = &v59[*((unsigned int *)a1 + 218)];
  if ( v59 == v60 )
    goto LABEL_149;
  do
  {
    while ( 1 )
    {
      v61 = *--v60;
      if ( !v61 )
        goto LABEL_144;
      v62 = *(void (__fastcall **)(_QWORD *))(*v61 + 8LL);
      if ( v62 != sub_629640 )
        break;
      *v61 = &off_47D0298;
      sub_62FED0(v61);
      operator delete(v61, 0x48u);
LABEL_144:
      *v60 = nullptr;
      if ( v59 == v60 )
        goto LABEL_148;
    }
    v62(v61);
    *v60 = nullptr;
  }
  while ( v59 != v60 );
LABEL_148:
  v60 = (void **)a1[108];
LABEL_149:
  if ( v60 != a1 + 110 )
    free(v60);
  v63 = (void **)a1[2];
  v64 = &v63[13 * *((unsigned int *)a1 + 6)];
  if ( v63 != v64 )
  {
    do
    {
      v65 = *(v64 - 3);
      v66 = *(v64 - 2);
      v64 -= 13;
      v67 = v65;
      if ( v66 != v65 )
      {
        do
        {
          v68 = (char *)v67[3];
          if ( v68 != (char *)(v67 + 5) )
            operator delete(v68, v67[5] + 1LL);
          v67 += 8;
        }
        while ( v66 != v67 );
        v65 = v64[10];
      }
      if ( v65 )
        operator delete(v65, (_BYTE *)v64[12] - (_BYTE *)v65);
      v69 = v64[7];
      if ( v69 )
        operator delete(v69, (_BYTE *)v64[9] - (_BYTE *)v69);
      v70 = (void **)v64[3];
      if ( v70 != v64 + 5 )
        operator delete(v70, (unsigned __int64)v64[5] + 1);
    }
    while ( v63 != v64 );
    v64 = (void **)a1[2];
  }
  if ( v64 != a1 + 4 )
    free(v64);
  operator delete(a1, 0x7D8u);
}

