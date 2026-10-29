_BYTE *__fastcall cliopts_t_find_short(__int64 a1, char a2)
{
  __int64 v2; // rcx
  _BYTE *result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 8);
  if ( !v2 )
    return nullptr;
  result = *(_BYTE **)a1;
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 40;
    if ( v4 == v2 )
      return nullptr;
  }
  return result;
}

