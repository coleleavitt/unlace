unsigned __int64 __fastcall sub_180FE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, size_t a5)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  size_t v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  size_t v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rax
  size_t v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 result; // rax
  size_t v28; // [rsp+0h] [rbp-48h]
  size_t v29; // [rsp+0h] [rbp-48h]
  size_t v30; // [rsp+8h] [rbp-40h]

  v5 = a1[3];
  if ( a1[4] == v5 )
  {
    v16 = 1;
    v7 = 0;
    v15 = 0;
    *(_QWORD *)a1[6] = 0;
    v17 = a1[1];
    v18 = *a1;
    v19 = v17 - *a1;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = a1[6];
      v12 = *(unsigned int *)(v5 + 4 * v6);
      v13 = *(_QWORD *)(v11 + 8 * v6);
      v14 = *(_QWORD *)(v11 + 8 * v6++ + 8);
      a5 = v14 - v13;
      if ( (_DWORD)v12 != -1 )
      {
        if ( v9 + v8 == v13 )
        {
          v8 += a5;
        }
        else
        {
          if ( v10 != v9 )
          {
            v30 = v14 - v13;
            v28 = v8;
            memmove((void *)(v10 + *a1), (const void *)(*a1 + v9), v8);
            v5 = a1[3];
            a5 = v30;
            v8 = v28;
          }
          v10 += v8;
          v9 = v13;
          v8 = a5;
        }
        *(_DWORD *)(v5 + 4 * v7) = v12;
        *(_QWORD *)(a1[6] + 8 * v7) = v10 + v13 - v9;
        *(_DWORD *)(a1[10] + 4 * v12) = v7;
        v5 = a1[3];
        ++v7;
      }
    }
    while ( v6 < (a1[4] - v5) >> 2 );
    if ( v9 != v10 )
    {
      v29 = v8;
      memmove((void *)(v10 + *a1), (const void *)(*a1 + v9), v8);
      v8 = v29;
    }
    v15 = v10 + v8;
    v16 = v7 + 1;
    *(_QWORD *)(a1[6] + 8 * v7) = v15;
    v17 = a1[1];
    v18 = *a1;
    v19 = v17 - *a1;
    if ( v19 < v15 )
    {
      std::vector<char>::_M_default_append(a1, v15 - v19);
      goto LABEL_17;
    }
  }
  if ( v15 < v19 )
  {
    v20 = v15 + v18;
    if ( v20 != v17 )
      a1[1] = v20;
  }
LABEL_17:
  v21 = a1[7];
  v22 = a1[6];
  v23 = (v21 - v22) >> 3;
  if ( v23 < v16 )
  {
    std::vector<unsigned long>::_M_default_append(a1 + 6, v16 - v23, v21, v22, a5);
  }
  else if ( v16 < v23 )
  {
    v24 = v22 + 8 * v16;
    if ( v21 != v24 )
      a1[7] = v24;
  }
  v25 = a1[4];
  v26 = a1[3];
  result = (v25 - v26) >> 2;
  if ( result < v7 )
  {
    result = std::vector<unsigned int>::_M_default_append(a1 + 3, v7 - result, v25, v26, a5);
  }
  else if ( v7 < result )
  {
    result = v26 + 4 * v7;
    if ( v25 != result )
      a1[4] = result;
  }
  a1[9] = 0;
  return result;
}

