__int64 __fastcall sub_15D8C80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // rdx
  __int64 result; // rax

  sub_147F500(
    (__int64 *)(a1 + 8),
    (char *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16)),
    *(char **)(a2 + 8),
    (char *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 16)));
  v2 = *(unsigned int *)(a2 + 56);
  v3 = *(char **)(a2 + 48);
  *(_DWORD *)(a2 + 16) = 0;
  sub_147F500((__int64 *)(a1 + 48), (char *)(*(_QWORD *)(a1 + 48) + 8LL * *(unsigned int *)(a1 + 56)), v3, &v3[8 * v2]);
  *(_DWORD *)(a2 + 56) = 0;
  if ( !*(_DWORD *)a1 )
    *(_DWORD *)a1 = *(_DWORD *)a2;
  result = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)result )
    *(_DWORD *)(a1 + 4) = result;
  return result;
}
