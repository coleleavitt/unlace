__int64 __fastcall sub_49EB90(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  size_t v3; // rax
  const char *v4; // rbp
  size_t v5; // rdx

  v2 = *(_QWORD *)(a2 + 1992);
  if ( v2 )
  {
    v3 = v2 - 1;
    v4 = *(const char **)(a2 + 1984);
    v5 = v3 >> 63;
  }
  else
  {
    LOBYTE(v5) = 0;
    v3 = 0;
    v4 = &s1;
  }
  if ( !v4 || (_BYTE)v5 )
  {
    v3 = 0;
    if ( v4 )
      v3 = strlen(v4);
  }
  QT::QString::fromUtf8(a1, v3, v4);
  return a1;
}
