__int64 __fastcall sub_68ABA0(const char *a1, __int64 a2, const void *a3, size_t a4, __int64 a5, __int64 a6)
{
  const char *v6; // r13
  _DWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // ebx
  _QWORD *v11; // rdi
  unsigned int v12; // ebx
  char *v15; // rbp
  char *v16; // rax
  __int64 v17; // r12
  int v18; // eax
  __int64 v19; // r15
  int *v20; // r13
  unsigned __int64 v21; // rcx
  int v22; // r8d
  unsigned int *v23; // rdx
  int v24; // r14d
  unsigned __int64 v25; // rdi
  int *v26; // rax
  unsigned int v27; // esi
  _QWORD *v28; // rax
  int v29; // esi
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // rdx
  int *v37; // r8
  int *i; // rax
  int v39; // edx
  int v40; // edi
  int v41; // edi
  int v42; // r15d
  int *v43; // r14
  __int64 v44; // r11
  __int64 v45; // r9
  int *v46; // rcx
  int v47; // r10d
  __int64 v48; // rax
  _DWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  _DWORD *v52; // rdx
  int *v53; // rdi
  int *v54; // rax
  int v55; // edx
  int v56; // r8d
  int v57; // r8d
  __int64 v58; // r11
  unsigned int v59; // r9d
  int *v60; // rcx
  int v61; // r10d
  int v62; // eax
  int v63; // ecx
  __int64 v64; // r8
  unsigned int v65; // eax
  int v66; // r10d
  unsigned int *v67; // r9
  int v68; // eax
  int v69; // eax
  int v70; // r9d
  unsigned int *v71; // r8
  unsigned int v72; // r14d
  int v73; // ecx
  int *v74; // r15
  int v75; // [rsp+8h] [rbp-40h]

  v6 = a1;
  if ( a4 <= 0x10000 )
  {
    v11 = *((_QWORD **)a1 + 3);
    v12 = a2;
    v15 = (char *)v11[5];
    v11[15] += a4 + 1;
    v16 = &v15[a4 + 1];
    if ( v11[6] >= (unsigned __int64)v16 && v15 )
      v11[5] = v16;
    else
      v15 = (char *)sub_689820((__int64)(v11 + 5), a4 + 1, 0);
    memcpy(v15, a3, a4);
    v15[a4] = 0;
    v17 = *((_QWORD *)v6 + 3);
    v18 = 0;
    v19 = *(unsigned int *)(v17 + 176);
    v20 = *(int **)(v17 + 160);
    if ( !(_DWORD)v19 )
      goto LABEL_29;
    v21 = (unsigned int)(v19 - 1);
    v22 = 1;
    v23 = nullptr;
    v24 = 37 * a2;
    v25 = (unsigned int)v21 & (37 * (_DWORD)a2);
    v26 = &v20[4 * v25];
    v27 = *v26;
    if ( *v26 == v12 )
    {
LABEL_13:
      v28 = v26 + 2;
LABEL_14:
      *v28 = v15;
      v9 = 0;
      std::_V2::system_category((std::_V2 *)v25);
      return v9;
    }
    while ( v27 != -1 )
    {
      if ( v27 == -2 && !v23 )
        v23 = (unsigned int *)v26;
      v25 = (unsigned int)v21 & (v22 + (_DWORD)v25);
      v26 = &v20[4 * (unsigned int)v25];
      v27 = *v26;
      if ( *v26 == v12 )
        goto LABEL_13;
      ++v22;
    }
    if ( !v23 )
      v23 = (unsigned int *)v26;
    v29 = *(_DWORD *)(v17 + 168) + 1;
    v18 = 2 * v19;
    if ( 4 * v29 < (unsigned int)(3 * v19) )
    {
      v25 = (unsigned int)v19 >> 3;
      if ( (unsigned int)v25 < (int)v19 - *(_DWORD *)(v17 + 172) - v29 )
      {
LABEL_26:
        *(_DWORD *)(v17 + 168) = v29;
        if ( *v23 != -1 )
          --*(_DWORD *)(v17 + 172);
        *v23 = v12;
        v28 = v23 + 2;
        *((_QWORD *)v23 + 1) = 0;
        goto LABEL_14;
      }
      v48 = (((((((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4) | ((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 8)
             | ((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
             | ((v21 | (v21 >> 1)) >> 2)
             | v21
             | (v21 >> 1)) >> 16)
           | ((((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4) | ((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 8)
           | ((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
           | ((v21 | (v21 >> 1)) >> 2)
           | v21
           | (v21 >> 1))
          + 1;
      if ( (unsigned int)v48 < 0x40 )
        LODWORD(v48) = 64;
      *(_DWORD *)(v17 + 176) = v48;
      v49 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v48, 8);
      v50 = *(unsigned int *)(v17 + 176);
      *(_QWORD *)(v17 + 160) = v49;
      v51 = 16 * v50;
      v52 = &v49[(unsigned __int64)v51 / 4];
      if ( v20 )
      {
        *(_QWORD *)(v17 + 168) = 0;
        v53 = &v20[4 * v19];
        if ( v51 )
        {
          if ( (v51 & 0x10) == 0 || (*v49 = -1, v49 += 4, v49 != v52) )
          {
            do
            {
              *v49 = -1;
              v49 += 8;
              *(v49 - 4) = -1;
            }
            while ( v49 != v52 );
          }
        }
        v54 = v20;
        do
        {
          v55 = *v54;
          if ( (unsigned int)*v54 <= 0xFFFFFFFD )
          {
            v56 = *(_DWORD *)(v17 + 176);
            if ( !v56 )
            {
              dword_0 = 0;
              BUG();
            }
            v57 = v56 - 1;
            v58 = *(_QWORD *)(v17 + 160);
            v59 = v57 & (37 * v55);
            v60 = (int *)(v58 + 16LL * v59);
            v61 = *v60;
            if ( *v60 != v55 )
            {
              v75 = 1;
              v74 = nullptr;
              while ( v61 != -1 )
              {
                if ( !v74 && v61 == -2 )
                  v74 = v60;
                v59 = v57 & (v75 + v59);
                v60 = (int *)(v58 + 16LL * v59);
                v61 = *v60;
                if ( v55 == *v60 )
                  goto LABEL_55;
                ++v75;
              }
              if ( v74 )
                v60 = v74;
            }
LABEL_55:
            *v60 = v55;
            *((_QWORD *)v60 + 1) = *((_QWORD *)v54 + 1);
            ++*(_DWORD *)(v17 + 168);
          }
          v54 += 4;
        }
        while ( v53 != v54 );
        operator delete();
      }
      else
      {
        *(_QWORD *)(v17 + 168) = 0;
        if ( v49 != v52 )
        {
          if ( (v51 & 0x10) == 0 || (*v49 = -1, v49 += 4, v49 != v52) )
          {
            do
            {
              *v49 = -1;
              v49 += 8;
              *(v49 - 4) = -1;
            }
            while ( v49 != v52 );
          }
        }
      }
      v68 = *(_DWORD *)(v17 + 176);
      v29 = *(_DWORD *)(v17 + 168) + 1;
      if ( v68 )
      {
        v69 = v68 - 1;
        v25 = *(_QWORD *)(v17 + 160);
        v70 = 1;
        v71 = nullptr;
        v72 = v69 & v24;
        v23 = (unsigned int *)(v25 + 16LL * v72);
        v73 = *v23;
        if ( *v23 != v12 )
        {
          while ( v73 != -1 )
          {
            if ( v73 == -2 && !v71 )
              v71 = v23;
            v72 = v69 & (v70 + v72);
            v23 = (unsigned int *)(v25 + 16LL * v72);
            v73 = *v23;
            if ( *v23 == v12 )
              goto LABEL_26;
            ++v70;
          }
          if ( v71 )
            v23 = v71;
        }
        goto LABEL_26;
      }
    }
    else
    {
LABEL_29:
      v30 = (unsigned int)(v18 - 1) | ((unsigned __int64)(unsigned int)(v18 - 1) >> 1);
      v31 = (((v30 >> 2) | v30) >> 4) | (v30 >> 2) | v30;
      v32 = ((((v31 >> 8) | v31) >> 16) | (v31 >> 8) | v31) + 1;
      if ( (unsigned int)v32 < 0x40 )
        LODWORD(v32) = 64;
      *(_DWORD *)(v17 + 176) = v32;
      v33 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v32, 8);
      v34 = *(unsigned int *)(v17 + 176);
      *(_QWORD *)(v17 + 160) = v33;
      v35 = 16 * v34;
      v36 = &v33[(unsigned __int64)v35 / 4];
      if ( v20 )
      {
        *(_QWORD *)(v17 + 168) = 0;
        v37 = &v20[4 * (unsigned int)v19];
        if ( v35 )
        {
          if ( (v35 & 0x10) == 0 || (*v33 = -1, v33 += 4, v33 != v36) )
          {
            do
            {
              *v33 = -1;
              v33 += 8;
              *(v33 - 4) = -1;
            }
            while ( v33 != v36 );
          }
        }
        for ( i = v20; v37 != i; i += 4 )
        {
          v39 = *i;
          if ( (unsigned int)*i <= 0xFFFFFFFD )
          {
            v40 = *(_DWORD *)(v17 + 176);
            if ( !v40 )
            {
              dword_0 = 0;
              BUG();
            }
            v41 = v40 - 1;
            v42 = 1;
            v43 = nullptr;
            v44 = *(_QWORD *)(v17 + 160);
            LODWORD(v45) = v41 & (37 * v39);
            v46 = (int *)(v44 + 16LL * (unsigned int)v45);
            v47 = *v46;
            if ( v39 != *v46 )
            {
              while ( v47 != -1 )
              {
                if ( v47 == -2 && !v43 )
                  v43 = v46;
                v45 = v41 & (unsigned int)(v45 + v42);
                v46 = (int *)(v44 + 16 * v45);
                v47 = *v46;
                if ( v39 == *v46 )
                  goto LABEL_42;
                ++v42;
              }
              if ( v43 )
                v46 = v43;
            }
LABEL_42:
            *v46 = v39;
            *((_QWORD *)v46 + 1) = *((_QWORD *)i + 1);
            ++*(_DWORD *)(v17 + 168);
          }
        }
        operator delete();
      }
      else
      {
        *(_QWORD *)(v17 + 168) = 0;
        if ( v33 != v36 )
        {
          if ( (v35 & 0x10) == 0 || (*v33 = -1, v33 += 4, v33 != v36) )
          {
            do
            {
              *v33 = -1;
              v33 += 8;
              *(v33 - 4) = -1;
            }
            while ( v33 != v36 );
          }
        }
      }
      v62 = *(_DWORD *)(v17 + 176);
      v29 = *(_DWORD *)(v17 + 168) + 1;
      if ( v62 )
      {
        v63 = v62 - 1;
        v64 = *(_QWORD *)(v17 + 160);
        v65 = (v62 - 1) & (37 * v12);
        v23 = (unsigned int *)(v64 + 16LL * v65);
        v25 = *v23;
        if ( (_DWORD)v25 != v12 )
        {
          v66 = 1;
          v67 = nullptr;
          while ( (_DWORD)v25 != -1 )
          {
            if ( (_DWORD)v25 == -2 && !v67 )
              v67 = v23;
            v65 = v63 & (v66 + v65);
            v23 = (unsigned int *)(v64 + 16LL * v65);
            v25 = *v23;
            if ( (_DWORD)v25 == v12 )
              goto LABEL_26;
            ++v66;
          }
          if ( v67 )
            v23 = v67;
        }
        goto LABEL_26;
      }
    }
    ++*(_DWORD *)(v17 + 168);
    BUG();
  }
  v7 = *((_DWORD **)a1 + 1);
  if ( v7 )
    *v7 = 3;
  v8 = *((_QWORD **)a1 + 2);
  if ( v8 )
  {
    a1 = "Out-of-bounds string in warning flag";
    a2 = 36;
    *v8 = sub_6905C0("Out-of-bounds string in warning flag", 0x24u);
    v8[1] = a3;
  }
  v9 = 13;
  sub_10DF5B0(a1, a2, a3, a4, a5, a6);
  return v9;
}

