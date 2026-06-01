const char *__fastcall sub_826940(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v7; // rax
  const char *v8; // rdi
  __int64 v9; // rax
  const char *result; // rax
  __int64 *v11; // r15
  const char *v12; // r12
  size_t v13; // r14
  void *v14; // rdi
  const char *v15; // rdx
  __int64 v16; // rbp
  __int64 *v17; // rbx
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  const void *v21; // rbp
  void *v22; // rax
  const char *v23; // [rsp+8h] [rbp-40h]

  v5 = 24 * a5;
  v7 = *(_QWORD *)(a1 + 184);
  v8 = haystack;
  v9 = 24 * a5 + v7;
  if ( *(_QWORD *)(v9 + 8) )
    v8 = *(const char **)v9;
  result = (const char *)qbasename(v8);
  v11 = *a2;
  v12 = result;
  if ( !result || (result = (const char *)strlen(result), (v13 = (size_t)result) == 0) )
  {
    v11[1] = 0;
    if ( !*(_BYTE *)(a1 + 264) )
      return result;
    goto LABEL_10;
  }
  v14 = (void *)*v11;
  v15 = result + 1;
  if ( v11[2] < (unsigned __int64)(result + 1) )
  {
    v23 = result + 1;
    v20 = qvector_reserve(v11, *v11, v15, 1);
    v15 = v23;
    *v11 = v20;
    v14 = (void *)v20;
  }
  v11[1] = (__int64)v15;
  memmove(v14, v12, v13);
  result = (const char *)*v11;
  *(_BYTE *)(*v11 + v13) = 0;
  if ( *(_BYTE *)(a1 + 264) )
  {
LABEL_10:
    v16 = *(_QWORD *)(a1 + 232) + v5;
    v17 = *a2;
    v18 = (__int64)(*a2 + 3);
    if ( v18 != v16 )
    {
      v19 = *(_QWORD *)(v16 + 8);
      if ( v19 > 1 )
      {
        v21 = *(const void **)v16;
        v22 = (void *)v17[3];
        if ( v17[5] < v19 )
        {
          v22 = (void *)qvector_reserve(v18, v17[3], v19, 1);
          v17[3] = (__int64)v22;
        }
        v17[4] = v19;
        memmove(v22, v21, v19 - 1);
        result = (const char *)v17[3];
        result[v19 - 1] = 0;
      }
      else
      {
        v17[4] = 0;
      }
    }
  }
  return result;
}

