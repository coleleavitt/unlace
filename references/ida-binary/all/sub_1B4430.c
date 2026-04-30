void __fastcall sub_1B4430(__int64 a1, __int64 a2)
{
  size_t v3; // r12
  size_t v4; // r12
  size_t v5; // r12
  size_t v6; // r12
  void *v7; // rax
  const void *v8; // rsi
  void *v9; // rax
  const void *v10; // rsi
  void *v11; // rax
  const void *v12; // rsi
  void *v13; // rax
  const void *v14; // rsi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v7 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
    *(_QWORD *)(a1 + 16) = v3;
    v8 = *(const void **)a2;
    *(_QWORD *)a1 = v7;
    memcpy(v7, v8, v3);
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    v13 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32));
    *(_QWORD *)(a1 + 24) = v13;
    v14 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 40) = v4;
    memcpy(v13, v14, v4);
    *(_QWORD *)(a1 + 32) = v4;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(a2 + 56);
  if ( v5 )
  {
    v11 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 56));
    *(_QWORD *)(a1 + 48) = v11;
    v12 = *(const void **)(a2 + 48);
    *(_QWORD *)(a1 + 64) = v5;
    memcpy(v11, v12, v5);
    *(_QWORD *)(a1 + 56) = v5;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  v6 = *(_QWORD *)(a2 + 80);
  if ( v6 )
  {
    v9 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 80));
    *(_QWORD *)(a1 + 88) = v6;
    v10 = *(const void **)(a2 + 72);
    *(_QWORD *)(a1 + 72) = v9;
    memcpy(v9, v10, v6);
    *(_QWORD *)(a1 + 80) = v6;
  }
}
