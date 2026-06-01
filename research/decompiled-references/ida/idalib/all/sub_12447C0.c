const char *__fastcall sub_12447C0(__int64 a1)
{
  int v1; // eax
  const char *result; // rax

  v1 = *(_DWORD *)(a1 + 64);
  if ( (unsigned int)(v1 - 18) <= 7 || v1 == 49 )
    return "ld.lld";
  result = "ld.lld";
  if ( *(_DWORD *)(a1 + 60) != 39 )
    return "hexagon-link";
  return result;
}
