char **__fastcall sub_22255F0(char **a1, char **a2)
{
  char *v3; // rax
  char *v5; // rbp
  unsigned __int64 v6; // rsi
  char *v7; // rbx
  char *v8; // r15
  char *v9; // rdi
  char *v10; // r14
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // r14
  char *v14; // rax
  char *v15; // r15
  char *v16; // rdi
  char *v17; // r14
  __int64 v18; // rbp
  void *v19; // rdi
  char *v20; // rbp
  char *v21; // r15
  char *v22; // rdi
  char *v23; // r14
  __int64 v24; // rbx
  void *v25; // rdi
  char *v27; // r14
  char *v28; // rdi
  char *v29; // r15
  __int64 v30; // rbp
  void *v31; // rdi
  __int64 v32; // rbx
  char *v33; // r15
  bool v34; // zf
  char **v35; // rbp
  int v36; // eax
  char **v37; // rsi
  char *v38; // r14
  char *v39; // rdi
  char *v40; // r15
  __int64 v41; // rbx
  void *v42; // rdi
  char *v43; // r15
  char *v44; // rdx
  char *v45; // rax
  char *v46; // r14
  __int64 v47; // rax
  void *v48; // rdi
  __int64 v49; // rax
  char *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  void *v53; // rdi
  char *v54; // rax
  char *v55; // r14
  char *v56; // r14
  __int64 v57; // r15
  void *v58; // rdi
  __int64 v59; // rax
  char *v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rax
  void *v63; // rdi
  __int64 v64; // [rsp+0h] [rbp-58h]
  char *v65; // [rsp+0h] [rbp-58h]
  char *v66; // [rsp+0h] [rbp-58h]
  char *v67; // [rsp+8h] [rbp-50h]
  __int64 v68; // [rsp+8h] [rbp-50h]
  char *v69; // [rsp+8h] [rbp-50h]
  char *v70; // [rsp+8h] [rbp-50h]
  unsigned int v71; // [rsp+14h] [rbp-44h]

  if ( a1 != a2 )
  {
    v3 = (char *)(a2 + 2);
    v5 = *a2;
    v6 = *((unsigned int *)a1 + 2);
    v67 = v3;
    v7 = *a1;
    v64 = v6;
    if ( v3 == v5 )
    {
      v71 = *((_DWORD *)a2 + 2);
      v68 = v71;
      if ( v71 <= v6 )
      {
        v14 = *a1;
        if ( v71 )
        {
          v43 = *a1;
          v69 = &v5[40 * v71];
          do
          {
            v44 = v5 + 40;
            v45 = v5 + 40;
            if ( v5 != v43 )
            {
              v46 = *(char **)v43;
              v47 = *(_QWORD *)v43 + 80LL * *((unsigned int *)v43 + 2);
              if ( *((_DWORD *)v5 + 2) )
              {
                if ( (char *)v47 != v46 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v47 -= 80;
                      v53 = *(void **)(v47 + 8);
                      if ( v53 == (void *)(v47 + 24) )
                        break;
                      v66 = (char *)v47;
                      free(v53);
                      v47 = (__int64)v66;
                      if ( v66 == v46 )
                        goto LABEL_102;
                    }
                  }
                  while ( (char *)v47 != v46 );
LABEL_102:
                  v46 = *(char **)v43;
                }
                if ( v46 != v43 + 16 )
                  free(v46);
                *(_QWORD *)v43 = *(_QWORD *)v5;
                *((_DWORD *)v43 + 2) = *((_DWORD *)v5 + 2);
                *((_DWORD *)v43 + 3) = *((_DWORD *)v5 + 3);
                *(_QWORD *)v5 = v5 + 16;
                *((_DWORD *)v5 + 3) = 0;
                *((_DWORD *)v5 + 2) = 0;
              }
              else
              {
                while ( (char *)v47 != v46 )
                {
                  while ( 1 )
                  {
                    v47 -= 80;
                    v48 = *(void **)(v47 + 8);
                    if ( v48 == (void *)(v47 + 24) )
                      break;
                    v65 = (char *)v47;
                    free(v48);
                    v47 = (__int64)v65;
                    if ( v65 == v46 )
                      goto LABEL_91;
                  }
                }
LABEL_91:
                *((_DWORD *)v43 + 2) = 0;
              }
              v49 = *((_QWORD *)v5 + 3);
              if ( v49 )
              {
                v50 = *((char **)v43 + 2);
                v44 = v43 + 40;
                if ( v50 != v43 + 40 )
                {
                  free(v50);
                  v49 = *((_QWORD *)v5 + 3);
                  v44 = v43 + 40;
                }
                v51 = *((_QWORD *)v5 + 2);
                *((_QWORD *)v43 + 3) = v49;
                v52 = *((_QWORD *)v5 + 4);
                *((_QWORD *)v43 + 2) = v51;
                *((_QWORD *)v43 + 4) = v52;
                v45 = v5 + 40;
                *((_QWORD *)v5 + 2) = v5 + 40;
                *(_OWORD *)(v5 + 24) = 0;
              }
              else
              {
                *((_QWORD *)v43 + 3) = 0;
                v44 = v43 + 40;
                v45 = v5 + 40;
              }
            }
            v5 = v45;
            v43 = v44;
          }
          while ( v45 != v69 );
          v7 += 40 * v71;
          v14 = *a1;
          v64 = *((unsigned int *)a1 + 2);
        }
        v15 = &v14[40 * v64];
        while ( v7 != v15 )
        {
          while ( 1 )
          {
            v15 -= 40;
            v16 = *((char **)v15 + 2);
            if ( v16 != v15 + 40 )
              free(v16);
            v17 = *(char **)v15;
            v18 = *(_QWORD *)v15 + 80LL * *((unsigned int *)v15 + 2);
            if ( *(_QWORD *)v15 != v18 )
            {
              do
              {
                while ( 1 )
                {
                  v18 -= 80;
                  v19 = *(void **)(v18 + 8);
                  if ( v19 == (void *)(v18 + 24) )
                    break;
                  free(v19);
                  if ( v17 == (char *)v18 )
                    goto LABEL_24;
                }
              }
              while ( v17 != (char *)v18 );
LABEL_24:
              v17 = *(char **)v15;
            }
            if ( v17 == v15 + 16 )
              break;
            free(v17);
            if ( v7 == v15 )
              goto LABEL_27;
          }
        }
LABEL_27:
        v20 = *a2;
        *((_DWORD *)a1 + 2) = v71;
        v21 = &v20[40 * *((unsigned int *)a2 + 2)];
        while ( v20 != v21 )
        {
          while ( 1 )
          {
            v21 -= 40;
            v22 = *((char **)v21 + 2);
            if ( v22 != v21 + 40 )
              free(v22);
            v23 = *(char **)v21;
            v24 = *(_QWORD *)v21 + 80LL * *((unsigned int *)v21 + 2);
            if ( *(_QWORD *)v21 != v24 )
            {
              do
              {
                while ( 1 )
                {
                  v24 -= 80;
                  v25 = *(void **)(v24 + 8);
                  if ( v25 == (void *)(v24 + 24) )
                    break;
                  free(v25);
                  if ( v23 == (char *)v24 )
                    goto LABEL_33;
                }
              }
              while ( v23 != (char *)v24 );
LABEL_33:
              v23 = *(char **)v21;
            }
            if ( v23 == v21 + 16 )
              break;
            free(v23);
            if ( v20 == v21 )
              goto LABEL_36;
          }
        }
      }
      else
      {
        if ( v71 <= (unsigned __int64)*((unsigned int *)a1 + 3) )
        {
          v13 = (__int64)v5;
          if ( *((_DWORD *)a1 + 2) )
          {
            v64 = 40 * v6;
            v70 = &v5[40 * v6];
            do
            {
              v54 = v5 + 40;
              v55 = v5 + 40;
              if ( v5 != v7 )
              {
                v56 = *(char **)v7;
                v57 = *(_QWORD *)v7 + 80LL * *((unsigned int *)v7 + 2);
                if ( *((_DWORD *)v5 + 2) )
                {
                  if ( (char *)v57 != v56 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v57 -= 80;
                        v63 = *(void **)(v57 + 8);
                        if ( v63 == (void *)(v57 + 24) )
                          break;
                        free(v63);
                        if ( (char *)v57 == v56 )
                          goto LABEL_125;
                      }
                    }
                    while ( (char *)v57 != v56 );
LABEL_125:
                    v56 = *(char **)v7;
                  }
                  if ( v56 != v7 + 16 )
                    free(v56);
                  *(_QWORD *)v7 = *(_QWORD *)v5;
                  *((_DWORD *)v7 + 2) = *((_DWORD *)v5 + 2);
                  *((_DWORD *)v7 + 3) = *((_DWORD *)v5 + 3);
                  *(_QWORD *)v5 = v5 + 16;
                  *((_DWORD *)v5 + 3) = 0;
                  *((_DWORD *)v5 + 2) = 0;
                }
                else
                {
                  while ( (char *)v57 != v56 )
                  {
                    while ( 1 )
                    {
                      v57 -= 80;
                      v58 = *(void **)(v57 + 8);
                      if ( v58 == (void *)(v57 + 24) )
                        break;
                      free(v58);
                      if ( (char *)v57 == v56 )
                        goto LABEL_114;
                    }
                  }
LABEL_114:
                  *((_DWORD *)v7 + 2) = 0;
                }
                v59 = *((_QWORD *)v5 + 3);
                if ( v59 )
                {
                  v60 = *((char **)v7 + 2);
                  v55 = v7 + 40;
                  if ( v60 != v7 + 40 )
                  {
                    free(v60);
                    v59 = *((_QWORD *)v5 + 3);
                  }
                  v61 = *((_QWORD *)v5 + 2);
                  *((_QWORD *)v7 + 3) = v59;
                  v62 = *((_QWORD *)v5 + 4);
                  *((_QWORD *)v7 + 2) = v61;
                  *((_QWORD *)v7 + 4) = v62;
                  v54 = v5 + 40;
                  *((_QWORD *)v5 + 2) = v5 + 40;
                  *(_OWORD *)(v5 + 24) = 0;
                }
                else
                {
                  *((_QWORD *)v7 + 3) = 0;
                  v54 = v5 + 40;
                  v55 = v7 + 40;
                }
              }
              v5 = v54;
              v7 = v55;
            }
            while ( v54 != v70 );
            v5 = *a2;
            v7 = *a1;
            v68 = *((unsigned int *)a2 + 2);
            v13 = (__int64)&(*a2)[40 * v6];
          }
        }
        else
        {
          v8 = &v7[40 * v6];
          while ( v8 != v7 )
          {
            while ( 1 )
            {
              v8 -= 40;
              v9 = *((char **)v8 + 2);
              if ( v9 != v8 + 40 )
                free(v9);
              v10 = *(char **)v8;
              v11 = *(_QWORD *)v8 + 80LL * *((unsigned int *)v8 + 2);
              if ( *(_QWORD *)v8 != v11 )
              {
                do
                {
                  while ( 1 )
                  {
                    v11 -= 80;
                    v12 = *(void **)(v11 + 8);
                    if ( v12 == (void *)(v11 + 24) )
                      break;
                    free(v12);
                    if ( v10 == (char *)v11 )
                      goto LABEL_12;
                  }
                }
                while ( v10 != (char *)v11 );
LABEL_12:
                v10 = *(char **)v8;
              }
              if ( v10 == v8 + 16 )
                break;
              free(v10);
              if ( v8 == v7 )
                goto LABEL_15;
            }
          }
LABEL_15:
          *((_DWORD *)a1 + 2) = 0;
          sub_2225440((__int64 *)a1, v71);
          v5 = *a2;
          v64 = 0;
          v7 = *a1;
          v68 = *((unsigned int *)a2 + 2);
          v13 = (__int64)*a2;
        }
        v32 = (__int64)&v7[v64];
        v33 = &v5[40 * v68];
        if ( v33 != (char *)v13 )
        {
          do
          {
            while ( 1 )
            {
              *(_DWORD *)(v32 + 8) = 0;
              v35 = (char **)(v32 + 16);
              *(_DWORD *)(v32 + 12) = 0;
              v36 = *(_DWORD *)(v13 + 8);
              *(_QWORD *)v32 = v32 + 16;
              if ( v36 )
                sub_2224B70(v32, (__int64 *)v13);
              v32 += 40;
              *(_OWORD *)(v32 - 16) = 0;
              v34 = *(_QWORD *)(v13 + 24) == 0;
              *(_QWORD *)(v32 - 24) = v32;
              if ( !v34 )
                break;
              v13 += 40;
              if ( (char *)v13 == v33 )
                goto LABEL_69;
            }
            v37 = (char **)(v13 + 16);
            v13 += 40;
            sub_9C3C90(v35, v37);
          }
          while ( (char *)v13 != v33 );
LABEL_69:
          v5 = *a2;
        }
        *((_DWORD *)a1 + 2) = v71;
        v38 = &v5[40 * *((unsigned int *)a2 + 2)];
        while ( v38 != v5 )
        {
          while ( 1 )
          {
            v38 -= 40;
            v39 = *((char **)v38 + 2);
            if ( v39 != v38 + 40 )
              free(v39);
            v40 = *(char **)v38;
            v41 = *(_QWORD *)v38 + 80LL * *((unsigned int *)v38 + 2);
            if ( *(_QWORD *)v38 != v41 )
            {
              do
              {
                while ( 1 )
                {
                  v41 -= 80;
                  v42 = *(void **)(v41 + 8);
                  if ( v42 == (void *)(v41 + 24) )
                    break;
                  free(v42);
                  if ( v40 == (char *)v41 )
                    goto LABEL_77;
                }
              }
              while ( v40 != (char *)v41 );
LABEL_77:
              v40 = *(char **)v38;
            }
            if ( v40 == v38 + 16 )
              break;
            free(v40);
            if ( v38 == v5 )
              goto LABEL_36;
          }
        }
      }
LABEL_36:
      *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v27 = &v7[40 * v6];
      if ( v27 != v7 )
      {
        do
        {
          while ( 1 )
          {
            v27 -= 40;
            v28 = *((char **)v27 + 2);
            if ( v28 != v27 + 40 )
              free(v28);
            v29 = *(char **)v27;
            v30 = *(_QWORD *)v27 + 80LL * *((unsigned int *)v27 + 2);
            if ( *(_QWORD *)v27 != v30 )
            {
              do
              {
                while ( 1 )
                {
                  v30 -= 80;
                  v31 = *(void **)(v30 + 8);
                  if ( v31 == (void *)(v30 + 24) )
                    break;
                  free(v31);
                  if ( v29 == (char *)v30 )
                    goto LABEL_44;
                }
              }
              while ( v29 != (char *)v30 );
LABEL_44:
              v29 = *(char **)v27;
            }
            if ( v29 == v27 + 16 )
              break;
            free(v29);
            if ( v27 == v7 )
              goto LABEL_47;
          }
        }
        while ( v27 != v7 );
LABEL_47:
        v7 = *a1;
      }
      if ( v7 != (char *)(a1 + 2) )
        free(v7);
      *a1 = *a2;
      *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
      *((_DWORD *)a1 + 3) = *((_DWORD *)a2 + 3);
      a2[1] = nullptr;
      *a2 = v67;
    }
  }
  return a1;
}
