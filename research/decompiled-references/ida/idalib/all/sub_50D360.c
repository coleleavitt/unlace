unsigned __int64 __fastcall sub_50D360(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 1760);
  result = sub_50D240((__int64 *)(v3 + 24), *(_DWORD *)(a2 + 4), *(_QWORD *)(a2 + 8), a3 == 0);
  *(_OWORD *)(v3 + 8) = -1;
  return result;
}
