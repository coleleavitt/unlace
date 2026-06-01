void __fastcall sub_15687A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v3[13]; // [rsp+0h] [rbp-68h] BYREF

  sub_FC70B0(
    (__int64)v3,
    *(_QWORD *)(a1 + 104),
    *(_DWORD *)a2,
    (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 2) == 0 ? 1947 : 2067);
  v2 = sub_10CBF50(*(_WORD *)(a2 + 16));
  sub_AE9DF0(v3, v2, 1u);
  sub_AEA040((__int64)v3);
}
