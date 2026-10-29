__int64 __fastcall sub_147F860(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_147F500(
    (__int64 *)(a1 + 8),
    *(char **)(a1 + 8),
    *(char **)(a2 + 8),
    (char *)(*(_QWORD *)(a2 + 8) + 8LL * *(unsigned int *)(a2 + 16)));
  *(_DWORD *)(a2 + 16) = 0;
  result = sub_15D8C50(a1 + 40, a2 + 40);
  *(_DWORD *)(a2 + 56) = 0;
  return result;
}
