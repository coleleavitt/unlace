bool __fastcall sub_1189470(__int64 a1, const char *a2)
{
  size_t v2; // rdx
  bool result; // al

  if ( !a2 )
    return *(_QWORD *)(a1 + 8) == 0;
  v2 = strlen(a2);
  result = 0;
  if ( *(_QWORD *)(a1 + 8) == v2 )
    return !v2 || memcmp(a2, *(const void **)a1, v2) == 0;
  return result;
}
