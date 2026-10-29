void *__fastcall sub_7E15E0(__int64 a1, __int64 *a2, int a3)
{
  size_t v5; // r12
  const void *v6; // r14
  void *result; // rax
  const char *v8; // rsi

  sub_3A0970(a2, *(_DWORD *)(a1 + 12));
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(const void **)(a1 + 16);
  if ( HIDWORD(v5) )
    sub_7DCDF0();
  sub_3A0970(a2, v5);
  if ( v5 )
    sub_7DE6E0(a2, v6, v5);
  sub_7DE6E0(a2, (const void *)(a1 + 40), 6u);
  result = (void *)sub_3A0970(a2, *(unsigned __int8 *)(a1 + 46));
  if ( a3 > 2 )
  {
    v8 = haystack;
    if ( *(_QWORD *)(a1 + 56) )
      v8 = *(const char **)(a1 + 48);
    sub_649F10(a2, v8);
    if ( *(_QWORD *)(a1 + 80) )
      return sub_649F10(a2, *(const char **)(a1 + 72));
    else
      return sub_649F10(a2, haystack);
  }
  return result;
}
