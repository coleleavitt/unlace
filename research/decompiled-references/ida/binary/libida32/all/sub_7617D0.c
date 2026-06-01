__int64 __fastcall sub_7617D0(__int64 a1)
{
  __int64 v1; // r14
  __int64 *v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  size_t v8; // r15
  __int64 *v9; // r12
  size_t v10; // r14
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 336) + 8LL * *(_QWORD *)(a1 + 344) - 8);
  v2 = *(__int64 **)(v1 + 16);
  v3 = v2[1];
  if ( !v3 )
  {
    v6 = *v2;
    v5 = 1;
    v4 = 2;
    if ( (unsigned __int64)v2[2] >= 2 )
      goto LABEL_3;
LABEL_12:
    v14 = qvector_reserve(*(_QWORD *)(v1 + 16), v6, v4, 1);
    *v2 = v14;
    v6 = v14;
    goto LABEL_3;
  }
  v4 = v3 + 1;
  v5 = v2[1];
  v6 = *v2;
  --v3;
  if ( v2[2] < v4 )
    goto LABEL_12;
LABEL_3:
  v2[1] = v4;
  *(_BYTE *)(v6 + v3) = 46;
  *(_BYTE *)(*v2 + v5) = 0;
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v7 != 1 )
    {
      v9 = *(__int64 **)(v1 + 16);
      v10 = v7 - 1;
      v11 = v9[1];
      if ( v11 )
      {
        --v11;
        v10 = v8 + v11;
        v7 += v11;
      }
      v12 = *v9;
      if ( v9[2] < v7 )
      {
        v15 = qvector_reserve(v9, v12, v7, 1);
        *v9 = v15;
        v12 = v15;
      }
      v9[1] = v7;
      *(_BYTE *)(v12 + v10) = 0;
      memcpy((void *)(v11 + *v9), *(const void **)(a1 + 40), v8);
    }
  }
  return 0;
}

