void *__fastcall sub_7C4620(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // rsi
  size_t v10; // r12
  const void *v11; // rbx
  void *result; // rax

  sub_7BE190(a2, *a1, a3, a4, a5);
  sub_7BE190(a2, a1[1] + 1, v6, v7, v8);
  v9 = haystack;
  if ( a1[3] )
    v9 = (const char *)a1[2];
  sub_62C910(a2, v9);
  v10 = a1[6];
  v11 = (const void *)a1[5];
  if ( HIDWORD(v10) )
    sub_7B9A10();
  result = (void *)sub_407AD0(a2, v10);
  if ( v10 )
    return sub_7BB300(a2, v11, v10);
  return result;
}

