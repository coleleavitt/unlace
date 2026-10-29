__int64 __fastcall sub_B7BE40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 56) & 4) == 0 )
  {
    v3 = sub_B8C330(a1);
    v4 = sub_B7BC10((__int64 *)(v3 + 2352), 56, 3u);
    *(_OWORD *)(v4 + 24) = 0;
    *(_OWORD *)v4 = 0;
    *(_DWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 40) = 0;
    *(_DWORD *)(v4 + 48) = 0;
    *(_QWORD *)(a1 + 56) = v4 | 4;
    *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v2;
    v2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  }
  *(_QWORD *)(v2 + 40) = *(_QWORD *)a2;
  result = *(unsigned int *)(a2 + 8);
  *(_DWORD *)(v2 + 48) = result;
  return result;
}
