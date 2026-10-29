void *__fastcall sub_4D8FE0(__int64 a1, unsigned __int8 *a2, size_t a3, __int64 a4, double a5)
{
  size_t v7; // r13
  __int64 v8; // rax
  _BYTE *v9; // rsi
  __int64 v11; // rax

  v7 = a3 + 1;
  v8 = sub_4D8F60(a2, a3, a3, a4, a5);
  *(_QWORD *)(a1 + 8) = 0;
  v9 = *(_BYTE **)a1;
  *(_QWORD *)(a1 + 24) = v8;
  if ( *(_QWORD *)(a1 + 16) < v7 )
  {
    v11 = qvector_reserve(a1, v9, v7, 1);
    *(_QWORD *)a1 = v11;
    v9 = (_BYTE *)v11;
  }
  *(_QWORD *)(a1 + 8) = v7;
  v9[a3] = 0;
  return memmove(*(void **)a1, a2, a3);
}
