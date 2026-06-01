unsigned __int64 __fastcall sub_BA9DD0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rax
  unsigned __int64 result; // rax

  v1 = sub_B8C330(a1);
  v2 = sub_BA9960((__int64 *)(v1 + 2352), 40, 3u);
  *(_QWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  v3 = *(_QWORD *)(a1 + 104) & 7LL | v2;
  *(_QWORD *)(a1 + 104) = v3;
  *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF8LL) = a1;
  result = *(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  *(_BYTE *)(result + 32) &= ~1u;
  return result;
}
