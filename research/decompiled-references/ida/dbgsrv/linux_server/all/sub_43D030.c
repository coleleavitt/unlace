/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D030
// Address: 0x000000000043D030

//----- (000000000043D030) ----------------------------------------------------
const char *__fastcall sub_43D030(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbx
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  __int64 v9; // r12
  _QWORD *v10; // r14
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const char *result; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( !a1 || *(_BYTE *)a1 != 5 )
    return nullptr;
  ptr = nullptr;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (char *)a2;
  v18 = 0;
  if ( !a2 )
  {
    v8 = *(_QWORD **)(v2 + 16);
    v7 = (_QWORD *)(v2 + 8);
    if ( v8 )
      goto LABEL_5;
    return nullptr;
  }
  v4 = strlen(a2);
  v5 = v4 + 1;
  v6 = v4;
  ptr = sub_481540((__int64)&ptr, nullptr, v4 + 1, 1u);
  *(_QWORD *)&v18 = v5;
  v7 = (_QWORD *)(v2 + 8);
  memmove(ptr, a2, v6);
  *((_BYTE *)ptr + v6) = 0;
  v8 = *(_QWORD **)(v2 + 16);
  v3 = (char *)ptr;
  if ( !v8 )
  {
    if ( ptr )
    {
      *(_QWORD *)&v18 = 0;
      j__free(ptr);
      return nullptr;
    }
    return nullptr;
  }
LABEL_5:
  v9 = v18;
  v10 = v7;
  while ( v8[5] )
  {
    v11 = (const char *)v8[4];
    v12 = s1;
    if ( v9 )
      goto LABEL_7;
LABEL_8:
    v13 = strcmp(v12, v11);
    v14 = v8[2];
    v15 = v8[3];
    if ( v13 >= 0 )
    {
      v8 = (_QWORD *)v8[3];
      if ( !v15 )
        goto LABEL_18;
    }
    else
    {
      v10 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v14 )
        goto LABEL_18;
    }
  }
  v11 = s1;
  if ( v9 )
  {
LABEL_7:
    v12 = v3;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v8 = (_QWORD *)v8[3];
    if ( !v8 )
      break;
    if ( v8[5] )
    {
      v11 = (const char *)v8[4];
      v12 = s1;
      goto LABEL_8;
    }
  }
LABEL_18:
  if ( v3 )
  {
    *(_QWORD *)&v18 = 0;
    j__free(v3);
  }
  if ( v7 == v10 )
    return nullptr;
  result = s1;
  if ( v10[5] )
    return (const char *)v10[4];
  return result;
}
