__int64 *__fastcall sub_826840(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rax
  __int64 *i; // rcx
  __int64 v4; // rdx
  __int64 *result; // rax
  __int64 v6; // rdx
  __int64 *j; // rcx
  __int64 v8; // rdx

  v1 = *a1;
  v2 = *(__int64 **)(*a1 + 16);
  for ( i = &v2[*(unsigned int *)(*a1 + 24)]; v2 != i; *(_BYTE *)(v4 + 6) &= ~1u )
    v4 = *v2++;
  result = *(__int64 **)(v1 + 160);
  v6 = *(unsigned int *)(v1 + 168);
  *(_DWORD *)(v1 + 24) = 0;
  for ( j = &result[v6]; j != result; *(_BYTE *)(v8 + 6) &= ~2u )
    v8 = *result++;
  *(_DWORD *)(v1 + 168) = 0;
  return result;
}

