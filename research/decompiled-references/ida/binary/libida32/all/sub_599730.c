const char *__fastcall sub_599730(__int64 *a1, const char *a2, char a3)
{
  size_t v4; // rax
  size_t v5; // r12
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  _BYTE *v8; // rsi
  __int64 v9; // r12
  size_t v10; // r14
  __int64 v11; // rdx
  const char *result; // rax
  size_t v13; // r14
  void *v14; // rax
  __int64 v15; // rax

  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4;
    if ( v4 )
    {
      v13 = v4 + 1;
      v14 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
      a1[1] = v13;
      *a1 = (__int64)v14;
      memmove(v14, a2, v5);
      *(_BYTE *)(*a1 + v5) = 0;
    }
  }
  if ( (a3 & 3) == 0 )
    goto LABEL_15;
  if ( !a1[1] )
  {
    if ( !sub_4B54B0((__int64)haystack) )
      goto LABEL_14;
LABEL_7:
    v6 = a1[1];
    v7 = a1[2];
    v8 = (_BYTE *)*a1;
    if ( v6 )
    {
      v9 = v6 + 1;
      v10 = v6 - 1;
      if ( v7 >= v6 + 1 )
        goto LABEL_9;
    }
    else
    {
      if ( v7 > 1 )
      {
        a1[1] = 2;
        v8[1] = 0;
LABEL_13:
        *(_BYTE *)*a1 = 95;
        goto LABEL_14;
      }
      v10 = 0;
      v6 = 1;
      v9 = 2;
    }
    v15 = qvector_reserve(a1, v8, v9, 1);
    *a1 = v15;
    v8 = (_BYTE *)v15;
LABEL_9:
    a1[1] = v9;
    v8[v6] = 0;
    if ( v10 )
      memmove((void *)(*a1 + 1), (const void *)*a1, v10);
    goto LABEL_13;
  }
  if ( sub_4B54B0(*a1) )
    goto LABEL_7;
LABEL_14:
  if ( (a3 & 1) == 0 )
  {
LABEL_15:
    v11 = 1;
    goto LABEL_16;
  }
  v11 = 1025;
LABEL_16:
  validate_name(a1, 6, v11);
  result = haystack;
  if ( a1[1] )
    return (const char *)*a1;
  return result;
}

