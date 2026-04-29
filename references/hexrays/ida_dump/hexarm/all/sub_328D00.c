int __fastcall sub_328D00(char *dest, char *s2)
{
  size_t v2; // rbx
  int result; // eax
  size_t v4; // rax

  v2 = strlen(s2);
  result = strncmp(dest, s2, v2);
  if ( !result )
  {
    v4 = strlen(dest);
    return (unsigned int)memcpy(dest, &dest[v2], v4 - v2 + 1);
  }
  return result;
}
