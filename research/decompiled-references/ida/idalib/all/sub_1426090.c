__int64 __fastcall sub_1426090(char *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  char v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  int *v12; // r13
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  char *v16; // rdi
  int *v17; // r15
  size_t v18; // rdx
  __int64 v19; // rax
  int *i; // rbx
  char *v21; // r14
  int v22; // r12d
  unsigned int v23; // eax
  char *v24; // rdx
  int v25; // edi
  int v26; // eax
  __int64 result; // rax
  int v28; // edx
  unsigned int *v29; // r12
  int *v30; // r13
  unsigned int *v31; // rax
  int *v32; // rbx
  unsigned __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  bool v36; // zf
  char *v37; // rdi
  size_t v38; // rdx
  int v39; // r14d
  unsigned int *v40; // r15
  int v41; // ecx
  int v42; // eax
  int *v43; // rdx
  int v44; // edi
  int v45; // eax
  int v46; // r10d
  char *v47; // r9
  __int64 v48; // rax
  int v49; // r9d
  int *v50; // r8
  int v51; // [rsp+0h] [rbp-D8h]
  __int64 v52; // [rsp+8h] [rbp-D0h]
  int v53; // [rsp+1Ch] [rbp-BCh] BYREF
  _DWORD v54[46]; // [rsp+20h] [rbp-B8h] BYREF

  v6 = a2;
  v8 = *a1;
  v9 = *a1 & 1;
  if ( a2 <= 0x20 )
  {
    if ( !(_BYTE)v9 )
    {
      v16 = *((char **)a1 + 1);
      v13 = *((unsigned int *)a1 + 4);
      *a1 = v8 | 1;
      v6 = v13;
      v12 = (int *)v16;
      goto LABEL_8;
    }
    v29 = (unsigned int *)(a1 + 8);
    v10 = (unsigned __int64)(a1 + 136);
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
    v6 = v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v29 = (unsigned int *)(a1 + 8);
      v10 = (unsigned __int64)(a1 + 136);
      if ( !(_BYTE)v9 )
      {
        v12 = *((int **)a1 + 1);
        v13 = *((unsigned int *)a1 + 4);
        v14 = 4LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *((int **)a1 + 1);
        v13 = *((unsigned int *)a1 + 4);
        v6 = 64;
        v14 = 256;
LABEL_5:
        v15 = sub_22300B0(v14, 4, v10, v9, a5, a6);
        *((_DWORD *)a1 + 4) = v6;
        v16 = (char *)v15;
        *((_QWORD *)a1 + 1) = v15;
LABEL_8:
        v52 = 4 * v13;
        v17 = &v12[v13];
        v18 = 4LL * v6;
        v19 = *(_QWORD *)a1 & 1LL;
        *(_QWORD *)a1 = v19;
        if ( v19 )
        {
          v16 = a1 + 8;
          v18 = 128;
        }
        if ( v16 != &v16[v18] )
          memset(v16, 255, v18);
        for ( i = v12; v17 != i; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
        {
          while ( (unsigned int)(*i + 2) <= 1 )
          {
            if ( v17 == ++i )
              return operator delete(v12, v52, 4);
          }
          if ( (*a1 & 1) != 0 )
          {
            v21 = a1 + 8;
            v22 = 31;
          }
          else
          {
            v28 = *((_DWORD *)a1 + 4);
            v21 = *((char **)a1 + 1);
            if ( !v28 )
            {
              dword_0 = *i;
              BUG();
            }
            v22 = v28 - 1;
          }
          v54[0] = *i;
          v23 = v22 & sub_101AC30(v54);
          v24 = &v21[4 * v23];
          v25 = *(_DWORD *)v24;
          if ( *(_DWORD *)v24 != *i )
          {
            v46 = 1;
            v47 = nullptr;
            if ( v25 != -1 )
            {
              while ( 1 )
              {
                if ( v25 == -2 && !v47 )
                  v47 = v24;
                v23 = v22 & (v46 + v23);
                v24 = &v21[4 * v23];
                v25 = *(_DWORD *)v24;
                if ( *i == *(_DWORD *)v24 )
                  break;
                if ( v25 == -1 )
                {
                  if ( v47 )
                    v24 = v47;
                  break;
                }
                ++v46;
              }
            }
          }
          v26 = *i++;
          *(_DWORD *)v24 = v26;
        }
        return operator delete(v12, v52, 4);
      }
      v29 = (unsigned int *)(a1 + 8);
      v10 = (unsigned __int64)(a1 + 136);
      v6 = 64;
    }
  }
  v30 = v54;
  v31 = v29;
  v32 = v54;
  v33 = (unsigned __int64)&v29[((v10 - 4 - (unsigned __int64)v29) >> 2) + 1];
  do
  {
    v34 = *v31;
    v35 = (unsigned int)(v34 + 2);
    if ( (unsigned int)v35 > 1 )
      *v32++ = v34;
    ++v31;
  }
  while ( v31 != (unsigned int *)v33 );
  if ( v6 > 0x20 )
  {
    *a1 &= ~1u;
    v48 = sub_22300B0(4LL * v6, 4, v34, v35, a5, a6);
    *((_DWORD *)a1 + 4) = v6;
    *((_QWORD *)a1 + 1) = v48;
  }
  v36 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v36 )
  {
    v37 = *((char **)a1 + 1);
    v38 = 4LL * *((unsigned int *)a1 + 4);
  }
  else
  {
    v37 = (char *)v29;
    v38 = 128;
  }
  if ( v37 != &v37[v38] )
    memset(v37, 255, v38);
  result = (__int64)&v53;
  if ( v32 != v54 )
  {
    do
    {
      v39 = *v30;
      result = (unsigned int)(*v30 + 2);
      if ( (unsigned int)result > 1 )
      {
        if ( (*a1 & 1) != 0 )
        {
          v40 = v29;
          v41 = 31;
        }
        else
        {
          v45 = *((_DWORD *)a1 + 4);
          v40 = *((unsigned int **)a1 + 1);
          if ( !v45 )
          {
            dword_0 = *v30;
            BUG();
          }
          v41 = v45 - 1;
        }
        v51 = v41;
        v53 = *v30;
        v42 = v41 & sub_101AC30(&v53);
        v43 = (int *)&v40[v42];
        v44 = *v43;
        if ( v39 != *v43 )
        {
          v49 = 1;
          v50 = nullptr;
          if ( v44 != -1 )
          {
            while ( 1 )
            {
              if ( !v50 && v44 == -2 )
                v50 = v43;
              v42 = v51 & (v49 + v42);
              v43 = (int *)&v40[v42];
              v44 = *v43;
              if ( v39 == *v43 )
                break;
              if ( v44 == -1 )
              {
                if ( v50 )
                  v43 = v50;
                break;
              }
              ++v49;
            }
          }
        }
        *v43 = *v30;
        result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
        *(_DWORD *)a1 = result;
      }
      ++v30;
    }
    while ( v32 != v30 );
  }
  return result;
}
