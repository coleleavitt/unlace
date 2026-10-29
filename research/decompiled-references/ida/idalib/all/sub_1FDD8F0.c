void __fastcall sub_1FDD8F0(_DWORD *a1, __int64 (__fastcall *a2)(_QWORD, _QWORD), __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned int v6; // eax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  char *v9; // rdi
  _DWORD *v10; // r15
  char *v11; // rax
  unsigned int **v12; // rax
  __int64 v13; // rdx
  unsigned int **v14; // r13
  unsigned int **v15; // r13
  _BYTE *v16; // r8
  unsigned int *v17; // r14
  unsigned int v18; // edx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned int i; // eax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 j; // r13
  unsigned int *v26; // r14
  int *v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r13
  void **v32; // rax
  void **v33; // r14
  void **v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdi
  void *v37; // rdi
  char *v38; // rdi
  void **v39; // rdi
  void **v40; // rdi
  void *v41; // rdi
  _QWORD *v42; // r15
  int v43; // ebp
  int v44; // eax
  __int64 v45; // r14
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned int *v48; // r13
  unsigned int **v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // r13
  _QWORD *v53; // rax
  int v54; // r15d
  _QWORD *v55; // rbp
  unsigned int *v56; // r14
  _DWORD *v57; // rdx
  __int64 v58; // rsi
  char v59; // al
  unsigned int k; // edx
  unsigned int **v61; // rbx
  unsigned int **v62; // r14
  __int64 v63; // rcx
  unsigned int *v64; // r12
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned int *v67; // rdx
  __int64 v68; // rsi
  void **v69; // rbx
  __int64 v70; // rbp
  __int64 v71; // r12
  __int64 v72; // r13
  __int64 v73; // r14
  __int64 v74; // rdi
  void *v75; // rdi
  void *v76; // rdi
  void *v77; // rdi
  void *v78; // rdi
  void **v79; // rdi
  void **v80; // rbx
  __int64 v81; // rbp
  __int64 v82; // r12
  __int64 v83; // r13
  __int64 v84; // r14
  __int64 v85; // rdi
  void *v86; // rdi
  void *v87; // rdi
  void *v88; // rdi
  void *v89; // rdi
  void **v90; // rdi
  void **v91; // [rsp+0h] [rbp-B8h]
  _QWORD *v92; // [rsp+0h] [rbp-B8h]
  _BYTE *v93; // [rsp+0h] [rbp-B8h]
  __int64 v94; // [rsp+8h] [rbp-B0h]
  __int64 v95; // [rsp+8h] [rbp-B0h]
  __int64 v96; // [rsp+8h] [rbp-B0h]
  __int64 v97; // [rsp+8h] [rbp-B0h]
  unsigned int **v98; // [rsp+8h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __int64 v102; // [rsp+38h] [rbp-80h]
  _DWORD v103[4]; // [rsp+40h] [rbp-78h] BYREF
  void *v104; // [rsp+50h] [rbp-68h] BYREF
  __int64 v105; // [rsp+58h] [rbp-60h]
  _BYTE v106[88]; // [rsp+60h] [rbp-58h] BYREF

  v4 = (__int64)a1;
  v6 = a1[2];
  if ( a1[46] == v6 )
    goto LABEL_66;
  a1[46] = 0;
  v7 = v6;
  if ( a1[47] < v6 )
    sub_2237220(a1 + 44, a1 + 48, v6, 8);
  v104 = v106;
  v105 = 0x400000000LL;
  if ( v7 > 4 )
    sub_2237220(&v104, v106, v7, 8);
  v8 = (unsigned int)a1[2];
  v9 = (char *)v103;
  v102 = 0x400000000LL;
  ptr = v103;
  if ( v8 )
  {
    v10 = v103;
    if ( v8 > 4 )
    {
      sub_2237220(&ptr, v103, v8, 4);
      v10 = ptr;
      v9 = (char *)ptr + 4 * (unsigned int)v102;
      v11 = (char *)ptr + 4 * v8;
      if ( v11 == v9 )
      {
LABEL_10:
        v12 = *(unsigned int ***)v4;
        v13 = *(unsigned int *)(v4 + 8);
        LODWORD(v102) = v8;
        v14 = &v12[v13];
        if ( v14 != v12 )
        {
          v15 = v14 - 1;
          v16 = v106;
          while ( 1 )
          {
            v17 = *v15;
            v18 = (*v15)[818];
            v10[**v15] = v18;
            if ( v18 )
            {
              if ( v12 == v15 )
                goto LABEL_18;
            }
            else
            {
              v19 = (unsigned int)v105;
              v20 = (unsigned int)v105 + 1LL;
              if ( v20 > HIDWORD(v105) )
              {
                v93 = v16;
                v98 = v12;
                sub_2237220(&v104, v16, v20, 8);
                v19 = (unsigned int)v105;
                v12 = v98;
                v16 = v93;
              }
              *((_QWORD *)v104 + v19) = v17;
              LODWORD(v105) = v105 + 1;
              if ( v12 == v15 )
                goto LABEL_18;
            }
            v10 = ptr;
            --v15;
          }
        }
        goto LABEL_18;
      }
    }
    else
    {
      v11 = (char *)&v103[v8];
      if ( v11 == (char *)v103 )
        goto LABEL_10;
    }
    memset(v9, 0, 4 * ((unsigned __int64)(v11 - v9 - 4) >> 2) + 4);
    goto LABEL_10;
  }
LABEL_18:
  for ( i = v105; (_DWORD)v105; i = v105 )
  {
    v22 = *((_QWORD *)v104 + i - 1);
    LODWORD(v105) = i - 1;
    v23 = *(unsigned int *)(v4 + 184);
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 188) )
    {
      sub_2237220(v4 + 176, v4 + 192, v23 + 1, 8);
      v23 = *(unsigned int *)(v4 + 184);
    }
    *(_QWORD *)(*(_QWORD *)(v4 + 176) + 8 * v23) = v22;
    v24 = *(_QWORD *)(v22 + 3304);
    ++*(_DWORD *)(v4 + 184);
    for ( j = v24 + 8LL * *(unsigned int *)(v22 + 3312); v24 != j; LODWORD(v105) = v105 + 1 )
    {
      while ( 1 )
      {
        v26 = *(unsigned int **)(j - 8);
        v27 = (int *)((char *)ptr + 4 * *v26);
        if ( *v27 )
        {
          v28 = *v27 - 1;
          *v27 = v28;
          if ( !v28 )
            break;
        }
        j -= 8;
        if ( v24 == j )
          goto LABEL_29;
      }
      v29 = (unsigned int)v105;
      v30 = (unsigned int)v105 + 1LL;
      if ( v30 > HIDWORD(v105) )
      {
        sub_2237220(&v104, v106, v30, 8);
        v29 = (unsigned int)v105;
      }
      j -= 8;
      *((_QWORD *)v104 + v29) = v26;
    }
LABEL_29:
    ;
  }
  v31 = *(_QWORD *)(v4 + 280);
  *(_QWORD *)(v4 + 280) = 0;
  if ( v31 )
  {
    v32 = *(void ***)(v31 + 88);
    v91 = v32;
    if ( v32 )
    {
      v33 = (void **)v32[11];
      if ( v33 )
      {
        v34 = v33[11];
        if ( v34 )
        {
          v35 = v34[11];
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 88);
            if ( v36 )
            {
              v94 = v34[11];
              sub_1FDAF20(v36);
              v35 = v94;
            }
            v37 = *(void **)(v35 + 48);
            if ( v37 != (void *)(v35 + 64) )
            {
              v95 = v35;
              free(v37);
              v35 = v95;
            }
            if ( *(_QWORD *)v35 != v35 + 16 )
            {
              v96 = v35;
              free(*(void **)v35);
              v35 = v96;
            }
            operator delete((void *)v35, 0x60u);
          }
          v38 = (char *)v34[6];
          if ( v38 != (char *)(v34 + 8) )
            free(v38);
          if ( (_QWORD *)*v34 != v34 + 2 )
            free((void *)*v34);
          operator delete(v34, 0x60u);
        }
        v39 = (void **)v33[6];
        if ( v39 != v33 + 8 )
          free(v39);
        if ( *v33 != v33 + 2 )
          free(*v33);
        operator delete(v33, 0x60u);
      }
      v40 = (void **)v91[6];
      if ( v40 != v91 + 8 )
        free(v40);
      if ( *v91 != v91 + 2 )
        free(*v91);
      operator delete(v91, 0x60u);
    }
    v41 = *(void **)(v31 + 48);
    if ( v41 != (void *)(v31 + 64) )
      free(v41);
    if ( *(_QWORD *)v31 != v31 + 16 )
      free(*(void **)v31);
    operator delete((void *)v31, 0x60u);
  }
  if ( ptr != v103 )
    free(ptr);
  if ( v104 != v106 )
    free(v104);
LABEL_66:
  sub_1FDD180(&ptr, v4);
  v42 = ptr;
  v43 = *((_DWORD *)ptr + 20);
  *((_DWORD *)ptr + 20) = v43 + 1;
  if ( a4 )
  {
    v44 = *(_DWORD *)(v4 + 232);
    if ( v44 )
    {
      v45 = 0;
      v46 = 8LL * (unsigned int)(v44 - 1) + 8;
      while ( 1 )
      {
        v47 = *(_QWORD *)(v4 + 224);
        v48 = *(unsigned int **)(v47 + v45);
        if ( *(_BYTE *)(a4 + 20) )
        {
          v49 = *(unsigned int ***)a4;
          v50 = *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 12);
          if ( *(_QWORD *)a4 == v50 )
            goto LABEL_158;
          while ( v48 != *v49 )
          {
            if ( (unsigned int **)v50 == ++v49 )
              goto LABEL_158;
          }
LABEL_74:
          v45 += 8;
          if ( v46 == v45 )
            goto LABEL_75;
        }
        else
        {
          if ( sub_2236570(a4, *(_QWORD *)(v47 + v45)) )
            goto LABEL_74;
LABEL_158:
          v45 += 8;
          *(_DWORD *)(*((_QWORD *)ptr + 6) + 4LL * *v48) = v43;
          if ( v46 == v45 )
          {
LABEL_75:
            v42 = ptr;
            break;
          }
        }
      }
    }
  }
  v51 = *(_DWORD *)(v4 + 184);
  if ( v51 )
  {
    v52 = 0;
    v92 = (_QWORD *)v4;
    v97 = 8LL * (unsigned int)(v51 - 1) + 8;
    v53 = v42;
    v54 = v43;
    v55 = v53;
    do
    {
      v56 = *(unsigned int **)(v92[22] + v52);
      v57 = (_DWORD *)(v55[6] + 4LL * *v56);
      if ( v54 != *v57 )
      {
        v58 = *(_QWORD *)(v92[22] + v52);
        *v57 = v54;
        v59 = a2(a3, v58);
        v55 = ptr;
        if ( v59 )
        {
          for ( k = *((_DWORD *)ptr + 2); ; *((_DWORD *)v55 + 2) = k )
          {
            v61 = *((unsigned int ***)v56 + 413);
            v62 = &v61[v56[828]];
            if ( v62 != v61 )
            {
              v63 = v55[6];
              do
              {
                v64 = *v61;
                if ( v54 != *(_DWORD *)(v63 + 4LL * **v61) )
                {
                  v65 = k;
                  v66 = k + 1LL;
                  if ( v66 > *((unsigned int *)v55 + 3) )
                  {
                    sub_2237220(v55, v55 + 2, v66, 8);
                    v65 = *((unsigned int *)v55 + 2);
                  }
                  *(_QWORD *)(*v55 + 8 * v65) = v64;
                  v67 = *v61;
                  ++*((_DWORD *)v55 + 2);
                  v55 = ptr;
                  v63 = *((_QWORD *)ptr + 6);
                  *(_DWORD *)(v63 + 4LL * *v67) = v54;
                  k = *((_DWORD *)v55 + 2);
                }
                ++v61;
              }
              while ( v61 != v62 );
            }
            if ( !k )
              break;
            v68 = k--;
            v56 = *(unsigned int **)(*v55 + 8 * v68 - 8);
          }
        }
      }
      v52 += 8;
    }
    while ( v52 != v97 );
    v4 = (__int64)v92;
    v42 = v55;
  }
  v104 = v42;
  ptr = nullptr;
  sub_1FDD310(v4, (__int64 *)&v104);
  v69 = (void **)v104;
  if ( v104 )
  {
    v70 = *((_QWORD *)v104 + 11);
    if ( v70 )
    {
      v71 = *(_QWORD *)(v70 + 88);
      if ( v71 )
      {
        v72 = *(_QWORD *)(v71 + 88);
        if ( v72 )
        {
          v73 = *(_QWORD *)(v72 + 88);
          if ( v73 )
          {
            v74 = *(_QWORD *)(v73 + 88);
            if ( v74 )
              sub_1FDAF20(v74);
            v75 = *(void **)(v73 + 48);
            if ( v75 != (void *)(v73 + 64) )
              free(v75);
            if ( *(_QWORD *)v73 != v73 + 16 )
              free(*(void **)v73);
            operator delete((void *)v73, 0x60u);
          }
          v76 = *(void **)(v72 + 48);
          if ( v76 != (void *)(v72 + 64) )
            free(v76);
          if ( *(_QWORD *)v72 != v72 + 16 )
            free(*(void **)v72);
          operator delete((void *)v72, 0x60u);
        }
        v77 = *(void **)(v71 + 48);
        if ( v77 != (void *)(v71 + 64) )
          free(v77);
        if ( *(_QWORD *)v71 != v71 + 16 )
          free(*(void **)v71);
        operator delete((void *)v71, 0x60u);
      }
      v78 = *(void **)(v70 + 48);
      if ( v78 != (void *)(v70 + 64) )
        free(v78);
      if ( *(_QWORD *)v70 != v70 + 16 )
        free(*(void **)v70);
      operator delete((void *)v70, 0x60u);
    }
    v79 = (void **)v69[6];
    if ( v79 != v69 + 8 )
      free(v79);
    if ( *v69 != v69 + 2 )
      free(*v69);
    operator delete(v69, 0x60u);
  }
  v80 = (void **)ptr;
  if ( ptr )
  {
    v81 = *((_QWORD *)ptr + 11);
    if ( v81 )
    {
      v82 = *(_QWORD *)(v81 + 88);
      if ( v82 )
      {
        v83 = *(_QWORD *)(v82 + 88);
        if ( v83 )
        {
          v84 = *(_QWORD *)(v83 + 88);
          if ( v84 )
          {
            v85 = *(_QWORD *)(v84 + 88);
            if ( v85 )
              sub_1FDAF20(v85);
            v86 = *(void **)(v84 + 48);
            if ( v86 != (void *)(v84 + 64) )
              free(v86);
            if ( *(_QWORD *)v84 != v84 + 16 )
              free(*(void **)v84);
            operator delete((void *)v84, 0x60u);
          }
          v87 = *(void **)(v83 + 48);
          if ( v87 != (void *)(v83 + 64) )
            free(v87);
          if ( *(_QWORD *)v83 != v83 + 16 )
            free(*(void **)v83);
          operator delete((void *)v83, 0x60u);
        }
        v88 = *(void **)(v82 + 48);
        if ( v88 != (void *)(v82 + 64) )
          free(v88);
        if ( *(_QWORD *)v82 != v82 + 16 )
          free(*(void **)v82);
        operator delete((void *)v82, 0x60u);
      }
      v89 = *(void **)(v81 + 48);
      if ( v89 != (void *)(v81 + 64) )
        free(v89);
      if ( *(_QWORD *)v81 != v81 + 16 )
        free(*(void **)v81);
      operator delete((void *)v81, 0x60u);
    }
    v90 = (void **)v80[6];
    if ( v90 != v80 + 8 )
      free(v90);
    if ( *v80 != v80 + 2 )
      free(*v80);
    operator delete(v80, 0x60u);
  }
}
