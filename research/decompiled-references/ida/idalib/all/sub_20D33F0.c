void *__fastcall sub_20D33F0(__int64 a1, _QWORD *a2)
{
  void *result; // rax
  size_t v5; // rbp
  const void *v6; // rdx
  const void *v7; // r12
  size_t v9; // rsi
  __int64 v10; // rax
  size_t v11; // rsi
  char *v12; // rdi
  unsigned __int64 v13; // rdx
  size_t v14; // rsi

  if ( *(_BYTE *)(a1 + 24) )
  {
    v9 = j__strlen("~");
    sub_20D1ED0(a2, v9, "~");
  }
  result = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16));
  v5 = (size_t)result;
  v7 = v6;
  if ( result )
  {
    v10 = a2[2];
    v11 = a2[3];
    v12 = (char *)a2[1];
    if ( v10 + v5 > v11 )
    {
      v13 = v10 + v5 + 992;
      v14 = 2 * v11;
      if ( v13 > v14 )
      {
        a2[3] = v13;
        v14 = v10 + v5 + 992;
      }
      else
      {
        a2[3] = v14;
      }
      v12 = (char *)realloc(v12, v14);
      a2[1] = v12;
      if ( !v12 )
        abort();
      v10 = a2[2];
    }
    result = memcpy(&v12[v10], v7, v5);
    a2[2] += v5;
  }
  return result;
}
