const char *__fastcall sub_CC180(__int64 *a1, _QWORD *a2)
{
  const char *result; // rax
  const char *v4; // rbp
  size_t v5; // r12
  void *v6; // rdi
  const char *v7; // r13
  __int64 v8; // rax

  result = (const char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a2 + 16LL))(*a2, 0);
  if ( result && (v4 = result, result = (const char *)strlen(result), (v5 = (size_t)result) != 0) )
  {
    v6 = (void *)*a1;
    v7 = result + 1;
    if ( a1[2] < (unsigned __int64)(result + 1) )
    {
      v8 = qvector_reserve();
      *a1 = v8;
      v6 = (void *)v8;
    }
    a1[1] = (__int64)v7;
    memmove(v6, v4, v5);
    result = (const char *)*a1;
    *(_BYTE *)(*a1 + v5) = 0;
    if ( (unsigned __int64)a1[1] > 1 )
      return (const char *)sub_CBE30(&qword_252180, a1, 1);
  }
  else
  {
    a1[1] = 0;
  }
  return result;
}

