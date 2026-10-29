void __fastcall sub_1F3CDB0(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  char ***v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rdi
  char ***v13; // rax
  __int64 v14; // r13
  bool v15; // zf
  char ***v16; // r14
  __int64 v17; // rdx
  char ***i; // rdx
  char ***j; // rbp
  __int64 v20; // r8
  int v21; // esi
  unsigned int v22; // edx
  char ***v23; // rdi
  char **v24; // rcx
  char ***v25; // rdi
  char **v26; // rax
  int v27; // edx
  __int64 *v28; // r14
  __int64 *v29; // r13
  char ***v30; // rbp
  int v31; // edi
  __int64 *v32; // rdi
  char ***v33; // r12
  char **v34; // rax
  int v35; // esi
  __int64 *v36; // rdi
  char **v37; // rax
  __int64 *v38; // rdi
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *k; // rdx
  __int64 *v43; // r8
  int v44; // esi
  unsigned int v45; // edx
  char ***v46; // rdi
  char **v47; // rcx
  int v48; // edx
  char ***v49; // rdi
  int v50; // edx
  int v51; // r9d
  char ***v52; // r10
  int v53; // r9d
  char ***v54; // r10
  __int64 v55; // [rsp+0h] [rbp-88h] BYREF
  char **v56[2]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v57; // [rsp+18h] [rbp-70h] BYREF
  __int64 v58; // [rsp+28h] [rbp-60h] BYREF

  LODWORD(v6) = a2;
  v8 = *(char ****)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 2 )
  {
    if ( !(_BYTE)v9 )
    {
      v11 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v13 = v8;
      v6 = v11;
      goto LABEL_6;
    }
    v28 = (__int64 *)(a1 + 8);
    v29 = (__int64 *)(a1 + 88);
  }
  else
  {
    a3 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (a3 | (a3 >> 16)) + 1;
    v6 = (unsigned int)v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v28 = (__int64 *)(a1 + 8);
      v29 = (__int64 *)(a1 + 88);
      if ( !(_BYTE)v9 )
      {
        v11 = *(_DWORD *)(a1 + 16);
        v12 = 40LL * (unsigned int)v10;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v11 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v12 = 2560;
LABEL_5:
        v13 = (char ***)sub_22300B0(v12, 8, a3, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v13;
LABEL_6:
        v14 = 5LL * v11;
        v15 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v16 = &v8[v14];
        if ( v15 )
        {
          v17 = 5 * v6;
        }
        else
        {
          v13 = (char ***)(a1 + 8);
          v17 = 10;
        }
        for ( i = &v13[v17]; i != v13; v13 += 5 )
          *v13 = (char **)-4096LL;
        for ( j = v8; v16 != j; j += 5 )
        {
          v26 = *j;
          if ( *j != (char **)-4096LL && v26 != (char **)-8192LL )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v20 = a1 + 8;
              v21 = 1;
            }
            else
            {
              v27 = *(_DWORD *)(a1 + 16);
              v20 = *(_QWORD *)(a1 + 8);
              if ( !v27 )
                goto LABEL_96;
              v21 = v27 - 1;
            }
            v22 = v21 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
            v23 = (char ***)(v20 + 40LL * v22);
            v24 = *v23;
            if ( *v23 != v26 )
            {
              v51 = 1;
              v52 = nullptr;
              if ( v24 != (char **)-4096LL )
              {
                while ( 1 )
                {
                  if ( v24 == (char **)-8192LL && !v52 )
                    v52 = v23;
                  v22 = v21 & (v51 + v22);
                  v23 = (char ***)(v20 + 40LL * v22);
                  v24 = *v23;
                  if ( v26 == *v23 )
                    break;
                  if ( v24 == (char **)-4096LL )
                  {
                    if ( v52 )
                      v23 = v52;
                    break;
                  }
                  ++v51;
                }
              }
            }
            *v23 = v26;
            v23[1] = (char **)(v23 + 3);
            v23[2] = (char **)0x200000000LL;
            if ( *((_DWORD *)j + 4) )
              sub_1ED26C0(v23 + 1, j + 1);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            v25 = (char ***)j[1];
            if ( v25 != j + 3 )
              free(v25);
          }
        }
        operator delete(v8, v14 * 8, 8);
        return;
      }
      v28 = (__int64 *)(a1 + 8);
      v29 = (__int64 *)(a1 + 88);
      LODWORD(v6) = 64;
    }
  }
  if ( *v28 == -4096 || *v28 == -8192 )
  {
    v30 = (char ***)&v55;
    v33 = (char ***)&v55;
  }
  else
  {
    v30 = (char ***)&v55;
    v55 = *v28;
    v31 = *((_DWORD *)v28 + 4);
    v56[0] = (char **)&v57;
    v56[1] = (char **)0x200000000LL;
    if ( v31 )
      sub_1ED26C0(v56, (char ***)v28 + 1);
    v32 = (__int64 *)v28[1];
    if ( v32 != v28 + 3 )
      free(v32);
    v33 = (char ***)&v58;
  }
  if ( v29 != v28 + 5 )
  {
    v34 = (char **)v28[5];
    if ( v34 != (char **)-4096LL && v34 != (char **)-8192LL )
    {
      *v33 = v34;
      v35 = *((_DWORD *)v28 + 14);
      v33[1] = (char **)(v33 + 3);
      v33[2] = (char **)0x200000000LL;
      if ( v35 )
        sub_1ED26C0(v33 + 1, (char ***)v28 + 6);
      v36 = (__int64 *)v28[6];
      v33 += 5;
      if ( v36 != v28 + 8 )
        free(v36);
    }
    if ( v29 != v28 + 10 )
    {
      v37 = (char **)v28[10];
      if ( v37 != (char **)-4096LL && v37 != (char **)-8192LL )
      {
        *v33 = v37;
        v9 = *((unsigned int *)v28 + 24);
        v33[1] = (char **)(v33 + 3);
        v33[2] = (char **)0x200000000LL;
        if ( (_DWORD)v9 )
          sub_1ED26C0(v33 + 1, (char ***)v28 + 11);
        v38 = (__int64 *)v28[11];
        v33 += 5;
        if ( v38 != v28 + 13 )
          free(v38);
      }
    }
  }
  if ( (unsigned int)v6 > 2 )
  {
    *(_BYTE *)a1 &= ~1u;
    v39 = sub_22300B0(40LL * (unsigned int)v6, 8, a3, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v39;
  }
  v15 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v15 )
  {
    v40 = *(_QWORD **)(a1 + 8);
    v41 = 5LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v40 = v28;
    v41 = 10;
  }
  for ( k = &v40[v41]; k != v40; v40 += 5 )
    *v40 = -4096;
  if ( v33 != (char ***)&v55 )
  {
    do
    {
      v26 = *v30;
      if ( *v30 != (char **)-8192LL && v26 != (char **)-4096LL )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v43 = v28;
          v44 = 1;
        }
        else
        {
          v50 = *(_DWORD *)(a1 + 16);
          v43 = *(__int64 **)(a1 + 8);
          if ( !v50 )
          {
LABEL_96:
            *(_QWORD *)&dword_0 = v26;
            BUG();
          }
          v44 = v50 - 1;
        }
        v45 = v44 & (((unsigned int)v26 >> 9) ^ ((unsigned int)v26 >> 4));
        v46 = (char ***)&v43[5 * v45];
        v47 = *v46;
        if ( v26 != *v46 )
        {
          v53 = 1;
          v54 = nullptr;
          if ( v47 != (char **)-4096LL )
          {
            while ( 1 )
            {
              if ( v47 == (char **)-8192LL && !v54 )
                v54 = v46;
              v45 = v44 & (v53 + v45);
              v46 = (char ***)&v43[5 * v45];
              v47 = *v46;
              if ( v26 == *v46 )
                break;
              if ( v47 == (char **)-4096LL )
              {
                if ( v54 )
                  v46 = v54;
                break;
              }
              ++v53;
            }
          }
        }
        v46[2] = (char **)0x200000000LL;
        v48 = *((_DWORD *)v30 + 4);
        *v46 = v26;
        v46[1] = (char **)(v46 + 3);
        if ( v48 )
          sub_1ED26C0(v46 + 1, v30 + 1);
        v49 = (char ***)v30[1];
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
        if ( v49 != v30 + 3 )
          free(v49);
      }
      v30 += 5;
    }
    while ( v30 != v33 );
  }
}
