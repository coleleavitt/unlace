__int64 __fastcall sub_8F5170(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = sub_A1A5A0(a2, 72);
  sub_A1C070(a1, v2);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(v2 + 56);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(v2 + 64);
  sub_A1A5E0(a2, 72);
  return a1;
}

