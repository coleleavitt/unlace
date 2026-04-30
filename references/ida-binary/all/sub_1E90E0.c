__int64 __fastcall sub_1E90E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  void *v5; // rbp
  size_t v7; // r13
  size_t v8; // r14
  void *v9; // r12
  const char *v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // rax
  const char *v15; // rdi
  __int64 v17; // [rsp+8h] [rbp-B0h]
  int v19; // [rsp+14h] [rbp-A4h]
  __int64 v20; // [rsp+18h] [rbp-A0h]

  v5 = nullptr;
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    v5 = (void *)qalloc_or_throw(v7);
    memcpy(v5, *(const void **)(a2 + 8), v7);
  }
  v8 = *(_QWORD *)(a2 + 40);
  v9 = nullptr;
  if ( v8 )
  {
    v9 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 40));
    memcpy(v9, *(const void **)(a2 + 32), v8);
  }
  v17 = *(_QWORD *)(a2 + 56);
  v20 = *(_QWORD *)(a2 + 64);
  v19 = *(_DWORD *)(a2 + 72);
  if ( !a3 || (v10 = (const char *)skip_spaces(a3), !*v10) )
    v10 = nullptr;
  v11 = sub_1E88D0(a2, v10, a4);
  if ( !(_BYTE)v11 )
    goto LABEL_12;
  v12 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    v10 = (const char *)v5;
    if ( !v12 )
    {
      if ( strcmp(&s1, (const char *)v5) )
        goto LABEL_11;
      goto LABEL_19;
    }
  }
  else
  {
    v10 = &s1;
    if ( !v12 )
      goto LABEL_19;
  }
  if ( strcmp(*(const char **)(a2 + 8), v10) )
  {
LABEL_11:
    sub_459B60(a1);
    goto LABEL_12;
  }
LABEL_19:
  v14 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v10 = (const char *)v9;
    v15 = &s1;
    if ( !v14 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v10 = &s1;
  if ( v14 )
  {
LABEL_21:
    v15 = *(const char **)(a2 + 32);
LABEL_22:
    if ( strcmp(v15, v10) )
      goto LABEL_11;
  }
  if ( v17 != *(_QWORD *)(a2 + 56) || *(_QWORD *)(a2 + 64) != v20 || v19 != *(_DWORD *)(a2 + 72) )
    goto LABEL_11;
LABEL_12:
  if ( v9 )
    qfree(v9, v10);
  if ( v5 )
    qfree(v5, v10);
  return v11;
}
