_QWORD *__fastcall sub_BA9AF0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax
  char v3; // dl
  __int64 v4; // rax
  _QWORD *result; // rax

  v1 = sub_B8C330(a1);
  v2 = sub_BA9960((__int64 *)(v1 + 2352), 88, 3u);
  v3 = *(_BYTE *)(v2 + 72);
  *(_OWORD *)v2 = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_OWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 56) = 0;
  *(_BYTE *)(v2 + 72) = v3 & 0xC0 | 2;
  *(_QWORD *)(v2 + 76) = 0;
  v4 = *(_QWORD *)(a1 + 120) & 7LL | v2;
  *(_QWORD *)(a1 + 120) = v4;
  result = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  *result = a1;
  return result;
}
