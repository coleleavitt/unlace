void __fastcall sub_144FAA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  char v6; // bp
  __int64 v7; // rax
  unsigned __int8 *v8[15]; // [rsp+0h] [rbp-78h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v6 | 0x20;
  sub_14634E0(a2, a4);
  *(_BYTE *)(a2 + 544) = (32 * ((v6 & 0x20) != 0)) | *(_BYTE *)(a2 + 544) & 0xDF;
  if ( *(_WORD *)(a4 + 16) != 2 )
  {
    sub_FC70B0((__int64)v8, *(_QWORD *)(a2 + 48), *(_DWORD *)a4, 1239);
    sub_AE9DF0(v8, (__int64)"pragma", 1u);
    sub_AEA040((__int64)v8);
  }
  v7 = sub_14372F0(a2, 1u);
  if ( v7 )
  {
    sub_141AE30(a2, ((unsigned __int64)v5 << 32) | v5, 458, v7);
  }
  else
  {
    sub_FC70B0((__int64)v8, *(_QWORD *)(a2 + 48), v5, 1163);
    sub_AEA040((__int64)v8);
  }
}
