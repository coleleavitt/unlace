int __fastcall sub_51FCD0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  const char *v4; // rsi
  const char *v5; // rdi

  v2 = *a2;
  v3 = *a1;
  v4 = haystack;
  if ( *(_QWORD *)(v2 + 8) )
    v4 = *(const char **)v2;
  v5 = haystack;
  if ( *(_QWORD *)(v3 + 8) )
    v5 = *(const char **)v3;
  return strcmp(v5, v4);
}
