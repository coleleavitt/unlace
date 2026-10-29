char __fastcall sub_955FC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // rbp
  size_t v4; // rax
  const char *v5; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(const char **)(v2 + 240);
  if ( !v3 )
    return 1;
  v4 = strlen(*(const char **)(v2 + 240));
  v5 = *(const char **)(a2 + 56);
  if ( !v5 || (*(_QWORD *)(a2 + 56) & 7LL) == 1 )
    return v4 == 0;
  else
    return strncmp(v5, v3, v4) == 0;
}

