void __fastcall sub_17A3FF0(__int64 a1, __int64 a2)
{
  _BYTE v2[168]; // [rsp+0h] [rbp-A8h] BYREF

  if ( (*(_BYTE *)(a2 + 4) & 2) != 0 )
  {
    sub_168B9F0((__int64)v2, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 244), 0x1545u, 0);
    sub_15F7200(v2);
  }
  if ( *(_QWORD *)(a2 + 24) )
  {
    sub_168B9F0((__int64)v2, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 248), 0xEBFu, 0);
    sub_15F7200(v2);
  }
  if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
  {
    sub_168B9F0((__int64)v2, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 252), 0x10E2u, 0);
    sub_15F7200(v2);
  }
}
