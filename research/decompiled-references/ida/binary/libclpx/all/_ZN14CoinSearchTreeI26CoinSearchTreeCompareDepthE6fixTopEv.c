void __fastcall CoinSearchTree<CoinSearchTreeCompareDepth>::fixTop(__int64 a1)
{
  __int64 v1; // r15
  int **v2; // r12
  unsigned __int64 v3; // r11
  int *v4; // r14
  int **v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // r13d
  int **v9; // r8
  int *v10; // rcx
  int **v11; // rax
  __int64 v12; // rsi
  int **v13; // rax
  int v14; // r9d
  int v15; // ebp
  __int64 v16; // rbx
  int *v17; // rcx
  int *v18; // [rsp+0h] [rbp-48h]
  __int64 v19; // [rsp+8h] [rbp-40h]
  int v20; // [rsp+14h] [rbp-34h]

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(int ***)(a1 + 8);
  v3 = (v1 - (__int64)v2) >> 3;
  if ( v3 > 1 )
  {
    v4 = *v2;
    v5 = v2 - 1;
    if ( v3 == 2 )
    {
      v11 = *(int ***)(a1 + 8);
      v12 = 2;
      v20 = *v4;
      v16 = *((_QWORD *)v4 + 1);
    }
    else
    {
      v6 = 2;
      v18 = *v2;
      v19 = *((_QWORD *)v4 + 1);
      v20 = *v4;
      v7 = 1;
      v8 = *(_DWORD *)(*(_QWORD *)(v19 + 8LL * *v4) + 8LL);
      do
      {
        v12 = v6 + 1;
        v9 = &v5[v6];
        v13 = &v2[v6];
        v10 = *v9;
        v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v13 + 1) + 8LL * **v13) + 8LL);
        v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)*v9 + 1) + 8LL * **v9) + 8LL);
        if ( v14 >= v15 )
        {
          v9 = &v2[v6];
          v10 = *v13;
          v11 = &v5[v7];
          if ( v8 >= v14 )
            goto LABEL_8;
        }
        else
        {
          v12 = v6;
          v11 = &v5[v7];
          if ( v8 >= v15 )
          {
LABEL_8:
            v4 = v18;
            v16 = v19;
            if ( v12 == v3 )
              goto LABEL_12;
            goto LABEL_9;
          }
        }
        v6 = 2 * v12;
        *v11 = v10;
        v7 = v12;
      }
      while ( 2 * v12 < v3 );
      v12 *= 2;
      v4 = v18;
      v11 = v9;
      v16 = v19;
      if ( v6 != v3 )
        goto LABEL_9;
    }
LABEL_12:
    v17 = *(int **)(v1 - 8);
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 1) + 8LL * *v17) + 8LL) >= *(_DWORD *)(*(_QWORD *)(v16 + 8LL * v20)
                                                                                        + 8LL) )
    {
      *v11 = v17;
      v11 = &v5[v12];
    }
LABEL_9:
    *v11 = v4;
  }
}

