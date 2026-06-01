const char *__fastcall sub_201C50(__int64 *a1, __int64 a2)
{
  const char *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  size_t v7; // r12
  __int64 v8; // r13
  __int64 v9; // rax

  sub_201BA0(a1, (const char *)a2);
  if ( !*(_BYTE *)(a2 + 16) )
    goto LABEL_2;
  v3 = a1[1];
  v4 = *a1;
  v5 = a1[2];
  if ( v3 )
  {
    v6 = v3 + 8;
    v7 = v3 - 1;
    v8 = v3 + 7;
    if ( v5 >= v3 + 8 )
      goto LABEL_7;
    goto LABEL_13;
  }
  if ( v5 <= 8 )
  {
    v7 = 0;
    v6 = 9;
    v8 = 8;
LABEL_13:
    v9 = qvector_reserve(a1, v4, v6, 1);
    *a1 = v9;
    v4 = v9;
LABEL_7:
    a1[1] = v6;
    *(_BYTE *)(v4 + v8) = 0;
    if ( v7 )
      memmove((void *)(*a1 + 8), (const void *)*a1, v7);
    goto LABEL_11;
  }
  a1[1] = 9;
  *(_BYTE *)(v4 + 8) = 0;
LABEL_11:
  *(_QWORD *)*a1 = 0x20434E59532D4E49LL;
LABEL_2:
  result = &s1;
  if ( a1[1] )
    return (const char *)*a1;
  return result;
}
