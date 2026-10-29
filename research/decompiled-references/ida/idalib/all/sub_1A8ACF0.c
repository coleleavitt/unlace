unsigned __int64 __fastcall sub_1A8ACF0(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r13
  _QWORD *v11; // [rsp+8h] [rbp-F0h]
  int v14; // [rsp+2Ch] [rbp-CCh] BYREF
  _BYTE v15[32]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int8 *v16[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v17; // [rsp+A8h] [rbp-50h]
  char v18; // [rsp+B4h] [rbp-44h]

  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 13) & 0x10) == 0 )
  {
    sub_168B9F0((__int64)v15, a1, a2, 0x1105u, 0);
    if ( v17 )
    {
      sub_AE9DF0(v16, (__int64)"@try", 1u);
      sub_15F7200(v15);
    }
    else
    {
      if ( v18 )
        sub_1A8A4A0((__int64)v15, (__int64)"@try");
      sub_15F7200(v15);
    }
  }
  v8 = *(unsigned int *)(*a1 + 40);
  if ( !(_DWORD)v8 )
    BUG();
  v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v8 - 8);
  if ( *(_DWORD *)(v9 + 28) )
  {
    sub_168B9F0((__int64)v15, a1, a2, 0x1063u, 0);
    v14 = 1;
    sub_1587D10((__int64)v15, &v14);
    sub_15F7200(v15);
    sub_168B9F0((__int64)v15, a1, *(_DWORD *)(v9 + 28), 0x16D1u, 0);
    if ( v17 )
    {
      sub_AE9DF0(v16, (__int64)"'__try'", 1u);
      sub_15F7200(v15);
    }
    else
    {
      if ( v18 )
        sub_1A8A4A0((__int64)v15, (__int64)"'__try'");
      sub_15F7200(v15);
    }
  }
  *(_BYTE *)(v9 + 8) |= 8u;
  *(_DWORD *)(v9 + 20) = a2;
  *(_DWORD *)(v9 + 24) = 1;
  return sub_EF2C20(v11, a2, a3, a4, a5, a6);
}
