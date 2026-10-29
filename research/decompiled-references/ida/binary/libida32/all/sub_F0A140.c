const char *__fastcall sub_F0A140(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  const char *result; // rax
  const char *v5; // rbp
  size_t v6; // rax
  void *v7; // rdi
  size_t v8; // r12

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( *(_BYTE **)(v2 + 24) == v3 )
  {
    v2 = sub_22581D0(*(_QWORD *)(a1 + 1096), " ", 1);
  }
  else
  {
    *v3 = 32;
    ++*(_QWORD *)(v2 + 32);
  }
  result = (const char *)sub_FB2650(*(_DWORD *)(a2 + 4) & 0x7FFFFFFF);
  v5 = result;
  if ( result )
  {
    v6 = strlen(result);
    v7 = *(void **)(v2 + 32);
    v8 = v6;
    result = (const char *)(*(_QWORD *)(v2 + 24) - (_QWORD)v7);
    if ( v8 <= (unsigned __int64)result )
    {
      if ( v8 )
      {
        result = (const char *)memcpy(v7, v5, v8);
        *(_QWORD *)(v2 + 32) += v8;
      }
    }
    else
    {
      return (const char *)sub_22581D0(v2, v5, v8);
    }
  }
  return result;
}

