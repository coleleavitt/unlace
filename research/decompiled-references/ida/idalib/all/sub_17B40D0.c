__int64 __fastcall sub_17B40D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v14[168]; // [rsp+10h] [rbp-A8h] BYREF

  v13 = a7;
  if ( (*(_BYTE *)(a2 + 8) & 0x7Fu) - 59 > 2 )
    return 0;
  v8 = a2 - 64;
  if ( a2 == 64 )
    return 0;
  if ( (*(_BYTE *)(a2 + 11) & 1) != 0 )
  {
    do
    {
      v9 = *(_QWORD *)(sub_B8C1B0(v8 + 64) + 16);
      v10 = (v9 & 4) != 0 ? *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL) : v9 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v10 + 8) & 0x7Fu) - 59 > 2 )
        return 0;
      v8 = v10 - 64;
      if ( v10 == 64 )
        return 0;
    }
    while ( (*(_BYTE *)(v10 + 11) & 1) != 0 );
  }
  v11 = *(_QWORD *)(v8 + 40);
  if ( (v11 & 7) != 0 || (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 || v13 != v11 )
    return 0;
  sub_168B9F0((__int64)v14, (__int64 *)(a1 + 8), a8, 0x1038u, 0);
  sub_17B3DD0((__int64)v14, &v13);
  sub_15F7200(v14);
  return 1;
}
