__int64 __fastcall sub_18B2B0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r12

  v4 = *(_QWORD *)(a1 + 8) + 24LL * a3;
  sub_642D0((__int64 *)a2, (__int64 *)v4);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 16);
  return sub_63B90((__int64 *)a2, a3);
}
