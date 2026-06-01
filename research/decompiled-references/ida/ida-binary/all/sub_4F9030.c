const char *__fastcall sub_4F9030(const char *a1, char a2)
{
  char *v2; // rax
  char *v3; // rdx
  bool v4; // zf
  const char *result; // rax

  v2 = strrchr(a1, 35);
  v3 = v2 + 1;
  v4 = v2 == nullptr;
  result = a1;
  if ( !v4 )
    result = v3;
  if ( a2 )
  {
    while ( *result == 32 )
      ++result;
  }
  return result;
}
