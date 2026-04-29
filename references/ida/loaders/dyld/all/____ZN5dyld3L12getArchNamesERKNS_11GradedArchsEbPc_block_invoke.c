char *__fastcall ___ZN5dyld3L12getArchNamesERKNS_11GradedArchsEbPc_block_invoke(__int64 a1, char *__s2)
{
  char *v3; // x20
  __int64 _28; // [xsp+28h] [xbp+8h]

  v3 = *(char **)(a1 + 32);
  if ( *v3 )
  {
    strcpy(&v3[_platform_strlen(*(const char **)(a1 + 32))], "' or '");
    v3 = *(char **)(a1 + 32);
  }
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return strcat(v3, __s2);
}
