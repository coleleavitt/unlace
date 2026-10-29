char __fastcall sub_225AAE0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rsi
  char result; // al
  size_t v5; // rdx

  v2 = *a1;
  v3 = *a2;
  if ( !*a1 )
    return v3 == 0;
  result = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v2 + 16);
    if ( v5 == *(_QWORD *)(v3 + 16) )
    {
      result = 1;
      if ( v5 )
        return memcmp(*(const void **)(v2 + 8), *(const void **)(v3 + 8), v5) == 0;
    }
  }
  return result;
}
