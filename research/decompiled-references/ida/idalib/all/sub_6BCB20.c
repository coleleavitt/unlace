void *__fastcall sub_6BCB20(__int64 *a1, const char *a2)
{
  __int64 v3; // r12
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  _BYTE *v6; // rsi
  void *result; // rax
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r13
  size_t v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = a1[1];
    v6 = (_BYTE *)*a1;
    --v3;
    if ( a1[2] >= v4 )
      goto LABEL_3;
  }
  else
  {
    v6 = (_BYTE *)*a1;
    v5 = 1;
    v4 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v13 = qvector_reserve(a1, v6, v4, 1);
  *a1 = v13;
  v6 = (_BYTE *)v13;
LABEL_3:
  a1[1] = v4;
  v6[v3] = 46;
  result = (void *)*a1;
  *(_BYTE *)(*a1 + v5) = 0;
  if ( a2 )
  {
    v8 = strlen(a2);
    v9 = a1[1];
    v10 = v8;
    v11 = v8;
    if ( v9 )
    {
      --v9;
      v11 = v8 + v9;
    }
    v12 = *a1;
    if ( a1[2] < v11 + 1 )
    {
      v14 = qvector_reserve(a1, v12, v11 + 1, 1);
      *a1 = v14;
      v12 = v14;
    }
    a1[1] = v11 + 1;
    *(_BYTE *)(v12 + v11) = 0;
    return memmove((void *)(v9 + *a1), a2, v10);
  }
  return result;
}
