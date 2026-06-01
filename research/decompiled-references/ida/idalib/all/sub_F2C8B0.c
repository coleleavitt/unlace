const void *__fastcall sub_F2C8B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // rax
  void *v4; // rdi
  size_t v5; // rbp
  const void *result; // rax
  size_t v7; // rdx
  void *v8; // rdi
  size_t v9; // rbp

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
  result = sub_BF81C0((*(_BYTE *)(a2 + 2) >> 3) & 0xF);
  v8 = *(void **)(v2 + 32);
  v9 = v7;
  if ( *(_QWORD *)(v2 + 24) - (_QWORD)v8 < v7 )
    return (const void *)sub_227BF10(v2, result, v7);
  if ( v7 )
  {
    result = memcpy(v8, result, v7);
    *(_QWORD *)(v2 + 32) += v9;
  }
  return result;
}
