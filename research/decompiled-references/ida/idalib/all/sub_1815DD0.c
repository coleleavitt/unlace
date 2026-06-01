__int64 __fastcall sub_1815DD0(__int64 *a1, __int64 a2)
{
  _BYTE v3[168]; // [rsp+0h] [rbp-A8h] BYREF

  if ( (unsigned __int8)sub_15D85B0(a2, *(_QWORD *)(a1[31] + 17448)) )
    return 0;
  if ( (*(_BYTE *)(a2 + 35) & 2) != 0 )
  {
    sub_168B9F0((__int64)v3, a1 + 1, *(_DWORD *)(a2 + 24), 0x1Eu, 0);
    sub_15F7200(v3);
  }
  else
  {
    sub_1815810(a1, a2);
  }
  *(_BYTE *)(a2 + 58) |= 1u;
  return 1;
}
