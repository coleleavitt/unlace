int __fastcall sub_403350(__int64 a1, _QWORD *a2)
{
  const char *v2; // rax
  const char **v3; // rdx
  __int64 v5; // rcx
  const char **v6; // rsi
  __int64 v7; // r8

  if ( a2[9] > 1u )
  {
    if ( *(_QWORD *)(a1 + 72) > 1u )
    {
      v2 = (const char *)a2[8];
      v3 = (const char **)(a1 + 64);
      return strcmp(*v3, v2);
    }
    v5 = *(_QWORD *)(a1 + 24);
    v6 = (const char **)(a2 + 8);
    v3 = (const char **)(a1 + 16);
    goto LABEL_6;
  }
  v7 = a2[3];
  if ( *(_QWORD *)(a1 + 72) > 1u )
  {
    v3 = (const char **)(a1 + 64);
    v2 = haystack;
    if ( v7 )
      v2 = (const char *)a2[2];
    return strcmp(*v3, v2);
  }
  v5 = *(_QWORD *)(a1 + 24);
  v3 = (const char **)(a1 + 16);
  v2 = haystack;
  if ( v7 )
  {
    v6 = (const char **)(a2 + 2);
LABEL_6:
    v2 = *v6;
  }
  if ( v5 )
    return strcmp(*v3, v2);
  return strcmp(haystack, v2);
}
