const char *__fastcall sub_F2DDA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // rax
  void *v4; // rdi
  size_t v5; // rbp
  const char *result; // rax
  const char *v7; // rbp
  size_t v8; // rax
  void *v9; // rdi
  size_t v10; // r12

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" ");
  v4 = *(void **)(v2 + 32);
  v5 = v3;
  if ( v3 > *(_QWORD *)(v2 + 24) - (_QWORD)v4 )
  {
    v2 = sub_227BF10(v2, " ", v3);
  }
  else if ( v3 )
  {
    memcpy(v4, " ", v3);
    *(_QWORD *)(v2 + 32) += v5;
  }
  result = (const char *)sub_10CCE30((*(_BYTE *)(a2 + 2) >> 3) & 3);
  v7 = result;
  if ( result )
  {
    v8 = strlen(result);
    v9 = *(void **)(v2 + 32);
    v10 = v8;
    result = (const char *)(*(_QWORD *)(v2 + 24) - (_QWORD)v9);
    if ( v10 <= (unsigned __int64)result )
    {
      if ( v10 )
      {
        result = (const char *)memcpy(v9, v7, v10);
        *(_QWORD *)(v2 + 32) += v10;
      }
    }
    else
    {
      return (const char *)sub_227BF10(v2, v7, v10);
    }
  }
  return result;
}
