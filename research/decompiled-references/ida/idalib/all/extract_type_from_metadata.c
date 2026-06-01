void *__fastcall extract_type_from_metadata(__int64 a1, _BYTE *a2, unsigned __int64 a3)
{
  bool v3; // al
  const void *v5; // rbp
  size_t v6; // r14
  char *v7; // rax
  __int64 v8; // r12
  size_t v9; // r13
  __int64 v10; // rsi
  __int64 v12; // rax

  v3 = 0;
  v5 = a2;
  if ( (unsigned __int64)a2 < a3 )
  {
    v3 = *a2 != 0;
    v5 = a2 + 1;
  }
  *(_BYTE *)a1 = v3;
  v6 = a3 - (_QWORD)v5;
  v7 = (char *)memchr(v5, 0, a3 - (_QWORD)v5);
  if ( v7 )
  {
    v6 = v7 - (_BYTE *)v5;
    sub_7DCFA0((__int64 *)(a1 + 32), v7 + 1, a3 - (_QWORD)v7 - 1);
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v6;
  if ( v8 )
    v9 = --v8 + v6;
  v10 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 24) < v9 + 1 )
  {
    v12 = qvector_reserve(a1 + 8, v10, v9 + 1, 1);
    *(_QWORD *)(a1 + 8) = v12;
    v10 = v12;
  }
  *(_QWORD *)(a1 + 16) = v9 + 1;
  *(_BYTE *)(v10 + v9) = 0;
  return memmove((void *)(v8 + *(_QWORD *)(a1 + 8)), v5, v6);
}
