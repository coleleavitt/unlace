void *__fastcall newStr(const char *src)
{
  unsigned __int64 v1; // rbp
  void *v2; // rax

  if ( !src )
    return nullptr;
  v1 = strlen(src) + 1;
  v2 = (void *)operator new[](v1);
  return memcpy(v2, src, v1);
}

