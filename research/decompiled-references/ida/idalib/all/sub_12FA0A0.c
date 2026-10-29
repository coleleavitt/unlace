bool __fastcall sub_12FA0A0(__int64 a1, __int64 a2)
{
  size_t v2; // rdx
  bool result; // al

  v2 = *(unsigned int *)(a2 + 8);
  result = 0;
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v2 )
  {
    result = 1;
    if ( *(_DWORD *)(a2 + 8) )
      return memcmp(*(const void **)a2, *(const void **)a1, v2) == 0;
  }
  return result;
}
