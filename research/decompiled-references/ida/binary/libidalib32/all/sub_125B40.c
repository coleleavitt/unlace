const char *__fastcall sub_125B40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  const char *v6; // rbp
  unsigned __int64 v7; // r13
  size_t v8; // r12
  char *v9; // rdi
  const char *result; // rax
  __int64 v11; // rax

  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * a5) )
  {
    v5 = *a2;
    v6 = "<default>";
LABEL_3:
    v7 = 10;
    v8 = 9;
    goto LABEL_4;
  }
  result = (const char *)get_encoding_name();
  v5 = *a2;
  v6 = result;
  if ( !*result )
  {
    v6 = "<deleted>";
    goto LABEL_3;
  }
  if ( !result || (result = (const char *)strlen(result), (v8 = (size_t)result) == 0) )
  {
    *(_QWORD *)(v5 + 8) = 0;
    return result;
  }
  v7 = (unsigned __int64)(result + 1);
LABEL_4:
  v9 = *(char **)v5;
  if ( *(_QWORD *)(v5 + 16) < v7 )
  {
    v11 = qvector_reserve();
    *(_QWORD *)v5 = v11;
    v9 = (char *)v11;
  }
  *(_QWORD *)(v5 + 8) = v7;
  memmove(v9, v6, v8);
  result = *(const char **)v5;
  *(_BYTE *)(*(_QWORD *)v5 + v8) = 0;
  return result;
}

