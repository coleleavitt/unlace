void __fastcall sub_18CF1D0(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4, double a5)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+10h] [rbp-B0h] BYREF
  _BYTE v11[168]; // [rsp+18h] [rbp-A8h] BYREF

  if ( a3 == *(_QWORD *)(a4 + 8) && (*(_WORD *)a4 & 0x1FF) == 0x4F && ((*(_WORD *)(a4 + 2) >> 3) & 0x7F) == 0xB )
  {
    sub_168B9F0((__int64)v11, (__int64 *)(a1 + 8), a2, 0x1CC9u, 0);
    v10 = sub_EEC8C0(a4, a1 + 8, a5);
    v6 = sub_1587DB0((__int64)v11, &v10);
    v8 = *(_QWORD *)(a4 + 8);
    v7 = sub_162B6D0(v6, &v8);
    v9 = *(_QWORD *)(*(_QWORD *)(a4 + 16) + 8LL);
    sub_162B6D0(v7, &v9);
    sub_15F7200(v11);
  }
}
