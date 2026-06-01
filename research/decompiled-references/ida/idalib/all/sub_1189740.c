bool __fastcall sub_1189740(const char **a1, __int64 a2)
{
  size_t v2; // rdx
  const char *v3; // rbx
  bool result; // al

  v2 = 0;
  v3 = *a1;
  if ( *a1 )
    v2 = strlen(*a1);
  result = 0;
  if ( *(_QWORD *)(a2 + 8) == v2 )
  {
    result = 1;
    if ( v2 )
      return memcmp(*(const void **)a2, v3, v2) == 0;
  }
  return result;
}
