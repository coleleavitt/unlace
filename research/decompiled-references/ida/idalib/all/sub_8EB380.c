unsigned __int64 __fastcall sub_8EB380(_QWORD *a1, __int64 *a2)
{
  const char *v2; // r13
  size_t v3; // rdx

  v2 = haystack;
  sub_8EADC0((__int64)(a1 + 2), a2);
  if ( a1[15] )
    v2 = (const char *)a1[14];
  if ( v2 )
  {
    v3 = strlen(v2) + 1;
  }
  else
  {
    v3 = 1;
    v2 = &byte_22F0C30;
  }
  sub_8D77E0(a2, v2, v3);
  return sub_8EB290(a1 + 17, a2);
}
