void *__fastcall sub_7C21B0(__int64 a1, __int64 *a2)
{
  const char *v3; // rsi
  size_t v4; // r12
  const void *v5; // rbx
  void *result; // rax

  v3 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  sub_62C910(a2, v3);
  sub_407AD0(a2, *(_DWORD *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(const void **)(a1 + 32);
  if ( HIDWORD(v4) )
    sub_7B9A10();
  result = (void *)sub_407AD0(a2, v4);
  if ( v4 )
    return sub_7BB300(a2, v5, v4);
  return result;
}

