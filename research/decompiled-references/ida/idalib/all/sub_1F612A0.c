__int64 __fastcall sub_1F612A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 result; // rax

  sub_1F60E70(a1, a2, a3, a4, a5, a6);
  v6 = *a1;
  v7 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  result = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
