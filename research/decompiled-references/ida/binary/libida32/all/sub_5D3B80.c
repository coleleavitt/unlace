const char *__fastcall sub_5D3B80(__int64 a1, int a2, const char *a3)
{
  bool v3; // zf
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r12
  char *v10; // r8
  const char *i; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  char *v14; // r15
  size_t v15; // rbp
  const char *j; // rax
  const char *result; // rax
  size_t n; // [rsp+18h] [rbp-80h]
  char *src; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+48h] [rbp-50h]
  unsigned __int64 v22; // [rsp+58h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 56) == 2;
  v22 = __readfsqword(0x28u);
  if ( v3 )
    sub_5D38A0((char **)a1, 0, a2, nullptr);
  v5 = *(_QWORD *)(a1 + 72);
  v6 = v5 - 1;
  if ( v5 - 1 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    v7 = 56 * v5 - 56;
    v8 = *(_QWORD *)(a1 + 64);
    while ( 2 )
    {
      while ( 1 )
      {
        v9 = v8 + v7;
        if ( *(_DWORD *)(v8 + v7 + 48) == 2 && *(_DWORD *)(v9 + 52) == a2 )
          break;
        --v6;
        v7 -= 56;
        if ( v6 == -1 )
          goto LABEL_19;
      }
      v10 = (char *)haystack;
      if ( *(_QWORD *)(v9 + 32) )
        v10 = *(char **)(v9 + 24);
      ptr = nullptr;
      v21 = 0;
      if ( v10 )
      {
        src = v10;
        n = strlen(v10);
        ptr = (void *)qvector_reserve(&ptr, 0, n + 1, 1);
        *(_QWORD *)&v21 = n + 1;
        memmove(ptr, src, n);
        *((_BYTE *)ptr + n) = 0;
        v10 = (char *)ptr;
      }
      for ( i = (const char *)qstrtok(v10, " \t!\"#$%&'()*+,./:;<=>?[\\]^`{|}~");
            i;
            i = (const char *)qstrtok(nullptr, " \t!\"#$%&'()*+,./:;<=>?[\\]^`{|}~") )
      {
        if ( !strcmp(i, a3) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v21 = 0;
            qfree(ptr);
          }
          result = haystack;
          if ( *(_QWORD *)(v9 + 8) )
            result = *(const char **)v9;
          if ( !result )
          {
            v8 = *(_QWORD *)(a1 + 64);
            goto LABEL_19;
          }
          return result;
        }
      }
      if ( ptr )
      {
        *(_QWORD *)&v21 = 0;
        qfree(ptr);
      }
      --v6;
      v7 -= 56;
      v8 = *(_QWORD *)(a1 + 64);
      if ( v6 != -1 )
        continue;
      break;
    }
LABEL_19:
    v5 = *(_QWORD *)(a1 + 72);
  }
  v12 = v8;
  v13 = v8 + 56 * v5;
  if ( v13 == v8 )
    return nullptr;
  while ( *(_DWORD *)(v12 + 48) != 1 || *(_DWORD *)(v12 + 52) != a2 )
  {
LABEL_22:
    v12 += 56;
    if ( v12 == v13 )
      return nullptr;
  }
  if ( *(_QWORD *)(v12 + 32) > 1u )
  {
    v14 = *(char **)(v12 + 24);
    ptr = nullptr;
    v21 = 0;
    if ( v14 )
    {
      v15 = strlen(v14);
      ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
      *(_QWORD *)&v21 = v15 + 1;
      memmove(ptr, v14, v15);
      *((_BYTE *)ptr + v15) = 0;
      v14 = (char *)ptr;
    }
    for ( j = (const char *)qstrtok(v14, " \t!\"#$%&'()*+,./:;<=>?[\\]^`{|}~");
          ;
          j = (const char *)qstrtok(nullptr, " \t!\"#$%&'()*+,./:;<=>?[\\]^`{|}~") )
    {
      if ( !j )
      {
        if ( ptr )
        {
          *(_QWORD *)&v21 = 0;
          qfree(ptr);
        }
        goto LABEL_22;
      }
      if ( !strcmp(j, a3) )
        break;
    }
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
  }
  result = haystack;
  if ( *(_QWORD *)(v12 + 8) )
    result = *(const char **)v12;
  *(_DWORD *)(v12 + 48) = 2;
  return result;
}

