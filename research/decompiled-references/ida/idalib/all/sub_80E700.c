void *__fastcall sub_80E700(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  size_t v4; // rdx
  const char *v5; // rsi
  const char *v6; // r12
  size_t v7; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 8) )
    v2 = *(const char **)a1;
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = &byte_22F0C30;
  }
  v5 = v2;
  v6 = haystack;
  sub_80AD70(a2, v5, v4);
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(const char **)(a1 + 24);
  if ( !v6 )
    return sub_80AD70(a2, &byte_22F0C30, 1u);
  v7 = strlen(v6);
  return sub_80AD70(a2, v6, v7 + 1);
}
