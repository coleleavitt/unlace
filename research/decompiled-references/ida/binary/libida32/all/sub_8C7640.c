unsigned __int64 __fastcall sub_8C7640(_QWORD *a1, __int64 *a2)
{
  const char *v2; // r13
  size_t v3; // rdx

  v2 = haystack;
  sub_8C7080((__int64)(a1 + 2), a2);
  if ( a1[15] )
    v2 = (const char *)a1[14];
  if ( v2 )
  {
    v3 = strlen(v2) + 1;
  }
  else
  {
    v3 = 1;
    v2 = &byte_22CD811;
  }
  sub_8B3AA0(a2, v2, v3);
  return sub_8C7550(a1 + 17, a2);
}

