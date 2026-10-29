bool __fastcall sub_1189810(const char *s2)
{
  __int64 v1; // rax
  size_t v2; // rdx
  __int64 v3; // rbp
  __int64 v4; // r12
  bool result; // al

  v1 = sub_2299530(65);
  v2 = 0;
  v3 = v1;
  v4 = *(_QWORD *)(v1 + 88);
  if ( s2 )
    v2 = strlen(s2);
  result = 0;
  if ( v2 == v4 )
  {
    result = 1;
    if ( v2 )
      return memcmp(*(const void **)(v3 + 80), s2, v2) == 0;
  }
  return result;
}
