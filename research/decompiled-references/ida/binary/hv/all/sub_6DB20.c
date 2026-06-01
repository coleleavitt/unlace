unsigned __int8 *__fastcall sub_6DB20(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned __int8 *result; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 80);
  if ( !v2 )
    return nullptr;
  result = *(unsigned __int8 **)(a1 + 72);
  v4 = 0;
  while ( *result != a2 )
  {
    ++v4;
    result += 24;
    if ( v4 == v2 )
      return nullptr;
  }
  return result;
}

