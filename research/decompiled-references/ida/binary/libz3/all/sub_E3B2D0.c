bool __fastcall sub_E3B2D0(__int64 a1, const char *a2)
{
  size_t v2; // r12
  size_t v3; // rdx
  bool result; // al

  v2 = *(_QWORD *)(a1 + 8);
  v3 = strlen(a2);
  result = 0;
  if ( v2 == v3 )
  {
    result = 1;
    if ( v2 )
      return memcmp(*(const void **)a1, a2, v2) == 0;
  }
  return result;
}

