const char *__fastcall sub_6A9430(__int64 a1, const char *a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  _QWORD *v7; // rbp
  _QWORD *v8; // r12
  void *v9; // rdi
  __int64 v10; // r12
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // r8
  size_t v14; // rdx
  __int64 v15; // rax
  const char *result; // rax
  unsigned __int64 v17; // r8
  _QWORD *v18; // r13
  unsigned __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  size_t v24; // [rsp+0h] [rbp-48h]
  unsigned __int64 v25; // [rsp+0h] [rbp-48h]
  size_t v26; // [rsp+8h] [rbp-40h]

  v5 = a3;
  v6 = *(_QWORD *)(a1 + 152);
  v7 = (_QWORD *)(a1 + (-a3 & 0x18) + 104);
  if ( v6 )
  {
    v17 = v6 + 1;
    v18 = (_QWORD *)(a1 + 24LL * a3);
    v19 = v18[14];
    if ( v19 < v6 + 1 )
    {
      v22 = v18[13];
      if ( v18[15] < v17 )
      {
        v23 = qvector_reserve(v7, v22, v6 + 1, 1);
        v19 = v18[14];
        v17 = v6 + 1;
        v18[13] = v23;
        v22 = v23;
      }
      v25 = v17;
      memset((void *)(v22 + v19), 0, v17 - v19);
      *(_QWORD *)(a1 + 24 * v5 + 112) = v25;
    }
    else if ( v17 != v19 )
    {
      v18[14] = v17;
    }
    *(_BYTE *)(*v7 + v6) = 0;
  }
  else
  {
    v8 = (_QWORD *)(a1 + 24LL * a3);
    v9 = (void *)v8[13];
    if ( v9 )
    {
      v8[14] = 0;
      qfree(v9);
      v8[13] = 0;
      v8[15] = 0;
    }
  }
  if ( a2 )
  {
    v10 = v7[1];
    v11 = strlen(a2);
    v12 = v11;
    v13 = v11;
    if ( v10 )
    {
      --v10;
      v13 = v11 + v10;
    }
    v14 = v13 + 1;
    if ( v7[2] < v13 + 1 )
    {
      v24 = v13 + 1;
      v20 = a1 + 24 * v5;
      v26 = v13;
      v21 = qvector_reserve(v7, *(_QWORD *)(v20 + 104), v14, 1);
      v13 = v26;
      v14 = v24;
      *(_QWORD *)(v20 + 104) = v21;
    }
    v15 = *v7;
    v7[1] = v14;
    *(_BYTE *)(v15 + v13) = 0;
    memmove((void *)(v10 + *v7), a2, v12);
  }
  result = haystack;
  if ( v7[1] )
    return (const char *)*v7;
  return result;
}

