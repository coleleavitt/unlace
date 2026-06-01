void __fastcall sub_7C6210(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  const char *v4; // rsi
  __int64 v5; // r14
  void *v6; // rax
  const void *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  void *v16; // rax
  void *v17; // rax
  __int64 v18; // [rsp+0h] [rbp-50h]
  __int64 v19; // [rsp+0h] [rbp-50h]
  __int64 n; // [rsp+8h] [rbp-48h]
  __int64 na; // [rsp+8h] [rbp-48h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v6 = (void *)qalloc_or_throw(8 * v3, (const char *)a2);
    *(_QWORD *)(a1 + 16) = v3;
    v7 = *(const void **)a2;
    *(_QWORD *)a1 = v6;
    memcpy(v6, v7, 8 * v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  v4 = (const char *)(a2 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  sub_7BC640((__int64 *)(a1 + 24), (_QWORD *)(a2 + 24));
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(a2 + 56);
  if ( v5 )
  {
    v8 = qalloc_or_throw(56 * v5, v4);
    *(_QWORD *)(a1 + 48) = v8;
    v9 = v8;
    v10 = 0;
    *(_QWORD *)(a1 + 64) = v5;
    while ( 1 )
    {
      v12 = 56 * v10 + v9;
      v13 = (__int64 *)(*(_QWORD *)(a2 + 48) + 56 * v10);
      v14 = *v13;
      *(_QWORD *)(v12 + 8) = 0;
      *(_OWORD *)(v12 + 16) = 0;
      *(_QWORD *)v12 = v14;
      v15 = v13[2];
      if ( v15 )
      {
        v18 = v13[2];
        n = 8 * v15;
        v16 = (void *)qalloc_or_throw(8 * v15, v4);
        *(_QWORD *)(v12 + 8) = v16;
        *(_QWORD *)(v12 + 24) = v18;
        v4 = (const char *)v13[1];
        memcpy(v16, v4, n);
        *(_QWORD *)(v12 + 16) = v18;
      }
      *(_QWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 40) = 0;
      v11 = v13[5];
      if ( v11 )
      {
        v19 = v13[5];
        na = 4 * v11;
        v17 = (void *)qalloc_or_throw(4 * v11, v4);
        *(_QWORD *)(v12 + 32) = v17;
        ++v10;
        *(_QWORD *)(v12 + 48) = v19;
        v4 = (const char *)v13[4];
        memcpy(v17, v4, na);
        *(_QWORD *)(v12 + 40) = v19;
        if ( v5 == v10 )
        {
LABEL_11:
          *(_QWORD *)(a1 + 56) = v5;
          return;
        }
      }
      else if ( v5 == ++v10 )
      {
        goto LABEL_11;
      }
      v9 = *(_QWORD *)(a1 + 48);
    }
  }
}

