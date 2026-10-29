__int64 __fastcall sub_1118CB0(const char *s2, _QWORD *a2)
{
  size_t v2; // rax
  unsigned int v3; // ecx

  v2 = strlen(s2);
  v3 = 0;
  if ( *(_QWORD *)(*a2 - 8LL) == v2 )
  {
    v3 = 1;
    if ( v2 )
      LOBYTE(v3) = memcmp(*(const void **)(*a2 - 16LL), s2, v2) == 0;
  }
  return v3;
}

