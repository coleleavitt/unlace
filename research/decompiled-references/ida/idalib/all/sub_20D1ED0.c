_QWORD *__fastcall sub_20D1ED0(_QWORD *a1, size_t a2, const void *a3)
{
  __int64 v5; // rax
  size_t v8; // rdx
  size_t v9; // rsi
  char *v10; // rdi
  size_t v11; // rdx
  size_t v12; // rsi

  if ( !a2 )
    return a1;
  v5 = a1[2];
  v8 = a2 + v5;
  v9 = a1[3];
  v10 = (char *)a1[1];
  if ( v8 > v9 )
  {
    v11 = v8 + 992;
    v12 = 2 * v9;
    if ( v11 > v12 )
    {
      a1[3] = v11;
      v12 = v11;
    }
    else
    {
      a1[3] = v12;
    }
    v10 = (char *)realloc(v10, v12);
    a1[1] = v10;
    if ( !v10 )
      abort();
    v5 = a1[2];
  }
  memcpy(&v10[v5], a3, a2);
  a1[2] += a2;
  return a1;
}
