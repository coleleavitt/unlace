void *__fastcall sub_2CBDD0(__int64 *a1, const char *a2)
{
  _BYTE *v3; // rsi
  void *result; // rax
  size_t v5; // rax
  __int64 v6; // r12
  size_t v7; // r13
  size_t v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = (_BYTE *)*a1;
  if ( (unsigned __int64)a1[2] <= 9 )
  {
    v10 = qvector_reserve(a1, v3, 10, 1);
    *a1 = v10;
    v3 = (_BYTE *)v10;
  }
  a1[1] = 10;
  *(_QWORD *)v3 = 0x7765695620786548LL;
  v3[8] = 45;
  result = (void *)*a1;
  *(_BYTE *)(*a1 + 9) = 0;
  if ( a2 )
  {
    v5 = strlen(a2);
    v6 = a1[1];
    v7 = v5;
    v8 = v5;
    if ( v6 )
    {
      --v6;
      v8 = v5 + v6;
    }
    v9 = *a1;
    if ( a1[2] < v8 + 1 )
    {
      v11 = qvector_reserve(a1, v9, v8 + 1, 1);
      *a1 = v11;
      v9 = v11;
    }
    a1[1] = v8 + 1;
    *(_BYTE *)(v9 + v8) = 0;
    return memmove((void *)(v6 + *a1), a2, v7);
  }
  return result;
}
