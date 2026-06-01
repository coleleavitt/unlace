void *__fastcall sub_7E79C0(__int64 *a1, __int64 *a2)
{
  const char *v3; // rsi
  size_t v4; // r12
  const void *v5; // rbx
  void *result; // rax

  sub_3A0A80(a2, *a1);
  sub_3A0A80(a2, a1[1] + 1);
  v3 = haystack;
  if ( a1[3] )
    v3 = (const char *)a1[2];
  sub_649F10(a2, v3);
  v4 = a1[6];
  v5 = (const void *)a1[5];
  if ( HIDWORD(v4) )
    sub_7DCDF0();
  result = (void *)sub_3A0970(a2, v4);
  if ( v4 )
    return sub_7DE6E0(a2, v5, v4);
  return result;
}
