__int64 __fastcall sub_425800(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  size_t v7; // r14
  const char *v8; // r14
  char *v9; // rax
  __int64 v10; // rax
  const char *v11; // rdx
  size_t v12; // r15
  const char *v13; // r8
  _BYTE *v14; // rsi
  size_t v15; // rdx
  const char *v16; // rbp
  _BYTE *v17; // rsi
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rax
  _BYTE *v20; // rdi
  unsigned __int64 v21; // rcx
  char *v22; // rdx
  __int64 v23; // r12
  unsigned __int64 v24; // rbp
  __int64 v26; // rax
  __int64 v27; // rax
  char *v28; // rdx
  __int64 v29; // rax
  const char *v30; // [rsp+8h] [rbp-40h]

  v3 = -1;
  v7 = *(_QWORD *)(a3 + 8);
  if ( v7 )
  {
    v8 = *(const char **)a3;
    v9 = strrchr(*(const char **)a3, 47);
    if ( v9 )
    {
      v3 = v9 - v8;
      v7 = v9 - v8 + 1;
    }
    else
    {
      v7 = 0;
    }
  }
  if ( a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v10 = *(_QWORD *)(a3 + 8);
    v11 = &s1;
    v12 = ~v3;
    if ( v10 )
    {
      v11 = *(const char **)a3;
      v12 = v10 - 1 - v7;
    }
    v13 = &v11[v7];
    v14 = *(_BYTE **)a2;
    v15 = v12 + 1;
    if ( *(_QWORD *)(a2 + 16) < v12 + 1 )
    {
      v30 = v13;
      v27 = qvector_reserve(a2, v14, v15, 1);
      v13 = v30;
      v15 = v12 + 1;
      *(_QWORD *)a2 = v27;
      v14 = (_BYTE *)v27;
    }
    *(_QWORD *)(a2 + 8) = v15;
    v14[v12] = 0;
    memmove(*(void **)a2, v13, v12);
  }
  if ( a1 )
  {
    a1[1] = 0;
    v16 = &s1;
    if ( *(_QWORD *)(a3 + 8) )
    {
      v16 = *(const char **)a3;
      v17 = (_BYTE *)*a1;
      v18 = v3 + 2;
      if ( a1[2] >= v18 )
        goto LABEL_13;
    }
    else
    {
      v17 = (_BYTE *)*a1;
      v18 = v3 + 2;
      if ( a1[2] >= v18 )
        goto LABEL_13;
    }
    v26 = qvector_reserve(a1, v17, v18, 1);
    *a1 = v26;
    v17 = (_BYTE *)v26;
LABEL_13:
    a1[1] = v18;
    v17[v7] = 0;
    memmove((void *)*a1, v16, v7);
    v19 = a1[1];
    if ( v19 > 3 )
    {
      v20 = (_BYTE *)*a1;
      v21 = *a1 + 2;
      v22 = (char *)(*a1 + v19 - 1);
      if ( v21 < (unsigned __int64)v22 )
      {
        do
        {
          if ( *(v22 - 1) != 47 )
            break;
          --v22;
        }
        while ( (char *)v21 != v22 );
      }
      v23 = v22 - v20;
      if ( v22 == v20 )
      {
        if ( v20 )
        {
          a1[1] = 0;
          qfree(v20, v16);
          *a1 = 0;
          a1[2] = 0;
        }
      }
      else
      {
        v24 = v23 + 1;
        if ( v19 < v23 + 1 )
        {
          if ( a1[2] < v24 )
          {
            v29 = qvector_reserve(a1, *a1, v23 + 1, 1);
            *a1 = v29;
            v20 = (_BYTE *)v29;
            v19 = a1[1];
          }
          memset(&v20[v19], 0, v24 - v19);
          v28 = (char *)*a1;
          a1[1] = v24;
          v22 = &v28[v23];
        }
        else if ( v19 != v23 + 1 )
        {
          a1[1] = v24;
        }
        *v22 = 0;
      }
    }
  }
  return 1;
}
