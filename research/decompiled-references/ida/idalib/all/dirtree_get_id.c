const char *__fastcall dirtree_get_id(__int64 a1)
{
  __int64 v1; // rdx
  const char *result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  result = haystack;
  if ( *(_QWORD *)(v1 + 24) )
    return *(const char **)(v1 + 16);
  return result;
}
