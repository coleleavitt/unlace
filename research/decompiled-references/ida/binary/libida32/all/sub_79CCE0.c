__int64 __fastcall sub_79CCE0(__int64 *a1, __int64 a2, const char *a3, const char *a4)
{
  const char *v7; // rdi
  const void *v8; // r14
  size_t v9; // rax
  size_t v10; // rbp
  void *v12; // rdi
  size_t v13; // r15
  __int64 v14; // rax

  v7 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v7 = *(const char **)a2;
  if ( strcmp(v7, a3) )
    return 0;
  if ( *(_QWORD *)(a2 + 32) <= 1u
    || (v8 = *(const void **)(a2 + 24)) == nullptr
    || (v9 = strlen(*(const char **)(a2 + 24)), (v10 = v9) == 0) )
  {
    a1[1] = 0;
    goto LABEL_8;
  }
  v12 = (void *)*a1;
  v13 = v9 + 1;
  if ( a1[2] < v9 + 1 )
  {
    v14 = qvector_reserve(a1, *a1, v9 + 1, 1);
    *a1 = v14;
    v12 = (void *)v14;
  }
  a1[1] = v13;
  memmove(v12, v8, v10);
  *(_BYTE *)(*a1 + v10) = 0;
  if ( (unsigned __int64)a1[1] <= 1 )
LABEL_8:
    sub_375320((__int64)"No value specified for %s option '%s'", a4, a3);
  return 1;
}

