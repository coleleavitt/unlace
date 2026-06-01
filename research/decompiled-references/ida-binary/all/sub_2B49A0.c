_DWORD *__fastcall sub_2B49A0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  _DWORD *result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return nullptr;
  result = *(_DWORD **)a1;
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 38;
    if ( v4 == v2 )
      return nullptr;
  }
  return result;
}
