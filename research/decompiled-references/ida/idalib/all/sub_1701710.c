const char *__fastcall sub_1701710(__int64 a1, __int64 a2)
{
  const char *result; // rax

  if ( a2 == 5 )
  {
    if ( *(_DWORD *)a1 == 1851878499 && *(_BYTE *)(a1 + 4) == 103 )
      return "_Clang";
    return nullptr;
  }
  result = nullptr;
  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 28263 && *(_BYTE *)(a1 + 2) == 117 )
      return "__gnu__";
    return nullptr;
  }
  return result;
}
