char *__fastcall ___ZNK5dyld39MachOFile10forDyldEnvEU13block_pointerFvPKcRbE_block_invoke(char *result, _DWORD *a2)
{
  char *v2; // x20
  char *v3; // x21
  __int64 (*v4)(void); // x4
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( *a2 == 39 )
  {
    v2 = result;
    v3 = (char *)a2 + (unsigned int)a2[2];
    result = (char *)_platform_strncmp(v3, "DYLD_", 5u);
    if ( !(_DWORD)result )
    {
      result = _platform_strchr(v3, 61);
      if ( result )
      {
        result = (char *)_platform_strncmp(result - 5, "_PATH", 5u);
        if ( !(_DWORD)result )
        {
          v4 = *(__int64 (**)(void))(*((_QWORD *)v2 + 4) + 16LL);
          if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          return (char *)v4();
        }
      }
    }
  }
  return result;
}
