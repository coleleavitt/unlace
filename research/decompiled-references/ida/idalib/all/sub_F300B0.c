const void *__fastcall sub_F300B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  const void *result; // rax
  size_t v5; // rdx
  void *v6; // rdi
  size_t v7; // rbp

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(v2 + 24) )
  {
    v2 = sub_227BA10(*(_QWORD *)(a1 + 1096), 32);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = v3 + 1;
    *v3 = 32;
  }
  result = sub_E58850(a2);
  v6 = *(void **)(v2 + 32);
  v7 = v5;
  if ( *(_QWORD *)(v2 + 24) - (_QWORD)v6 < v5 )
    return (const void *)sub_227BF10(v2, result, v5);
  if ( v5 )
  {
    result = memcpy(v6, result, v5);
    *(_QWORD *)(v2 + 32) += v7;
  }
  return result;
}
