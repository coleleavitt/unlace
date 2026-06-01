__int64 *__fastcall sub_659560(__int64 a1, __int64 **a2)
{
  __int64 *result; // rax
  __int64 *i; // rcx
  __int64 v4; // rdx

  sub_658D20(a1 + 192, (char **)(a1 + 240), **a2);
  result = *(__int64 **)(a1 + 240);
  for ( i = &result[*(unsigned int *)(a1 + 248)]; i != result; *(_BYTE *)(v4 + 6) &= ~1u )
    v4 = *result++;
  *(_DWORD *)(a1 + 248) = 0;
  return result;
}

