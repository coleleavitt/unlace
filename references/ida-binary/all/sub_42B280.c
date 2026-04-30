const void **__fastcall sub_42B280(const void **a1, __int64 a2)
{
  size_t v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rax
  size_t v7; // rdx
  void *v9; // rax

  *a1 = nullptr;
  *(_OWORD *)(a1 + 1) = 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
  {
    v3 = 0;
    v4 = 2;
    v5 = 1;
LABEL_3:
    v6 = qvector_reserve(a1, v3, v4, 1);
    *a1 = (const void *)v6;
    v7 = v2;
    v3 = v6;
    v2 = v5;
    goto LABEL_4;
  }
  v9 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
  a1[2] = (const void *)v2;
  *a1 = v9;
  v4 = v2 + 1;
  memcpy(v9, *(const void **)a2, v2);
  a1[1] = (const void *)v2;
  v3 = (__int64)*a1;
  v7 = v2 - 1;
  if ( (unsigned __int64)a1[2] < v2 + 1 )
  {
    v5 = v2--;
    goto LABEL_3;
  }
LABEL_4:
  a1[1] = (const void *)v4;
  *(_BYTE *)(v3 + v2) = 0;
  if ( v7 )
    memmove((char *)*a1 + 1, *a1, v7);
  *(_BYTE *)*a1 = 47;
  return a1;
}
