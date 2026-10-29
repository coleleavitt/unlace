void *__fastcall sub_7BE0F0(__int64 a1, __int64 *a2)
{
  size_t v2; // rbp
  const void *v3; // r12
  void *result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(const void **)(a1 + 16);
  if ( HIDWORD(v2) )
    sub_7B9A10();
  result = (void *)sub_407AD0(a2, v2);
  if ( v2 )
    return sub_7BB300(a2, v3, v2);
  return result;
}

