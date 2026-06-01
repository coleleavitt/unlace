unsigned __int64 __fastcall sub_7E1390(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  unsigned __int64 result; // rax
  __int64 i; // rbx
  size_t v5; // rdx
  const char *v6; // r15
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 24);
  result = sub_3A0970(a2, v2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v6 = haystack;
      v7 = *(_QWORD *)(a1 + 16) + 24 * i;
      if ( *(_QWORD *)(v7 + 8) )
        v6 = *(const char **)v7;
      if ( v6 )
      {
        v5 = strlen(v6) + 1;
      }
      else
      {
        v5 = 1;
        v6 = &byte_22F0C30;
      }
      result = (unsigned __int64)sub_7DE6E0(a2, v6, v5);
    }
  }
  return result;
}
