char *__fastcall sub_1F21B60(_DWORD *a1, _QWORD *a2, _QWORD *a3, const void *a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rsi
  char *result; // rax
  char *v11; // rdi
  __int64 v12; // rdx
  size_t v13; // rdx

  v9 = 8LL * (unsigned int)a5;
  *a1 = a5;
  result = (char *)a3[294];
  a3[304] += v9;
  v11 = (char *)((unsigned __int64)(result + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a3[295] >= (unsigned __int64)&v11[v9] && result )
  {
    a3[294] = &v11[v9];
  }
  else
  {
    result = (char *)sub_986170((__int64)(a3 + 294), v9, 8LL * (unsigned int)a5, 4, a5, a6);
    v11 = result;
  }
  v12 = (unsigned int)*a1;
  *a2 = v11;
  v13 = 8 * v12;
  if ( v13 )
    return (char *)memmove(v11, a4, v13);
  return result;
}
