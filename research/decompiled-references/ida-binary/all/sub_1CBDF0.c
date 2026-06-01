__int64 __fastcall sub_1CBDF0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rax
  __int64 v4; // rdx
  const char *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // rsi
  size_t v9; // rax
  size_t v10; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rdi
  size_t v15; // r14
  __int64 v16; // rax

  v3 = sub_1E77E0(a2 + 57);
  LOBYTE(v2) = v3 != 0;
  if ( !v3 )
    return v2;
  v4 = a1[1];
  v5 = (const char *)v3;
  v6 = *a1;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v13 = qvector_reserve(a1, v6, v4 + 1, 48);
    v4 = a1[1];
    *a1 = v13;
    v6 = v13;
  }
  v7 = v6 + 48 * v4;
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  ++a1[1];
  v8 = *(void **)v7;
  if ( *(_QWORD *)(v7 + 16) <= 0xDu )
  {
    v12 = qvector_reserve(v7, v8, 14, 1);
    *(_QWORD *)v7 = v12;
    v8 = (void *)v12;
  }
  *(_QWORD *)(v7 + 8) = 14;
  qmemcpy(v8, "CustomIDAMemo", 13);
  *(_BYTE *)(*(_QWORD *)v7 + 13LL) = 0;
  v9 = strlen(v5);
  v10 = v9;
  if ( !v9 )
  {
    *(_QWORD *)(v7 + 32) = 0;
    return v2;
  }
  v14 = *(void **)(v7 + 24);
  v15 = v9 + 1;
  if ( *(_QWORD *)(v7 + 40) < v9 + 1 )
  {
    v16 = qvector_reserve(v7 + 24, *(_QWORD *)(v7 + 24), v15, 1);
    *(_QWORD *)(v7 + 24) = v16;
    v14 = (void *)v16;
  }
  *(_QWORD *)(v7 + 32) = v15;
  memmove(v14, v5, v10);
  *(_BYTE *)(*(_QWORD *)(v7 + 24) + v10) = 0;
  return v2;
}
