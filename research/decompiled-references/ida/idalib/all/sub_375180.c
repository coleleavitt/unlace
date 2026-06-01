__int64 __fastcall sub_375180(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  const char *idcv_attr; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  size_t v9; // r13
  void *v10; // rax

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v3 = *(const char **)(a1 + 40);
  idcv_attr = (const char *)next_idcv_attr(a1, v3);
  v5 = idcv_attr;
  if ( idcv_attr )
  {
    v6 = strlen(idcv_attr);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    v7 = v6;
    *(_OWORD *)(a2 + 16) = 0;
    if ( v6 )
    {
      v9 = v6 + 1;
      v10 = (void *)qvector_reserve(a2 + 8, 0, v6 + 1, 1);
      *(_QWORD *)(a2 + 16) = v9;
      *(_QWORD *)(a2 + 8) = v10;
      memmove(v10, v5, v7);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v7) = 0;
    }
    return 0;
  }
  else
  {
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_OWORD *)(a2 + 16) = 0;
    return 0;
  }
}
