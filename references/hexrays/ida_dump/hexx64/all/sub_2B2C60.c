_BOOL8 __fastcall sub_2B2C60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // r12
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  __int64 v13; // r13
  void *v14; // rax
  _DWORD *v15; // rax
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rdi
  unsigned __int64 v18; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_11;
  v4 = 56 * a3;
  v5 = 56 * a3 + *(_QWORD *)(a1 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2AD170 )
  {
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 40) )
      goto LABEL_11;
  }
  else if ( !v6() )
  {
    goto LABEL_11;
  }
  v7 = v4 + *(_QWORD *)(a2 + 40);
  v8 = **(bool (__fastcall ***)(__int64))v7;
  if ( v8 == sub_2AD170 )
  {
    if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)(v7 + 40) )
      goto LABEL_6;
LABEL_11:
    sub_2ADE60();
  }
  if ( !v8(v4 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_11;
  v7 = v4 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v9 = *(int *)(a1 + 8);
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 40) + v4);
  v11 = 1;
  switch_dbctx(v9);
  if ( v10[1] != *(_QWORD *)(v7 + 8) )
    return v11;
  v13 = *(_QWORD *)(v7 + 24);
  if ( !v13 )
    return v10[3] != 0;
  v14 = (void *)qalloc_or_throw(4 * v13);
  v15 = memcpy(v14, *(const void **)(v7 + 16), 4 * v13);
  v16 = v10[3];
  v17 = v15;
  if ( v16 == v13 )
  {
    v18 = 0;
    do
    {
      if ( *(_DWORD *)(v10[2] + 4 * v18) != v17[v18] )
      {
        v11 = 1;
        goto LABEL_19;
      }
      ++v18;
    }
    while ( v18 < v16 );
    v11 = 0;
  }
LABEL_19:
  if ( !v17 )
    return v11;
  qfree(v17);
  return v11;
}
