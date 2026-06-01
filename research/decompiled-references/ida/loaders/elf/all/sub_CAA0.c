__int64 __fastcall sub_CAA0(__int64 a1, const void **a2, char *a3)
{
  char *v3; // rbp
  const void *v4; // r14
  size_t v6; // r12
  _BYTE *v7; // rax
  void *v9; // rdi
  __int64 v10; // rax

  v3 = a3;
  v4 = *a2;
  v6 = a3 - (_BYTE *)*a2;
  v7 = memchr(v4, 0, a3 - (_BYTE *)v4);
  if ( v7 )
  {
    v3 = v7 + 1;
    v6 = v7 - (_BYTE *)v4;
  }
  *a2 = v3;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( !v6 )
    return a1;
  v9 = nullptr;
  if ( v6 != -1 )
  {
    v10 = qvector_reserve(a1, 0, v6 + 1, 1);
    *(_QWORD *)a1 = v10;
    v9 = (void *)v10;
  }
  *(_QWORD *)(a1 + 8) = v6 + 1;
  memmove(v9, v4, v6);
  *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  return a1;
}

