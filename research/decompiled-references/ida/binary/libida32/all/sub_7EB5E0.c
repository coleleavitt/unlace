__int64 __fastcall sub_7EB5E0(__int64 *a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // r12
  bool v4; // cf
  _BYTE *v5; // rdx
  unsigned __int64 v8; // rbp
  _BYTE *i; // rbx
  _BYTE *v10; // r15
  __int64 v11; // r8
  size_t v12; // r9
  size_t v13; // r10
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  _BYTE *j; // rax
  _BYTE *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rbp
  size_t v20; // rbx
  size_t v21; // r8
  __int64 v22; // rsi
  size_t v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-58h]
  size_t v26; // [rsp+0h] [rbp-58h]
  size_t v27; // [rsp+8h] [rbp-50h]
  size_t v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  v3 = (_BYTE *)*a2;
  v4 = __CFADD__(*a2, a3);
  v5 = (_BYTE *)(*a2 + a3);
  if ( !v4 )
  {
    v8 = (unsigned __int64)v5;
    for ( i = (_BYTE *)*a2; ; ++i )
    {
      if ( v5 == i )
        return 0;
      v10 = i + 1;
      if ( !*i )
        break;
    }
    if ( !v3 )
      return 0;
    v11 = a1[1];
    v12 = i - v3;
    v13 = i - v3;
    if ( v11 )
    {
      --v11;
      v14 = *a1;
      v13 = v12 + v11;
      v15 = v10 - v3 + v11;
      if ( a1[2] >= v15 )
        goto LABEL_11;
    }
    else
    {
      v14 = *a1;
      v15 = v10 - v3;
      if ( a1[2] >= (unsigned __int64)(v10 - v3) )
        goto LABEL_11;
    }
    v29 = v11;
    v27 = v13;
    v25 = v15;
    v18 = qvector_reserve(a1, v14, v15, 1);
    v11 = v29;
    v12 = i - v3;
    v13 = v27;
    v15 = v25;
    *a1 = v18;
    v14 = v18;
LABEL_11:
    a1[1] = v15;
    *(_BYTE *)(v14 + v13) = 0;
    memmove((void *)(v11 + *a1), v3, v12);
    for ( j = i + 1; (unsigned __int64)j < v8; ++j )
    {
      v17 = j + 1;
      if ( !*j )
      {
        v19 = a1[4];
        v20 = j - i - 1;
        v21 = v20;
        if ( v19 )
        {
          --v19;
          v21 = v20 + v19;
        }
        v22 = a1[3];
        v23 = v21 + 1;
        if ( a1[5] < v21 + 1 )
        {
          v28 = v21;
          v26 = v21 + 1;
          v24 = qvector_reserve(a1 + 3, v22, v23, 1);
          v21 = v28;
          v23 = v26;
          a1[3] = v24;
          v22 = v24;
        }
        a1[4] = v23;
        *(_BYTE *)(v22 + v21) = 0;
        memmove((void *)(v19 + a1[3]), v10, v20);
        *a2 = v17;
        return 1;
      }
    }
  }
  return 0;
}

