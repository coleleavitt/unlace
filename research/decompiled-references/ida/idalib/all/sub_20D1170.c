void *__fastcall sub_20D1170(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 v4; // rsi
  char *v5; // rax
  size_t v6; // rdx
  size_t v7; // rsi
  size_t v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  void *result; // rax
  unsigned __int64 v12; // rdx
  size_t v13; // rsi
  size_t v14; // rsi
  const void *v15; // r12
  char *v16; // rdi
  unsigned __int64 v17; // rax
  size_t v18; // rsi

  v2 = a2[2];
  v4 = a2[3];
  v5 = (char *)a2[1];
  if ( v2 + 8 > v4 )
  {
    v6 = v2 + 1000;
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
      goto LABEL_22;
    v2 = a2[2];
  }
  *(_QWORD *)&v5[v2] = 0x64656D616E6E7527LL;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = a2[2] + 8LL;
  a2[2] = v9;
  if ( v8 )
  {
    v14 = a2[3];
    v15 = *(const void **)(a1 + 24);
    v16 = (char *)a2[1];
    if ( v8 + v9 > v14 )
    {
      v17 = v8 + v9 + 992;
      v18 = 2 * v14;
      if ( v17 > v18 )
      {
        a2[3] = v17;
        v18 = v8 + v9 + 992;
      }
      else
      {
        a2[3] = v18;
      }
      v16 = (char *)realloc(v16, v18);
      a2[1] = v16;
      if ( !v16 )
        goto LABEL_22;
      v9 = a2[2];
    }
    memcpy(&v16[v9], v15, v8);
    v9 = v8 + a2[2];
    a2[2] = v9;
  }
  v10 = a2[3];
  result = (void *)a2[1];
  if ( v9 + 1 > v10 )
  {
    v12 = v9 + 993;
    v13 = 2 * v10;
    if ( v12 > v13 )
    {
      a2[3] = v12;
      v13 = v12;
    }
    else
    {
      a2[3] = v13;
    }
    result = realloc(result, v13);
    a2[1] = result;
    if ( result )
    {
      v9 = a2[2];
      goto LABEL_12;
    }
LABEL_22:
    abort();
  }
LABEL_12:
  *((_BYTE *)result + v9) = 39;
  ++a2[2];
  return result;
}
