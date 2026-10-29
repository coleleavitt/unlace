char *__fastcall sub_20D0BE0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v4; // rsi
  char *v5; // rax
  size_t v6; // rdx
  size_t v7; // rsi
  char *result; // rax
  size_t v9; // rbp
  char *v10; // rdx
  unsigned __int64 v11; // rsi
  const void *v12; // r12
  char *v13; // rdi
  unsigned __int64 v14; // rax
  size_t v15; // rsi

  v2 = a2[2];
  v4 = a2[3];
  v5 = (char *)a2[1];
  if ( v2 + 2 > v4 )
  {
    v6 = v2 + 994;
    v7 = 2 * v4;
    if ( v6 <= v7 )
    {
      a2[3] = v7;
    }
    else
    {
      a2[3] = v6;
      v7 = v6;
    }
    v5 = (char *)realloc(v5, v7);
    a2[1] = v5;
    if ( !v5 )
      goto LABEL_15;
    v2 = a2[2];
  }
  *(_WORD *)&v5[v2] = 28774;
  result = (char *)a2[2];
  v9 = *(_QWORD *)(a1 + 16);
  v10 = result + 2;
  a2[2] = result + 2;
  if ( !v9 )
    return result;
  v11 = a2[3];
  v12 = *(const void **)(a1 + 24);
  v13 = (char *)a2[1];
  if ( (unsigned __int64)&v10[v9] > v11 )
  {
    v14 = (unsigned __int64)&v10[v9 + 992];
    v15 = 2 * v11;
    if ( v14 > v15 )
    {
      a2[3] = v14;
      v15 = (size_t)&v10[v9 + 992];
    }
    else
    {
      a2[3] = v15;
    }
    v13 = (char *)realloc(v13, v15);
    a2[1] = v13;
    if ( v13 )
    {
      v10 = (char *)a2[2];
      goto LABEL_12;
    }
LABEL_15:
    abort();
  }
LABEL_12:
  result = (char *)memcpy(&v13[(_QWORD)v10], v12, v9);
  a2[2] += v9;
  return result;
}
