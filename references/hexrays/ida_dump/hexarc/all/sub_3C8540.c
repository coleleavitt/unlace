void *__fastcall sub_3C8540(__int64 a1, __int64 a2)
{
  const char *v3; // rdi
  void *result; // rax
  size_t v5; // rbx
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // r14
  size_t v9; // r13
  __int64 v10; // rsi
  __int64 v11; // rax

  v3 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  result = (void *)tag_strlen(v3);
  v5 = a2 - (_QWORD)result;
  if ( a2 - (__int64)result > 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v7 = v6 - 1;
      v8 = v5 + v6 - 1;
      v9 = v5 + v6;
      if ( v6 >= v5 + v6 )
        return memset((void *)(v7 + *(_QWORD *)a1), 32, v5);
    }
    else
    {
      v9 = v5 + 1;
      v8 = v5;
      v7 = 0;
    }
    v10 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < v9 )
    {
      v11 = qvector_reserve(a1, v10, v9, 1);
      *(_QWORD *)a1 = v11;
      v10 = v11;
    }
    *(_QWORD *)(a1 + 8) = v9;
    *(_BYTE *)(v10 + v8) = 0;
    return memset((void *)(v7 + *(_QWORD *)a1), 32, v5);
  }
  return result;
}
