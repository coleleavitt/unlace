_DWORD *__fastcall sub_656160(__int64 a1, int a2)
{
  __int64 v2; // rdx
  _DWORD *result; // rax
  _DWORD *v4; // rdx

  if ( !a1 )
    return nullptr;
  if ( *(char *)(a1 + 9) < 0 )
    return nullptr;
  read_regargs();
  v2 = *(int *)(a1 + 88);
  result = *(_DWORD **)(a1 + 96);
  if ( (int)v2 <= 0 )
    return nullptr;
  v4 = &result[6 * v2];
  while ( *result != a2 )
  {
    result += 6;
    if ( result == v4 )
      return nullptr;
  }
  return result;
}

