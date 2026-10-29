__int64 __fastcall sub_1849A30(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 result; // rax
  int v10; // edx
  __int64 v11; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v12[168]; // [rsp+10h] [rbp-A8h] BYREF

  result = sub_17FF1A0(a1, a2, a3, a7, a8, a4, a5, a6);
  if ( result )
  {
    v10 = *(_BYTE *)(result + 28) & 0x7F;
    if ( (unsigned int)(v10 - 34) <= 5 )
    {
      sub_168B9F0((__int64)v12, a1 + 1, *(_DWORD *)(result + 24), 0xFE2u, 0);
      v11 = *(_QWORD *)(a3 + 88);
      sub_1587DB0((__int64)v12, &v11);
      sub_15F7200(v12);
      return 0;
    }
    else if ( (unsigned int)(v10 - 40) <= 6 )
    {
      *(_BYTE *)(result + 98) |= 0x40u;
    }
  }
  return result;
}
