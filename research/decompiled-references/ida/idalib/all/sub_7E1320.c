void *__fastcall sub_7E1320(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v3; // rax

  v2 = haystack;
  sub_3A0970(a2, *(_DWORD *)(a1 + 12));
  if ( *(_QWORD *)(a1 + 24) )
    v2 = *(const char **)(a1 + 16);
  if ( !v2 )
    return sub_7DE6E0(a2, &byte_22F0C30, 1u);
  v3 = strlen(v2);
  return sub_7DE6E0(a2, v2, v3 + 1);
}
