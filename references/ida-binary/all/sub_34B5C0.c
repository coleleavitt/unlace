const char *__fastcall enc_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 *v6; // rbx
  const char *v7; // rbp
  unsigned __int64 v8; // r13
  size_t v9; // r12
  void *v10; // rdi
  const char *result; // rax
  __int64 v12; // rax

  v5 = *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4 * a5);
  if ( !(_DWORD)v5 )
  {
    v6 = *a2;
    v7 = "<default>";
LABEL_3:
    v8 = 10;
    v9 = 9;
    goto LABEL_4;
  }
  result = (const char *)get_encoding_name(v5);
  v6 = *a2;
  v7 = result;
  if ( !*result )
  {
    v7 = "<deleted>";
    goto LABEL_3;
  }
  if ( !result || (result = (const char *)strlen(result), (v9 = (size_t)result) == 0) )
  {
    v6[1] = 0;
    return result;
  }
  v8 = (unsigned __int64)(result + 1);
LABEL_4:
  v10 = (void *)*v6;
  if ( v6[2] < v8 )
  {
    v12 = qvector_reserve(v6, *v6, v8, 1);
    *v6 = v12;
    v10 = (void *)v12;
  }
  v6[1] = v8;
  memmove(v10, v7, v9);
  result = (const char *)*v6;
  *(_BYTE *)(*v6 + v9) = 0;
  return result;
}
