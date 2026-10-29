void *__fastcall sub_20D0B30(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  void *result; // rax
  size_t v7; // r12
  __int64 v8; // rax
  size_t v9; // rsi
  const void *v10; // rbp
  char *v11; // rdi
  unsigned __int64 v12; // rdx
  size_t v13; // rsi

  v4 = a1[2];
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 16LL);
  if ( v5 == sub_20CEB40 )
    result = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  else
    result = (void *)v5((__int64)a2, v4);
  v7 = a1[3];
  if ( v7 )
  {
    v8 = a2[2];
    v9 = a2[3];
    v10 = (const void *)a1[4];
    v11 = (char *)a2[1];
    if ( v7 + v8 > v9 )
    {
      v12 = v7 + v8 + 992;
      v13 = 2 * v9;
      if ( v12 > v13 )
      {
        a2[3] = v12;
        v13 = v7 + v8 + 992;
      }
      else
      {
        a2[3] = v13;
      }
      v11 = (char *)realloc(v11, v13);
      a2[1] = v11;
      if ( !v11 )
        abort();
      v8 = a2[2];
    }
    result = memcpy(&v11[v8], v10, v7);
    a2[2] += v7;
  }
  return result;
}
