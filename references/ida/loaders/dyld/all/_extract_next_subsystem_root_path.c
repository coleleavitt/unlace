_BYTE *__fastcall extract_next_subsystem_root_path(void *a1, char *__s)
{
  size_t v4; // x22
  _BYTE *v5; // x0
  _BYTE *v7; // x21

  v4 = _platform_strlen(__s);
  v5 = _platform_memchr(__s, 58, v4);
  if ( v5 )
    v4 = v5 - __s;
  if ( v4 > 0x3FF )
    return nullptr;
  v7 = v5;
  _platform_memmove(a1, __s, v4);
  *((_BYTE *)a1 + v4) = 0;
  if ( v7 )
    return v7 + 1;
  else
    return nullptr;
}
