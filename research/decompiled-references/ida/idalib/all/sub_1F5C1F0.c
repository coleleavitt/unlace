__int64 __fastcall sub_1F5C1F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // rcx

  sub_1F58FC0(a1, a2);
  v3 = *(_QWORD *)(*a1 + 8);
  v4 = *(unsigned int *)(v3 + 13072);
  result = (unsigned int)(*(_DWORD *)(v3 + 13072) - 2);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8 * v4 - 8);
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 13064) + 8LL * (unsigned int)(v4 - 1) - 8);
  *(_DWORD *)(v3 + 13072) = result;
  *(_QWORD *)(a2 + 24) = v6;
  return result;
}
