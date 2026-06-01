bool __fastcall sub_9B9CE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool result; // al
  size_t v4; // rdx

  v2 = *(unsigned int *)(a1 + 8);
  result = 0;
  if ( v2 == *(_DWORD *)(a2 + 8) )
  {
    v4 = 8 * v2;
    result = 1;
    if ( v4 )
      return memcmp(*(const void **)a1, *(const void **)a2, v4) == 0;
  }
  return result;
}
