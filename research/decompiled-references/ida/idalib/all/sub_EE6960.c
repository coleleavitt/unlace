const char *__fastcall sub_EE6960(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  char *v4; // rax
  char *v5; // r12
  size_t v6; // rax
  void *v7; // rdi
  size_t v8; // r13
  const char *result; // rax
  const char *v10; // rbp
  size_t v11; // rax
  void *v12; // rdi
  size_t v13; // r12
  _BYTE *v14; // rax
  __int64 v15; // rax
  _BYTE *v16; // rdx

  v3 = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == v3 )
  {
    sub_227BF10(a2, "%", 1);
  }
  else
  {
    *v3 = 37;
    ++*(_QWORD *)(a2 + 32);
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    v15 = sub_227B910(a2, (unsigned int)(*(_DWORD *)(a1 + 100) + 1));
    v16 = *(_BYTE **)(v15 + 32);
    if ( *(_BYTE **)(v15 + 24) == v16 )
    {
      sub_227BF10(v15, "$", 1);
    }
    else
    {
      *v16 = 36;
      ++*(_QWORD *)(v15 + 32);
    }
  }
  if ( *(_BYTE *)(a1 + 120) )
  {
    v14 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v14 )
    {
      sub_227BF10(a2, "*", 1);
    }
    else
    {
      *v14 = 42;
      ++*(_QWORD *)(a2 + 32);
    }
  }
  sub_C9DDB0(a1 + 16, a2);
  v4 = sub_C9D9B0(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = strlen(v4);
    v7 = *(void **)(a2 + 32);
    v8 = v6;
    if ( v6 <= *(_QWORD *)(a2 + 24) - (_QWORD)v7 )
    {
      if ( v6 )
      {
        memcpy(v7, v5, v6);
        *(_QWORD *)(a2 + 32) += v8;
      }
    }
    else
    {
      sub_227BF10(a2, v5, v6);
    }
  }
  result = sub_C9DAF0(a1 + 40);
  v10 = result;
  if ( result )
  {
    v11 = strlen(result);
    v12 = *(void **)(a2 + 32);
    v13 = v11;
    result = (const char *)(*(_QWORD *)(a2 + 24) - (_QWORD)v12);
    if ( v13 <= (unsigned __int64)result )
    {
      if ( v13 )
      {
        result = (const char *)memcpy(v12, v10, v13);
        *(_QWORD *)(a2 + 32) += v13;
      }
    }
    else
    {
      return (const char *)sub_227BF10(a2, v10, v13);
    }
  }
  return result;
}
