void __fastcall sub_1F3E8F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  char ***v8; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rdi
  char ***v14; // rax
  __int64 v15; // r12
  bool v16; // zf
  char ***v17; // r14
  __int64 v18; // rdx
  char ***i; // rdx
  char ***j; // rbp
  __int64 v21; // r8
  int v22; // esi
  unsigned int v23; // edx
  char ***v24; // rdi
  char **v25; // rcx
  char ***v26; // rdi
  char **v27; // rax
  int v28; // esi
  __int64 *v29; // r14
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
  int v44; // r9d
  unsigned int v45; // edx
  char ***v46; // rdi
  char **v47; // rcx
  int v48; // edx
  char ***v49; // rdi
  int v50; // edx
  int v51; // r9d
  char ***v52; // r10
  int v53; // esi
  char ***v54; // r10
  unsigned __int64 v55; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v56; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v58; // [rsp+8h] [rbp-B0h]
  __int64 v59; // [rsp+10h] [rbp-A8h] BYREF
  char **v60[2]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+28h] [rbp-90h] BYREF
  __int64 v62; // [rsp+48h] [rbp-70h] BYREF

  LODWORD(v6) = a2;
  v8 = *(char ****)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 2 )
  {
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = v8;
      v6 = v12;
      goto LABEL_6;
    }
    v29 = (__int64 *)(a1 + 8);
    v10 = a1 + 120;
  }
  else
  {
    v10 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
          | (a2 - 1)
          | ((unsigned __int64)(a2 - 1) >> 1)
          | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
        | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
        | (a2 - 1)
        | ((unsigned __int64)(a2 - 1) >> 1)
        | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v11 = (v10 | (v10 >> 16)) + 1;
    v6 = (unsigned int)v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v29 = (__int64 *)(a1 + 8);
      v10 = a1 + 120;
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 56LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 3584;
LABEL_5:
        v14 = (char ***)sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
        v15 = 7LL * v12;
        v16 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v17 = &v8[v15];
        if ( v16 )
        {
          v18 = 7 * v6;
        }
        else
        {
          v14 = (char ***)(a1 + 8);
          v18 = 14;
        }
        for ( i = &v14[v18]; i != v14; v14 += 7 )
          *v14 = (char **)-4096LL;
        for ( j = v8; v17 != j; j += 7 )
        {
          v27 = *j;
          if ( *j != (char **)-4096LL && v27 != (char **)-8192LL )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v21 = a1 + 8;
              v22 = 1;
            }
            else
            {
              v28 = *(_DWORD *)(a1 + 16);
              v21 = *(_QWORD *)(a1 + 8);
              if ( !v28 )
                goto LABEL_96;
              v22 = v28 - 1;
            }
            v23 = v22 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v24 = (char ***)(v21 + 56LL * v23);
            v25 = *v24;
            if ( *v24 != v27 )
            {
              v51 = 1;
              v52 = nullptr;
              if ( v25 != (char **)-4096LL )
              {
                while ( 1 )
                {
                  if ( v25 == (char **)-8192LL && !v52 )
                    v52 = v24;
                  v23 = v22 & (v51 + v23);
                  v24 = (char ***)(v21 + 56LL * v23);
                  v25 = *v24;
                  if ( v27 == *v24 )
                    break;
                  if ( v25 == (char **)-4096LL )
                  {
                    if ( v52 )
                      v24 = v52;
                    break;
                  }
                  ++v51;
                }
              }
            }
            *v24 = v27;
            v24[1] = (char **)(v24 + 3);
            v24[2] = (char **)0x200000000LL;
            if ( *((_DWORD *)j + 4) )
              sub_1ED3430(v24 + 1, j + 1);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            v26 = (char ***)j[1];
            if ( v26 != j + 3 )
              free(v26);
          }
        }
        operator delete(v8, v15 * 8, 8);
        return;
      }
      v29 = (__int64 *)(a1 + 8);
      v10 = a1 + 120;
      LODWORD(v6) = 64;
    }
  }
  if ( *v29 == -4096 || *v29 == -8192 )
  {
    v30 = (char ***)&v59;
    v33 = (char ***)&v59;
  }
  else
  {
    v30 = (char ***)&v59;
    v59 = *v29;
    v31 = *((_DWORD *)v29 + 4);
    v60[0] = (char **)&v61;
    v60[1] = (char **)0x200000000LL;
    if ( v31 )
    {
      v58 = v10;
      sub_1ED3430(v60, (char ***)v29 + 1);
      v10 = v58;
    }
    v32 = (__int64 *)v29[1];
    if ( v32 != v29 + 3 )
    {
      v55 = v10;
      free(v32);
      v10 = v55;
    }
    v33 = (char ***)&v62;
  }
  if ( (__int64 *)v10 != v29 + 7 )
  {
    v34 = (char **)v29[7];
    if ( v34 != (char **)-4096LL && v34 != (char **)-8192LL )
    {
      *v33 = v34;
      v35 = *((_DWORD *)v29 + 18);
      v33[1] = (char **)(v33 + 3);
      v33[2] = (char **)0x200000000LL;
      if ( v35 )
      {
        v57 = v10;
        sub_1ED3430(v33 + 1, (char ***)v29 + 8);
        v10 = v57;
      }
      v36 = (__int64 *)v29[8];
      v33 += 7;
      if ( v36 != v29 + 10 )
      {
        v56 = v10;
        free(v36);
        v10 = v56;
      }
    }
    if ( (__int64 *)v10 != v29 + 14 )
    {
      v37 = (char **)v29[14];
      if ( v37 != (char **)-4096LL && v37 != (char **)-8192LL )
      {
        *v33 = v37;
        v9 = *((unsigned int *)v29 + 32);
        v33[1] = (char **)(v33 + 3);
        v33[2] = (char **)0x200000000LL;
        if ( (_DWORD)v9 )
          sub_1ED3430(v33 + 1, (char ***)v29 + 15);
        v38 = (__int64 *)v29[15];
        v33 += 7;
        if ( v38 != v29 + 17 )
          free(v38);
      }
    }
  }
  if ( (unsigned int)v6 > 2 )
  {
    *(_BYTE *)a1 &= ~1u;
    v39 = sub_22300B0(56LL * (unsigned int)v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v39;
  }
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v16 )
  {
    v40 = *(_QWORD **)(a1 + 8);
    v41 = 7LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v40 = v29;
    v41 = 14;
  }
  for ( k = &v40[v41]; k != v40; v40 += 7 )
    *v40 = -4096;
  if ( v33 != (char ***)&v59 )
  {
    do
    {
      v27 = *v30;
      if ( *v30 != (char **)-8192LL && v27 != (char **)-4096LL )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v43 = v29;
          v44 = 1;
        }
        else
        {
          v50 = *(_DWORD *)(a1 + 16);
          v43 = *(__int64 **)(a1 + 8);
          if ( !v50 )
          {
LABEL_96:
            *(_QWORD *)&dword_0 = v27;
            BUG();
          }
          v44 = v50 - 1;
        }
        v45 = v44 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
        v46 = (char ***)&v43[7 * v45];
        v47 = *v46;
        if ( v27 != *v46 )
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
              v46 = (char ***)&v43[7 * v45];
              v47 = *v46;
              if ( v27 == *v46 )
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
        *v46 = v27;
        v46[1] = (char **)(v46 + 3);
        if ( v48 )
          sub_1ED3430(v46 + 1, v30 + 1);
        v49 = (char ***)v30[1];
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
        if ( v49 != v30 + 3 )
          free(v49);
      }
      v30 += 7;
    }
    while ( v30 != v33 );
  }
}
