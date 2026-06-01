void __fastcall sub_18816B0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  char ***v11; // r12
  unsigned int v12; // ebp
  __int64 v13; // rdi
  _DWORD *v14; // rax
  __int64 v15; // r13
  bool v16; // zf
  char ***v17; // r14
  __int64 v18; // rdx
  _DWORD *i; // rdx
  char ***v20; // rbp
  int v21; // eax
  __int64 v22; // r8
  int v23; // esi
  unsigned int v24; // edx
  int *v25; // rdi
  int v26; // ecx
  char ***v27; // rdi
  int v28; // edx
  char ***v29; // r14
  int *v30; // r12
  char ***v31; // rbp
  char ***v32; // r13
  __int64 v33; // rdx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rdx
  _DWORD *j; // rdx
  int v42; // eax
  char ***v43; // r8
  int v44; // esi
  unsigned int v45; // edx
  int *v46; // rdi
  int v47; // ecx
  int v48; // edx
  char ***v49; // rdi
  int v50; // edx
  int v51; // r9d
  int *v52; // r10
  int *v53; // rdi
  int *v54; // rdi
  int v55; // edi
  int *v56; // rdi
  int v57; // r9d
  int *v58; // r10
  int v59; // esi
  int *v60; // rdi
  int *v61; // rdi
  int v62; // [rsp+0h] [rbp-D8h] BYREF
  char **v63[2]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+28h] [rbp-B0h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    if ( !(_BYTE)v8 )
    {
      v14 = *(_DWORD **)(a1 + 8);
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v6 = v12;
      v11 = (char ***)v14;
      goto LABEL_6;
    }
    v29 = (char ***)(a1 + 8);
    v30 = (int *)(a1 + 168);
  }
  else
  {
    v9 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v9 | (v9 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v29 = (char ***)(a1 + 8);
      v30 = (int *)(a1 + 168);
      if ( !(_BYTE)v8 )
      {
        v11 = *(char ****)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 40LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v8 )
      {
        v11 = *(char ****)(a1 + 8);
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 2560;
LABEL_5:
        v14 = (_DWORD *)sub_22300B0(v13, 8, v9, v8, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
        v15 = 5LL * v12;
        v16 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v17 = &v11[v15];
        if ( v16 )
        {
          v18 = 10 * v6;
        }
        else
        {
          v14 = (_DWORD *)(a1 + 8);
          v18 = 40;
        }
        for ( i = &v14[v18]; i != v14; v14 += 10 )
          *v14 = 0x7FFFFFFF;
        v20 = v11;
        if ( v17 != v11 )
        {
          while ( 1 )
          {
            v21 = *(_DWORD *)v20;
            if ( (unsigned int)(*(_DWORD *)v20 + 0x7FFFFFFF) > 0xFFFFFFFD )
              goto LABEL_12;
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v22 = a1 + 8;
              v23 = 3;
            }
            else
            {
              v28 = *(_DWORD *)(a1 + 16);
              v22 = *(_QWORD *)(a1 + 8);
              if ( !v28 )
                goto LABEL_102;
              v23 = v28 - 1;
            }
            v24 = v23 & (37 * v21);
            v25 = (int *)(v22 + 40LL * v24);
            v26 = *v25;
            if ( *v25 != v21 )
            {
              v51 = 1;
              v52 = nullptr;
              if ( v26 != 0x7FFFFFFF )
              {
                while ( 1 )
                {
                  if ( v26 == 0x80000000 && !v52 )
                    v52 = v25;
                  v24 = v23 & (v51 + v24);
                  v25 = (int *)(v22 + 40LL * v24);
                  v26 = *v25;
                  if ( v21 == *v25 )
                    break;
                  if ( v26 == 0x7FFFFFFF )
                  {
                    if ( v52 )
                      v25 = v52;
                    break;
                  }
                  ++v51;
                }
              }
            }
            *v25 = v21;
            *((_QWORD *)v25 + 1) = v25 + 6;
            *((_QWORD *)v25 + 2) = 0x200000000LL;
            if ( *((_DWORD *)v20 + 4) )
              sub_1881590((char ***)v25 + 1, v20 + 1);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            v27 = (char ***)v20[1];
            if ( v27 == v20 + 3 )
            {
LABEL_12:
              v20 += 5;
              if ( v17 == v20 )
                break;
            }
            else
            {
              free(v27);
              v20 += 5;
              if ( v17 == v20 )
                break;
            }
          }
        }
        operator delete(v11, v15 * 8, 8);
        return;
      }
      v29 = (char ***)(a1 + 8);
      v30 = (int *)(a1 + 168);
      LODWORD(v6) = 64;
    }
  }
  v31 = (char ***)&v62;
  v32 = (char ***)&v62;
  v33 = (unsigned int)(*(_DWORD *)v29 + 0x7FFFFFFF);
  if ( (unsigned int)(*(_DWORD *)v29 + 0x7FFFFFFF) <= 0xFFFFFFFD )
  {
    v62 = *(_DWORD *)v29;
    a6 = *((unsigned int *)v29 + 4);
    v31 = (char ***)&v62;
    v63[0] = (char **)&v64;
    v63[1] = (char **)0x200000000LL;
    if ( (_DWORD)a6 )
      sub_1881590(v63, v29 + 1);
    v53 = (int *)v29[1];
    if ( v53 != (int *)(v29 + 3) )
      free(v53);
    v32 = (char ***)&v65;
  }
  if ( v30 != (int *)(v29 + 5) )
  {
    v34 = *((_DWORD *)v29 + 10);
    v33 = (unsigned int)(v34 + 0x7FFFFFFF);
    if ( (unsigned int)(v34 + 0x7FFFFFFF) <= 0xFFFFFFFD )
    {
      *(_DWORD *)v32 = v34;
      a5 = *((unsigned int *)v29 + 14);
      v32[1] = (char **)(v32 + 3);
      v32[2] = (char **)0x200000000LL;
      if ( (_DWORD)a5 )
        sub_1881590(v32 + 1, v29 + 6);
      v54 = (int *)v29[6];
      v32 += 5;
      if ( v54 != (int *)(v29 + 8) )
        free(v54);
    }
    if ( v30 != (int *)(v29 + 10) )
    {
      v35 = *((_DWORD *)v29 + 20);
      v33 = (unsigned int)(v35 + 0x7FFFFFFF);
      if ( (unsigned int)(v35 + 0x7FFFFFFF) <= 0xFFFFFFFD )
      {
        *(_DWORD *)v32 = v35;
        v55 = *((_DWORD *)v29 + 24);
        v32[1] = (char **)(v32 + 3);
        v32[2] = (char **)0x200000000LL;
        if ( v55 )
          sub_1881590(v32 + 1, v29 + 11);
        v56 = (int *)v29[11];
        v32 += 5;
        if ( v56 != (int *)(v29 + 13) )
          free(v56);
      }
      if ( v30 != (int *)(v29 + 15) )
      {
        v36 = *((_DWORD *)v29 + 30);
        v33 = (unsigned int)(v36 + 0x7FFFFFFF);
        if ( (unsigned int)(v36 + 0x7FFFFFFF) <= 0xFFFFFFFD )
        {
          *(_DWORD *)v32 = v36;
          v59 = *((_DWORD *)v29 + 34);
          v32[1] = (char **)(v32 + 3);
          v32[2] = (char **)0x200000000LL;
          if ( v59 )
            sub_1881590(v32 + 1, v29 + 16);
          v60 = (int *)v29[16];
          v32 += 5;
          if ( v60 != (int *)(v29 + 18) )
            free(v60);
        }
        if ( v30 != (int *)(v29 + 20) )
        {
          v37 = *((_DWORD *)v29 + 40);
          v33 = (unsigned int)(v37 + 0x7FFFFFFF);
          if ( (unsigned int)(v37 + 0x7FFFFFFF) <= 0xFFFFFFFD )
          {
            *(_DWORD *)v32 = v37;
            v8 = *((unsigned int *)v29 + 44);
            v32[1] = (char **)(v32 + 3);
            v32[2] = (char **)0x200000000LL;
            if ( (_DWORD)v8 )
              sub_1881590(v32 + 1, v29 + 21);
            v61 = (int *)v29[21];
            v32 += 5;
            if ( v61 != (int *)(v29 + 23) )
              free(v61);
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v38 = sub_22300B0(40LL * (unsigned int)v6, 8, v33, v8, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v38;
  }
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v16 )
  {
    v39 = *(_DWORD **)(a1 + 8);
    v40 = 10LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v39 = v29;
    v40 = 40;
  }
  for ( j = &v39[v40]; j != v39; v39 += 10 )
    *v39 = 0x7FFFFFFF;
  if ( v32 != (char ***)&v62 )
  {
    do
    {
      v42 = *(_DWORD *)v31;
      if ( (unsigned int)(*(_DWORD *)v31 + 0x7FFFFFFF) <= 0xFFFFFFFD )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v43 = v29;
          v44 = 3;
        }
        else
        {
          v50 = *(_DWORD *)(a1 + 16);
          v43 = *(char ****)(a1 + 8);
          if ( !v50 )
          {
LABEL_102:
            dword_0 = 0;
            BUG();
          }
          v44 = v50 - 1;
        }
        v45 = v44 & (37 * v42);
        v46 = (int *)&v43[5 * v45];
        v47 = *v46;
        if ( v42 != *v46 )
        {
          v57 = 1;
          v58 = nullptr;
          if ( v47 != 0x7FFFFFFF )
          {
            while ( 1 )
            {
              if ( !v58 && v47 == 0x80000000 )
                v58 = v46;
              v45 = v44 & (v57 + v45);
              v46 = (int *)&v43[5 * v45];
              v47 = *v46;
              if ( v42 == *v46 )
                break;
              if ( v47 == 0x7FFFFFFF )
              {
                if ( v58 )
                  v46 = v58;
                break;
              }
              ++v57;
            }
          }
        }
        *((_QWORD *)v46 + 2) = 0x200000000LL;
        v48 = *((_DWORD *)v31 + 4);
        *v46 = v42;
        *((_QWORD *)v46 + 1) = v46 + 6;
        if ( v48 )
          sub_1881590((char ***)v46 + 1, v31 + 1);
        v49 = (char ***)v31[1];
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
        if ( v49 != v31 + 3 )
          free(v49);
      }
      v31 += 5;
    }
    while ( v31 != v32 );
  }
}
