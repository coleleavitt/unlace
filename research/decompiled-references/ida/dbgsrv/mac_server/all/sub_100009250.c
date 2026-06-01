/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009250
// Address: 0x0000000100009250

//----- (0000000100009250) ----------------------------------------------------
char __fastcall sub_100009250(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  size_t v5; // r15
  bool v6; // cf
  size_t v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  const void *v11; // rsi
  void *v12; // rax
  size_t v13; // r15
  void *v14; // r12
  void *v15; // rdi
  __int64 v16; // rax
  size_t v17; // r15
  bool v18; // cf
  size_t v19; // rax
  const void *v20; // rsi
  void *v21; // rax
  void *__src; // [rsp+0h] [rbp-30h]
  void *__srca; // [rsp+0h] [rbp-30h]

  if ( *(_QWORD *)(a1 + 1072) == a3 )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 1072);
    if ( a1 + 1072 != a2 )
    {
      v4 = *(_QWORD *)(a1 + 1096);
      v5 = 0;
      v6 = v4 == 0;
      v7 = v4 - 1;
      if ( !v6 )
        v5 = v7;
      if ( v6 || v7 == 0 )
      {
        *(_QWORD *)(a2 + 24) = 0;
      }
      else
      {
        v11 = *(const void **)(a1 + 1088);
        v12 = *(void **)(a2 + 16);
        if ( *(_QWORD *)(a2 + 32) <= v5 )
        {
          __src = *(void **)(a1 + 1088);
          v12 = qvector_reserve(a2 + 16, v12, v5 + 1, 1u);
          v11 = __src;
          *(_QWORD *)(a2 + 16) = v12;
        }
        *(_QWORD *)(a2 + 24) = v5 + 1;
        memmove(v12, v11, v5);
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + v5) = 0;
      }
    }
    v13 = *(_QWORD *)(a1 + 1120);
    if ( v13 )
    {
      v14 = qalloc_or_throw(*(_QWORD *)(a1 + 1120));
      memcpy(v14, *(const void **)(a1 + 1112), v13);
    }
    else
    {
      v14 = nullptr;
    }
    v15 = *(void **)(a2 + 40);
    if ( !v15 )
      goto LABEL_23;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(a1 + 1144);
  if ( !v8 )
    return 0;
  v9 = a1 + 1144;
  do
  {
    if ( *(_QWORD *)(v8 + 32) >= a3 )
      v9 = v8;
    v8 = *(_QWORD *)(v8 + 8LL * (*(_QWORD *)(v8 + 32) < a3));
  }
  while ( v8 );
  if ( v9 == a1 + 1144 || *(_QWORD *)(v9 + 32) > a3 )
    return 0;
  *(_OWORD *)a2 = *(_OWORD *)(v9 + 40);
  if ( v9 + 40 != a2 )
  {
    v16 = *(_QWORD *)(v9 + 64);
    v17 = 0;
    v18 = v16 == 0;
    v19 = v16 - 1;
    if ( !v18 )
      v17 = v19;
    if ( v18 || v19 == 0 )
    {
      *(_QWORD *)(a2 + 24) = 0;
    }
    else
    {
      v20 = *(const void **)(v9 + 56);
      v21 = *(void **)(a2 + 16);
      if ( *(_QWORD *)(a2 + 32) <= v17 )
      {
        __srca = *(void **)(v9 + 56);
        v21 = qvector_reserve(a2 + 16, v21, v17 + 1, 1u);
        v20 = __srca;
        *(_QWORD *)(a2 + 16) = v21;
      }
      *(_QWORD *)(a2 + 24) = v17 + 1;
      memmove(v21, v20, v17);
      *(_BYTE *)(*(_QWORD *)(a2 + 16) + v17) = 0;
    }
  }
  v13 = *(_QWORD *)(v9 + 88);
  if ( v13 )
  {
    v14 = qalloc_or_throw(*(_QWORD *)(v9 + 88));
    memcpy(v14, *(const void **)(v9 + 80), v13);
  }
  else
  {
    v14 = nullptr;
  }
  v15 = *(void **)(a2 + 40);
  if ( v15 )
  {
LABEL_22:
    *(_QWORD *)(a2 + 48) = 0;
    qfree(v15);
  }
LABEL_23:
  *(_QWORD *)(a2 + 40) = v14;
  *(_QWORD *)(a2 + 48) = v13;
  *(_QWORD *)(a2 + 56) = v13;
  return 1;
}
