__int64 __fastcall sub_68D560(__int64 a1, int a2, unsigned int *a3, int a4, __int64 a5, int a6, void *src, size_t n)
{
  int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned int v16; // ebx
  int v18; // r14d
  size_t v19; // rax
  const char *v20; // rdx
  const char *v21; // r12
  size_t v22; // rdx
  _QWORD *v23; // rdi
  std::_V2 *v24; // rcx
  size_t v25; // rax
  std::_V2 *v26; // rdi
  _BYTE *v27; // rax
  const char **v28; // rax
  __int64 v29; // rcx
  int v30; // r8d
  unsigned int v31; // edx
  unsigned __int64 v32; // rsi
  unsigned int v33; // r10d
  int *v34; // rdi
  int v35; // r8d
  int v36; // r11d
  int *v37; // rax
  int v38; // edi
  unsigned __int64 v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r8
  _DWORD *v43; // rdi
  int *v44; // r10
  int *i; // r9
  int v46; // eax
  int v47; // edx
  int v48; // esi
  __int64 v49; // r8
  unsigned int v50; // r11d
  int *v51; // rdx
  int v52; // edi
  unsigned int v53; // eax
  _DWORD *v54; // rax
  int v55; // r9d
  __int64 v56; // r8
  __int64 v57; // r8
  _DWORD *v58; // rdi
  int *v59; // r8
  int v60; // eax
  int v61; // edx
  int v62; // esi
  __int64 v63; // r11
  unsigned int v64; // r9d
  int *v65; // rdx
  int v66; // edi
  int v67; // edx
  int v68; // edx
  __int64 v69; // r9
  __int64 v70; // rsi
  int v71; // r8d
  int v72; // r11d
  int *v73; // r10
  int v74; // edx
  int v75; // edx
  __int64 v76; // r10
  int v77; // r11d
  __int64 v78; // rax
  int *v79; // r9
  __int64 v80; // r8
  int v81; // esi
  int v82; // edi
  int *v83; // [rsp+0h] [rbp-68h]
  const char *v84; // [rsp+0h] [rbp-68h]
  __int64 v85; // [rsp+8h] [rbp-60h]
  __int64 v86; // [rsp+8h] [rbp-60h]
  unsigned int v87; // [rsp+10h] [rbp-58h]
  unsigned int v88; // [rsp+10h] [rbp-58h]
  int *v89; // [rsp+10h] [rbp-58h]
  int v90; // [rsp+18h] [rbp-50h]
  int *v91; // [rsp+18h] [rbp-50h]
  int v92; // [rsp+24h] [rbp-44h]
  int v93[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v10 = a5;
  v12 = *(_QWORD *)(a1 + 32);
  v93[0] = a4;
  v13 = *(unsigned int *)(a1 + 40);
  v14 = *(_QWORD *)(v12 + 8 * v13 - 8);
  *(_DWORD *)(v14 + 168) = a2;
  v15 = sub_689D90(a1, a3, v14 + 56, v13, a5);
  if ( v15 )
    return v15;
  v18 = v93[0];
  v19 = 0;
  v20 = &byte_3B9466E;
  *(_DWORD *)(v14 + 172) = v93[0];
  if ( v10 )
  {
    v29 = *(_QWORD *)(a1 + 24);
    v30 = 0;
    v31 = *(_DWORD *)(v29 + 176);
    v83 = *(int **)(v29 + 160);
    if ( !v31 )
      goto LABEL_27;
    v32 = v31 - 1;
    v33 = v32 & (37 * v10);
    v34 = &v83[4 * v33];
    v35 = *v34;
    if ( *v34 == v10 )
    {
LABEL_14:
      if ( *((_QWORD *)v34 + 1) )
      {
        v84 = *((const char **)v34 + 1);
        v19 = strlen(v84);
        v20 = v84;
        goto LABEL_5;
      }
      goto LABEL_26;
    }
    v36 = 1;
    v37 = nullptr;
    while ( v35 != -1 )
    {
      if ( v35 == -2 && !v37 )
        v37 = v34;
      v82 = v36++;
      v33 = v32 & (v82 + v33);
      v34 = &v83[4 * v33];
      v35 = *v34;
      if ( *v34 == v10 )
        goto LABEL_14;
    }
    v30 = 2 * v31;
    if ( !v37 )
      v37 = v34;
    v38 = *(_DWORD *)(v29 + 168) + 1;
    if ( 4 * v38 < 3 * v31 )
    {
      if ( v31 >> 3 < v31 - *(_DWORD *)(v29 + 172) - v38 )
      {
LABEL_23:
        *(_DWORD *)(v29 + 168) = v38;
        if ( *v37 != -1 )
          --*(_DWORD *)(v29 + 172);
        *v37 = v10;
        *((_QWORD *)v37 + 1) = 0;
LABEL_26:
        v20 = nullptr;
        v19 = 0;
        goto LABEL_5;
      }
      v88 = *(_DWORD *)(v29 + 176);
      v86 = v29;
      v53 = (((((((((v32 | (v32 >> 1)) >> 2) | v32 | (v32 >> 1)) >> 4) | ((v32 | (v32 >> 1)) >> 2) | v32 | (v32 >> 1)) >> 8)
             | ((((v32 | (v32 >> 1)) >> 2) | v32 | (v32 >> 1)) >> 4)
             | ((v32 | (v32 >> 1)) >> 2)
             | v32
             | (v32 >> 1)) >> 16)
           | ((((((v32 | (v32 >> 1)) >> 2) | v32 | (v32 >> 1)) >> 4) | ((v32 | (v32 >> 1)) >> 2) | v32 | (v32 >> 1)) >> 8)
           | ((((v32 | (v32 >> 1)) >> 2) | v32 | (v32 >> 1)) >> 4)
           | ((v32 | (v32 >> 1)) >> 2)
           | v32
           | (v32 >> 1))
          + 1;
      if ( v53 < 0x40 )
        v53 = 64;
      *(_DWORD *)(v29 + 176) = v53;
      v54 = (_DWORD *)sub_25CC9C0(16LL * v53, 8);
      v29 = v86;
      v55 = 37 * v10;
      v56 = *(unsigned int *)(v86 + 176);
      *(_QWORD *)(v86 + 160) = v54;
      v57 = 16 * v56;
      v58 = &v54[(unsigned __int64)v57 / 4];
      if ( v83 )
      {
        *(_QWORD *)(v86 + 168) = 0;
        if ( v57 )
        {
          if ( (v57 & 0x10) == 0 || (*v54 = -1, v54 += 4, v54 != v58) )
          {
            do
            {
              *v54 = -1;
              v54 += 8;
              *(v54 - 4) = -1;
            }
            while ( v54 != v58 );
          }
        }
        v59 = v83;
        do
        {
          v60 = *v59;
          if ( (unsigned int)*v59 <= 0xFFFFFFFD )
          {
            v61 = *(_DWORD *)(v86 + 176);
            if ( !v61 )
            {
              dword_0 = 0;
              BUG();
            }
            v62 = v61 - 1;
            v63 = *(_QWORD *)(v86 + 160);
            v64 = (v61 - 1) & (37 * v60);
            v65 = (int *)(v63 + 16LL * v64);
            v66 = *v65;
            if ( v60 != *v65 )
            {
              v92 = 1;
              v91 = nullptr;
              while ( v66 != -1 )
              {
                if ( v66 == -2 )
                {
                  if ( v91 )
                    v65 = v91;
                  v91 = v65;
                }
                v64 = v62 & (v92 + v64);
                v65 = (int *)(v63 + 16LL * v64);
                v66 = *v65;
                if ( v60 == *v65 )
                  goto LABEL_53;
                ++v92;
              }
              if ( v91 )
                v65 = v91;
            }
LABEL_53:
            *v65 = v60;
            *((_QWORD *)v65 + 1) = *((_QWORD *)v59 + 1);
            ++*(_DWORD *)(v86 + 168);
          }
          v59 += 4;
        }
        while ( &v83[4 * v88] != v59 );
        operator delete();
        v29 = v86;
        v55 = 37 * v10;
      }
      else
      {
        *(_QWORD *)(v86 + 168) = 0;
        if ( v54 != v58 )
        {
          if ( (v57 & 0x10) == 0 || (*v54 = -1, v54 += 4, v54 != v58) )
          {
            do
            {
              *v54 = -1;
              v54 += 8;
              *(v54 - 4) = -1;
            }
            while ( v54 != v58 );
          }
        }
      }
      v74 = *(_DWORD *)(v29 + 176);
      v38 = *(_DWORD *)(v29 + 168) + 1;
      if ( v74 )
      {
        v75 = v74 - 1;
        v76 = *(_QWORD *)(v29 + 160);
        v77 = 1;
        v78 = v75 & (unsigned int)v55;
        v79 = nullptr;
        LODWORD(v80) = v78;
        v37 = (int *)(v76 + 16 * v78);
        v81 = *v37;
        if ( *v37 != v10 )
        {
          while ( v81 != -1 )
          {
            if ( !v79 && v81 == -2 )
              v79 = v37;
            v80 = v75 & (unsigned int)(v80 + v77);
            v37 = (int *)(v76 + 16 * v80);
            v81 = *v37;
            if ( *v37 == v10 )
              goto LABEL_23;
            ++v77;
          }
          if ( v79 )
            v37 = v79;
        }
        goto LABEL_23;
      }
    }
    else
    {
LABEL_27:
      v87 = *(_DWORD *)(v29 + 176);
      v85 = v29;
      v39 = ((((((((((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
                 | (unsigned int)(v30 - 1)
                 | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 4)
               | (((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
               | (unsigned int)(v30 - 1)
               | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
               | (unsigned int)(v30 - 1)
               | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 4)
             | (((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
             | (unsigned int)(v30 - 1)
             | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
               | (unsigned int)(v30 - 1)
               | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 4)
             | (((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
             | (unsigned int)(v30 - 1)
             | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
             | (unsigned int)(v30 - 1)
             | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 4)
           | (((unsigned int)(v30 - 1) | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1)) >> 2)
           | (unsigned int)(v30 - 1)
           | ((unsigned __int64)(unsigned int)(v30 - 1) >> 1))
          + 1;
      if ( (unsigned int)v39 < 0x40 )
        LODWORD(v39) = 64;
      *(_DWORD *)(v29 + 176) = v39;
      v40 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v39, 8);
      v29 = v85;
      v41 = *(unsigned int *)(v85 + 176);
      *(_QWORD *)(v85 + 160) = v40;
      v42 = 16 * v41;
      v43 = &v40[(unsigned __int64)v42 / 4];
      if ( v83 )
      {
        *(_QWORD *)(v85 + 168) = 0;
        v44 = &v83[4 * v87];
        if ( v42 )
        {
          if ( (v42 & 0x10) == 0 || (*v40 = -1, v40 += 4, v40 != v43) )
          {
            do
            {
              *v40 = -1;
              v40 += 8;
              *(v40 - 4) = -1;
            }
            while ( v40 != v43 );
          }
        }
        for ( i = v83; v44 != i; i += 4 )
        {
          v46 = *i;
          if ( (unsigned int)*i <= 0xFFFFFFFD )
          {
            v47 = *(_DWORD *)(v85 + 176);
            if ( !v47 )
            {
              dword_0 = 0;
              BUG();
            }
            v48 = v47 - 1;
            v49 = *(_QWORD *)(v85 + 160);
            v50 = (v47 - 1) & (37 * v46);
            v51 = (int *)(v49 + 16LL * v50);
            v52 = *v51;
            if ( v46 != *v51 )
            {
              v90 = 1;
              v89 = nullptr;
              while ( v52 != -1 )
              {
                if ( v52 == -2 )
                {
                  if ( v89 )
                    v51 = v89;
                  v89 = v51;
                }
                v50 = v48 & (v90 + v50);
                v51 = (int *)(v49 + 16LL * v50);
                v52 = *v51;
                if ( v46 == *v51 )
                  goto LABEL_40;
                ++v90;
              }
              if ( v89 )
                v51 = v89;
            }
LABEL_40:
            *v51 = v46;
            *((_QWORD *)v51 + 1) = *((_QWORD *)i + 1);
            ++*(_DWORD *)(v85 + 168);
          }
        }
        operator delete();
        v29 = v85;
      }
      else
      {
        *(_QWORD *)(v85 + 168) = 0;
        if ( v40 != v43 )
        {
          if ( (v42 & 0x10) == 0 || (*v40 = -1, v40 += 4, v40 != v43) )
          {
            do
            {
              *v40 = -1;
              v40 += 8;
              *(v40 - 4) = -1;
            }
            while ( v40 != v43 );
          }
        }
      }
      v67 = *(_DWORD *)(v29 + 176);
      v38 = *(_DWORD *)(v29 + 168) + 1;
      if ( v67 )
      {
        v68 = v67 - 1;
        v69 = *(_QWORD *)(v29 + 160);
        LODWORD(v70) = v68 & (37 * v10);
        v37 = (int *)(v69 + 16LL * (unsigned int)v70);
        v71 = *v37;
        if ( *v37 != v10 )
        {
          v72 = 1;
          v73 = nullptr;
          while ( v71 != -1 )
          {
            if ( v71 == -2 && !v73 )
              v73 = v37;
            v70 = v68 & (unsigned int)(v70 + v72);
            v37 = (int *)(v69 + 16 * v70);
            v71 = *v37;
            if ( *v37 == v10 )
              goto LABEL_23;
            ++v72;
          }
          if ( v73 )
            v37 = v73;
        }
        goto LABEL_23;
      }
    }
    ++*(_DWORD *)(v29 + 168);
    BUG();
  }
LABEL_5:
  *(_QWORD *)(v14 + 136) = v20;
  v21 = &byte_3B9466E;
  v22 = 0;
  *(_QWORD *)(v14 + 144) = v19;
  if ( v18 )
  {
    v28 = (const char **)sub_68CF60(*(_QWORD *)(a1 + 24) + 136LL, v93);
    v22 = 0;
    v21 = *v28;
    if ( *v28 )
      v22 = strlen(*v28);
  }
  *(_QWORD *)(v14 + 152) = v21;
  *(_QWORD *)(v14 + 160) = v22;
  v23 = *(_QWORD **)(a1 + 24);
  v24 = (std::_V2 *)v23[5];
  v23[15] += n + 1;
  v25 = (size_t)v24 + n + 1;
  if ( v23[6] >= v25 && v24 )
    v23[5] = v25;
  else
    v24 = (std::_V2 *)sub_689820((__int64)(v23 + 5), n + 1, 0);
  v26 = v24;
  v16 = 0;
  v27 = memcpy(v24, src, n);
  v27[n] = 0;
  *(_QWORD *)(v14 + 128) = v27;
  std::_V2::system_category(v26);
  return v16;
}

