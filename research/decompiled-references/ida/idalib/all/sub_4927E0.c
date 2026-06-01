int __fastcall sub_4927E0(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  const char *v3; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a2 + 160) )
    v2 = *(const char **)(a2 + 152);
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 160) )
    v3 = *(const char **)(a1 + 152);
  return strcmp(v3, v2);
}
