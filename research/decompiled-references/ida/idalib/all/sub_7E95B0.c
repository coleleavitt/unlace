void __fastcall sub_7E95B0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  void *v5; // rax
  const void *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r8
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // [rsp+0h] [rbp-50h]
  __int64 v18; // [rsp+0h] [rbp-50h]
  __int64 n; // [rsp+8h] [rbp-48h]
  __int64 na; // [rsp+8h] [rbp-48h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v5 = (void *)qalloc_or_throw(8 * v3);
    *(_QWORD *)(a1 + 16) = v3;
    v6 = *(const void **)a2;
    *(_QWORD *)a1 = v5;
    memcpy(v5, v6, 8 * v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  sub_7DFA40((__int64 *)(a1 + 24), (_QWORD *)(a2 + 24));
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    v7 = qalloc_or_throw(56 * v4);
    *(_QWORD *)(a1 + 48) = v7;
    v8 = v7;
    v9 = 0;
    *(_QWORD *)(a1 + 64) = v4;
    while ( 1 )
    {
      v11 = 56 * v9 + v8;
      v12 = *(_QWORD *)(a2 + 48) + 56 * v9;
      v13 = *(_QWORD *)v12;
      *(_QWORD *)(v11 + 8) = 0;
      *(_OWORD *)(v11 + 16) = 0;
      *(_QWORD *)v11 = v13;
      v14 = *(_QWORD *)(v12 + 16);
      if ( v14 )
      {
        v17 = *(_QWORD *)(v12 + 16);
        n = 8 * v14;
        v15 = (void *)qalloc_or_throw(8 * v14);
        *(_QWORD *)(v11 + 8) = v15;
        *(_QWORD *)(v11 + 24) = v17;
        memcpy(v15, *(const void **)(v12 + 8), n);
        *(_QWORD *)(v11 + 16) = v17;
      }
      *(_QWORD *)(v11 + 32) = 0;
      *(_OWORD *)(v11 + 40) = 0;
      v10 = *(_QWORD *)(v12 + 40);
      if ( v10 )
      {
        v18 = *(_QWORD *)(v12 + 40);
        na = 4 * v10;
        v16 = (void *)qalloc_or_throw(4 * v10);
        *(_QWORD *)(v11 + 32) = v16;
        ++v9;
        *(_QWORD *)(v11 + 48) = v18;
        memcpy(v16, *(const void **)(v12 + 32), na);
        *(_QWORD *)(v11 + 40) = v18;
        if ( v4 == v9 )
        {
LABEL_11:
          *(_QWORD *)(a1 + 56) = v4;
          return;
        }
      }
      else if ( v4 == ++v9 )
      {
        goto LABEL_11;
      }
      v8 = *(_QWORD *)(a1 + 48);
    }
  }
}
