void __fastcall sub_17B4700(__int64 *a1, double a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v10[4]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v11[168]; // [rsp+30h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
    sub_186C8D0(a1, a4);
  if ( *(_QWORD *)(a4 + 16) )
  {
    sub_168B9F0((__int64)v11, a1 + 1, *(_DWORD *)(a4 + 80), 0x131Bu, 0);
    v10[0] = *(_QWORD *)(a4 + 8);
    sub_1587DB0((__int64)v11, v10);
    sub_15F7200(v11);
  }
  v5 = *(_DWORD *)(a4 + 56);
  if ( v5 <= 9 )
  {
    if ( ((1LL << v5) & 0x35E) != 0 )
    {
      sub_168B9F0((__int64)v11, a1 + 1, *(_DWORD *)(a4 + 80), 0xCE5u, 0);
      sub_17B41B0((__int64)v10, a1, (unsigned int *)(a4 + 56), a2, v6, v7, v8);
      v9 = v10[0];
      sub_15894B0((__int64)v11, &v9);
      sub_15F7200(v11);
    }
    else if ( ((1LL << v5) & 0xA0) != 0 )
    {
      sub_168B9F0((__int64)v11, a1 + 1, *(_DWORD *)(a4 + 80), 0xCE6u, 0);
      sub_15F7200(v11);
    }
  }
}
