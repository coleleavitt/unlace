char *__fastcall lsl::Allocator::strdup(lsl::Allocator *this, const char *__s)
{
  size_t v4; // x0
  char *v5; // x0
  __int64 _18; // [xsp+18h] [xbp+8h]

  v4 = _platform_strlen(__s);
  v5 = (char *)lsl::Allocator::aligned_alloc(this, 0x10u, v4 + 1);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return strcpy(v5, __s);
}
