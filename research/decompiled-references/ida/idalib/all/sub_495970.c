void __fastcall sub_495970(__int64 a1, __int64 a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r12
  void *v7; // rdi
  void *v8; // rdi
  size_t v9; // r14
  void *v10; // rax
  unsigned __int64 v11; // rbp
  const void *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a3 || (v5 = strlen(a3), (v6 = v5) == 0) )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v7 = *(void **)(a1 + 24);
LABEL_4:
    if ( v7 )
    {
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v7);
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 40) = 0;
    }
    return;
  }
  v8 = *(void **)a1;
  v9 = v5 + 1;
  if ( *(_QWORD *)(a1 + 16) < v5 + 1 )
  {
    v14 = qvector_reserve(a1, *(_QWORD *)a1, v5 + 1, 1);
    *(_QWORD *)a1 = v14;
    v8 = (void *)v14;
  }
  *(_QWORD *)(a1 + 8) = v9;
  memmove(v8, a3, v6);
  *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  v10 = *(void **)(a1 + 24);
  v7 = v10;
  if ( *(_DWORD *)(a1 + 96) == -1 )
    goto LABEL_4;
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 <= 1 )
    goto LABEL_4;
  v12 = *(const void **)a1;
  if ( *(_QWORD *)(a1 + 40) < v11 )
  {
    v10 = (void *)qvector_reserve(a1 + 24, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 8), 1);
    *(_QWORD *)(a1 + 24) = v10;
  }
  *(_QWORD *)(a1 + 32) = v11;
  memmove(v10, v12, v11 - 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + v11 - 1) = 0;
  v13 = switch_dbctx(*(int *)(a2 + 4LL * *(int *)(a1 + 96) + 16));
  sub_650F30(*(_QWORD *)(v13 + 1672), *(_QWORD *)(*(_QWORD *)(v13 + 1672) + 8LL), a1 + 24, 0, "__deleted_type__");
}
