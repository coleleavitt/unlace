unsigned __int64 __fastcall sub_B96A60(
        _QWORD *a1,
        char a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx

  v10 = sub_B902D0(144, a1, a3, 0);
  sub_B80110((_QWORD *)v10, 0x3Bu, a2, (__int64)a1, a3, a4, a5, a6, a7);
  *(_QWORD *)v10 = &off_2C02C58;
  v14 = 0;
  if ( a7 )
    v14 = *(_QWORD *)(a7 + 128);
  *(_QWORD *)(v10 + 128) = v14;
  *(_QWORD *)(v10 + 136) = 0;
  v15 = (8 * *(_BYTE *)(a1[290] + 21LL)) & 0x10;
  *(_BYTE *)(v10 + 74) = v15 | *(_BYTE *)(v10 + 74) & 0xEF;
  if ( !a8 && !*(_QWORD *)(v10 + 48) )
  {
    if ( a7 )
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(a7 + 48);
    else
      sub_A7AA70((__int64)a1, v10, v15, v11, v12, v13);
  }
  return v10;
}
