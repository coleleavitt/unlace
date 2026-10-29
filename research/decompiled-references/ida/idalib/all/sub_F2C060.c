void *__fastcall sub_F2C060(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // rbp
  const char *v7; // rax
  const char *v8; // rbp
  size_t v9; // rax
  void *v10; // rdi
  size_t v11; // r14
  size_t v12; // rax
  void *v13; // rdi
  size_t v14; // rbp
  void *result; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" '");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_227BF10(v3, " '", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " '", v4);
    *(_QWORD *)(v3 + 32) += v6;
  }
  v7 = (const char *)sub_EEDD70(a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = j__strlen(v7);
    v10 = *(void **)(v3 + 32);
    v11 = v9;
    if ( v9 <= *(_QWORD *)(v3 + 24) - (_QWORD)v10 )
    {
      if ( v9 )
      {
        memcpy(v10, v8, v9);
        *(_QWORD *)(v3 + 32) += v11;
      }
    }
    else
    {
      v3 = sub_227BF10(v3, v8, v9);
    }
  }
  v12 = j__strlen("'");
  v13 = *(void **)(v3 + 32);
  v14 = v12;
  result = (void *)(*(_QWORD *)(v3 + 24) - (_QWORD)v13);
  if ( v14 > (unsigned __int64)result )
  {
    result = (void *)sub_227BF10(v3, "'", v14);
LABEL_9:
    if ( !*(_BYTE *)(a2 + 24) )
      return result;
    return (void *)sub_995540(*(_QWORD *)(a1 + 1096), " side_entry");
  }
  if ( !v14 )
    goto LABEL_9;
  result = memcpy(v13, "'", v14);
  *(_QWORD *)(v3 + 32) += v14;
  if ( *(_BYTE *)(a2 + 24) )
    return (void *)sub_995540(*(_QWORD *)(a1 + 1096), " side_entry");
  return result;
}
