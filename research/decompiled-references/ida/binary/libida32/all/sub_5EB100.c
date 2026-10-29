__int64 __fastcall sub_5EB100(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  size_t v10; // r14
  __int64 v11; // r13
  size_t v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  v3 = sub_5E9E80(a1, a2);
  result = 0;
  if ( v3 != -1 )
    return result;
  v5 = a1[1];
  if ( v5 )
  {
    v8 = v5 + 1;
    v7 = a1[1];
    v6 = *a1;
    --v5;
    if ( a1[2] >= v8 )
      goto LABEL_4;
  }
  else
  {
    v6 = *a1;
    v7 = 1;
    v8 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_4;
  }
  v14 = qvector_reserve(a1, v6, v8, 1);
  *a1 = v14;
  v6 = v14;
LABEL_4:
  a1[1] = v8;
  *(_BYTE *)(v6 + v5) = 45;
  *(_BYTE *)(*a1 + v7) = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v9 != 1 )
    {
      v11 = a1[1];
      v12 = v9 - 1;
      if ( v11 )
      {
        --v11;
        v12 = v10 + v11;
        v9 += v11;
      }
      v13 = *a1;
      if ( a1[2] < v9 )
      {
        v15 = qvector_reserve(a1, v13, v9, 1);
        *a1 = v15;
        v13 = v15;
      }
      a1[1] = v9;
      *(_BYTE *)(v13 + v12) = 0;
      memcpy((void *)(v11 + *a1), *(const void **)a2, v10);
    }
  }
  return 1;
}

