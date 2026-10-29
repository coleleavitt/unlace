__int64 __fastcall sub_1CDCA0(size_t *a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v5; // rax
  size_t v6; // rdx
  const char *v7; // r13
  size_t v8; // rsi
  size_t v9; // rbx
  void *v10; // rsi
  size_t v11; // rax
  size_t v12; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rdi
  size_t v17; // rdx
  __int64 v18; // rax
  size_t v19; // [rsp+8h] [rbp-40h]

  v5 = sub_1E77E0(a2);
  LOBYTE(v2) = v5 != 0;
  if ( v5 )
  {
    v6 = a1[1];
    v7 = (const char *)v5;
    v8 = *a1;
    if ( a1[2] < v6 + 1 )
    {
      v15 = qvector_reserve(a1, v8, v6 + 1, 48);
      v6 = a1[1];
      *a1 = v15;
      v8 = v15;
    }
    v9 = v8 + 48 * v6;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_OWORD *)(v9 + 32) = 0;
    ++a1[1];
    v10 = *(void **)v9;
    if ( *(_QWORD *)(v9 + 16) <= 0xDu )
    {
      v14 = qvector_reserve(v9, v10, 14, 1);
      *(_QWORD *)v9 = v14;
      v10 = (void *)v14;
    }
    *(_QWORD *)(v9 + 8) = 14;
    qmemcpy(v10, "CustomIDAMemo", 13);
    *(_BYTE *)(*(_QWORD *)v9 + 13LL) = 0;
    v11 = strlen(v7);
    v12 = v11;
    if ( v11 )
    {
      v16 = *(void **)(v9 + 24);
      v17 = v11 + 1;
      if ( *(_QWORD *)(v9 + 40) < v11 + 1 )
      {
        v19 = v11 + 1;
        v18 = qvector_reserve(v9 + 24, *(_QWORD *)(v9 + 24), v17, 1);
        v17 = v19;
        *(_QWORD *)(v9 + 24) = v18;
        v16 = (void *)v18;
      }
      *(_QWORD *)(v9 + 32) = v17;
      memmove(v16, v7, v12);
      *(_BYTE *)(*(_QWORD *)(v9 + 24) + v12) = 0;
    }
    else
    {
      *(_QWORD *)(v9 + 32) = 0;
    }
  }
  if ( a2 == 1 )
    sub_1CDB20(a1, "TCpuRegs ui_label_t", "color");
  return v2;
}
