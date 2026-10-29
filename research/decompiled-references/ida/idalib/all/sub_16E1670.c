void __fastcall sub_16E1670(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // r12d
  __int64 v7; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+30h] [rbp-48h]
  unsigned __int64 v9; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]

  v4 = sub_16B5B90(a1, a2, a3);
  v8 = v5;
  v7 = v4;
  v6 = sub_16B5B40(a1, a2);
  sub_168B9B0((__int64)&v9, *(_QWORD *)(a1 + 8) + 8LL, 7280);
  sub_16DE8D0(
    *(_QWORD *)(a1 + 8),
    *(unsigned __int8 *)(a1 + 98),
    *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * *(unsigned int *)(a1 + 80)),
    (__int64)&v9,
    v6,
    a4,
    v7,
    v7,
    v8,
    nullptr,
    0);
  if ( v9 )
  {
    if ( v10 )
      sub_1580C40(v10, v9);
  }
}
