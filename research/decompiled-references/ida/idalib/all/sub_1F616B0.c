__int64 __fastcall sub_1F616B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax

  sub_1F61590(a1, a2);
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v4 + 13072))-- - 8);
  v6 = *(unsigned int *)(v3 + 24);
  *(_QWORD *)(a2 + 40) = v5;
  *(_DWORD *)(v3 + 24) = v6 + 1;
  result = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v6);
  *(_BYTE *)(a2 + 48) = result;
  return result;
}
