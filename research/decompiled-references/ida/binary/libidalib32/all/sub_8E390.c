const char *__fastcall sub_8E390(__int64 a1)
{
  const char *v1; // rbx
  const char *v2; // rbp
  char *v3; // rax
  unsigned __int64 v4; // rax

  v1 = nullptr;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = *(const char **)a1;
    v3 = strchr(*(const char **)a1, 5);
    if ( v3 )
    {
      v4 = v3 - v2 - 1;
      if ( v4 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        v1 = &v2[v4];
        if ( v2[v4] != 1 )
          return nullptr;
      }
    }
  }
  return v1;
}

