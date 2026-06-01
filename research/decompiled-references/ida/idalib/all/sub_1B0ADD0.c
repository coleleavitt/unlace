unsigned __int64 __fastcall sub_1B0ADD0(
        __int64 *a1,
        char *a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        double a7)
{
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _BYTE v15[200]; // [rsp+8h] [rbp-C8h] BYREF

  if ( !a4 )
    return 1;
  if ( !(unsigned __int8)sub_1B0A9B0(a1, a2, a3, 1u, 0x11C8u, a7)
    || !(unsigned __int8)sub_1B0ABC0(a1, a2, a3, 1u, 0x11C8u, a7) )
  {
    return 1;
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 60) & 0x20) != 0 )
  {
    v12 = sub_1AE6050(a1[1]);
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 976) == 70 )
      {
        sub_168B9F0((__int64)v15, a1, a5, 0x1B37u, 0);
        sub_15F7200(v15);
      }
    }
  }
  sub_1AEB8B0(*a1, 0x5Eu, a4);
  v13 = sub_1AE6050(a1[1]);
  if ( v13 )
    *(_DWORD *)(v13 + 1120) = a5;
  v14 = (_QWORD *)sub_168B6C0((__int64)a1);
  return sub_F00B80(v14, a5, a6, a2, a3, (__int64)a4);
}
