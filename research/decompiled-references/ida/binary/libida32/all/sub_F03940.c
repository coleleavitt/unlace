const char *__fastcall sub_F03940(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r12
  const char *result; // rax
  const char *v8; // r12
  size_t v9; // rax
  void *v10; // rdi
  size_t v11; // r14
  __int64 v12; // rbx
  size_t v13; // rax
  __int64 v14; // rax

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" ");
  v5 = *(void **)(v3 + 32);
  v6 = v4;
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_22581D0(v3, " ", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " ", v4);
    *(_QWORD *)(v3 + 32) += v6;
  }
  result = sub_AE9540(a2);
  v8 = result;
  if ( result )
  {
    v9 = j__strlen(result);
    v10 = *(void **)(v3 + 32);
    v11 = v9;
    result = (const char *)(*(_QWORD *)(v3 + 24) - (_QWORD)v10);
    if ( v11 <= (unsigned __int64)result )
    {
      if ( v11 )
      {
        result = (const char *)memcpy(v10, v8, v11);
        *(_QWORD *)(v3 + 32) += v11;
        if ( *(_QWORD *)(a2 + 40) )
          goto LABEL_8;
        return result;
      }
    }
    else
    {
      result = (const char *)sub_22581D0(v3, v8, v11);
    }
  }
  if ( *(_QWORD *)(a2 + 40) )
  {
LABEL_8:
    v12 = *(_QWORD *)(a1 + 1096);
    v13 = j__strlen(" ");
    v14 = sub_9717A0(v12, " ", v13);
    return (const char *)sub_9717A0(
                           v14,
                           (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL),
                           **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
  }
  return result;
}

