__int64 *__fastcall sub_1880CD0(char *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  char v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r13
  __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rax
  char *v16; // rdi
  __int64 v17; // r12
  char *v18; // r14
  size_t v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  char *v23; // r9
  int v24; // r8d
  unsigned int v25; // ecx
  char *v26; // rsi
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 *result; // rax
  int v30; // ecx
  char *v31; // r13
  __int64 *v32; // r14
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  bool v39; // zf
  char *v40; // rdi
  size_t v41; // rdx
  unsigned __int64 v42; // rcx
  char *v43; // r8
  int v44; // edi
  unsigned int v45; // edx
  char *v46; // rsi
  __int64 v47; // r9
  __int64 v48; // rdx
  int v49; // edx
  int v50; // r11d
  char *v51; // rbp
  int v52; // r11d
  char *v53; // r10
  __int64 v54; // [rsp+0h] [rbp-58h] BYREF
  __int64 v55; // [rsp+8h] [rbp-50h] BYREF

  v6 = a2;
  v8 = *a1;
  v9 = *a1 & 1;
  if ( a2 <= 4 )
  {
    if ( !(_BYTE)v9 )
    {
      v16 = *((char **)a1 + 1);
      v13 = *((unsigned int *)a1 + 4);
      *a1 = v8 | 1;
      v6 = v13;
      v12 = v16;
      goto LABEL_6;
    }
    v31 = a1 + 8;
    v10 = (unsigned __int64)(a1 + 40);
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
      v31 = a1 + 8;
      v10 = (unsigned __int64)(a1 + 40);
      if ( !(_BYTE)v9 )
      {
        v12 = *((char **)a1 + 1);
        v13 = *((unsigned int *)a1 + 4);
        v14 = 8LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *((char **)a1 + 1);
        v13 = *((unsigned int *)a1 + 4);
        v6 = 64;
        v14 = 512;
LABEL_5:
        v15 = sub_22300B0(v14, 8, v10, v9, a5, a6);
        *((_DWORD *)a1 + 4) = v6;
        *((_QWORD *)a1 + 1) = v15;
        v16 = (char *)v15;
LABEL_6:
        v17 = 8 * v13;
        v18 = &v12[v17];
        v19 = 8LL * v6;
        v20 = *(_QWORD *)a1 & 1LL;
        *(_QWORD *)a1 = v20;
        if ( v20 )
        {
          v16 = a1 + 8;
          v19 = 32;
        }
        if ( v16 != &v16[v19] )
          memset(v16, 0, v19);
        v21 = (__int64 *)v12;
        if ( v18 != v12 )
        {
          do
          {
            while ( 1 )
            {
              v22 = *v21;
              if ( (unsigned __int64)(*v21 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
                break;
              if ( v18 == (char *)++v21 )
                return (__int64 *)operator delete(v12, v17, 8);
            }
            if ( (*a1 & 1) != 0 )
            {
              v23 = a1 + 8;
              v24 = 3;
            }
            else
            {
              v30 = *((_DWORD *)a1 + 4);
              v23 = *((char **)a1 + 1);
              if ( !v30 )
              {
                *(_QWORD *)&dword_0 = *v21;
                BUG();
              }
              v24 = v30 - 1;
            }
            v25 = v24 & (v22 ^ (v22 >> 9));
            v26 = &v23[8 * v25];
            v27 = *(_QWORD *)v26;
            if ( *(_QWORD *)v26 != v22 )
            {
              v50 = 1;
              v51 = nullptr;
              if ( v27 )
              {
                while ( 1 )
                {
                  if ( v27 == -1 && !v51 )
                    v51 = v26;
                  v25 = v24 & (v50 + v25);
                  v26 = &v23[8 * v25];
                  v27 = *(_QWORD *)v26;
                  if ( v22 == *(_QWORD *)v26 )
                    break;
                  if ( !v27 )
                  {
                    if ( v51 )
                      v26 = v51;
                    break;
                  }
                  ++v50;
                }
              }
            }
            v28 = *v21++;
            *(_QWORD *)v26 = v28;
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
          while ( v18 != (char *)v21 );
        }
        return (__int64 *)operator delete(v12, v17, 8);
      }
      v31 = a1 + 8;
      v10 = (unsigned __int64)(a1 + 40);
      v6 = 64;
    }
  }
  v32 = &v54;
  v33 = *(_QWORD *)v31 - 1LL;
  if ( v33 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v54 = *(_QWORD *)v31;
    v32 = &v55;
  }
  if ( (char *)v10 != v31 + 8 )
  {
    v34 = *((_QWORD *)v31 + 1);
    v33 = v34 - 1;
    if ( (unsigned __int64)(v34 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      *v32++ = v34;
    if ( (char *)v10 != v31 + 16 )
    {
      v35 = *((_QWORD *)v31 + 2);
      v33 = v35 - 1;
      if ( (unsigned __int64)(v35 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        *v32++ = v35;
      if ( (char *)v10 != v31 + 24 )
      {
        v36 = *((_QWORD *)v31 + 3);
        v33 = v36 - 1;
        if ( (unsigned __int64)(v36 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
          *v32++ = v36;
        if ( (char *)v10 != v31 + 32 )
        {
          v37 = *((_QWORD *)v31 + 4);
          v10 = v37 - 1;
          if ( (unsigned __int64)(v37 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            *v32++ = v37;
        }
      }
    }
  }
  if ( v6 > 4 )
  {
    *a1 &= ~1u;
    v38 = sub_22300B0(8LL * v6, 8, v10, v33, a5, a6);
    *((_DWORD *)a1 + 4) = v6;
    *((_QWORD *)a1 + 1) = v38;
  }
  v39 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v39 )
  {
    v40 = *((char **)a1 + 1);
    v41 = 8LL * *((unsigned int *)a1 + 4);
  }
  else
  {
    v40 = v31;
    v41 = 32;
  }
  if ( v40 != &v40[v41] )
    memset(v40, 0, v41);
  for ( result = &v54; result != v32; *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1 )
  {
    while ( 1 )
    {
      v42 = *result;
      if ( (unsigned __int64)(*result - 1) <= 0xFFFFFFFFFFFFFFFDLL )
        break;
      if ( ++result == v32 )
        return result;
    }
    if ( (*a1 & 1) != 0 )
    {
      v43 = v31;
      v44 = 3;
    }
    else
    {
      v49 = *((_DWORD *)a1 + 4);
      v43 = *((char **)a1 + 1);
      if ( !v49 )
      {
        *(_QWORD *)&dword_0 = *result;
        BUG();
      }
      v44 = v49 - 1;
    }
    v45 = v44 & (v42 ^ (v42 >> 9));
    v46 = &v43[8 * v45];
    v47 = *(_QWORD *)v46;
    if ( v42 != *(_QWORD *)v46 )
    {
      v52 = 1;
      v53 = nullptr;
      if ( v47 )
      {
        while ( 1 )
        {
          if ( !v53 && v47 == -1 )
            v53 = v46;
          v45 = v44 & (v52 + v45);
          v46 = &v43[8 * v45];
          v47 = *(_QWORD *)v46;
          if ( v42 == *(_QWORD *)v46 )
            break;
          if ( !v47 )
          {
            if ( v53 )
              v46 = v53;
            break;
          }
          ++v52;
        }
      }
    }
    v48 = *result++;
    *(_QWORD *)v46 = v48;
  }
  return result;
}
