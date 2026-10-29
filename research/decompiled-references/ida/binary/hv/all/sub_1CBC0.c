int __fastcall sub_1CBC0(__int64 a1, __int64 a2)
{
  const char *v2; // rdx
  const char *v3; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a2 + 8) )
    v2 = *(const char **)a2;
  v3 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  return strcmp(v3, v2);
}

