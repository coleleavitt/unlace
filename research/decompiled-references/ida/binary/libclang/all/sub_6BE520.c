unsigned __int64 *__fastcall sub_6BE520(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  __int64 v5; // rbp
  unsigned int v7; // edx
  __int64 *v8; // r14
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned __int64 v11; // rsi
  int v12; // r8d
  int v13; // r13d
  __int64 *v14; // rax
  unsigned int v15; // edi
  __int64 *v16; // r15
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int64 *result; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // edi
  unsigned __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdi
  _QWORD *v29; // rcx
  int v30; // esi
  __int64 v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // r13
  __int64 *i; // r15
  __int64 v35; // rax
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // r8
  int v39; // r11d
  _QWORD *v40; // r10
  __int64 v41; // rsi
  _QWORD *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  void **v46; // rax
  int v47; // esi
  unsigned int v48; // edx
  __int64 v49; // r8
  int v50; // r10d
  __int64 *v51; // r9
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdi
  _QWORD *v56; // rcx
  int v57; // esi
  __int64 v58; // rdi
  _QWORD *v59; // rax
  __int64 v60; // rsi
  __int64 *v61; // rbp
  __int64 *v62; // r15
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // rax
  int v66; // ecx
  int v67; // ecx
  __int64 v68; // r10
  unsigned int v69; // esi
  _QWORD *v70; // rdx
  __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  void **v74; // rax
  int v75; // esi
  int v76; // r9d
  __int64 *v77; // r8
  unsigned int v78; // r13d
  __int64 v79; // rdx
  _QWORD *v80; // rdx
  _QWORD *v81; // rdx
  _QWORD *v82; // r11
  unsigned int v83; // [rsp+8h] [rbp-50h]
  unsigned int v84; // [rsp+8h] [rbp-50h]
  void **v85; // [rsp+8h] [rbp-50h]
  __int64 v86; // [rsp+8h] [rbp-50h]
  int v87; // [rsp+8h] [rbp-50h]
  void **v88; // [rsp+10h] [rbp-48h]
  __int64 v89; // [rsp+10h] [rbp-48h]
  __int64 v90; // [rsp+10h] [rbp-48h]
  __int64 v91; // [rsp+18h] [rbp-40h]

  v3 = 0;
  v5 = a2;
  v7 = *(_DWORD *)(a1 + 1912);
  v8 = *(__int64 **)(a1 + 1896);
  if ( !v7 )
    goto LABEL_25;
  v9 = a2;
  v10 = a2;
  v11 = v7 - 1;
  v12 = 1;
  v13 = (v10 >> 9) ^ (v9 >> 4);
  v14 = nullptr;
  v15 = v11 & v13;
  v16 = &v8[2 * ((unsigned int)v11 & v13)];
  v17 = *v16;
  if ( *v16 != v5 )
  {
    while ( v17 != -4096 )
    {
      if ( v17 == -8192 && !v14 )
        v14 = v16;
      v15 = v11 & (v12 + v15);
      v16 = &v8[2 * v15];
      v17 = *v16;
      if ( *v16 == v5 )
        goto LABEL_3;
      ++v12;
    }
    v3 = 2 * v7;
    if ( !v14 )
      v14 = v16;
    v24 = *(_DWORD *)(a1 + 1904) + 1;
    if ( 4 * v24 < 3 * v7 )
    {
      if ( v7 >> 3 < v7 - *(_DWORD *)(a1 + 1908) - v24 )
      {
LABEL_21:
        *(_DWORD *)(a1 + 1904) = v24;
        if ( *v14 != -4096 )
          --*(_DWORD *)(a1 + 1908);
        *v14 = v5;
        result = (unsigned __int64 *)(v14 + 1);
        *result = 0;
        goto LABEL_24;
      }
      v84 = v7;
      v52 = ((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4) | ((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1);
      v53 = ((((v52 >> 8) | v52) >> 16) | (v52 >> 8) | v52) + 1;
      if ( (unsigned int)v53 < 0x40 )
        LODWORD(v53) = 64;
      *(_DWORD *)(a1 + 1912) = v53;
      v54 = sub_25CC9C0(16LL * (unsigned int)v53, 8);
      v55 = *(unsigned int *)(a1 + 1912);
      *(_QWORD *)(a1 + 1896) = v54;
      v56 = (_QWORD *)v54;
      v57 = v55;
      v58 = 16 * v55;
      v59 = (_QWORD *)(v54 + v58);
      if ( v8 )
      {
        *(_QWORD *)(a1 + 1904) = 0;
        if ( v58 )
        {
          if ( (((_BYTE)v59 - (_BYTE)v56) & 0x10) == 0 || (*v56 = -4096, v56 += 2, v56 != v59) )
          {
            do
            {
              *v56 = -4096;
              v56 += 4;
              *(v56 - 2) = -4096;
            }
            while ( v56 != v59 );
          }
        }
        v60 = v5;
        v61 = &v8[2 * v84];
        v62 = v8;
        v63 = a3;
        v64 = v60;
        do
        {
          v65 = *v62;
          if ( *v62 != -8192 && v65 != -4096 )
          {
            v66 = *(_DWORD *)(a1 + 1912);
            if ( !v66 )
            {
              *(_QWORD *)&dword_0 = *v62;
              BUG();
            }
            v67 = v66 - 1;
            v68 = *(_QWORD *)(a1 + 1896);
            v69 = v67 & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
            v70 = (_QWORD *)(v68 + 16LL * v69);
            v71 = *v70;
            if ( *v70 != v65 )
            {
              v87 = 1;
              v82 = nullptr;
              while ( v71 != -4096 )
              {
                if ( v71 == -8192 && !v82 )
                  v82 = v70;
                v69 = v67 & (v87 + v69);
                v70 = (_QWORD *)(v68 + 16LL * v69);
                v71 = *v70;
                if ( v65 == *v70 )
                  goto LABEL_73;
                ++v87;
              }
              if ( v82 )
                v70 = v82;
            }
LABEL_73:
            *v70 = v65;
            v72 = v62[1];
            v62[1] = 0;
            v70[1] = v72;
            ++*(_DWORD *)(a1 + 1904);
            v73 = v62[1];
            if ( v73 )
            {
              if ( (v73 & 4) != 0 )
              {
                v74 = (void **)(v73 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v74 )
                {
                  if ( *v74 != v74 + 2 )
                  {
                    v91 = v63;
                    v89 = v64;
                    v85 = v74;
                    free(*v74);
                    v63 = v91;
                    v64 = v89;
                    v74 = v85;
                  }
                  v90 = v63;
                  v86 = v64;
                  operator delete(v74, 0x30u);
                  v63 = v90;
                  v64 = v86;
                }
              }
            }
          }
          v62 += 2;
        }
        while ( v61 != v62 );
        a3 = v63;
        v5 = v64;
        operator delete();
        v56 = *(_QWORD **)(a1 + 1896);
        v57 = *(_DWORD *)(a1 + 1912);
        v24 = *(_DWORD *)(a1 + 1904) + 1;
      }
      else
      {
        *(_QWORD *)(a1 + 1904) = 0;
        if ( v56 != v59 )
        {
          v81 = v56;
          if ( (((_BYTE)v59 - (_BYTE)v56) & 0x10) == 0 || (v81 = v56 + 2, *v56 = -4096, v56 + 2 != v59) )
          {
            do
            {
              *v81 = -4096;
              v81 += 4;
              *(v81 - 2) = -4096;
            }
            while ( v81 != v59 );
          }
        }
        v24 = 1;
      }
      if ( v57 )
      {
        v75 = v57 - 1;
        v76 = 1;
        v77 = nullptr;
        v78 = v75 & v13;
        v14 = &v56[2 * v78];
        v79 = *v14;
        if ( *v14 != v5 )
        {
          while ( v79 != -4096 )
          {
            if ( !v77 && v79 == -8192 )
              v77 = v14;
            v78 = v75 & (v76 + v78);
            v14 = &v56[2 * v78];
            v79 = *v14;
            if ( *v14 == v5 )
              goto LABEL_21;
            ++v76;
          }
          if ( v77 )
            v14 = v77;
        }
        goto LABEL_21;
      }
LABEL_119:
      *(_DWORD *)(a1 + 1904) = v24;
      BUG();
    }
LABEL_25:
    v83 = v7;
    v25 = (((((((((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
              | (unsigned int)(v3 - 1)
              | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 4)
            | (((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
            | (unsigned int)(v3 - 1)
            | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 8)
          | (((((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
            | (unsigned int)(v3 - 1)
            | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 4)
          | (((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
          | (unsigned int)(v3 - 1)
          | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 16)
        | (((((((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
            | (unsigned int)(v3 - 1)
            | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 4)
          | (((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
          | (unsigned int)(v3 - 1)
          | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 8)
        | (((((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
          | (unsigned int)(v3 - 1)
          | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 4)
        | (((unsigned int)(v3 - 1) | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1)) >> 2)
        | (unsigned int)(v3 - 1)
        | ((unsigned __int64)(unsigned int)(v3 - 1) >> 1);
    v26 = v25 + 1;
    if ( v26 < 0x40 )
      v26 = 64;
    *(_DWORD *)(a1 + 1912) = v26;
    v27 = sub_25CC9C0(16LL * v26, 8);
    v28 = *(unsigned int *)(a1 + 1912);
    *(_QWORD *)(a1 + 1896) = v27;
    v29 = (_QWORD *)v27;
    v30 = v28;
    v31 = 16 * v28;
    v32 = (_QWORD *)(v27 + v31);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 1904) = 0;
      v33 = 2LL * v83;
      if ( v31 )
      {
        if ( (((_BYTE)v32 - (_BYTE)v29) & 0x10) == 0 || (*v29 = -4096, v29 += 2, v29 != v32) )
        {
          do
          {
            *v29 = -4096;
            v29 += 4;
            *(v29 - 2) = -4096;
          }
          while ( v29 != v32 );
        }
      }
      for ( i = v8; &v8[v33] != i; i += 2 )
      {
        v35 = *i;
        if ( *i != -4096 && v35 != -8192 )
        {
          v36 = *(_DWORD *)(a1 + 1912);
          if ( !v36 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v37 = v36 - 1;
          v38 = *(_QWORD *)(a1 + 1896);
          v39 = 1;
          v40 = nullptr;
          LODWORD(v41) = v37 & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
          v42 = (_QWORD *)(v38 + 16LL * (unsigned int)v41);
          v43 = *v42;
          if ( v35 != *v42 )
          {
            while ( v43 != -4096 )
            {
              if ( v43 == -8192 && !v40 )
                v40 = v42;
              v41 = v37 & (unsigned int)(v41 + v39);
              v42 = (_QWORD *)(v38 + 16 * v41);
              v43 = *v42;
              if ( v35 == *v42 )
                goto LABEL_37;
              ++v39;
            }
            if ( v40 )
              v42 = v40;
          }
LABEL_37:
          *v42 = v35;
          v44 = i[1];
          i[1] = 0;
          v42[1] = v44;
          ++*(_DWORD *)(a1 + 1904);
          v45 = i[1];
          if ( v45 )
          {
            if ( (v45 & 4) != 0 )
            {
              v46 = (void **)(v45 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v46 )
              {
                if ( *v46 != v46 + 2 )
                {
                  v88 = v46;
                  free(*v46);
                  v46 = v88;
                }
                operator delete(v46, 0x30u);
              }
            }
          }
        }
      }
      operator delete();
      v29 = *(_QWORD **)(a1 + 1896);
      v30 = *(_DWORD *)(a1 + 1912);
      v24 = *(_DWORD *)(a1 + 1904) + 1;
    }
    else
    {
      *(_QWORD *)(a1 + 1904) = 0;
      if ( v29 != v32 )
      {
        v80 = v29;
        if ( (((_BYTE)v32 - (_BYTE)v29) & 0x10) == 0 || (v80 = v29 + 2, *v29 = -4096, v29 + 2 != v32) )
        {
          do
          {
            *v80 = -4096;
            v80 += 4;
            *(v80 - 2) = -4096;
          }
          while ( v80 != v32 );
        }
      }
      v24 = 1;
    }
    if ( v30 )
    {
      v47 = v30 - 1;
      v48 = v47 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
      v14 = &v29[2 * v48];
      v49 = *v14;
      if ( *v14 != v5 )
      {
        v50 = 1;
        v51 = nullptr;
        while ( v49 != -4096 )
        {
          if ( v49 == -8192 && !v51 )
            v51 = v14;
          v48 = v47 & (v50 + v48);
          v14 = &v29[2 * v48];
          v49 = *v14;
          if ( *v14 == v5 )
            goto LABEL_21;
          ++v50;
        }
        if ( v51 )
          v14 = v51;
      }
      goto LABEL_21;
    }
    goto LABEL_119;
  }
LABEL_3:
  v18 = v16[1];
  result = (unsigned __int64 *)(v16 + 1);
  if ( v18 <= 7 )
  {
LABEL_24:
    *result = a3 & 0xFFFFFFFFFFFFFFFBLL;
    return result;
  }
  if ( (v18 & 4) == 0 )
  {
    v21 = operator new(0x30u);
    *(_QWORD *)v21 = v21 + 16;
    *(_QWORD *)(v21 + 8) = 0x400000000LL;
    v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    v16[1] = v21 | 4;
    v23 = *(unsigned int *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( *(unsigned int *)(v22 + 12) < (unsigned __int64)(v23 + 1) )
    {
      sub_25D6060(v22, v22 + 16, v23 + 1, 8);
      v23 = *(unsigned int *)(v22 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v22 + 8 * v23) = v18 & 0xFFFFFFFFFFFFFFF8LL;
    ++*(_DWORD *)(v22 + 8);
    v18 = v16[1];
  }
  v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  result = (unsigned __int64 *)*(unsigned int *)(v20 + 8);
  if ( *(unsigned int *)(v20 + 12) < (unsigned __int64)result + 1 )
  {
    sub_25D6060(v20, v20 + 16, (char *)result + 1, 8);
    result = (unsigned __int64 *)*(unsigned int *)(v20 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v20 + 8LL * (_QWORD)result) = a3;
  ++*(_DWORD *)(v20 + 8);
  return result;
}

