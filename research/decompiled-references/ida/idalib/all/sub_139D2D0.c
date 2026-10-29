__int64 __fastcall sub_139D2D0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int *a6)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  char *v11; // r13
  unsigned __int64 v12; // rdi
  int v13; // r15d
  int v14; // edx
  int *v15; // rsi
  int v16; // eax
  int v18; // r8d
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r13
  unsigned int *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rax
  char *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rbp
  char *v33; // r15
  size_t v34; // rdx
  char *v35; // rax
  char *i; // rax
  int v37; // edx
  int v38; // esi
  int v39; // esi
  unsigned int v40; // edi
  char *v41; // r9
  int v42; // r10d
  __int64 v43; // rdx
  int v44; // esi
  size_t v45; // rdx
  char *v46; // rax
  int v47; // edx
  unsigned int v48; // edi
  int v49; // r8d
  int v50; // r10d
  int *v51; // r9
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  char *v54; // rax
  char *v55; // r8
  __int64 v56; // rdx
  __int64 v57; // r11
  char *v58; // rbp
  size_t v59; // rdx
  char *v60; // rax
  char *v61; // rax
  int v62; // edx
  int v63; // esi
  int v64; // esi
  unsigned int v65; // edi
  char *v66; // r9
  int v67; // r10d
  int v68; // esi
  int v69; // edx
  unsigned int v70; // r15d
  int v71; // edi
  int v72; // r9d
  int *v73; // r8
  __int64 v74; // rdx
  size_t v75; // rdx
  char *v76; // rax
  char *v77; // r11
  __int64 v78; // [rsp+8h] [rbp-80h]
  __int64 v79; // [rsp+8h] [rbp-80h]
  int v80; // [rsp+8h] [rbp-80h]
  char *v81; // [rsp+8h] [rbp-80h]
  __int64 v82; // [rsp+10h] [rbp-78h]
  int v83; // [rsp+10h] [rbp-78h]
  int v84; // [rsp+2Ch] [rbp-5Ch] BYREF
  __m128 v85; // [rsp+30h] [rbp-58h] BYREF
  __int64 v86; // [rsp+40h] [rbp-48h]

  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(unsigned int *)(v8 + 2344);
  v10 = v8 + 2328;
  v11 = *(char **)(v8 + 2328);
  if ( !(_DWORD)v9 )
    goto LABEL_11;
  v12 = (unsigned int)(v9 - 1);
  v13 = 37 * a2;
  v14 = v12 & (37 * a2);
  v15 = (int *)&v11[4 * v14];
  v16 = *v15;
  if ( *v15 == a2 )
  {
LABEL_3:
    sub_11B75C0(&v85, v15, (int *)&v11[4 * v9], v10, 1);
    return a2;
  }
  v18 = 1;
  a6 = nullptr;
  if ( v16 != -1 )
  {
    while ( 1 )
    {
      if ( v16 == -2 && !a6 )
        a6 = v15;
      v14 = v12 & (v18 + v14);
      v15 = (int *)&v11[4 * v14];
      v16 = *v15;
      if ( *v15 == a2 )
        goto LABEL_3;
      if ( v16 == -1 )
        break;
      ++v18;
    }
    if ( a6 )
      v15 = a6;
  }
  v19 = *(_DWORD *)(v8 + 2336) + 1;
  a5 = (unsigned int)(4 * v19);
  if ( (unsigned int)a5 >= 3 * (int)v9 )
  {
LABEL_11:
    v27 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v9 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
    v28 = ((v27 >> 16) | v27) + 1;
    if ( (unsigned int)v28 < 0x40 )
      LODWORD(v28) = 64;
    *(_DWORD *)(v8 + 2344) = v28;
    v29 = (char *)sub_22300B0(4LL * (unsigned int)v28, 4, 64, v10, a5, a6);
    v10 = v8 + 2328;
    v30 = v29;
    *(_QWORD *)(v8 + 2328) = v29;
    if ( v11 )
    {
      v31 = *(unsigned int *)(v8 + 2344);
      v32 = 4 * v9;
      *(_QWORD *)(v8 + 2336) = 0;
      v33 = &v11[v32];
      v34 = 4 * v31;
      if ( v29 != &v29[v34] )
      {
        v35 = (char *)memset(v29, 255, v34);
        v10 = v8 + 2328;
        v30 = v35;
      }
      for ( i = v11; v33 != i; i += 4 )
      {
        v37 = *(_DWORD *)i;
        if ( (unsigned int)(*(_DWORD *)i + 2) > 1 )
        {
          v38 = *(_DWORD *)(v8 + 2344);
          if ( !v38 )
          {
            dword_0 = 0;
            BUG();
          }
          v39 = v38 - 1;
          v40 = v39 & (37 * v37);
          v41 = &v30[4 * v40];
          v42 = *(_DWORD *)v41;
          if ( *(_DWORD *)v41 != v37 && v42 != -1 )
          {
            v80 = 1;
            v77 = nullptr;
            while ( 1 )
            {
              if ( v42 == -2 && !v77 )
                v77 = v41;
              v40 = v39 & (v80 + v40);
              v41 = &v30[4 * v40];
              v42 = *(_DWORD *)v41;
              if ( v37 == *(_DWORD *)v41 )
                break;
              if ( v42 == -1 )
              {
                if ( v77 )
                  v41 = v77;
                break;
              }
              ++v80;
            }
          }
          *(_DWORD *)v41 = v37;
          ++*(_DWORD *)(v8 + 2336);
        }
      }
      v78 = v10;
      operator delete(v11, v32, 4);
      v44 = *(_DWORD *)(v8 + 2344);
      v11 = *(char **)(v8 + 2328);
      v10 = v78;
      v19 = *(_DWORD *)(v8 + 2336) + 1;
    }
    else
    {
      v43 = *(unsigned int *)(v8 + 2344);
      *(_QWORD *)(v8 + 2336) = 0;
      v44 = v43;
      v45 = 4 * v43;
      if ( v29 == &v29[v45] )
      {
        v11 = v29;
        v19 = 1;
      }
      else
      {
        v46 = (char *)memset(v29, 255, v45);
        v44 = *(_DWORD *)(v8 + 2344);
        v10 = v8 + 2328;
        v11 = v46;
        v19 = *(_DWORD *)(v8 + 2336) + 1;
      }
    }
    if ( v44 )
    {
      v47 = v44 - 1;
      v48 = (v44 - 1) & (37 * a2);
      v15 = (int *)&v11[4 * v48];
      v49 = *v15;
      if ( *v15 != a2 )
      {
        v50 = 1;
        v51 = nullptr;
        if ( v49 != -1 )
        {
          while ( 1 )
          {
            if ( !v51 && v49 == -2 )
              v51 = v15;
            v48 = v47 & (v50 + v48);
            v15 = (int *)&v11[4 * v48];
            v49 = *v15;
            if ( *v15 == a2 )
              break;
            if ( v49 == -1 )
            {
              if ( v51 )
                v15 = v51;
              goto LABEL_8;
            }
            ++v50;
          }
        }
      }
      goto LABEL_8;
    }
    goto LABEL_100;
  }
  v20 = (unsigned int)v9 >> 3;
  if ( (int)v9 - *(_DWORD *)(v8 + 2340) - v19 <= (unsigned int)v20 )
  {
    v52 = (((v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2)) >> 4) | (v12 >> 1) | v12 | (((v12 >> 1) | v12) >> 2);
    v53 = ((((v52 >> 8) | v52) >> 16) | (v52 >> 8) | v52) + 1;
    if ( (unsigned int)v53 < 0x40 )
      LODWORD(v53) = 64;
    *(_DWORD *)(v8 + 2344) = v53;
    v54 = (char *)sub_22300B0(4LL * (unsigned int)v53, 4, 64, v10, v20, a6);
    v10 = v8 + 2328;
    v55 = v54;
    *(_QWORD *)(v8 + 2328) = v54;
    if ( v11 )
    {
      v56 = *(unsigned int *)(v8 + 2344);
      v57 = 4 * v9;
      *(_QWORD *)(v8 + 2336) = 0;
      v58 = &v11[4 * v9];
      v59 = 4 * v56;
      if ( v54 != &v54[v59] )
      {
        v82 = v57;
        v60 = (char *)memset(v54, 255, v59);
        v10 = v8 + 2328;
        v57 = v82;
        v55 = v60;
      }
      v61 = v11;
      do
      {
        v62 = *(_DWORD *)v61;
        if ( (unsigned int)(*(_DWORD *)v61 + 2) > 1 )
        {
          v63 = *(_DWORD *)(v8 + 2344);
          if ( !v63 )
          {
            dword_0 = 0;
            BUG();
          }
          v64 = v63 - 1;
          v65 = v64 & (37 * v62);
          v66 = &v55[4 * v65];
          v67 = *(_DWORD *)v66;
          if ( v62 != *(_DWORD *)v66 && v67 != -1 )
          {
            v83 = 1;
            v81 = nullptr;
            while ( 1 )
            {
              if ( !v81 )
              {
                if ( v67 != -2 )
                  v66 = nullptr;
                v81 = v66;
              }
              v65 = v64 & (v83 + v65);
              v66 = &v55[4 * v65];
              v67 = *(_DWORD *)v66;
              if ( v62 == *(_DWORD *)v66 )
                break;
              if ( v67 == -1 )
              {
                if ( v81 )
                  v66 = v81;
                break;
              }
              ++v83;
            }
          }
          *(_DWORD *)v66 = v62;
          ++*(_DWORD *)(v8 + 2336);
        }
        v61 += 4;
      }
      while ( v58 != v61 );
      v79 = v10;
      operator delete(v11, v57, 4);
      v68 = *(_DWORD *)(v8 + 2344);
      v11 = *(char **)(v8 + 2328);
      v10 = v79;
      v19 = *(_DWORD *)(v8 + 2336) + 1;
    }
    else
    {
      v74 = *(unsigned int *)(v8 + 2344);
      *(_QWORD *)(v8 + 2336) = 0;
      v68 = v74;
      v75 = 4 * v74;
      if ( v54 == &v54[v75] )
      {
        v11 = v54;
        v19 = 1;
      }
      else
      {
        v76 = (char *)memset(v54, 255, v75);
        v68 = *(_DWORD *)(v8 + 2344);
        v10 = v8 + 2328;
        v11 = v76;
        v19 = *(_DWORD *)(v8 + 2336) + 1;
      }
    }
    if ( v68 )
    {
      v69 = v68 - 1;
      v70 = (v68 - 1) & v13;
      v15 = (int *)&v11[4 * v70];
      v71 = *v15;
      if ( *v15 != a2 )
      {
        v72 = 1;
        v73 = nullptr;
        if ( v71 != -1 )
        {
          while ( 1 )
          {
            if ( !v73 && v71 == -2 )
              v73 = v15;
            v70 = v69 & (v72 + v70);
            v15 = (int *)&v11[4 * v70];
            v71 = *v15;
            if ( *v15 == a2 )
              break;
            if ( v71 == -1 )
            {
              if ( v73 )
                v15 = v73;
              goto LABEL_8;
            }
            ++v72;
          }
        }
      }
      goto LABEL_8;
    }
LABEL_100:
    ++*(_DWORD *)(v8 + 2336);
    BUG();
  }
LABEL_8:
  *(_DWORD *)(v8 + 2336) = v19;
  if ( *v15 != -1 )
    --*(_DWORD *)(v8 + 2340);
  *v15 = a2;
  sub_11B75C0(&v85, v15, (int *)&v11[4 * *(unsigned int *)(v8 + 2344)], v10, 1);
  v21 = sub_FD32F0(a2);
  v22 = *(_QWORD *)(a1 + 32);
  v85.m128_u64[0] = 5;
  v23 = v21;
  v86 = v24;
  v25 = v24;
  v85.m128_u64[1] = a2;
  v84 = 5;
  v26 = sub_A25EE0(v22 + 1496, &v84);
  sub_A26740(v22 + 1312, *v26, (__int64)&v85, 3, v23, v25, 0);
  return a2;
}
