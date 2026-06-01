_QWORD *__fastcall CoinSearchTree<CoinSearchTreeCompareDepth>::realpop(_QWORD *a1)
{
  __int64 v1; // r15
  _QWORD *v2; // rbp
  int *v3; // r14
  __int64 (*v4)(void); // rax
  __int64 v5; // r15
  _QWORD *result; // rax
  unsigned __int64 v7; // r12
  _QWORD *v8; // r10
  __int64 v9; // r11
  __int64 v10; // rdx
  int v11; // r13d
  int **v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rsi
  int **v15; // rax
  int v16; // r9d
  int v17; // ebx
  __int64 v18; // rdi
  int *v19; // rcx
  __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v1 = a1[2];
  v2 = (_QWORD *)a1[1];
  v3 = *(int **)(v1 - 8);
  v4 = *(__int64 (**)(void))(*a1 + 16LL);
  v5 = v1 - 8;
  *v2 = v3;
  a1[2] = v5;
  if ( (char *)v4 != (char *)CoinSearchTree<CoinSearchTreeCompareDepth>::fixTop )
    return (_QWORD *)v4();
  result = (_QWORD *)(v5 - (_QWORD)v2);
  v7 = (v5 - (__int64)v2) >> 3;
  if ( v7 > 1 )
  {
    v8 = v2 - 1;
    if ( v7 == 2 )
    {
      result = v2;
      v21 = *v3;
      v18 = *((_QWORD *)v3 + 1);
    }
    else
    {
      v9 = 1;
      v10 = 2;
      v20 = *((_QWORD *)v3 + 1);
      v21 = *v3;
      v11 = *(_DWORD *)(*(_QWORD *)(v20 + 8LL * *v3) + 8LL);
      do
      {
        v14 = v10 + 1;
        v12 = (int **)&v8[v10];
        v15 = (int **)&v2[v10];
        v13 = *v12;
        v16 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v15 + 1) + 8LL * **v15) + 8LL);
        v17 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v12 + 1) + 8LL * **v12) + 8LL);
        if ( v16 >= v17 )
        {
          v12 = (int **)&v2[v10];
          v13 = *v15;
          result = &v8[v9];
          if ( v11 >= v16 )
            goto LABEL_9;
        }
        else
        {
          v14 = v10;
          result = &v8[v9];
          if ( v11 >= v17 )
          {
LABEL_9:
            v18 = v20;
            if ( v7 == v14 )
              goto LABEL_13;
            goto LABEL_10;
          }
        }
        v10 = 2 * v14;
        *result = v13;
        v9 = v14;
      }
      while ( v7 > 2 * v14 );
      result = v12;
      v18 = v20;
      if ( v7 != v10 )
        goto LABEL_10;
    }
LABEL_13:
    v19 = *(int **)(v5 - 8);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v19 + 1) + 8LL * *v19) + 8LL) >= *(_DWORD *)(*(_QWORD *)(v18 + 8LL * v21)
                                                                                        + 8LL) )
    {
      *result = v19;
      result = (_QWORD *)(v5 - 8);
    }
LABEL_10:
    *result = v3;
  }
  return result;
}

