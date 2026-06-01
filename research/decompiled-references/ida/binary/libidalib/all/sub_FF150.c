const char *__fastcall sub_FF150(__int64 a1, __int64 a2)
{
  int v3; // edi
  const char *result; // rax
  const char *v5; // rbp
  size_t v6; // r12
  char *v7; // rdi
  const char *v8; // r13
  __int64 v9; // rax

  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 < 0 )
  {
    sub_8F740((__int64)"Coherency check failed: encidx >= 0\n");
    v3 = *(_DWORD *)(a1 + 48);
  }
  if ( v3 )
  {
    result = (const char *)get_encoding_name();
    v5 = result;
    if ( !result )
      goto LABEL_6;
    result = (const char *)strlen(result);
    v6 = (size_t)result;
    if ( !result )
      goto LABEL_6;
  }
  else
  {
    get_default_encoding_idx();
    result = (const char *)get_encoding_name();
    v5 = result;
    if ( !result || (result = (const char *)strlen(result), (v6 = (size_t)result) == 0) )
    {
LABEL_6:
      *(_QWORD *)(a2 + 8) = 0;
      return result;
    }
  }
  v7 = *(char **)a2;
  v8 = result + 1;
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(result + 1) )
  {
    v9 = qvector_reserve();
    *(_QWORD *)a2 = v9;
    v7 = (char *)v9;
  }
  *(_QWORD *)(a2 + 8) = v8;
  memmove(v7, v5, v6);
  result = *(const char **)a2;
  *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
  return result;
}

