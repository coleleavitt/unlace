void *__fastcall sub_F2D670(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  size_t v3; // rax
  void *v4; // rdi
  size_t v5; // rbp
  const char *v6; // rbp
  size_t v7; // rax
  void *v8; // rdi
  size_t v9; // r12
  void *result; // rax

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
  v6 = "true";
  if ( (*a2 & 0x80000) == 0 )
    v6 = "false";
  v7 = j__strlen(v6);
  v8 = *(void **)(v2 + 32);
  v9 = v7;
  result = (void *)(*(_QWORD *)(v2 + 24) - (_QWORD)v8);
  if ( v9 > (unsigned __int64)result )
    return (void *)sub_227BF10(v2, v6, v9);
  if ( v9 )
  {
    result = memcpy(v8, v6, v9);
    *(_QWORD *)(v2 + 32) += v9;
  }
  return result;
}
