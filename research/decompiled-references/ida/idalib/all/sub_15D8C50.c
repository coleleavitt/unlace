char *__fastcall sub_15D8C50(__int64 a1, __int64 a2)
{
  char *result; // rax

  result = sub_147F500(
             (__int64 *)(a1 + 8),
             (char *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16)),
             *(char **)(a2 + 8),
             (char *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 16)));
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
