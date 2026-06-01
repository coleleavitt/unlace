void __fastcall ClpModel::deleteRowsAndColumns(ClpModel *this, int a2, const int *a3, int a4, const int *a5)
{
  ClpModel *v6; // rbx
  int v8; // edx
  __int64 v9; // r15
  char *v10; // r14
  char *v11; // r13
  const int *v12; // rax
  __int64 v13; // rdx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rax
  int v21; // r10d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rdi
  int v28; // edx
  const int *v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rax
  int v35; // r8d
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rdi
  __int64 v39; // r15
  __int64 v40; // rax
  int v41; // eax
  const void *v42; // r8
  int (__fastcall *v43)(const void *); // r9
  _QWORD *v44; // rax
  __int64 v45; // r15
  int v46; // eax
  int v47; // esi
  int v48; // eax
  void *v49; // rdi
  void *v50; // rdi
  bool v51; // zf
  void *v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  int v55; // esi
  int v56; // esi
  int v57; // ecx
  int v58; // esi
  int v59; // eax
  int v60; // r12d
  __int64 v61; // rbp
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // rsi
  __int64 v65; // rcx
  int v66; // edx
  int v67; // edi
  __int64 v68; // r11
  _DWORD *v69; // rax
  __int64 v70; // r12
  __int64 v71; // r10
  __int64 v72; // rcx
  __int64 v73; // rdx
  _DWORD *v74; // r15
  int v75; // ebx
  int v76; // r8d
  int v77; // edi
  __int64 v78; // rax
  int v79; // esi
  int v80; // edx
  __int64 v81; // xmm0_8
  __int64 v82; // rdi
  int v83; // edx
  int v84; // edi
  __int64 v85; // rax
  int v86; // esi
  int v87; // ecx
  int v88; // edx
  int v89; // edi
  char v90; // r8
  __int64 v91; // rdx
  int v92; // ecx
  int v93; // r8d
  int v94; // ecx
  int *v96; // [rsp+0h] [rbp-78h]
  __int64 v98; // [rsp+8h] [rbp-70h]
  size_t na; // [rsp+10h] [rbp-68h]
  int n; // [rsp+10h] [rbp-68h]
  size_t nb; // [rsp+10h] [rbp-68h]
  const void *v102; // [rsp+18h] [rbp-60h]
  int (__fastcall *v103)(const void *); // [rsp+20h] [rbp-58h]
  _QWORD *v104; // [rsp+28h] [rbp-50h]
  int v105; // [rsp+34h] [rbp-44h] BYREF
  char v106[64]; // [rsp+38h] [rbp-40h] BYREF

  v6 = this;
  if ( !a4 )
  {
    ClpModel::deleteRows(this, a2, a3);
    return;
  }
  if ( !a2 )
  {
    ClpModel::deleteColumns(this, a4, a5);
    return;
  }
  v8 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  *((_DWORD *)this + 79) &= 0xFFFFFE00;
  v9 = *((_QWORD *)this + 33);
  if ( (unsigned __int64)v8 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  na = 4LL * v8;
  v10 = (char *)operator new[](na);
  v11 = &v10[4 * *((int *)this + 26)];
  memset(v10, 0, na);
  v105 = 0;
  if ( a4 > 0 )
  {
    v12 = a5;
    do
    {
      v13 = *v12;
      if ( (int)v13 >= 0 && *((_DWORD *)this + 27) > (int)v13 )
        *(_DWORD *)&v11[4 * v13] = -1;
      ++v12;
    }
    while ( &a5[a4 - 1 + 1] != v12 );
  }
  v14 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))this + 20);
  v15 = 0;
  if ( v14 )
    v15 = (**v14)(v14, 0, 0, v106, 0, 2);
  v16 = *((int *)v6 + 27);
  if ( (int)v16 > 0 )
  {
    v17 = 0;
    if ( v9 )
    {
      do
      {
        while ( !*(_DWORD *)&v11[4 * v17] )
        {
          v18 = v105;
          *(_QWORD *)(*((_QWORD *)v6 + 15) + 8LL * v105) = *(_QWORD *)(*((_QWORD *)v6 + 15) + 8 * v17);
          *(_QWORD *)(*((_QWORD *)v6 + 17) + 8 * v18) = *(_QWORD *)(*((_QWORD *)v6 + 17) + 8 * v17);
          *(_QWORD *)(v15 + 8 * v18) = *(_QWORD *)(v15 + 8 * v17);
          *(_QWORD *)(*((_QWORD *)v6 + 22) + 8 * v18) = *(_QWORD *)(*((_QWORD *)v6 + 22) + 8 * v17);
          *(_QWORD *)(*((_QWORD *)v6 + 23) + 8 * v18) = *(_QWORD *)(*((_QWORD *)v6 + 23) + 8 * v17);
          *(_BYTE *)(*((_QWORD *)v6 + 33) + v18) = *(_BYTE *)(*((_QWORD *)v6 + 33) + v17);
          v19 = v105 + 1;
          *(_DWORD *)&v11[4 * v17++] = v105;
          v105 = v19;
          v16 = *((int *)v6 + 27);
          if ( (int)v17 >= (int)v16 )
            goto LABEL_16;
        }
        ++v17;
      }
      while ( (int)v16 > (int)v17 );
    }
    else
    {
      v89 = v105;
      v90 = 0;
      v91 = 1;
      do
      {
        for ( ; !*(_DWORD *)&v11[4 * v91 - 4]; v90 = 1 )
        {
          *(_QWORD *)(*((_QWORD *)v6 + 15) + 8LL * v89) = *(_QWORD *)(*((_QWORD *)v6 + 15) + 8 * v91 - 8);
          *(_QWORD *)(*((_QWORD *)v6 + 17) + 8LL * v89) = *(_QWORD *)(*((_QWORD *)v6 + 17) + 8 * v91 - 8);
          *(_QWORD *)(v15 + 8LL * v89) = *(_QWORD *)(v15 + 8 * v91 - 8);
          *(_QWORD *)(*((_QWORD *)v6 + 22) + 8LL * v89) = *(_QWORD *)(*((_QWORD *)v6 + 22) + 8 * v91 - 8);
          *(_QWORD *)(*((_QWORD *)v6 + 23) + 8LL * v89) = *(_QWORD *)(*((_QWORD *)v6 + 23) + 8 * v91 - 8);
          v16 = *((int *)v6 + 27);
          v92 = v91;
          *(_DWORD *)&v11[4 * v91++ - 4] = v89;
          v93 = v89 + 1;
          if ( v92 >= (int)v16 )
            goto LABEL_106;
          ++v89;
        }
        v94 = v91++;
      }
      while ( v94 < (int)v16 );
      if ( !v90 )
        goto LABEL_16;
      v93 = v89;
LABEL_106:
      v105 = v93;
    }
  }
LABEL_16:
  v20 = *((_QWORD *)v6 + 34);
  if ( v20 )
  {
    v20 = sub_8F870(*((_BYTE **)v6 + 34), v16, a4, (__int64)a5, &v105, 1);
    v16 = *((int *)v6 + 27);
  }
  v21 = *((_DWORD *)v6 + 82);
  *((_QWORD *)v6 + 34) = v20;
  if ( v21 )
  {
    v22 = *((_QWORD *)v6 + 49);
    if ( (int)v16 > 0 )
    {
      v23 = 1;
      do
      {
        while ( 1 )
        {
          v24 = *(int *)&v11[4 * v23 - 4];
          if ( (_DWORD)v24 )
            break;
          v25 = v23++;
          if ( v25 >= (int)v16 )
            goto LABEL_23;
        }
        nb = v23;
        std::string::assign((std::string *)(v22 + 8 * v24), (const std::string *)(v22 + 8 * v23 - 8));
        LODWORD(v16) = *((_DWORD *)v6 + 27);
        v22 = *((_QWORD *)v6 + 49);
        v23 = nb + 1;
      }
      while ( (int)nb < (int)v16 );
    }
LABEL_23:
    std::vector<std::string>::_M_erase();
    v16 = *((int *)v6 + 27);
  }
  v26 = *((_QWORD *)v6 + 33);
  v27 = v105;
  v28 = *((_DWORD *)v6 + 26);
  if ( a2 > 0 )
  {
    v29 = a3;
    do
    {
      v30 = *v29;
      if ( (int)v30 >= 0 && (int)v30 < v28 )
        *(_DWORD *)&v10[4 * v30] = -1;
      ++v29;
    }
    while ( &a3[a2 - 1 + 1] != v29 );
  }
  if ( v28 <= 0 )
  {
    n = *((_DWORD *)v6 + 82);
    if ( !n )
      goto LABEL_42;
    n = 0;
LABEL_41:
    std::vector<std::string>::_M_erase();
LABEL_42:
    v42 = *((const void **)v6 + 24);
    v43 = *(int (__fastcall **)(const void *))(*(_QWORD *)v42 + 24LL);
    goto LABEL_43;
  }
  v31 = 0;
  v32 = v26 + v16;
  v33 = v26 + v27;
  v34 = 1;
  if ( v9 )
  {
    while ( *(_DWORD *)&v10[4 * v34 - 4] )
    {
LABEL_35:
      v37 = v34++;
      if ( v37 >= v28 )
        goto LABEL_36;
    }
    while ( 1 )
    {
      *(_QWORD *)(*((_QWORD *)v6 + 14) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 14) + 8 * v34 - 8);
      *(_QWORD *)(*((_QWORD *)v6 + 16) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 16) + 8 * v34 - 8);
      *(_QWORD *)(*((_QWORD *)v6 + 18) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 18) + 8 * v34 - 8);
      *(_QWORD *)(*((_QWORD *)v6 + 19) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 19) + 8 * v34 - 8);
      *(_BYTE *)(v33 + v31) = *(_BYTE *)(v32 + v34 - 1);
      v28 = *((_DWORD *)v6 + 26);
      v35 = v31 + 1;
      *(_DWORD *)&v10[4 * v34 - 4] = v31;
      v36 = v34++;
      if ( v36 >= v28 )
        break;
      v31 = v35;
      if ( *(_DWORD *)&v10[4 * v34 - 4] )
        goto LABEL_35;
    }
    n = v35;
LABEL_96:
    if ( !*((_DWORD *)v6 + 82) )
      goto LABEL_42;
    v38 = *((_QWORD *)v6 + 46);
    if ( v28 <= 0 )
      goto LABEL_41;
    goto LABEL_38;
  }
  while ( 2 )
  {
    while ( *(_DWORD *)&v10[4 * v34 - 4] )
    {
      v55 = v34++;
      if ( v55 >= v28 )
        goto LABEL_36;
    }
    do
    {
      *(_QWORD *)(*((_QWORD *)v6 + 14) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 14) + 8 * v34 - 8);
      *(_QWORD *)(*((_QWORD *)v6 + 16) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 16) + 8 * v34 - 8);
      *(_QWORD *)(*((_QWORD *)v6 + 18) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 18) + 8 * v34 - 8);
      v56 = v31 + 1;
      *(_QWORD *)(*((_QWORD *)v6 + 19) + 8LL * v31) = *(_QWORD *)(*((_QWORD *)v6 + 19) + 8 * v34 - 8);
      v28 = *((_DWORD *)v6 + 26);
      *(_DWORD *)&v10[4 * v34 - 4] = v31;
      v57 = v34++;
      if ( v57 >= v28 )
      {
        n = v56;
        goto LABEL_96;
      }
      v31 = v56;
    }
    while ( !*(_DWORD *)&v10[4 * v34 - 4] );
    v58 = v34++;
    if ( v58 < v28 )
      continue;
    break;
  }
LABEL_36:
  if ( *((_DWORD *)v6 + 82) )
  {
    v38 = *((_QWORD *)v6 + 46);
    n = v31;
LABEL_38:
    v39 = 1;
    do
    {
      while ( 1 )
      {
        v40 = *(int *)&v10[4 * v39 - 4];
        if ( (_DWORD)v40 )
          break;
        v41 = v39++;
        if ( v41 >= v28 )
          goto LABEL_41;
      }
      std::string::assign((std::string *)(v38 + 8 * v40), (const std::string *)(v38 + 8 * v39 - 8));
      v28 = *((_DWORD *)v6 + 26);
      v59 = v39++;
      v38 = *((_QWORD *)v6 + 46);
    }
    while ( v59 < v28 );
    goto LABEL_41;
  }
  v42 = *((const void **)v6 + 24);
  n = v31;
  v43 = *(int (__fastcall **)(const void *))(*(_QWORD *)v42 + 24LL);
LABEL_43:
  v103 = v43;
  v102 = v42;
  v44 = __dynamic_cast(
          v42,
          (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
          (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
          0);
  v104 = v44;
  if ( !v44 )
  {
    if ( v103(v102) < *((_DWORD *)v6 + 27) )
      BUG();
    goto LABEL_46;
  }
  v45 = v44[11];
  v46 = v103(v102);
  v47 = *((_DWORD *)v6 + 27);
  if ( v47 > v46 )
  {
    v60 = *(_DWORD *)(v45 + 72);
    v61 = *(int *)(v45 + 64);
    if ( !*(_BYTE *)(v45 + 8) )
      v61 = *(int *)(v45 + 68);
    CoinPackedMatrix::reserve((CoinPackedMatrix *)v45, v47, v60, 0);
    if ( (int)v61 < *((_DWORD *)v6 + 27) )
    {
      v62 = (int)v61 + 1;
      v63 = v61 - v62;
      v64 = 4 * v63 + *(_QWORD *)(v45 + 48);
      v65 = 4 * v63 + *(_QWORD *)(v45 + 56);
      do
      {
        *(_DWORD *)(v64 + 4 * v62) = v60;
        v66 = v62;
        *(_DWORD *)(v65 + 4 * v62++) = 0;
      }
      while ( *((_DWORD *)v6 + 27) > v66 );
    }
    goto LABEL_79;
  }
  if ( v45 )
  {
LABEL_79:
    CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v45, 0.1);
    CoinPackedMatrix::setExtraGap((CoinPackedMatrix *)v45, 0.0);
    CoinPackedMatrix::setExtraMajor((CoinPackedMatrix *)v45, 0.0);
    v67 = *((_DWORD *)v6 + 27);
    v68 = *(_QWORD *)(v45 + 40);
    v69 = *(_DWORD **)(v45 + 48);
    v70 = *(_QWORD *)(v45 + 56);
    v71 = *(_QWORD *)(v45 + 32);
    v105 = 0;
    if ( v67 <= 0 )
    {
      v87 = 0;
    }
    else
    {
      v98 = v45;
      v96 = (int *)v6;
      v72 = 1;
      v73 = 0;
      v74 = v69;
      v75 = 0;
      do
      {
        v69 = &v74[v73];
        if ( *(int *)&v11[4 * v72 - 4] >= 0 )
        {
          v76 = v74[v72 - 1];
          *v69 = v75;
          v77 = v76 + *(_DWORD *)(v70 + 4 * v72 - 4);
          if ( v76 >= v77 )
          {
            v84 = 0;
          }
          else
          {
            v78 = v76 + 1;
            v79 = v75;
            do
            {
              while ( 1 )
              {
                v80 = *(_DWORD *)&v10[4 * *(int *)(v68 + -4LL * (v76 + 1) + 4LL * v76 + 4 * v78)];
                if ( v80 < 0 )
                  break;
                v81 = *(_QWORD *)(v71 + 8LL * v76 - 8LL * (v76 + 1) + 8 * v78);
                v82 = v79++;
                *(_DWORD *)(v68 + 4 * v82) = v80;
                v83 = v78++;
                *(_QWORD *)(v71 + 8 * v82) = v81;
                v77 = v76 + *(_DWORD *)(v70 + 4 * v72 - 4);
                if ( v83 >= v77 )
                  goto LABEL_86;
              }
              v88 = v78++;
            }
            while ( v77 > v88 );
LABEL_86:
            v84 = v79 - v75;
            v75 = v79;
          }
          v85 = v105++;
          *(_DWORD *)(v70 + 4 * v85) = v84;
          v73 = v105;
          v67 = v96[27];
          v69 = &v74[v105];
        }
        v86 = v72++;
      }
      while ( v86 < v67 );
      v87 = v75;
      v45 = v98;
      v6 = (ClpModel *)v96;
    }
    *v69 = v87;
    v48 = v105;
    *(_DWORD *)(v45 + 72) = v87;
    *(_DWORD *)(v45 + 68) = n;
    *(_DWORD *)(v45 + 64) = v48;
    *((_DWORD *)v104 + 24) = v48;
    goto LABEL_47;
  }
LABEL_46:
  (*(void (__fastcall **)(_QWORD, _QWORD, const int *))(**((_QWORD **)v6 + 24) + 88LL))(
    *((_QWORD *)v6 + 24),
    (unsigned int)a2,
    a3);
  (*(void (__fastcall **)(_QWORD, _QWORD, const int *))(**((_QWORD **)v6 + 24) + 80LL))(
    *((_QWORD *)v6 + 24),
    (unsigned int)a4,
    a5);
  v48 = v105;
LABEL_47:
  *((_DWORD *)v6 + 27) = v48;
  *((_DWORD *)v6 + 26) = n;
  operator delete[](v10);
  v49 = *((void **)v6 + 27);
  *((_QWORD *)v6 + 40) = 0xFFFFFFFFLL;
  if ( v49 )
    operator delete[](v49);
  v50 = *((void **)v6 + 28);
  v51 = *((_QWORD *)v6 + 84) == (_QWORD)v50;
  *((_QWORD *)v6 + 27) = 0;
  if ( !v51 )
  {
    if ( v50 )
      operator delete[](v50);
    v52 = *((void **)v6 + 29);
    if ( v52 )
      operator delete[](v52);
  }
  v53 = *((_QWORD *)v6 + 26);
  *((_QWORD *)v6 + 28) = 0;
  *((_QWORD *)v6 + 29) = 0;
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 480LL))(v53);
  v54 = *((_QWORD *)v6 + 25);
  *((_QWORD *)v6 + 26) = 0;
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 480LL))(v54);
  *((_QWORD *)v6 + 25) = 0;
}

