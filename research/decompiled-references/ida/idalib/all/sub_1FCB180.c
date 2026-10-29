__int64 __fastcall sub_1FCB180(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 result; // rax

  sub_1FC2690(a1, (__int64)a2);
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), a2[4], *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), a2[3], *(_QWORD *)(a1 + 24));
  v6 = a2[2];
  if ( (v6 & 4) != 0 )
  {
    result = sub_1F9A760((__int64 *)(a1 + 8), (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL), v2, v3, v4, v5);
    *(_DWORD *)(a1 + 224) = 298;
  }
  else
  {
    result = sub_183F100(a1 + 32, v6 & 0xFFFFFFFFFFFFFFF8LL);
    *(_DWORD *)(a1 + 224) = 297;
  }
  return result;
}
