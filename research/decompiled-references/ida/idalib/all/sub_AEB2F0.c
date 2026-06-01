bool __fastcall sub_AEB2F0(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rsi
  _DWORD *v3; // rdi
  bool result; // al
  size_t v5; // rdx

  v2 = *(unsigned int **)(a2 + 16);
  v3 = *(_DWORD **)(a1 + 16);
  result = 0;
  v5 = *v2;
  if ( v5 == *v3 )
  {
    result = 1;
    if ( *v2 )
      return memcmp(v3 + 4, v2 + 4, v5) == 0;
  }
  return result;
}
