__int64 __fastcall sub_18940C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbp
  _BYTE v5[168]; // [rsp+0h] [rbp-A8h] BYREF

  v3 = (__int64 *)(a3 + 8);
  sub_168B9F0((__int64)v5, (__int64 *)(a3 + 8), *(_DWORD *)(a1 + 24), 0x1C45u, 0);
  sub_15F7200(v5);
  sub_168B9F0((__int64)v5, v3, *(_DWORD *)(a2 + 24), 0x183Au, 0);
  sub_15F7200(v5);
  return 0;
}
