ssize_t __fastcall dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::find(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char *v3; // x0
  size_t v4; // x1
  fsid_t *v5; // x2
  uint64_t v6; // x3

  v3 = (char *)OUTLINED_FUNCTION_0_2("operator[]", "Array.h", a3, "idx < _usedCount");
  return fsgetpath(v3, v4, v5, v6);
}
